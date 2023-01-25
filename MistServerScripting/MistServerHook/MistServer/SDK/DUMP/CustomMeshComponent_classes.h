// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x7f0 (Inherited: 0x7e0)
struct UCustomMeshComponent : UMeshComponent {
	char pad_7E0[0x10]; // 0x7e0(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaf3ef0
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0xaf3ed0
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaf3e20
};

