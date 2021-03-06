/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSString, NSXPCConnection, ACDDatabase, NSMutableDictionary, NSNumber;

@interface ACDClient : NSObject  {
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    bool_didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
}

@property(retain) NSString * bundleID;
@property(readonly) struct __CFBundle { }* bundle;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * adamOrDisplayID;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;
@property(readonly) NSXPCConnection * connection;
@property(readonly) ACDDatabase * database;

+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;

- (id)longDebugDescription;
- (id)shortDebugDescription;
- (id)localizedAppName;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromSpringBoardForPID:(int)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)adamOrDisplayID;
- (id)database;
- (struct __CFBundle { }*)bundle;
- (id)pid;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (id)debugDescription;
- (id)name;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
