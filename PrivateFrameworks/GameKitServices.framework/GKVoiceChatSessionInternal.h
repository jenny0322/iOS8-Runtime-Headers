/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKVoiceChatSessionDelegate>, NSString, GKVoiceChatServiceFocus, GKInterfaceListener, GKRWLock, NSMutableDictionary, VoiceChatSessionRoster, NSArray, GKSessionInternal, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate> {
    NSString *_sessionName;
    unsigned int _conferenceID;
    boolactiveSession;
    float sessionVolume;
    boolfocusCallbacks;
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_focusPausedPeers;
    NSMutableArray *_connectedVoicePeers;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    boolneedsRecalculateGoodChannels;
    int goodChannels;
    unsigned int talkingPeersLimit;
    boolisUsingSuppression;
    unsigned int _sessionState;
    GKRWLock *_rwLock;
    GKVoiceChatServiceFocus *_vcService;
    VoiceChatSessionRoster *_roster;
    NSObject<OS_dispatch_queue> *_sendQueue;
    <GKVoiceChatSessionDelegate> *delegate;
    unsigned int congestionState;
    id _publicWrapper;
    GKInterfaceListener *_wifiListener;
    bool_currentWifiState;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <GKVoiceChatSessionDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * sessionName;
@property(readonly) unsigned int conferenceID;
@property(readonly) NSArray * peerList;
@property(getter=isActiveSession) bool activeSession;
@property float sessionVolume;
@property unsigned int talkingPeersLimit;
@property bool isUsingSuppression;

+ (void)brokenHash:(id)arg1 response:(char *)arg2;

- (void)cleanupProc:(id)arg1;
- (bool)isUsingSuppression;
- (void)didStopSpeaking:(id)arg1;
- (void)didStartSpeaking:(id)arg1;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (void)networkStateDidChange;
- (void)interfaceStateDidChangeWithWifiUp:(bool)arg1 cellUp:(bool)arg2;
- (int)calculateChannelQualities;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (void)informClientVoiceChatCouldNotConnect:(id)arg1;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (unsigned int)talkingPeersLimit;
- (unsigned int)peerCount;
- (void)parseConnectedPeers:(id)arg1;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)pruneBadLinks;
- (void)pauseAll;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)updatedFocusID:(unsigned int)arg1;
- (id)decodePeerID:(id)arg1;
- (int)goodChannels;
- (void)addPeerToFocusPausedList:(id)arg1;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)unPauseAll;
- (void)handlePeerDisconnected:(id)arg1;
- (void)informClientVoiceChatConnecting:(id)arg1;
- (void)sendConnectedPeers;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)sendMutedPeers;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (id)encodePeerID:(id)arg1;
- (void)calculateConferenceID;
- (void)stopSessionInternal;
- (void)startSessionInternal;
- (void)setSessionVolume:(float)arg1;
- (float)sessionVolume;
- (void)setActiveSession:(bool)arg1;
- (bool)isActiveSession;
- (id)peerList;
- (id)sessionName;
- (bool)getMuteStateForPeer:(id)arg1;
- (void)setMute:(bool)arg1 forPeer:(id)arg2;
- (void)stopSession;
- (void)startSession;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned int)arg3;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (id)participantID;
- (unsigned int)conferenceID;
- (void)setDelegate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)cleanup;
- (id)delegate;
- (void)dealloc;

@end
