/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PCPersistentTimer, CLLocationManager, NSString, NSBundle, NSObject<OS_dispatch_queue>, CLLocation, EKTravelAgendaItem;

@interface EKTravelAdvisorRealWorld : NSObject <EKTravelAdvisorWorld, CLLocationManagerDelegate> {
    CLLocationManager *_geofenceLocationManager;
    CLLocationManager *_pollingLocationManager;
    bool_geofenceUsingSignificantLocationUpdates;
    PCPersistentTimer *_persistentTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _geofenceHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alarmHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationAuthorizationHandler;

    CLLocation *_geofenceInitialLocation;
    CLLocation *_locationInitialLocation;
    NSBundle *_locationBundle;
    NSObject<OS_dispatch_queue> *_queue;
    EKTravelAgendaItem *_agendaItem;
}

@property EKTravelAgendaItem * agendaItem;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_persistentTimerIdentifier;

- (void)comeOutOfHibernation;
- (void)getCurrentLocationWithAccuracy:(double)arg1 block:(id)arg2;
- (id)mostRecentLocationSeen;
- (void)setGeofenceWithRadius:(double)arg1 block:(id)arg2;
- (void)setAlarmIn:(double)arg1 block:(id)arg2;
- (void)setLocationAuthorizationChangeCallback:(id)arg1;
- (void)disableGeofence;
- (void)alarmFired:(id)arg1;
- (void)disableAlarm;
- (void)goIntoHibernation;
- (bool)authorizedToAcquireLocation;
- (void)setAgendaItem:(id)arg1;
- (id)agendaItem;
- (id)now;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
