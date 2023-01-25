// Enum VivoxCore.DeviceType
enum class DeviceType : uint8 {
	NullDevice = 0,
	SpecificDevice = 1,
	DefaultSystemDevice = 2,
	DefaultCommunicationDevice = 3,
	DeviceType_MAX = 4
};

// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8 {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	EAudioFadeModel_MAX = 3
};

// Enum VivoxCore.ChannelType
enum class ChannelType : uint8 {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3
};

// Enum VivoxCore.ConnectionState
enum class ConnectionState : uint8 {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4
};

// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class ParticipantSpeakingUpdateRate : uint8 {
	StateChange = 0,
	Never = 1,
	Update1Hz = 2,
	Update5Hz = 3,
	Update10Hz = 4,
	ParticipantSpeakingUpdateRate_MAX = 5
};

// Enum VivoxCore.TransmissionMode
enum class TransmissionMode : uint8 {
	None = 0,
	Single = 1,
	All = 2,
	TransmissionMode_MAX = 3
};

// Enum VivoxCore.SubscriptionReply
enum class SubscriptionReply : uint8 {
	Allow = 0,
	Block = 1,
	SubscriptionReply_MAX = 2
};

// Enum VivoxCore.SubscriptionMode
enum class SubscriptionMode : uint8 {
	Accept = 0,
	Block = 1,
	Defer = 2,
	SubscriptionMode_MAX = 3
};

// Enum VivoxCore.LoginState
enum class LoginState : uint8 {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4
};

// Enum VivoxCore.TTSMessageState
enum class TTSMessageState : uint8 {
	Playing = 0,
	Enqueued = 1,
	TTSMessageState_MAX = 2
};

// Enum VivoxCore.TTSDestination
enum class TTSDestination : uint8 {
	Default = 0,
	RemoteTransmission = 0,
	LocalPlayback = 1,
	RemoteTransmissionWithLocalPlayback = 2,
	QueuedRemoteTransmission = 3,
	QueuedLocalPlayback = 4,
	QueuedRemoteTransmissionWithLocalPlayback = 5,
	ScreenReader = 6,
	TTSDestination_MAX = 7
};

// Enum VivoxCore.PresenceStatus
enum class PresenceStatus : uint8 {
	Unavailable = 0,
	Available = 1,
	Chat = 2,
	DoNotDisturb = 3,
	Away = 4,
	ExtendedAway = 5,
	PresenceStatus_MAX = 6
};

