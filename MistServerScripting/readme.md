### Getting started
1. Edit path to `MistServer-Win64-Shipping.exe` in `NativeGen\Properties\launchSettings.json`
2. Edit server launch options and path to bin folder in `MistServerHook\MistServerHook.vcxproj.user`
3. Run `NativeGen` once to generate native symbols definition file
4. Running `MistServerHook` using the Local Windows Debugger allows breakpoints directly in Visual Studio