#ifndef UIKIT_H_
#define UIKIT_H_

#import "../CoreFoundation/Types.h"
#import "../CoreGraphics/Types.h"
#import "../Foundation/Types.h"

typedef struct __UIImage *UIImage;

typedef struct UIEdgeInsets {
    CGFloat top, left, bottom, right;
} UIEdgeInsets;

typedef struct UIOffset {
    CGFloat horizontal, vertical;
} UIOffset;

typedef struct NSDirectionalEdgeInsets {
	CGFloat top;
	CGFloat leading;
	CGFloat bottom;
	CGFloat trailing;
} NSDirectionalEdgeInsets;

NS_ENUM(NSInteger, UIEventType) {
    UIEventTypeTouches,
    UIEventTypeMotion,
    UIEventTypeRemoteControl,
    UIEventTypePresses,
    UIEventTypePhysicalKeyboard, // from research
    UIEventTypeMove, // from research
    UIEventTypeWheel = 7, // from research
    UIEventTypeGameController = 8, // from research
    UIEventTypeScroll = 10,
    UIEventTypeHover = 11,
    UIEventTypePencil = 13, // from research
    UIEventTypeTransform = 14
};

NS_ENUM(NSInteger, UIEventSubtype) {
    UIEventSubtypeNone = 0,
    UIEventSubtypeMotionShake = 1,
    UIEventSubtypeRemoteControlPlay = 100,
    UIEventSubtypeRemoteControlPause = 101,
    UIEventSubtypeRemoteControlStop = 102,
    UIEventSubtypeRemoteControlTogglePlayPause = 103,
    UIEventSubtypeRemoteControlNextTrack = 104,
    UIEventSubtypeRemoteControlPreviousTrack = 105,
    UIEventSubtypeRemoteControlBeginSeekingBackward = 106,
    UIEventSubtypeRemoteControlEndSeekingBackward = 107,
    UIEventSubtypeRemoteControlBeginSeekingForward = 108,
    UIEventSubtypeRemoteControlEndSeekingForward = 109,
};

NS_ENUM(NSInteger, UIEventButtonMask) {
    UIEventButtonMaskPrimary = 1 << 0,
    UIEventButtonMaskSecondary = 1 << 1
};

NS_ENUM(NSInteger, UIButtonType) {
    UIButtonTypeCustom = 0,
    UIButtonTypeSystem, // iOS 7+
    UIButtonTypeDetailDisclosure,
    UIButtonTypeInfoLight,
    UIButtonTypeInfoDark,
    UIButtonTypeContactAdd,
    UIButtonTypeClose,
    UIButtonTypeRoundedRect = UIButtonTypeSystem
};

NS_ENUM(NSInteger, UITouchPhase) {
    UITouchPhaseBegan,
    UITouchPhaseMoved,
    UITouchPhaseStationary,
    UITouchPhaseEnded,
    UITouchPhaseCancelled,
    UITouchPhaseRegionEntered,
    UITouchPhaseRegionMoved,
    UITouchPhaseRegionExited
};

NS_ENUM(NSInteger, UITouchType) {
    UITouchTypeDirect,
    UITouchTypeIndirect,
    UITouchTypePencil,
    UITouchTypeStylus,
    UITouchTypeIndirectPointer
};

NS_ENUM(NSInteger, UITouchProperties) {
    UITouchPropertyForce = (1UL << 0),
    UITouchPropertyAzimuth = (1UL << 1),
    UITouchPropertyAltitude = (1UL << 2),
    UITouchPropertyLocation = (1UL << 3)
};

NS_ENUM(NSInteger, UIForceTouchCapability) {
    UIForceTouchCapabilityUnknown = 0,
    UIForceTouchCapabilityUnavailable = 1,
    UIForceTouchCapabilityAvailable = 2
};

NS_ENUM(NSUInteger, UIControlEvents) {
    UIControlEventTouchDown = 1 << 0,
    UIControlEventTouchDownRepeat = 1 << 1,
    UIControlEventTouchDragInside = 1 << 2,
    UIControlEventTouchDragOutside = 1 << 3,
    UIControlEventTouchDragEnter = 1 << 4,
    UIControlEventTouchDragExit = 1 << 5,
    UIControlEventTouchUpInside = 1 << 6,
    UIControlEventTouchUpOutside = 1 << 7,
    UIControlEventTouchCancel = 1 << 8,
    UIControlEventValueChanged = 1 << 12,
    UIControlEventPrimaryActionTriggered = 1 << 13,
    UIControlEventEditingDidBegin = 1 << 16,
    UIControlEventEditingChanged = 1 << 17,
    UIControlEventEditingDidEnd = 1 << 18,
    UIControlEventEditingDidEndOnExit = 1 << 19,
    UIControlEventAllTouchEvents = 0x00000FFF,
    UIControlEventAllEditingEvents = 0x000F0000,
    UIControlEventApplicationReserved = 0x0F000000,
    UIControlEventSystemReserved = 0xF0000000,
    UIControlEventAllEvents = 0xFFFFFFFF
};

NS_ENUM(NSInteger, UIControlContentVerticalAlignment) {
    UIControlContentVerticalAlignmentCenter = 0,
    UIControlContentVerticalAlignmentTop = 1,
    UIControlContentVerticalAlignmentBottom = 2,
    UIControlContentVerticalAlignmentFill = 3
};

NS_ENUM(NSInteger, UIControlContentHorizontalAlignment) {
    UIControlContentHorizontalAlignmentCenter = 0,
    UIControlContentHorizontalAlignmentLeft = 1,
    UIControlContentHorizontalAlignmentRight = 2,
    UIControlContentHorizontalAlignmentFill = 3,
    UIControlContentHorizontalAlignmentLeading = 4,
    UIControlContentHorizontalAlignmentTrailing = 5
};

NS_ENUM(NSUInteger, UIControlState) {
    UIControlStateNormal = 0,
    UIControlStateHighlighted = 1 << 0,
    UIControlStateDisabled = 1 << 1,
    UIControlStateSelected = 1 << 2,
    UIControlStateFocused = 1 << 3,
    UIControlStateApplication = 0x00FF0000,
    UIControlStateReserved = 0xFF000000
};

NS_ENUM(NSInteger, UIUserInterfaceSizeClass) {
    UIUserInterfaceSizeClassUnspecified = 0,
    UIUserInterfaceSizeClassCompact = 1,
    UIUserInterfaceSizeClassRegular = 2,
};

NS_ENUM(NSInteger, UIUserInterfaceStyle) {
    UIUserInterfaceStyleUnspecified,
    UIUserInterfaceStyleLight,
    UIUserInterfaceStyleDark,
};

NS_ENUM(NSInteger, UIDisplayGamut) {
    UIDisplayGamutUnspecified = -1,
    UIDisplayGamutSRGB,
    UIDisplayGamutP3
};

NS_ENUM(NSInteger, UIDeviceOrientation) {
    UIDeviceOrientationUnknown,
    UIDeviceOrientationPortrait,
    UIDeviceOrientationPortraitUpsideDown,
    UIDeviceOrientationLandscapeLeft,
    UIDeviceOrientationLandscapeRight,
    UIDeviceOrientationFaceUp,
    UIDeviceOrientationFaceDown
};

NS_ENUM(NSInteger, UIDeviceBatteryState) {
    UIDeviceBatteryStateUnknown,
    UIDeviceBatteryStateUnplugged,
    UIDeviceBatteryStateCharging,
    UIDeviceBatteryStateFull,
};

NS_ENUM(NSInteger, UIUserInterfaceIdiom) {
    UIUserInterfaceIdiomUnspecified = -1,
    UIUserInterfaceIdiomPhone,
    UIUserInterfaceIdiomPad,
    UIUserInterfaceIdiomTV,
    UIUserInterfaceIdiomCarPlay,
};

NS_ENUM(NSInteger, UIUserInterfaceLevel) {
    UIUserInterfaceLevelUnspecified = -1,
    UIUserInterfaceLevelBase,
    UIUserInterfaceLevelElevated
};

UIOffset UIOffsetZero;

UIEdgeInsets UIEdgeInsetsZero;

typedef NSString *UIContentSizeCategory;

extern const float UITableCellDefaultFontSize;
extern const float UITableViewCellDefaultFontSize;
extern const float UIWebViewGrowsAndShrinksToFitHeight;
extern const float UIWebViewScalesToFitScale;
extern const float UIWebViewStandardViewportWidth;

extern NSString *const UIWindowDidMoveToScreenNotification;
extern NSString *const UIWindowDidRotateNotification;
extern NSString *const UIWindowNewScreenUserInfoKey;
extern NSString *const UIWindowWillRotateNotification;
extern NSString *const UIKeyboardIsLocalUserInfoKey;
extern NSString *const UIKeyInputPageUp;
extern NSString *const UIKeyInputPageDown;

extern const NSNotificationName UIApplicationDidReceiveMemoryWarningNotification;
extern const NSNotificationName UIApplicationBackgroundRefreshStatusDidChangeNotification;
extern const NSNotificationName UIApplicationDidChangeStatusBarFrameNotification;
extern const NSNotificationName UIApplicationDidBecomeActiveNotification;

#endif
