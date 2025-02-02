#ifndef MEDIAREMOTE_H_
#define MEDIAREMOTE_H_

#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"

PS_ENUM(NSInteger, MRMediaRemoteCommand) {
    MRMediaRemoteCommandPlay,
    MRMediaRemoteCommandPause,
    MRMediaRemoteCommandTogglePlayPause,
    MRMediaRemoteCommandStop,
    MRMediaRemoteCommandNextTrack,
    MRMediaRemoteCommandPreviousTrack,
    MRMediaRemoteCommandAdvanceShuffleMode,
    MRMediaRemoteCommandAdvanceRepeatMode,
    MRMediaRemoteCommandBeginFastForward,
    MRMediaRemoteCommandEndFastForward,
    MRMediaRemoteCommandBeginRewind,
    MRMediaRemoteCommandEndRewind,
    MRMediaRemoteCommandRewind15Seconds,
    MRMediaRemoteCommandFastForward15Seconds,
    MRMediaRemoteCommandRewind30Seconds,
    MRMediaRemoteCommandFastForward30Seconds,
    MRMediaRemoteCommandToggleRecord,
    MRMediaRemoteCommandSkipForward,
    MRMediaRemoteCommandSkipBackward,
    MRMediaRemoteCommandChangePlaybackRate,

    MRMediaRemoteCommandRateTrack,
    MRMediaRemoteCommandLikeTrack,
    MRMediaRemoteCommandDislikeTrack,
    MRMediaRemoteCommandBookmarkTrack,

    MRMediaRemoteCommandSeekToPlaybackPosition,
    MRMediaRemoteCommandChangeRepeatMode,
    MRMediaRemoteCommandChangeShuffleMode,
    MRMediaRemoteCommandEnableLanguageOption,
    MRMediaRemoteCommandDisableLanguageOption
};

typedef void (*MRMediaRemoteGetNowPlayingInfoCompletion)(CFDictionaryRef information);
typedef void (*MRMediaRemoteGetNowPlayingApplicationPIDCompletion)(int PID);
typedef void (*MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion)(Boolean isPlaying);

CFStringRef kMRMediaRemoteNowPlayingInfoDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification;
CFStringRef kMRMediaRemotePickableRoutesDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingApplicationDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification;
CFStringRef kMRMediaRemoteRouteStatusDidChangeNotification;

CFStringRef kMRMediaRemoteNowPlayingApplicationPIDUserInfoKey;
CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingUserInfoKey;
CFStringRef kMRMediaRemoteNowPlayingInfoAlbum;
CFStringRef kMRMediaRemoteNowPlayingInfoArtist;
CFStringRef kMRMediaRemoteNowPlayingInfoArtworkData;
CFStringRef kMRMediaRemoteNowPlayingInfoArtworkMIMEType;
CFStringRef kMRMediaRemoteNowPlayingInfoChapterNumber;
CFStringRef kMRMediaRemoteNowPlayingInfoComposer;
CFStringRef kMRMediaRemoteNowPlayingInfoDuration;
CFStringRef kMRMediaRemoteNowPlayingInfoElapsedTime;
CFStringRef kMRMediaRemoteNowPlayingInfoGenre;
CFStringRef kMRMediaRemoteNowPlayingInfoIsAdvertisement;
CFStringRef kMRMediaRemoteNowPlayingInfoIsBanned;
CFStringRef kMRMediaRemoteNowPlayingInfoIsInWishList;
CFStringRef kMRMediaRemoteNowPlayingInfoIsLiked;
CFStringRef kMRMediaRemoteNowPlayingInfoIsMusicApp;
CFStringRef kMRMediaRemoteNowPlayingInfoPlaybackRate;
CFStringRef kMRMediaRemoteNowPlayingInfoProhibitsSkip;
CFStringRef kMRMediaRemoteNowPlayingInfoQueueIndex;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRepeatMode;
CFStringRef kMRMediaRemoteNowPlayingInfoShuffleMode;
CFStringRef kMRMediaRemoteNowPlayingInfoStartTime;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsFastForward15Seconds;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsBanned;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsLiked;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsRewind15Seconds;
CFStringRef kMRMediaRemoteNowPlayingInfoTimestamp;
CFStringRef kMRMediaRemoteNowPlayingInfoTitle;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalChapterCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalDiscCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalQueueCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalTrackCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTrackNumber;
CFStringRef kMRMediaRemoteNowPlayingInfoUniqueIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationHash;
CFStringRef kMRMediaRemoteOptionMediaType;
CFStringRef kMRMediaRemoteOptionSourceID;
CFStringRef kMRMediaRemoteOptionTrackID;
CFStringRef kMRMediaRemoteOptionStationID;
CFStringRef kMRMediaRemoteOptionStationHash;
CFStringRef kMRMediaRemoteRouteDescriptionUserInfoKey;
CFStringRef kMRMediaRemoteRouteStatusUserInfoKey;

#endif
