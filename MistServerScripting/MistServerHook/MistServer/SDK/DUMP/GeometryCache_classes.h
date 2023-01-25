// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x04)
	int32_t EndFrame; // 0x64(0x04)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x3c8 (Inherited: 0x3c0)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3c0(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0b40
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x840 (Inherited: 0x7e0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x7e0(0x08)
	bool bRunning; // 0x7e8(0x01)
	bool bLooping; // 0x7e9(0x01)
	char pad_7EA[0x2]; // 0x7ea(0x02)
	float StartTimeOffset; // 0x7ec(0x04)
	float PlaybackSpeed; // 0x7f0(0x04)
	int32_t NumTracks; // 0x7f4(0x04)
	float ElapsedTime; // 0x7f8(0x04)
	char pad_7FC[0x30]; // 0x7fc(0x30)
	float Duration; // 0x82c(0x04)
	bool bManualTick; // 0x830(0x01)
	char pad_831[0xf]; // 0x831(0x0f)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0x9d11a0
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x9d1180
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x9d1100
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x9d1080
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0df0
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0d60
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0d40
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0d20
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0d00
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0ce0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x9d0cc0
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0c90
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0c60
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0c30
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0c00
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0bd0
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0ba0
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0b70
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0b10
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9d0ae0
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28(0x04)
	char pad_2C[0x2c]; // 0x2c(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0x9d0890
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd0 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x08)
	char pad_60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_58[0xa8]; // 0x58(0xa8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x9d0e80
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_58[0xa8]; // 0x58(0xa8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x9d0e80
};

