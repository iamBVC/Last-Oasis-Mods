// Class LevelSequence.LevelSequenceDirector
// Size: 0x30 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x28(0x08)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct AActor* TransformOriginActor; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size: 0x498 (Inherited: 0x348)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3a0(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x440(0x50)
	struct UObject* DirectorClass; // 0x490(0x08)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x23fcbf0
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x23fc550
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc550
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x23fc550
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x23fcfb0
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x450 (Inherited: 0x3c0)
struct ALevelSequenceActor : AActor {
	char pad_3C0[0x10]; // 0x3c0(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3d0(0x14)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x3e8(0x08)
	struct FSoftObjectPath LevelSequence; // 0x3f0(0x18)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x408(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x418(0x02)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x420(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x428(0x08)
	char bAutoPlay : 1; // 0x430(0x01)
	char bOverrideInstanceData : 1; // 0x430(0x01)
	char bReplicatePlayback : 1; // 0x430(0x01)
	char pad_430_3 : 5; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UObject* DefaultInstanceData; // 0x438(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x440(0x08)
	bool bShowBurnin; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x23fd2f0
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x23fd270
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x23fd1e0
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers // (Final|Native|Public|BlueprintCallable) // @ game+0x23fd0a0
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23fce80
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23fcd30
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x23fcd10
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x23fcc60
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x23fcb30
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x23fca40
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0x163f1c0
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc9d0
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x23fc9b0
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc960
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc910
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc7f0
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc740
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x23fc440
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x23fc300
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2f0 (Inherited: 0x230)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x230(0xb8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2e8(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x23fc990
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x9a0 (Inherited: 0x888)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x888(0x10)
	char pad_898[0x108]; // 0x898(0x108)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc8d0
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x23fc5d0
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x3e8 (Inherited: 0x3c0)
struct ALevelSequenceMediaController : AActor {
	char pad_3C0[0x8]; // 0x3c0(0x08)
	struct ALevelSequenceActor* Sequence; // 0x3c8(0x08)
	struct UMediaComponent* MediaComponent; // 0x3d0(0x08)
	float ServerStartTimeSeconds; // 0x3d8(0x04)
	char pad_3DC[0xc]; // 0x3dc(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x23fd310
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x23fca20
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x23fca00
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23fc940
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x227dd30
};

