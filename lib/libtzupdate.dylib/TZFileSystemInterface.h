/* Generated by RuntimeBrowser
   Image: /usr/lib/libtzupdate.dylib
 */

@interface TZFileSystemInterface : NSObject {
    NSURL * _cachedTZDataLocation;
    TZVersionInfo * _currentVersionInfo;
    NSURL * _dataExpansionVersionDirectory;
    TZVersionInfo * _lastInstalledVersionInfo;
    NSURL * _latestLinkDestinationAtStartup;
    NSURL * _latestTZDataLink;
    TZVersionInfo * _latestVersionInfo;
    NSURL * _systemICUSchemaVersionURL;
    NSString * _systemICUTZSchemaVersion;
    TZVersionInfo * _systemVersionInfo;
    NSURL * _temporaryDirectory;
}

@property (retain) NSURL *cachedTZDataLocation;
@property (readonly) TZVersionInfo *currentVersionInfo;
@property (readonly) NSURL *currentZoneinfoLinkURL;
@property (readonly) NSURL *dataExpansionParentURL;
@property (retain) NSURL *dataExpansionVersionDirectory;
@property (readonly) TZVersionInfo *lastInstalledVersionInfo;
@property (readonly) NSURL *latestLinkDestinationAtStartup;
@property (retain) NSURL *latestTZDataLink;
@property (readonly) NSURL *latestTZLinkURL;
@property (readonly) TZVersionInfo *latestVersionInfo;
@property (readonly) NSURL *systemICUDirectoryURL;
@property (readonly) NSURL *systemICUSchemaVersionURL;
@property (readonly) NSString *systemICUTZSchemaVersion;
@property (readonly) TZVersionInfo *systemVersionInfo;
@property (retain) NSURL *temporaryDirectory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cacheTZLatestDestination;
- (id)cachedTZDataLocation;
- (id)currentVersionInfo;
- (id)currentZoneinfoLinkURL;
- (id)dataExpansionParentURL;
- (id)dataExpansionVersionDirectory;
- (id)init;
- (id)lastInstalledVersionInfo;
- (id)latestLinkDestinationAtStartup;
- (id)latestTZDataLink;
- (id)latestTZLinkURL;
- (id)latestVersionInfo;
- (id)obtainDestinationOfLinkAtURL:(id)arg1;
- (void)resetTemporaryDirectory;
- (void)setCachedTZDataLocation:(id)arg1;
- (void)setDataExpansionVersionDirectory:(id)arg1;
- (void)setLatestTZDataLink:(id)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (id)systemICUDirectoryURL;
- (id)systemICUSchemaVersionURL;
- (id)systemICUTZSchemaVersion;
- (id)systemVersionInfo;
- (id)temporaryDirectory;

@end
