// Class ReplicationGraph.ReplicationGraph
// Size: 0x520 (Inherited: 0x28)
struct UReplicationGraph : UReplicationDriver {
	struct UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28(0x08)
	struct UNetDriver* NetDriver; // 0x30(0x08)
	struct TMap<struct UNetConnection*, struct UNetReplicationGraphConnection*> Connections; // 0x38(0x50)
	struct TMap<struct UNetConnection*, struct UNetReplicationGraphConnection*> PendingConnections; // 0x88(0x50)
	char pad_D8[0x40]; // 0xd8(0x40)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; // 0x118(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; // 0x128(0x10)
	char pad_138[0x3e8]; // 0x138(0x3e8)
};

// Class ReplicationGraph.BasicReplicationGraph
// Size: 0x550 (Inherited: 0x520)
struct UBasicReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x518(0x08)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x520(0x08)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x528(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection; // 0x538(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode
// Size: 0x50 (Inherited: 0x28)
struct UReplicationGraphNode : UObject {
	struct TArray<struct UReplicationGraphNode*> AllChildNodes; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0xf8 (Inherited: 0x50)
struct UReplicationGraphNode_ActorList : UReplicationGraphNode {
	char pad_50[0xa8]; // 0x50(0xa8)
};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x138 (Inherited: 0x50)
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode {
	char pad_50[0xe8]; // 0x50(0xe8)
};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x128 (Inherited: 0xf8)
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList {
	char pad_F8[0x30]; // 0xf8(0x30)
};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x190 (Inherited: 0xf8)
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList {
	char pad_F8[0x98]; // 0xf8(0x98)
};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0x148 (Inherited: 0xf8)
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList {
	char pad_F8[0x50]; // 0xf8(0x50)
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x150 (Inherited: 0xf8)
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	char pad_F8[0x48]; // 0xf8(0x48)
	struct UReplicationGraphNode* DynamicNode; // 0x140(0x08)
	struct UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148(0x08)
};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x230 (Inherited: 0x50)
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode {
	char pad_50[0x1e0]; // 0x50(0x1e0)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x68 (Inherited: 0x50)
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	struct UReplicationGraphNode* ChildNode; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0x130 (Inherited: 0xf8)
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	char pad_F8[0x18]; // 0xf8(0x18)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110(0x10)
	struct AActor* LastViewer; // 0x120(0x08)
	struct AActor* LastViewTarget; // 0x128(0x08)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x78 (Inherited: 0x50)
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
};

// Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x250 (Inherited: 0x28)
struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	struct UNetConnection* NetConnection; // 0x28(0x08)
	char pad_30[0x150]; // 0x30(0x150)
	struct AReplicationGraphDebugActor* DebugActor; // 0x180(0x08)
	char pad_188[0x18]; // 0x188(0x18)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x1a0(0x10)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; // 0x1b8(0x10)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1c8(0x08)
	char pad_1D0[0x80]; // 0x1d0(0x80)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x3d0 (Inherited: 0x3c0)
struct AReplicationGraphDebugActor : AActor {
	struct UReplicationGraph* ReplicationGraph; // 0x3c0(0x08)
	struct UNetReplicationGraphConnection* ConnectionManager; // 0x3c8(0x08)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b850
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b830
	void ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b760
	void ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b690
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b600
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b5e0
	void ServerPrintAllActorInfo(struct FString Str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b540
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x74b520
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x74b3e0
};

