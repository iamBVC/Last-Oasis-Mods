// Class Rejoin.RejoinCheck
// Size: 0x120 (Inherited: 0x28)
struct URejoinCheck : UObject {
	enum class ERejoinStatus LastKnownStatus; // 0x28(0x01)
	bool bRejoinAfterCheck; // 0x29(0x01)
	bool bAttemptingRejoin; // 0x2a(0x01)
	char pad_2B[0xf5]; // 0x2b(0xf5)
};

