#include "Core/Core.h"
#include "Core/Util.h"

using namespace std;

namespace DamageModifier
{


	typedef struct {
		const wchar_t* ammoName;
		bool inverseExp;
		float curveExp;
		float baseDamage;
		float minMultiplier;
		float maxMultiplier;
		float maxDistance;
	}ammoDamage_t;


	//	ammo name						invexp	exp		base	min		max		distance
	const ammoDamage_t ammoDamageList[] = {
		{L"Stone_C",					false,	2.0f,	1.0f,	0.1f,	1.0f,	5000.0f},
		{L"StoneHarpoon_C",				false,	0.8f,	1.0f,	0.5f,	1.0f,	100000.0f},
		{L"BoneHarpoon_C",				false,	0.8f,	1.0f,	0.5f,	1.0f,	100000.0f},
		{L"CeramicHarpoon_C",			false,	0.8f,	1.0f,	0.5f,	1.0f,	100000.0f},
		{L"MetalHarpoon2_C",			false,	0.8f,	1.0f,	0.5f,	1.0f,	100000.0f},
		{L"NibirianBolt_C",				false,	0.8f,	1.0f,	0.5f,	1.0f,	100000.0f},
		{L"RepeaterBolt_C",				false,	2.0f,	1.0f,	0.25f,	1.0f,	150000.0f},
		{L"Boulder_C",					true,	2.0f,	1.0f,	1.0f,	3.0f,	20000.0f},
		{L"ChargedBoulder_C",			true,	2.0f,	1.0f,	1.0f,	3.0f,	20000.0f},
		{nullptr,						false,	1.0f,	1.0f,	1.0f,	1.0f,	100000.0f},
	};

	const ammoDamage_t* getAmmoDamageData(const wchar_t* ammoName) {
		for (auto i = 0; ammoDamageList[i].ammoName != nullptr; i++) {
			if (wcsncmp(ammoDamageList[i].ammoName, ammoName, wcslen(ammoDamageList[i].ammoName)) == 0) {
				return &ammoDamageList[i];
			}
		}
		return nullptr;
	}

	float getDamageMultiplier(const ammoDamage_t* ammo, float distance)
	{
		float multiplier = 0.0f;

		if (ammo->inverseExp)
			multiplier = ammo->baseDamage + (powf(distance, ammo->curveExp) / powf(ammo->maxDistance, ammo->curveExp));
		else
			multiplier = ammo->baseDamage - (powf(distance, ammo->curveExp) / powf(ammo->maxDistance, ammo->curveExp));

		if (multiplier > ammo->maxMultiplier) multiplier = ammo->maxMultiplier;
		if (multiplier < ammo->minMultiplier) multiplier = ammo->minMultiplier;
		return multiplier;
	}




	Hook("?TakeDamage@AActor@@UEAAMMAEBUFDamageEvent@@AEBUFDamageSource@@@Z",
		float, AActor_TakeDamage, AActor* self, float value, FDamageEvent* event, FDamageSource* source)
	{

		do {

			if (value == 0.0f) break;
			if (source == nullptr) break;
			if (source->InstigatorController == nullptr) break;
			if (source->InstigatorController->Character == nullptr) break;
			if (source->CauserActor == nullptr) break;

			auto character = source->InstigatorController->Character;
			if (character == nullptr) break;

			if (character->CharacterMovement == nullptr) break;
			auto playerLocation = character->CharacterMovement->LastUpdateLocation;

			auto ownershipTarget = FMistClanUtils_GetOwnershipComponent(self, true);
			if (ownershipTarget == nullptr) break;
			auto targetLocation = self->ReplicatedMovement.Location;

			auto instigatorState = APawn_GetPlayerStateMist(character);
			if (instigatorState == nullptr) break;

			static wchar_t log[256] = {};
			swprintf_s(log, L"%s (%s) damaged %s with %s owned by %s (%s) at %.0f %.0f %.0f",
				instigatorState->PlayerNamePrivate.c_str(),
				instigatorState->Clan.Name.c_str(),
				self->NamePrivate.c_str(), source->CauserActor->NamePrivate.c_str(),
				ownershipTarget->OwnerCharacter.Name.c_str(), ownershipTarget->OwnerClan.Name.c_str(),
				playerLocation.X, playerLocation.Y, playerLocation.Z);

			Util::logOnFile(self, "damage", log);


			//damage modifier based on distance
			auto ammoUsed = getAmmoDamageData(source->CauserActor->NamePrivate.c_str());
			if (ammoUsed == nullptr) break;
			float distance = AActor_GetDistanceTo(self, character);
			auto multiplier = getDamageMultiplier(ammoUsed, distance);
			value *= multiplier;

			//debug
			swprintf_s(log, L"Distance: %.0f -> %.2f percent", distance, multiplier*100.0f);
			Util::ClientAddRedMsg(APawn_GetControllerMist(character), log);

			break;
		} while (0);

		return OrigAActor_TakeDamage(self, value, event, source);
	}




}