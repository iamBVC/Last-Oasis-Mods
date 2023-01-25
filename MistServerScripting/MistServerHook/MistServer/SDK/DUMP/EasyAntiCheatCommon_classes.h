// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UEasyAntiCheatNetComponent : UActorComponent {
	char pad_F0[0x8]; // 0xf0(0x08)

	void ServerMessage(struct TArray<char> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x71b580
	void ClientMessage(struct TArray<char> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x71b4e0
};

