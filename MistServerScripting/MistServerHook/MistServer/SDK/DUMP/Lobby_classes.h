// Class Lobby.LobbyBeaconClient
// Size: 0x4d8 (Inherited: 0x450)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x450(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x458(0x08)
	char pad_460[0x1]; // 0x460(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x461(0x01)
	char pad_462[0x76]; // 0x462(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x62e0c0
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x62e070
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x62dec0
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x62dd30
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x62dce0
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x62dc20
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x62dac0
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x62da30
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x62d940
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x62d7d0
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x62d6a0
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x62d680
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x62d660
};

// Class Lobby.LobbyBeaconHost
// Size: 0x420 (Inherited: 0x3e8)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x3f0(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x418(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x480 (Inherited: 0x3c0)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x3c0(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x3d8(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x400(0x28)
	bool bInLobby; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x430(0x08)
	char pad_438[0x48]; // 0x438(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x62dbe0
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x62dbc0
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x62db80
};

// Class Lobby.LobbyBeaconState
// Size: 0x568 (Inherited: 0x3c0)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x3c8(0x08)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	bool bLobbyStarted; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float WaitForPlayersTimeRemaining; // 0x3dc(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x3e0(0x120)
	char pad_500[0x68]; // 0x500(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x62dc00
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x62dba0
};

