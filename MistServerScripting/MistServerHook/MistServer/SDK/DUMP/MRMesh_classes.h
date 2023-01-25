// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x1bad830
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x1bad810
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x1bad7f0
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bad7c0
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bad790
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x1bad690
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x1bad580
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x300 (Inherited: 0x290)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x290(0x10)
	bool ScanWorld; // 0x2a0(0x01)
	bool RequestNormals; // 0x2a1(0x01)
	bool RequestVertexConfidence; // 0x2a2(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x2a3(0x01)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x2a8(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x2b8(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x2c8(0x10)
	float UpdateInterval; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UMRMeshComponent* MRMesh; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x163f1c0
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1bad6b0
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1bad610
};

// Class MRMesh.MRMeshComponent
// Size: 0x830 (Inherited: 0x7c0)
struct UMRMeshComponent : UPrimitiveComponent {
	struct UMaterialInterface* Material; // 0x7c0(0x08)
	bool bCreateMeshProxySections; // 0x7c8(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x7c9(0x01)
	bool bNeverCreateCollisionMesh; // 0x7ca(0x01)
	char pad_7CB[0x5]; // 0x7cb(0x05)
	struct UBodySetup* CachedBodySetup; // 0x7d0(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x7d8(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x7e8(0x08)
	char pad_7F0[0x40]; // 0x7f0(0x40)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bad750
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x1bad730
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x1bad550
};

