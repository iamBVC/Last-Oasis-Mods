#include "Hooker.h"
#include "Windows.h"

extern uint64 BaseAddress;
extern void* NativeSection;

extern "C"
{
	BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID lpvReserved)
	{
		if (fdwReason == DLL_PROCESS_ATTACH)
		{
			BaseAddress = reinterpret_cast<uint64>(GetModuleHandleA(NULL));
			auto ptr = &NativeSection;
			while (*++ptr != nullptr) *reinterpret_cast<uint64*>(ptr) += BaseAddress;

			auto status = MH_Initialize();
			if (status != MH_OK)
			{
				MessageBoxA(NULL, MH_StatusToString(status), "MistServerHook", MB_ICONERROR);
				return FALSE;
			}

			GHooker.Install();
			return TRUE;
		}

		return FALSE;
	}

	HRESULT WINAPI DirectSoundCreate(LPGUID lpGuid, LPVOID* ppDS, LPVOID pUnkOuter)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundEnumerateA(LPVOID lpDSEnumCallback, LPVOID lpContext)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundEnumerateW(LPVOID lpDSEnumCallback, LPVOID lpContext)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DllCanUnloadNow()
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundCaptureCreate(LPGUID lpGUID, LPVOID* lplpDSC, LPVOID pUnkOuter)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundCaptureEnumerateA(LPVOID lpDSEnumCallback, LPVOID lpContext)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundCaptureEnumerateW(LPVOID lpDSEnumCallback, LPVOID lpContext)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI GetDeviceID(LPCGUID lpGuidSrc, LPGUID lpGuidDest)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundFullDuplexCreate(LPCGUID pcGuidCaptureDevice, LPCGUID pcGuidRenderDevice, LPVOID pcDSCBufferDesc, LPVOID pcDSBufferDesc, HWND hWnd, DWORD dwLevel, LPVOID* ppDSFD, LPVOID* ppDSCBuffer8, LPVOID* ppDSBuffer8, LPVOID pUnkOuter)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundCreate8(LPCGUID lpGUID, LPVOID* ppDS8, LPVOID pUnkOuter)
	{
		return E_NOTIMPL;
	}

	HRESULT WINAPI DirectSoundCaptureCreate8(LPCGUID lpGUID, LPVOID* ppDSC8, LPVOID pUnkOuter)
	{
		return E_NOTIMPL;
	}
}