/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerServer, NSMutableDictionary, MPVideoViewController, <MPMusicPlayerControllerServerDelegate>, NSMutableArray;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
    <MPMusicPlayerControllerServerDelegate> *_delegate;
    MPMusicPlayerControllerServer *_musicPlayerServer;
    int _activeClientPID;
    NSMutableArray *_clientPorts;
    NSMutableDictionary *_clientPortsForPIDs;
    NSMutableDictionary *_clientStateForPIDs;
    MPVideoViewController *_videoViewController;
    unsigned int _queuePrepared : 1;
}

+ (bool)_canSeedGeniusWithItem:(id)arg1;

- (void)setNowPlayingItem:(id)arg1;
- (void)_setQueuePrepared:(bool)arg1;
- (void)_registerClientPort:(unsigned int)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(bool)arg3;
- (bool)_currentClientPIDHasPermissionToPlay;
- (id)_clientStateForPID:(int)arg1;
- (void)_applicationStateChangedNotification:(id)arg1;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (void)_updateVideoView;
- (id)_avControllerForClientPID:(int)arg1;
- (void)_endPlaybackForClientIfNecessary:(int)arg1;
- (bool)_clientPIDHasPermissionToPlay:(int)arg1;
- (void)_clientPortInvalidated:(id)arg1;
- (bool)useApplicationSpecificQueue;
- (unsigned long long)_numberOfItems;
- (void)_endPlayback;
- (id)_clientState;
- (void)_setQueueWithQuery:(id)arg1;
- (void)_prepareQueueIfNecessary;
- (void)_tearDownVideoView;
- (void)skipToPreviousChapter;
- (void)skipToNextChapter;
- (void)skipToBeginningOrPreviousItem;
- (void)shuffle;
- (void)prepareQueueForPlayback;
- (id)queueAsRadioStation;
- (id)queueAsQuery;
- (void)playItem:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)registerForServerDiedNotifications;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (id)serverIsAlive;
- (id)skipInDirection:(id)arg1;
- (void)setQueueWithRadioStation:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setCurrentChapterIndex:(id)arg1;
- (id)currentChapterIndex;
- (id)isNowPlayingItemFromGeniusMix;
- (id)unshuffledIndexOfNowPlayingItem;
- (id)indexOfNowPlayingItem;
- (void)setPlaybackSpeed:(id)arg1;
- (id)playbackSpeed;
- (void)setAllowsBackgroundVideo:(id)arg1;
- (id)allowsBackgroundVideo;
- (void)pauseWithFadeoutDuration:(id)arg1;
- (id)nowPlayingItemAtIndex:(id)arg1;
- (id)setQueueWithSeedItems:(id)arg1;
- (id)isGeniusAvailableForSeedItems:(id)arg1;
- (id)isGeniusAvailable;
- (void)setShuffleMode:(id)arg1;
- (id)shuffleMode;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (id)nowPlayingItem;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (id)_avController;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)setCurrentPlaybackRate:(id)arg1;
- (id)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(id)arg1;
- (id)currentPlaybackTime;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)playbackState;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)repeatMode;
- (void)setRepeatMode:(id)arg1;
- (void)play;
- (void)prepareToPlay;
- (id)numberOfItems;
- (void)pause;
- (void)stop;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
