//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
// UUID: B554620E-1329-3D70-8F78-D06B080EE56B
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 388.1.1.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol MobileInstallerDelegateProtocol
- (void)reportProgress:(NSDictionary *)arg1;
@end

@protocol MobileInstallerProtocol
- (void)updateAppDataProtectionWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateSinfForLSWithIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 sinfData:(NSData *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)updateSinfForIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 sinfData:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)checkCapabilities:(NSObject *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)removeSafeHarborForIdentifier:(NSString *)arg1 ofType:(long long)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)registerSafeHarborAtPath:(NSString *)arg1 forIdentifier:(NSString *)arg2 ofType:(long long)arg3 withOptions:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)processRestoredContainerWithIdentifier:(NSString *)arg1 ofType:(long long)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)listArchivesWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removeArchiveForIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)archiveIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchDiskUsageForIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchInstalledAppsWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)clearUninstalledIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)lookupUninstalledWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)uninstallIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)installPath:(NSString *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end

__attribute__((visibility("hidden")))
@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol>
{
    NSXPCConnection *_connection;
    CDUnknownBlockType _progressBlock;
}

+ (id)installerWithProgressBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)updateAppDataProtectionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSinfForIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)listArchivesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeArchiveForIdentifier:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)archiveIdentifier:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installPath:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportProgress:(id)arg1;
- (id)init;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateObject;

@end

