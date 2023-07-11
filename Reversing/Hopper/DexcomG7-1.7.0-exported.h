struct anonymous_type_9 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct _NSRange {
    unsigned long long field_1;
    unsigned long long field_2;
};

struct anonymous_type_15 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct anonymous_type_24 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct anonymous_type_25 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct opaqueCMSampleBuffer {
};

struct UIEdgeInsets {
    double field_1;
    double field_2;
    double field_3;
    double field_4;
};

struct _google_crashlytics_Report {
    struct pb_bytes_array_s * field_1;
    struct pb_bytes_array_s * field_2;
    int field_3;
    struct pb_bytes_array_s * field_4;
    struct pb_bytes_array_s * field_5;
    struct pb_bytes_array_s * field_6;
    struct _google_crashlytics_FilesPayload field_7;
    struct pb_bytes_array_s * field_8;
    struct pb_bytes_array_s * field_9;
};

struct anonymous_type_23 {
    char field_1[33];
    bool field_2;
    struct anonymous_type_24 field_3;
    struct anonymous_type_25 field_4;
    struct anonymous_type_26 field_5;
    void field_6;
    unsigned long long field_7;
    void * field_8;
    void * field_9;
    void * field_10;
};

struct CGPoint {
    double field_1;
    double field_2;
};

struct __SCNetworkReachability {
};

struct __CFString {
};

struct _google_crashlytics_FilesPayload {
    unsigned int field_1;
    struct _google_crashlytics_FilesPayload_File * field_2;
};

struct anonymous_type_12 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct FIRCLSMachOFile {
    int fd;
    unsigned long long mappedSize;
    void * mappedFile;
};

struct anonymous_type_11 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct anonymous_type_8 {
    long long field_1;
    void * field_2;
    void * * field_3;
    void * * field_4;
    void * * field_5;
};

struct anonymous_type_10 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct CGSize {
    double field_1;
    double field_2;
};

struct FIRCLSMachOSlice {
    void * field_1;
    int field_2;
    int field_3;
};

struct anonymous_type_29 {
    char * incrementalPath;
    char * compactedPath;
    unsigned int maxIncrementalCount;
    unsigned int maxCount;
};

struct anonymous_type_28 {
    char * incrementalPath;
    char * compactedPath;
    unsigned int maxIncrementalCount;
    unsigned int maxCount;
};

struct anonymous_type_18 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct anonymous_type_27 {
    char * aPath;
    char * bPath;
    unsigned int maxSize;
    unsigned int maxEntries;
    bool restrictBySize;
    unsigned int * entryCount;
};

struct CGRect {
    struct CGPoint field_1;
    struct CGSize field_2;
};

struct anonymous_type_17 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct _google_crashlytics_FilesPayload_File; /* Incomplete type */

struct anonymous_type_26 {
};

struct _NSZone {
};

struct anonymous_type_16 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct pb_bytes_array_s; /* Incomplete type */



/*****************************************************************/

@protocol UISceneDelegate<NSObject>

@optional
- (void)scene:(id)v1 willConnectToSession:(id)v2 options:(id)v3;
- (void)scene:(id)v1 willConnectToSession:(id)v2 options:(id)v3;
- (void)sceneDidDisconnect:(id)v1;
- (void)sceneDidBecomeActive:(id)v1;
- (void)sceneWillResignActive:(id)v1;
- (void)sceneWillEnterForeground:(id)v1;
- (void)sceneDidEnterBackground:(id)v1;
- (void)scene:(id)v1 openURLContexts:(id)v2;
- (id)stateRestorationActivityForScene:(id)v1;
- (id)stateRestorationActivityForScene:(id)v1;
- (void)scene:(id)v1 restoreInteractionStateWithUserActivity:(id)v2;
- (void)scene:(id)v1 restoreInteractionStateWithUserActivity:(id)v2;
- (void)scene:(id)v1 willContinueUserActivityWithType:(id)v2;
- (void)scene:(id)v1 continueUserActivity:(id)v2;
- (void)scene:(id)v1 continueUserActivity:(id)v2;
- (void)scene:(id)v1 didFailToContinueUserActivityWithType:(id)v2 error:(id)v3;
- (void)scene:(id)v1 didUpdateUserActivity:(id)v2;
- (void)scene:(id)v1 didUpdateUserActivity:(id)v2;
@end


/*****************************************************************/

@protocol AVCaptureVideoDataOutputSampleBufferDelegate<NSObject>

@optional
- (void)captureOutput:(id)v1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)v2 fromConnection:(id)v3;
- (void)captureOutput:(id)v1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)v2 fromConnection:(id)v3;
- (void)captureOutput:(id)v1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)v2 fromConnection:(id)v3;
- (void)captureOutput:(id)v1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)v2 fromConnection:(id)v3;
@end


/*****************************************************************/

@protocol INUIEditVoiceShortcutViewControllerDelegate<NSObject>
- (void)editVoiceShortcutViewController:(id)v1 didUpdateVoiceShortcut:(id)v2 error:(id)v3;
- (void)editVoiceShortcutViewController:(id)v1 didUpdateVoiceShortcut:(id)v2 error:(id)v3;
- (void)editVoiceShortcutViewController:(id)v1 didDeleteVoiceShortcutWithIdentifier:(id)v2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)v1;
@end


/*****************************************************************/

@protocol UIViewControllerAnimatedTransitioning<NSObject>
- (double)transitionDuration:(id)v1;
- (double)transitionDuration:(id)v1;
- (void)animateTransition:(id)v1;
- (void)animateTransition:(id)v1;

@optional
- (id)interruptibleAnimatorForTransition:(id)v1;
- (id)interruptibleAnimatorForTransition:(id)v1;
- (void)animationEnded:(bool)v1;
@end


/*****************************************************************/

@protocol UICollectionViewDelegate<UIScrollViewDelegate>

@optional
- (bool)collectionView:(id)v1 shouldHighlightItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldHighlightItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didHighlightItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didHighlightItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didUnhighlightItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didUnhighlightItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldSelectItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldSelectItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldDeselectItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldDeselectItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didDeselectItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didDeselectItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 canPerformPrimaryActionForItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 canPerformPrimaryActionForItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 performPrimaryActionForItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 performPrimaryActionForItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 willDisplayCell:(id)v2 forItemAtIndexPath:(id)v3;
- (void)collectionView:(id)v1 willDisplayCell:(id)v2 forItemAtIndexPath:(id)v3;
- (void)collectionView:(id)v1 willDisplaySupplementaryView:(id)v2 forElementKind:(id)v3 atIndexPath:(id)v4;
- (void)collectionView:(id)v1 willDisplaySupplementaryView:(id)v2 forElementKind:(id)v3 atIndexPath:(id)v4;
- (void)collectionView:(id)v1 didEndDisplayingCell:(id)v2 forItemAtIndexPath:(id)v3;
- (void)collectionView:(id)v1 didEndDisplayingCell:(id)v2 forItemAtIndexPath:(id)v3;
- (void)collectionView:(id)v1 didEndDisplayingSupplementaryView:(id)v2 forElementOfKind:(id)v3 atIndexPath:(id)v4;
- (void)collectionView:(id)v1 didEndDisplayingSupplementaryView:(id)v2 forElementOfKind:(id)v3 atIndexPath:(id)v4;
- (bool)collectionView:(id)v1 shouldShowMenuForItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldShowMenuForItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 canPerformAction:(SEL)v2 forItemAtIndexPath:(id)v3 withSender:(id)v4;
- (bool)collectionView:(id)v1 canPerformAction:(SEL)v2 forItemAtIndexPath:(id)v3 withSender:(id)v4;
- (void)collectionView:(id)v1 performAction:(SEL)v2 forItemAtIndexPath:(id)v3 withSender:(id)v4;
- (void)collectionView:(id)v1 performAction:(SEL)v2 forItemAtIndexPath:(id)v3 withSender:(id)v4;
- (id)collectionView:(id)v1 transitionLayoutForOldLayout:(id)v2 newLayout:(id)v3;
- (bool)collectionView:(id)v1 canFocusItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 canFocusItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldUpdateFocusInContext:(id)v2;
- (bool)collectionView:(id)v1 shouldUpdateFocusInContext:(id)v2;
- (void)collectionView:(id)v1 didUpdateFocusInContext:(id)v2 withAnimationCoordinator:(id)v3;
- (void)collectionView:(id)v1 didUpdateFocusInContext:(id)v2 withAnimationCoordinator:(id)v3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)v1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)v1;
- (bool)collectionView:(id)v1 selectionFollowsFocusForItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 selectionFollowsFocusForItemAtIndexPath:(id)v2;
- (id)collectionView:(id)v1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)v2 atCurrentIndexPath:(id)v3 toProposedIndexPath:(id)v4;
- (id)collectionView:(id)v1 targetIndexPathForMoveFromItemAtIndexPath:(id)v2 toProposedIndexPath:(id)v3;
- (id)collectionView:(id)v1 targetIndexPathForMoveFromItemAtIndexPath:(id)v2 toProposedIndexPath:(id)v3;
- (struct CGPoint)collectionView:(id)v1 targetContentOffsetForProposedContentOffset:(struct CGPoint)v2;
- (bool)collectionView:(id)v1 canEditItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 canEditItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldSpringLoadItemAtIndexPath:(id)v2 withContext:(id)v3;
- (bool)collectionView:(id)v1 shouldSpringLoadItemAtIndexPath:(id)v2 withContext:(id)v3;
- (bool)collectionView:(id)v1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)collectionViewDidEndMultipleSelectionInteraction:(id)v1;
- (id)collectionView:(id)v1 contextMenuConfigurationForItemsAtIndexPaths:(id)v2 point:(struct CGPoint)v3;
- (id)collectionView:(id)v1 contextMenuConfigurationForItemsAtIndexPaths:(id)v2 point:(struct CGPoint)v3;
- (id)collectionView:(id)v1 contextMenuConfiguration:(id)v2 highlightPreviewForItemAtIndexPath:(id)v3;
- (id)collectionView:(id)v1 contextMenuConfiguration:(id)v2 highlightPreviewForItemAtIndexPath:(id)v3;
- (id)collectionView:(id)v1 contextMenuConfiguration:(id)v2 dismissalPreviewForItemAtIndexPath:(id)v3;
- (id)collectionView:(id)v1 contextMenuConfiguration:(id)v2 dismissalPreviewForItemAtIndexPath:(id)v3;
- (void)collectionView:(id)v1 willPerformPreviewActionForMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)collectionView:(id)v1 willPerformPreviewActionForMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)collectionView:(id)v1 willDisplayContextMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)collectionView:(id)v1 willDisplayContextMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)collectionView:(id)v1 willEndContextMenuInteractionWithConfiguration:(id)v2 animator:(id)v3;
- (void)collectionView:(id)v1 willEndContextMenuInteractionWithConfiguration:(id)v2 animator:(id)v3;
- (id)collectionView:(id)v1 sceneActivationConfigurationForItemAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)collectionView:(id)v1 sceneActivationConfigurationForItemAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)collectionView:(id)v1 contextMenuConfigurationForItemAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)collectionView:(id)v1 contextMenuConfigurationForItemAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)collectionView:(id)v1 previewForHighlightingContextMenuWithConfiguration:(id)v2;
- (id)collectionView:(id)v1 previewForDismissingContextMenuWithConfiguration:(id)v2;
@end


/*****************************************************************/

@protocol DXCMLegalAgreementsVCDelegate<NSObject>
- (void)userAgreed;
@end


/*****************************************************************/

@protocol UIGestureRecognizerDelegate<NSObject>

@optional
- (bool)gestureRecognizerShouldBegin:(id)v1;
- (bool)gestureRecognizer:(id)v1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldRequireFailureOfGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldRequireFailureOfGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldBeRequiredToFailByGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldBeRequiredToFailByGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceiveTouch:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceiveTouch:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceivePress:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceivePress:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceiveEvent:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceiveEvent:(id)v2;
@end


/*****************************************************************/

@protocol CLLocationManagerDelegate<NSObject>

@optional
- (void)locationManager:(id)v1 didUpdateToLocation:(id)v2 fromLocation:(id)v3;
- (void)locationManager:(id)v1 didUpdateToLocation:(id)v2 fromLocation:(id)v3;
- (void)locationManager:(id)v1 didUpdateLocations:(id)v2;
- (void)locationManager:(id)v1 didUpdateHeading:(id)v2;
- (bool)locationManagerShouldDisplayHeadingCalibration:(id)v1;
- (void)locationManager:(id)v1 didDetermineState:(long long)v2 forRegion:(id)v3;
- (void)locationManager:(id)v1 didDetermineState:(long long)v2 forRegion:(id)v3;
- (void)locationManager:(id)v1 didRangeBeacons:(id)v2 inRegion:(id)v3;
- (void)locationManager:(id)v1 didRangeBeacons:(id)v2 inRegion:(id)v3;
- (void)locationManager:(id)v1 rangingBeaconsDidFailForRegion:(id)v2 withError:(id)v3;
- (void)locationManager:(id)v1 rangingBeaconsDidFailForRegion:(id)v2 withError:(id)v3;
- (void)locationManager:(id)v1 didRangeBeacons:(id)v2 satisfyingConstraint:(id)v3;
- (void)locationManager:(id)v1 didRangeBeacons:(id)v2 satisfyingConstraint:(id)v3;
- (void)locationManager:(id)v1 didFailRangingBeaconsForConstraint:(id)v2 error:(id)v3;
- (void)locationManager:(id)v1 didFailRangingBeaconsForConstraint:(id)v2 error:(id)v3;
- (void)locationManager:(id)v1 didEnterRegion:(id)v2;
- (void)locationManager:(id)v1 didExitRegion:(id)v2;
- (void)locationManager:(id)v1 didFailWithError:(id)v2;
- (void)locationManager:(id)v1 monitoringDidFailForRegion:(id)v2 withError:(id)v3;
- (void)locationManager:(id)v1 monitoringDidFailForRegion:(id)v2 withError:(id)v3;
- (void)locationManager:(id)v1 didChangeAuthorizationStatus:(int)v2;
- (void)locationManager:(id)v1 didChangeAuthorizationStatus:(int)v2;
- (void)locationManagerDidChangeAuthorization:(id)v1;
- (void)locationManager:(id)v1 didStartMonitoringForRegion:(id)v2;
- (void)locationManager:(id)v1 didStartMonitoringForRegion:(id)v2;
- (void)locationManagerDidPauseLocationUpdates:(id)v1;
- (void)locationManagerDidResumeLocationUpdates:(id)v1;
- (void)locationManager:(id)v1 didFinishDeferredUpdatesWithError:(id)v2;
- (void)locationManager:(id)v1 didVisit:(id)v2;
@end


/*****************************************************************/

@protocol UITextFieldDelegate<NSObject>

@optional
- (bool)textFieldShouldBeginEditing:(id)v1;
- (void)textFieldDidBeginEditing:(id)v1;
- (bool)textFieldShouldEndEditing:(id)v1;
- (void)textFieldDidEndEditing:(id)v1;
- (void)textFieldDidEndEditing:(id)v1 reason:(long long)v2;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (void)textFieldDidChangeSelection:(id)v1;
- (bool)textFieldShouldClear:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (id)textField:(id)v1 editMenuForCharactersInRange:(struct _NSRange)v2 suggestedActions:(id)v3;
- (id)textField:(id)v1 editMenuForCharactersInRange:(struct _NSRange)v2 suggestedActions:(id)v3;
- (void)textField:(id)v1 willPresentEditMenuWithAnimator:(id)v2;
- (void)textField:(id)v1 willPresentEditMenuWithAnimator:(id)v2;
- (void)textField:(id)v1 willDismissEditMenuWithAnimator:(id)v2;
- (void)textField:(id)v1 willDismissEditMenuWithAnimator:(id)v2;
@end


/*****************************************************************/

@protocol UIApplicationDelegate<NSObject>
@property (nonatomic,retain) UIWindow * window;

@optional
- (void)applicationDidFinishLaunching:(id)v1;
- (bool)application:(id)v1 willFinishLaunchingWithOptions:(id)v2;
- (bool)application:(id)v1 didFinishLaunchingWithOptions:(id)v2;
- (void)applicationDidBecomeActive:(id)v1;
- (void)applicationWillResignActive:(id)v1;
- (bool)application:(id)v1 handleOpenURL:(id)v2;
- (bool)application:(id)v1 handleOpenURL:(id)v2;
- (bool)application:(id)v1 openURL:(id)v2 sourceApplication:(id)v3 annotation:(id)v4;
- (bool)application:(id)v1 openURL:(id)v2 sourceApplication:(id)v3 annotation:(id)v4;
- (bool)application:(id)v1 openURL:(id)v2 options:(id)v3;
- (bool)application:(id)v1 openURL:(id)v2 options:(id)v3;
- (void)applicationDidReceiveMemoryWarning:(id)v1;
- (void)applicationWillTerminate:(id)v1;
- (void)applicationSignificantTimeChange:(id)v1;
- (void)application:(id)v1 willChangeStatusBarOrientation:(long long)v2 duration:(double)v3;
- (void)application:(id)v1 didChangeStatusBarOrientation:(long long)v2;
- (void)application:(id)v1 willChangeStatusBarFrame:(struct CGRect)v2;
- (void)application:(id)v1 didChangeStatusBarFrame:(struct CGRect)v2;
- (void)application:(id)v1 didRegisterUserNotificationSettings:(id)v2;
- (void)application:(id)v1 didRegisterUserNotificationSettings:(id)v2;
- (void)application:(id)v1 didRegisterForRemoteNotificationsWithDeviceToken:(id)v2;
- (void)application:(id)v1 didFailToRegisterForRemoteNotificationsWithError:(id)v2;
- (void)application:(id)v1 didReceiveRemoteNotification:(id)v2;
- (void)application:(id)v1 didReceiveLocalNotification:(id)v2;
- (void)application:(id)v1 didReceiveLocalNotification:(id)v2;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forLocalNotification:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forLocalNotification:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forRemoteNotification:(id)v3 withResponseInfo:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forRemoteNotification:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forLocalNotification:(id)v3 withResponseInfo:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forLocalNotification:(id)v3 withResponseInfo:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)application:(id)v1 didReceiveRemoteNotification:(id)v2 fetchCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 performFetchWithCompletionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)application:(id)v1 performActionForShortcutItem:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 performActionForShortcutItem:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 handleEventsForBackgroundURLSession:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 handleWatchKitExtensionRequest:(id)v2 reply:(void (^ /* unknown block signature */)(void))v3;
- (void)applicationShouldRequestHealthAuthorization:(id)v1;
- (id)application:(id)v1 handlerForIntent:(id)v2;
- (id)application:(id)v1 handlerForIntent:(id)v2;
- (void)application:(id)v1 handleIntent:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 handleIntent:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)applicationDidEnterBackground:(id)v1;
- (void)applicationWillEnterForeground:(id)v1;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)v1;
- (void)applicationProtectedDataDidBecomeAvailable:(id)v1;
- (id)window;
- (void)setWindow:(id)v1;
- (unsigned long long)application:(id)v1 supportedInterfaceOrientationsForWindow:(id)v2;
- (unsigned long long)application:(id)v1 supportedInterfaceOrientationsForWindow:(id)v2;
- (bool)application:(id)v1 shouldAllowExtensionPointIdentifier:(id)v2;
- (id)application:(id)v1 viewControllerWithRestorationIdentifierPath:(id)v2 coder:(id)v3;
- (bool)application:(id)v1 shouldSaveSecureApplicationState:(id)v2;
- (bool)application:(id)v1 shouldRestoreSecureApplicationState:(id)v2;
- (void)application:(id)v1 willEncodeRestorableStateWithCoder:(id)v2;
- (void)application:(id)v1 willEncodeRestorableStateWithCoder:(id)v2;
- (void)application:(id)v1 didDecodeRestorableStateWithCoder:(id)v2;
- (void)application:(id)v1 didDecodeRestorableStateWithCoder:(id)v2;
- (bool)application:(id)v1 shouldSaveApplicationState:(id)v2;
- (bool)application:(id)v1 shouldRestoreApplicationState:(id)v2;
- (bool)application:(id)v1 willContinueUserActivityWithType:(id)v2;
- (bool)application:(id)v1 continueUserActivity:(id)v2 restorationHandler:(void (^ /* unknown block signature */)(void))v3;
- (bool)application:(id)v1 continueUserActivity:(id)v2 restorationHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 didFailToContinueUserActivityWithType:(id)v2 error:(id)v3;
- (void)application:(id)v1 didUpdateUserActivity:(id)v2;
- (void)application:(id)v1 didUpdateUserActivity:(id)v2;
- (id)application:(id)v1 configurationForConnectingSceneSession:(id)v2 options:(id)v3;
- (id)application:(id)v1 configurationForConnectingSceneSession:(id)v2 options:(id)v3;
- (void)application:(id)v1 didDiscardSceneSessions:(id)v2;
- (bool)applicationShouldAutomaticallyLocalizeKeyCommands:(id)v1;
@end


/*****************************************************************/

@protocol NSObject
@property (nonatomic,readonly) long long hash;
@property (nonatomic,readonly) Class superclass;
@property (nonatomic,readonly) NSString * description;
@property (nonatomic,readonly) NSString * debugDescription;
- (bool)isEqual:(id)v1;
- (long long)hash;
- (Class)superclass;
- (Class)class;
- (id)self;
- (id)performSelector:(SEL)v1;
- (id)performSelector:(SEL)v1;
- (id)performSelector:(SEL)v1 withObject:(id)v2;
- (id)performSelector:(SEL)v1 withObject:(id)v2;
- (id)performSelector:(SEL)v1 withObject:(id)v2 withObject:(id)v3;
- (id)performSelector:(SEL)v1 withObject:(id)v2 withObject:(id)v3;
- (bool)isProxy;
- (bool)isKindOfClass:(Class)v1;
- (bool)isKindOfClass:(Class)v1;
- (bool)isMemberOfClass:(Class)v1;
- (bool)isMemberOfClass:(Class)v1;
- (bool)conformsToProtocol:(id)v1;
- (bool)conformsToProtocol:(id)v1;
- (bool)respondsToSelector:(SEL)v1;
- (bool)respondsToSelector:(SEL)v1;
- (id)retain;
- (oneway  void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (struct _NSZone *)zone;
- (id)description;

@optional
- (id)debugDescription;
@end


/*****************************************************************/

@protocol UIViewControllerTransitioningDelegate<NSObject>

@optional
- (id)animationControllerForPresentedController:(id)v1 presentingController:(id)v2 sourceController:(id)v3;
- (id)animationControllerForPresentedController:(id)v1 presentingController:(id)v2 sourceController:(id)v3;
- (id)animationControllerForDismissedController:(id)v1;
- (id)animationControllerForDismissedController:(id)v1;
- (id)interactionControllerForPresentation:(id)v1;
- (id)interactionControllerForPresentation:(id)v1;
- (id)interactionControllerForDismissal:(id)v1;
- (id)interactionControllerForDismissal:(id)v1;
- (id)presentationControllerForPresentedViewController:(id)v1 presentingViewController:(id)v2 sourceViewController:(id)v3;
- (id)presentationControllerForPresentedViewController:(id)v1 presentingViewController:(id)v2 sourceViewController:(id)v3;
@end


/*****************************************************************/

@protocol CNContactViewControllerDelegate<NSObject>

@optional
- (bool)contactViewController:(id)v1 shouldPerformDefaultActionForContactProperty:(id)v2;
- (bool)contactViewController:(id)v1 shouldPerformDefaultActionForContactProperty:(id)v2;
- (void)contactViewController:(id)v1 didCompleteWithContact:(id)v2;
- (void)contactViewController:(id)v1 didCompleteWithContact:(id)v2;
@end


/*****************************************************************/

@protocol UINavigationControllerDelegate<NSObject>

@optional
- (void)navigationController:(id)v1 willShowViewController:(id)v2 animated:(bool)v3;
- (void)navigationController:(id)v1 willShowViewController:(id)v2 animated:(bool)v3;
- (void)navigationController:(id)v1 didShowViewController:(id)v2 animated:(bool)v3;
- (void)navigationController:(id)v1 didShowViewController:(id)v2 animated:(bool)v3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)v1;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)v1;
- (id)navigationController:(id)v1 interactionControllerForAnimationController:(id)v2;
- (id)navigationController:(id)v1 interactionControllerForAnimationController:(id)v2;
- (id)navigationController:(id)v1 animationControllerForOperation:(long long)v2 fromViewController:(id)v3 toViewController:(id)v4;
- (id)navigationController:(id)v1 animationControllerForOperation:(long long)v2 fromViewController:(id)v3 toViewController:(id)v4;
@end


/*****************************************************************/

@protocol UITabBarControllerDelegate<NSObject>

@optional
- (bool)tabBarController:(id)v1 shouldSelectViewController:(id)v2;
- (bool)tabBarController:(id)v1 shouldSelectViewController:(id)v2;
- (void)tabBarController:(id)v1 didSelectViewController:(id)v2;
- (void)tabBarController:(id)v1 didSelectViewController:(id)v2;
- (void)tabBarController:(id)v1 willBeginCustomizingViewControllers:(id)v2;
- (void)tabBarController:(id)v1 willBeginCustomizingViewControllers:(id)v2;
- (void)tabBarController:(id)v1 willEndCustomizingViewControllers:(id)v2 changed:(bool)v3;
- (void)tabBarController:(id)v1 willEndCustomizingViewControllers:(id)v2 changed:(bool)v3;
- (void)tabBarController:(id)v1 didEndCustomizingViewControllers:(id)v2 changed:(bool)v3;
- (void)tabBarController:(id)v1 didEndCustomizingViewControllers:(id)v2 changed:(bool)v3;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)v1;
- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)v1;
- (id)tabBarController:(id)v1 interactionControllerForAnimationController:(id)v2;
- (id)tabBarController:(id)v1 interactionControllerForAnimationController:(id)v2;
- (id)tabBarController:(id)v1 animationControllerForTransitionFromViewController:(id)v2 toViewController:(id)v3;
- (id)tabBarController:(id)v1 animationControllerForTransitionFromViewController:(id)v2 toViewController:(id)v3;
@end


/*****************************************************************/

@protocol UITableViewDelegate<NSObject,UIScrollViewDelegate>

@optional
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 willDisplayHeaderView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 willDisplayFooterView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 didEndDisplayingCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 didEndDisplayingCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 didEndDisplayingHeaderView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 didEndDisplayingFooterView:(id)v2 forSection:(long long)v3;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 estimatedHeightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 estimatedHeightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (long long)tableView:(id)v1 accessoryTypeForRowWithIndexPath:(id)v2;
- (long long)tableView:(id)v1 accessoryTypeForRowWithIndexPath:(id)v2;
- (void)tableView:(id)v1 accessoryButtonTappedForRowWithIndexPath:(id)v2;
- (void)tableView:(id)v1 accessoryButtonTappedForRowWithIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldHighlightRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldHighlightRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didHighlightRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didHighlightRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didUnhighlightRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didUnhighlightRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willSelectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willSelectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willDeselectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willDeselectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didDeselectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didDeselectRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canPerformPrimaryActionForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canPerformPrimaryActionForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 performPrimaryActionForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 performPrimaryActionForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 editingStyleForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 editingStyleForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 editActionsForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 editActionsForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldIndentWhileEditingRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldIndentWhileEditingRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willBeginEditingRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willBeginEditingRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didEndEditingRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didEndEditingRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 targetIndexPathForMoveFromRowAtIndexPath:(id)v2 toProposedIndexPath:(id)v3;
- (id)tableView:(id)v1 targetIndexPathForMoveFromRowAtIndexPath:(id)v2 toProposedIndexPath:(id)v3;
- (long long)tableView:(id)v1 indentationLevelForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 indentationLevelForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldShowMenuForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldShowMenuForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canPerformAction:(SEL)v2 forRowAtIndexPath:(id)v3 withSender:(id)v4;
- (bool)tableView:(id)v1 canPerformAction:(SEL)v2 forRowAtIndexPath:(id)v3 withSender:(id)v4;
- (void)tableView:(id)v1 performAction:(SEL)v2 forRowAtIndexPath:(id)v3 withSender:(id)v4;
- (void)tableView:(id)v1 performAction:(SEL)v2 forRowAtIndexPath:(id)v3 withSender:(id)v4;
- (bool)tableView:(id)v1 canFocusRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canFocusRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldUpdateFocusInContext:(id)v2;
- (bool)tableView:(id)v1 shouldUpdateFocusInContext:(id)v2;
- (void)tableView:(id)v1 didUpdateFocusInContext:(id)v2 withAnimationCoordinator:(id)v3;
- (void)tableView:(id)v1 didUpdateFocusInContext:(id)v2 withAnimationCoordinator:(id)v3;
- (id)indexPathForPreferredFocusedViewInTableView:(id)v1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)v1;
- (bool)tableView:(id)v1 selectionFollowsFocusForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 selectionFollowsFocusForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldSpringLoadRowAtIndexPath:(id)v2 withContext:(id)v3;
- (bool)tableView:(id)v1 shouldSpringLoadRowAtIndexPath:(id)v2 withContext:(id)v3;
- (bool)tableView:(id)v1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)tableViewDidEndMultipleSelectionInteraction:(id)v1;
- (id)tableView:(id)v1 contextMenuConfigurationForRowAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)tableView:(id)v1 contextMenuConfigurationForRowAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)tableView:(id)v1 previewForHighlightingContextMenuWithConfiguration:(id)v2;
- (id)tableView:(id)v1 previewForDismissingContextMenuWithConfiguration:(id)v2;
- (void)tableView:(id)v1 willPerformPreviewActionForMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willPerformPreviewActionForMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willDisplayContextMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willDisplayContextMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willEndContextMenuInteractionWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willEndContextMenuInteractionWithConfiguration:(id)v2 animator:(id)v3;
@end


/*****************************************************************/

@protocol UIAdaptivePresentationControllerDelegate<NSObject>

@optional
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1 traitCollection:(id)v2;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1 traitCollection:(id)v2;
- (void)presentationController:(id)v1 prepareAdaptivePresentationController:(id)v2;
- (void)presentationController:(id)v1 prepareAdaptivePresentationController:(id)v2;
- (id)presentationController:(id)v1 viewControllerForAdaptivePresentationStyle:(long long)v2;
- (void)presentationController:(id)v1 willPresentWithAdaptiveStyle:(long long)v2 transitionCoordinator:(id)v3;
- (bool)presentationControllerShouldDismiss:(id)v1;
- (void)presentationControllerWillDismiss:(id)v1;
- (void)presentationControllerDidDismiss:(id)v1;
- (void)presentationControllerDidAttemptToDismiss:(id)v1;
@end


/*****************************************************************/

@protocol UIPickerViewDataSource<NSObject>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
@end


/*****************************************************************/

@protocol UICollectionViewDelegateFlowLayout<UICollectionViewDelegate>

@optional
- (struct CGSize)collectionView:(id)v1 layout:(id)v2 sizeForItemAtIndexPath:(id)v3;
- (struct CGSize)collectionView:(id)v1 layout:(id)v2 sizeForItemAtIndexPath:(id)v3;
- (struct UIEdgeInsets)collectionView:(id)v1 layout:(id)v2 insetForSectionAtIndex:(long long)v3;
- (struct UIEdgeInsets)collectionView:(id)v1 layout:(id)v2 insetForSectionAtIndex:(long long)v3;
- (double)collectionView:(id)v1 layout:(id)v2 minimumLineSpacingForSectionAtIndex:(long long)v3;
- (double)collectionView:(id)v1 layout:(id)v2 minimumLineSpacingForSectionAtIndex:(long long)v3;
- (double)collectionView:(id)v1 layout:(id)v2 minimumInteritemSpacingForSectionAtIndex:(long long)v3;
- (double)collectionView:(id)v1 layout:(id)v2 minimumInteritemSpacingForSectionAtIndex:(long long)v3;
- (struct CGSize)collectionView:(id)v1 layout:(id)v2 referenceSizeForHeaderInSection:(long long)v3;
- (struct CGSize)collectionView:(id)v1 layout:(id)v2 referenceSizeForFooterInSection:(long long)v3;
@end


/*****************************************************************/

@protocol NSFilePresenter<NSObject>
@property (nonatomic,readonly) NSURL * presentedItemURL;
@property (nonatomic,readonly) NSOperationQueue * presentedItemOperationQueue;
@property (nonatomic,readonly) NSURL * primaryPresentedItemURL;
@property (nonatomic,readonly) NSSet * observedPresentedItemUbiquityAttributes;
- (id)presentedItemURL;
- (id)presentedItemOperationQueue;

@optional
- (id)primaryPresentedItemURL;
- (void)relinquishPresentedItemToReader:(void (^ /* unknown block signature */)(void))v1;
- (void)relinquishPresentedItemToReader:(void (^ /* unknown block signature */)(void))v1;
- (void)relinquishPresentedItemToWriter:(void (^ /* unknown block signature */)(void))v1;
- (void)relinquishPresentedItemToWriter:(void (^ /* unknown block signature */)(void))v1;
- (void)savePresentedItemChangesWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (void)savePresentedItemChangesWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (void)presentedItemDidMoveToURL:(id)v1;
- (void)presentedItemDidMoveToURL:(id)v1;
- (void)presentedItemDidChange;
- (void)presentedItemDidChangeUbiquityAttributes:(id)v1;
- (id)observedPresentedItemUbiquityAttributes;
- (void)presentedItemDidGainVersion:(id)v1;
- (void)presentedItemDidGainVersion:(id)v1;
- (void)presentedItemDidLoseVersion:(id)v1;
- (void)presentedItemDidLoseVersion:(id)v1;
- (void)presentedItemDidResolveConflictVersion:(id)v1;
- (void)presentedItemDidResolveConflictVersion:(id)v1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)presentedSubitemDidAppearAtURL:(id)v1;
- (void)presentedSubitemDidAppearAtURL:(id)v1;
- (void)presentedSubitemAtURL:(id)v1 didMoveToURL:(id)v2;
- (void)presentedSubitemAtURL:(id)v1 didMoveToURL:(id)v2;
- (void)presentedSubitemDidChangeAtURL:(id)v1;
- (void)presentedSubitemDidChangeAtURL:(id)v1;
- (void)presentedSubitemAtURL:(id)v1 didGainVersion:(id)v2;
- (void)presentedSubitemAtURL:(id)v1 didGainVersion:(id)v2;
- (void)presentedSubitemAtURL:(id)v1 didLoseVersion:(id)v2;
- (void)presentedSubitemAtURL:(id)v1 didLoseVersion:(id)v2;
- (void)presentedSubitemAtURL:(id)v1 didResolveConflictVersion:(id)v2;
- (void)presentedSubitemAtURL:(id)v1 didResolveConflictVersion:(id)v2;
@end


/*****************************************************************/

@protocol UIKeyInput<UITextInputTraits>
@property (nonatomic,readonly) bool hasText;
- (bool)hasText;
- (void)insertText:(id)v1;
- (void)deleteBackward;
@end


/*****************************************************************/

@protocol SKPhysicsContactDelegate<NSObject>

@optional
- (void)didBeginContact:(id)v1;
- (void)didBeginContact:(id)v1;
- (void)didEndContact:(id)v1;
- (void)didEndContact:(id)v1;
@end


/*****************************************************************/

@protocol UIWindowSceneDelegate<UISceneDelegate>
@property (nonatomic,retain) UIWindow * window;

@optional
- (id)window;
- (void)setWindow:(id)v1;
- (void)windowScene:(id)v1 didUpdateCoordinateSpace:(id)v2 interfaceOrientation:(long long)v3 traitCollection:(id)v4;
- (void)windowScene:(id)v1 didUpdateCoordinateSpace:(id)v2 interfaceOrientation:(long long)v3 traitCollection:(id)v4;
- (void)windowScene:(id)v1 performActionForShortcutItem:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)windowScene:(id)v1 performActionForShortcutItem:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
@end


/*****************************************************************/

@protocol UITextInputTraits<NSObject>
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic,copy) NSString * textContentType;
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules;

@optional
- (long long)autocapitalizationType;
- (void)setAutocapitalizationType:(long long)v1;
- (long long)autocorrectionType;
- (void)setAutocorrectionType:(long long)v1;
- (long long)spellCheckingType;
- (void)setSpellCheckingType:(long long)v1;
- (long long)smartQuotesType;
- (void)setSmartQuotesType:(long long)v1;
- (long long)smartDashesType;
- (void)setSmartDashesType:(long long)v1;
- (long long)smartInsertDeleteType;
- (void)setSmartInsertDeleteType:(long long)v1;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)v1;
- (long long)keyboardAppearance;
- (void)setKeyboardAppearance:(long long)v1;
- (long long)returnKeyType;
- (void)setReturnKeyType:(long long)v1;
- (bool)enablesReturnKeyAutomatically;
- (void)setEnablesReturnKeyAutomatically:(bool)v1;
- (bool)isSecureTextEntry;
- (void)setSecureTextEntry:(bool)v1;
- (bool)isSecureTextEntry;
- (void)setSecureTextEntry:(bool)v1;
- (id)textContentType;
- (void)setTextContentType:(id)v1;
- (id)passwordRules;
- (void)setPasswordRules:(id)v1;
@end


/*****************************************************************/

@protocol UIPickerViewDelegate<NSObject>

@optional
- (double)pickerView:(id)v1 widthForComponent:(long long)v2;
- (double)pickerView:(id)v1 rowHeightForComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (id)pickerView:(id)v1 attributedTitleForRow:(long long)v2 forComponent:(long long)v3;
- (id)pickerView:(id)v1 viewForRow:(long long)v2 forComponent:(long long)v3 reusingView:(id)v4;
- (id)pickerView:(id)v1 viewForRow:(long long)v2 forComponent:(long long)v3 reusingView:(id)v4;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
@end


/*****************************************************************/

@protocol ViewGlucoseIntentHandling<NSObject>
- (void)handleViewGlucose:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)handleViewGlucose:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;

@optional
- (void)confirmViewGlucose:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)confirmViewGlucose:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
@end


/*****************************************************************/

@protocol UIScrollViewDelegate<NSObject>

@optional
- (void)scrollViewDidScroll:(id)v1;
- (void)scrollViewDidZoom:(id)v1;
- (void)scrollViewWillBeginDragging:(id)v1;
- (void)scrollViewWillEndDragging:(id)v1 withVelocity:(struct CGPoint)v2 targetContentOffset:(struct CGPoint *)v3;
- (void)scrollViewDidEndDragging:(id)v1 willDecelerate:(bool)v2;
- (void)scrollViewWillBeginDecelerating:(id)v1;
- (void)scrollViewDidEndDecelerating:(id)v1;
- (void)scrollViewDidEndScrollingAnimation:(id)v1;
- (id)viewForZoomingInScrollView:(id)v1;
- (id)viewForZoomingInScrollView:(id)v1;
- (void)scrollViewWillBeginZooming:(id)v1 withView:(id)v2;
- (void)scrollViewWillBeginZooming:(id)v1 withView:(id)v2;
- (void)scrollViewDidEndZooming:(id)v1 withView:(id)v2 atScale:(double)v3;
- (void)scrollViewDidEndZooming:(id)v1 withView:(id)v2 atScale:(double)v3;
- (bool)scrollViewShouldScrollToTop:(id)v1;
- (void)scrollViewDidScrollToTop:(id)v1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)v1;
@end


/*****************************************************************/

@protocol WidgetConfigurationIntentHandling<NSObject>

@optional
- (void)confirmWidgetConfiguration:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)confirmWidgetConfiguration:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)handleWidgetConfiguration:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)handleWidgetConfiguration:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
@end


/*****************************************************************/

@protocol UITextViewDelegate<NSObject,UIScrollViewDelegate>

@optional
- (bool)textViewShouldBeginEditing:(id)v1;
- (bool)textViewShouldEndEditing:(id)v1;
- (void)textViewDidBeginEditing:(id)v1;
- (void)textViewDidEndEditing:(id)v1;
- (bool)textView:(id)v1 shouldChangeTextInRange:(struct _NSRange)v2 replacementText:(id)v3;
- (bool)textView:(id)v1 shouldChangeTextInRange:(struct _NSRange)v2 replacementText:(id)v3;
- (void)textViewDidChange:(id)v1;
- (void)textViewDidChangeSelection:(id)v1;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (bool)textView:(id)v1 shouldInteractWithTextAttachment:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (bool)textView:(id)v1 shouldInteractWithTextAttachment:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3;
- (bool)textView:(id)v1 shouldInteractWithTextAttachment:(id)v2 inRange:(struct _NSRange)v3;
- (bool)textView:(id)v1 shouldInteractWithTextAttachment:(id)v2 inRange:(struct _NSRange)v3;
- (id)textView:(id)v1 editMenuForTextInRange:(struct _NSRange)v2 suggestedActions:(id)v3;
- (id)textView:(id)v1 editMenuForTextInRange:(struct _NSRange)v2 suggestedActions:(id)v3;
- (void)textView:(id)v1 willPresentEditMenuWithAnimator:(id)v2;
- (void)textView:(id)v1 willPresentEditMenuWithAnimator:(id)v2;
- (void)textView:(id)v1 willDismissEditMenuWithAnimator:(id)v2;
- (void)textView:(id)v1 willDismissEditMenuWithAnimator:(id)v2;
@end


/*****************************************************************/

@protocol CNContactPickerDelegate<NSObject>

@optional
- (void)contactPickerDidCancel:(id)v1;
- (void)contactPicker:(id)v1 didSelectContact:(id)v2;
- (void)contactPicker:(id)v1 didSelectContact:(id)v2;
- (void)contactPicker:(id)v1 didSelectContactProperty:(id)v2;
- (void)contactPicker:(id)v1 didSelectContactProperty:(id)v2;
- (void)contactPicker:(id)v1 didSelectContacts:(id)v2;
- (void)contactPicker:(id)v1 didSelectContacts:(id)v2;
- (void)contactPicker:(id)v1 didSelectContactProperties:(id)v2;
@end


/*****************************************************************/

@protocol WKNavigationDelegate<NSObject>

@optional
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 preferences:(id)v3 decisionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 preferences:(id)v3 decisionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)webView:(id)v1 decidePolicyForNavigationResponse:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 decidePolicyForNavigationResponse:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didStartProvisionalNavigation:(id)v2;
- (void)webView:(id)v1 didReceiveServerRedirectForProvisionalNavigation:(id)v2;
- (void)webView:(id)v1 didFailProvisionalNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didCommitNavigation:(id)v2;
- (void)webView:(id)v1 didCommitNavigation:(id)v2;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
- (void)webView:(id)v1 didFailNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didFailNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didReceiveAuthenticationChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didReceiveAuthenticationChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webViewWebContentProcessDidTerminate:(id)v1;
- (void)webView:(id)v1 authenticationChallenge:(id)v2 shouldAllowDeprecatedTLS:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 navigationAction:(id)v2 didBecomeDownload:(id)v3;
- (void)webView:(id)v1 navigationAction:(id)v2 didBecomeDownload:(id)v3;
- (void)webView:(id)v1 navigationResponse:(id)v2 didBecomeDownload:(id)v3;
- (void)webView:(id)v1 navigationResponse:(id)v2 didBecomeDownload:(id)v3;
@end


/*****************************************************************/

@protocol UICollectionViewDataSource<NSObject>
- (long long)collectionView:(id)v1 numberOfItemsInSection:(long long)v2;
- (id)collectionView:(id)v1 cellForItemAtIndexPath:(id)v2;
- (id)collectionView:(id)v1 cellForItemAtIndexPath:(id)v2;

@optional
- (long long)numberOfSectionsInCollectionView:(id)v1;
- (long long)numberOfSectionsInCollectionView:(id)v1;
- (id)collectionView:(id)v1 viewForSupplementaryElementOfKind:(id)v2 atIndexPath:(id)v3;
- (id)collectionView:(id)v1 viewForSupplementaryElementOfKind:(id)v2 atIndexPath:(id)v3;
- (bool)collectionView:(id)v1 canMoveItemAtIndexPath:(id)v2;
- (bool)collectionView:(id)v1 canMoveItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 moveItemAtIndexPath:(id)v2 toIndexPath:(id)v3;
- (void)collectionView:(id)v1 moveItemAtIndexPath:(id)v2 toIndexPath:(id)v3;
- (id)indexTitlesForCollectionView:(id)v1;
- (id)indexTitlesForCollectionView:(id)v1;
- (id)collectionView:(id)v1 indexPathForIndexTitle:(id)v2 atIndex:(long long)v3;
- (id)collectionView:(id)v1 indexPathForIndexTitle:(id)v2 atIndex:(long long)v3;
@end


/*****************************************************************/

@protocol UIPopoverPresentationControllerDelegate<UIAdaptivePresentationControllerDelegate>

@optional
- (void)prepareForPopoverPresentation:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)popoverPresentationControllerDidDismissPopover:(id)v1;
- (void)popoverPresentationController:(id)v1 willRepositionPopoverToRect:(struct CGRect *)v2 inView:(id *)v3;
- (void)popoverPresentationController:(id)v1 willRepositionPopoverToRect:(struct CGRect *)v2 inView:(id *)v3;
@end


/*****************************************************************/

@protocol AVAudioPlayerDelegate<NSObject>

@optional
- (void)audioPlayerDidFinishPlaying:(id)v1 successfully:(bool)v2;
- (void)audioPlayerDecodeErrorDidOccur:(id)v1 error:(id)v2;
- (void)audioPlayerBeginInterruption:(id)v1;
- (void)audioPlayerEndInterruption:(id)v1 withOptions:(unsigned long long)v2;
- (void)audioPlayerEndInterruption:(id)v1 withFlags:(unsigned long long)v2;
- (void)audioPlayerEndInterruption:(id)v1;
@end


/*****************************************************************/

@protocol INUIAddVoiceShortcutViewControllerDelegate<NSObject>
- (void)addVoiceShortcutViewController:(id)v1 didFinishWithVoiceShortcut:(id)v2 error:(id)v3;
- (void)addVoiceShortcutViewController:(id)v1 didFinishWithVoiceShortcut:(id)v2 error:(id)v3;
- (void)addVoiceShortcutViewControllerDidCancel:(id)v1;
@end


/*****************************************************************/

@protocol UNUserNotificationCenterDelegate<NSObject>

@optional
- (void)userNotificationCenter:(id)v1 willPresentNotification:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 willPresentNotification:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 didReceiveNotificationResponse:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 didReceiveNotificationResponse:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 openSettingsForNotification:(id)v2;
- (void)userNotificationCenter:(id)v1 openSettingsForNotification:(id)v2;
@end


/*****************************************************************/

@protocol UITableViewDataSource<NSObject>
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;

@optional
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (id)tableView:(id)v1 titleForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 titleForFooterInSection:(long long)v2;
- (bool)tableView:(id)v1 canEditRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canEditRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canMoveRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canMoveRowAtIndexPath:(id)v2;
- (id)sectionIndexTitlesForTableView:(id)v1;
- (id)sectionIndexTitlesForTableView:(id)v1;
- (long long)tableView:(id)v1 sectionForSectionIndexTitle:(id)v2 atIndex:(long long)v3;
- (long long)tableView:(id)v1 sectionForSectionIndexTitle:(id)v2 atIndex:(long long)v3;
- (void)tableView:(id)v1 commitEditingStyle:(long long)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 commitEditingStyle:(long long)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 moveRowAtIndexPath:(id)v2 toIndexPath:(id)v3;
- (void)tableView:(id)v1 moveRowAtIndexPath:(id)v2 toIndexPath:(id)v3;
@end


/*****************************************************************/

@protocol NSURLSessionDelegate<NSObject>

@optional
- (void)URLSession:(id)v1 didBecomeInvalidWithError:(id)v2;
- (void)URLSession:(id)v1 didReceiveChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)v1;
@end


/*****************************************************************/

@protocol NSObject
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (bool)isEqual:(id)v1;
- (Class)class;
- (id)self;
- (id)performSelector:(SEL)v1;
- (id)performSelector:(SEL)v1 withObject:(id)v2;
- (id)performSelector:(SEL)v1 withObject:(id)v2 withObject:(id)v3;
- (bool)isProxy;
- (bool)isKindOfClass:(Class)v1;
- (bool)isMemberOfClass:(Class)v1;
- (bool)conformsToProtocol:(id)v1;
- (bool)respondsToSelector:(SEL)v1;
- (id)retain;
- (oneway  void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (struct _NSZone *)zone;
- (unsigned long long)hash;
- (Class)superclass;
- (id)description;

@optional
- (id)debugDescription;
@end


/*****************************************************************/

@protocol WKNavigationDelegate<NSObject>

@optional
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 preferences:(id)v3 decisionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)webView:(id)v1 decidePolicyForNavigationResponse:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didStartProvisionalNavigation:(id)v2;
- (void)webView:(id)v1 didReceiveServerRedirectForProvisionalNavigation:(id)v2;
- (void)webView:(id)v1 didFailProvisionalNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didCommitNavigation:(id)v2;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
- (void)webView:(id)v1 didFailNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didReceiveAuthenticationChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webViewWebContentProcessDidTerminate:(id)v1;
- (void)webView:(id)v1 authenticationChallenge:(id)v2 shouldAllowDeprecatedTLS:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 navigationAction:(id)v2 didBecomeDownload:(id)v3;
- (void)webView:(id)v1 navigationResponse:(id)v2 didBecomeDownload:(id)v3;
@end


/*****************************************************************/

@protocol WKUIDelegate<NSObject>

@optional
- (id)webView:(id)v1 createWebViewWithConfiguration:(id)v2 forNavigationAction:(id)v3 windowFeatures:(id)v4;
- (void)webViewDidClose:(id)v1;
- (void)webView:(id)v1 runJavaScriptAlertPanelWithMessage:(id)v2 initiatedByFrame:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)webView:(id)v1 runJavaScriptConfirmPanelWithMessage:(id)v2 initiatedByFrame:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)webView:(id)v1 runJavaScriptTextInputPanelWithPrompt:(id)v2 defaultText:(id)v3 initiatedByFrame:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)webView:(id)v1 requestMediaCapturePermissionForOrigin:(id)v2 initiatedByFrame:(id)v3 type:(long long)v4 decisionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)webView:(id)v1 requestDeviceOrientationAndMotionPermissionForOrigin:(id)v2 initiatedByFrame:(id)v3 decisionHandler:(void (^ /* unknown block signature */)(void))v4;
- (bool)webView:(id)v1 shouldPreviewElement:(id)v2;
- (id)webView:(id)v1 previewingViewControllerForElement:(id)v2 defaultActions:(id)v3;
- (void)webView:(id)v1 commitPreviewingViewController:(id)v2;
- (void)webView:(id)v1 contextMenuConfigurationForElement:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 contextMenuWillPresentForElement:(id)v2;
- (void)webView:(id)v1 contextMenuForElement:(id)v2 willCommitWithAnimator:(id)v3;
- (void)webView:(id)v1 contextMenuDidEndForElement:(id)v2;
- (void)webView:(id)v1 showLockdownModeFirstUseMessage:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
@end


/*****************************************************************/

@protocol NSCoding
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@protocol NXOAuth2ClientDelegate<NXOAuth2TrustDelegate>
- (void)oauthClientNeedsAuthentication:(id)v1;

@optional
- (void)oauthClientDidGetAccessToken:(id)v1;
- (void)oauthClientDidLoseAccessToken:(id)v1;
- (void)oauthClientDidRefreshAccessToken:(id)v1;
- (void)oauthClient:(id)v1 didFailToGetAccessTokenWithError:(id)v2;
@end


/*****************************************************************/

@protocol NXOAuth2TrustDelegate<NSObject>

@optional
- (int)connection:(id)v1 trustModeForHostname:(id)v2;
- (id)connection:(id)v1 trustedCertificatesForHostname:(id)v2;
@end


/*****************************************************************/

@protocol NXOAuth2ConnectionDelegate<NSObject,NXOAuth2TrustDelegate>

@optional
- (void)oauthConnection:(id)v1 didReceiveResponse:(id)v2;
- (void)oauthConnection:(id)v1 didFinishWithData:(id)v2;
- (void)oauthConnection:(id)v1 didFailWithError:(id)v2;
- (void)oauthConnection:(id)v1 didReceiveData:(id)v2;
- (void)oauthConnection:(id)v1 didSendBytes:(unsigned long long)v2 ofTotal:(unsigned long long)v3;
- (void)oauthConnection:(id)v1 didReceiveRedirectToURL:(id)v2;
@end


/*****************************************************************/

@protocol WCSessionDelegate<NSObject>
- (void)session:(id)v1 activationDidCompleteWithState:(long long)v2 error:(id)v3;
- (void)session:(id)v1 activationDidCompleteWithState:(long long)v2 error:(id)v3;
- (void)sessionDidBecomeInactive:(id)v1;
- (void)sessionDidDeactivate:(id)v1;

@optional
- (void)sessionWatchStateDidChange:(id)v1;
- (void)sessionCompanionAppInstalledDidChange:(id)v1;
- (void)sessionReachabilityDidChange:(id)v1;
- (void)session:(id)v1 didReceiveMessage:(id)v2;
- (void)session:(id)v1 didReceiveMessage:(id)v2 replyHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)session:(id)v1 didReceiveMessageData:(id)v2;
- (void)session:(id)v1 didReceiveMessageData:(id)v2 replyHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)session:(id)v1 didReceiveApplicationContext:(id)v2;
- (void)session:(id)v1 didFinishUserInfoTransfer:(id)v2 error:(id)v3;
- (void)session:(id)v1 didFinishUserInfoTransfer:(id)v2 error:(id)v3;
- (void)session:(id)v1 didReceiveUserInfo:(id)v2;
- (void)session:(id)v1 didFinishFileTransfer:(id)v2 error:(id)v3;
- (void)session:(id)v1 didFinishFileTransfer:(id)v2 error:(id)v3;
- (void)session:(id)v1 didReceiveFile:(id)v2;
- (void)session:(id)v1 didReceiveFile:(id)v2;
@end


/*****************************************************************/

@protocol FIRLibrary
+ (id)componentsToRegister;

@optional
+ (void)configureWithApp:(id)v1;
@end


/*****************************************************************/

@protocol FIRComponentLifecycleMaintainer
- (void)appWillBeDeleted:(id)v1;
@end


/*****************************************************************/

@protocol FIRHeartbeatLoggerProtocol<NSObject>
- (void)log;
- (id)flushHeartbeatsIntoPayload;
- (long long)heartbeatCodeForToday;
@end


/*****************************************************************/

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)v1;
@end


/*****************************************************************/

@protocol FIRAnalyticsInteropListener<NSObject>
- (void)messageTriggered:(id)v1 parameters:(id)v2;
@end


/*****************************************************************/

@protocol NSURLSessionTaskDelegate<NSURLSessionDelegate>

@optional
- (void)URLSession:(id)v1 didCreateTask:(id)v2;
- (void)URLSession:(id)v1 task:(id)v2 willBeginDelayedRequest:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)URLSession:(id)v1 taskIsWaitingForConnectivity:(id)v2;
- (void)URLSession:(id)v1 task:(id)v2 willPerformHTTPRedirection:(id)v3 newRequest:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)URLSession:(id)v1 task:(id)v2 didReceiveChallenge:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)URLSession:(id)v1 task:(id)v2 needNewBodyStream:(void (^ /* unknown block signature */)(void))v3;
- (void)URLSession:(id)v1 task:(id)v2 didSendBodyData:(long long)v3 totalBytesSent:(long long)v4 totalBytesExpectedToSend:(long long)v5;
- (void)URLSession:(id)v1 task:(id)v2 didFinishCollectingMetrics:(id)v3;
- (void)URLSession:(id)v1 task:(id)v2 didCompleteWithError:(id)v3;
@end


/*****************************************************************/

@protocol MXMetricManagerSubscriber<NSObject>

@optional
- (void)didReceiveMetricPayloads:(id)v1;
- (void)didReceiveDiagnosticPayloads:(id)v1;
@end


/*****************************************************************/

@protocol NSStreamDelegate<NSObject>

@optional
- (void)stream:(id)v1 handleEvent:(unsigned long long)v2;
@end


/*****************************************************************/

@protocol GDTCOREventDataObject<NSObject>
- (id)transportBytes;
@end


/*****************************************************************/

@protocol FIRCLSDownloadAndSaveSettingsOperationDelegate<NSObject>
- (void)operation:(id)v1 didDownloadAndSaveSettingsWithError:(id)v2;
@end


/*****************************************************************/

@protocol FIRAnalyticsInterop
- (void)setConditionalUserProperty:(id)v1;
- (void)clearConditionalUserProperty:(id)v1 forOrigin:(id)v2 clearEventName:(id)v3 clearEventParameters:(id)v4;
- (id)conditionalUserProperties:(id)v1 propertyNamePrefix:(id)v2;
- (long long)maxUserProperties:(id)v1;
- (void)getUserPropertiesWithCallback:(void (^ /* unknown block signature */)(void))v1;
- (void)logEventWithOrigin:(id)v1 name:(id)v2 parameters:(id)v3;
- (void)setUserPropertyWithOrigin:(id)v1 name:(id)v2 value:(id)v3;
- (void)registerAnalyticsListener:(id)v1 withOrigin:(id)v2;
- (void)unregisterAnalyticsListenerWithOrigin:(id)v1;
@end


/*****************************************************************/

@protocol FIRCrashlyticsInstanceProvider<NSObject>
@end


/*****************************************************************/

@protocol FIRInstallationsInstanceProvider<FIRLibrary>
@end


/*****************************************************************/

@protocol FIRInstallationsBackoffControllerProtocol<NSObject>
- (void)registerEvent:(long long)v1;
- (bool)isNextRequestAllowed;
@end


/*****************************************************************/

@protocol NSSecureCoding<NSCoding>
+ (bool)supportsSecureCoding;
@end


/*****************************************************************/

@protocol GDTCCTUploadMetadataProvider<NSObject>
- (id)nextUploadTimeForTarget:(long long)v1;
- (void)setNextUploadTime:(id)v1 forTarget:(long long)v2;
- (id)APIKeyForTarget:(long long)v1;
@end


/*****************************************************************/

@protocol GDTCORUploader<NSObject,GDTCORLifecycleProtocol>
- (void)uploadTarget:(long long)v1 withConditions:(long long)v2;
@end


/*****************************************************************/

@protocol GDTCORLifecycleProtocol<NSObject>

@optional
- (void)appWillTerminate:(id)v1;
- (void)appWillBackground:(id)v1;
- (void)appWillForeground:(id)v1;
@end


/*****************************************************************/

@protocol GDTCORStorageProtocol<NSObject,GDTCORLifecycleProtocol>
@property (nonatomic) NSObject<GDTCORStorageDelegate> * delegate;
- (void)storeEvent:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)hasEventsForTarget:(long long)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)batchWithEventSelector:(id)v1 batchExpiration:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)removeBatchWithID:(id)v1 deleteEvents:(bool)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)batchIDsForTarget:(long long)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)checkForExpirations;
- (void)storeLibraryData:(id)v1 forKey:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)libraryDataForKey:(id)v1 onFetchComplete:(void (^ /* unknown block signature */)(void))v2 setNewValue:(void (^ /* unknown block signature */)(void))v3;
- (void)removeLibraryDataForKey:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)storageSizeWithCallback:(void (^ /* unknown block signature */)(void))v1;
- (id)delegate;
- (void)setDelegate:(id)v1;
@end


/*****************************************************************/

@protocol GDTCORStorageDelegate<NSObject>
- (void)storage:(id)v1 didRemoveExpiredEvents:(id)v2;
- (void)storage:(id)v1 didDropEvent:(id)v2;
@end


/*****************************************************************/

@protocol GDTCORMetricsControllerProtocol<GDTCORStorageDelegate>
- (id)logEventsDroppedForReason:(long long)v1 events:(id)v2;
- (id)getAndResetMetrics;
- (id)offerMetrics:(id)v1;
@end


/*****************************************************************/

@protocol GDTCORApplicationProtocol<NSObject>
@property (readonly) bool isRunningInBackground;
- (unsigned long long)beginBackgroundTaskWithName:(id)v1 expirationHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)endBackgroundTask:(unsigned long long)v1;
- (bool)isRunningInBackground;
@end


/*****************************************************************/

@protocol UIApplicationDelegate<NSObject>
@property (retain,nonatomic) UIWindow * window;

@optional
- (void)applicationDidFinishLaunching:(id)v1;
- (bool)application:(id)v1 willFinishLaunchingWithOptions:(id)v2;
- (bool)application:(id)v1 didFinishLaunchingWithOptions:(id)v2;
- (void)applicationDidBecomeActive:(id)v1;
- (void)applicationWillResignActive:(id)v1;
- (bool)application:(id)v1 handleOpenURL:(id)v2;
- (bool)application:(id)v1 openURL:(id)v2 sourceApplication:(id)v3 annotation:(id)v4;
- (bool)application:(id)v1 openURL:(id)v2 options:(id)v3;
- (void)applicationDidReceiveMemoryWarning:(id)v1;
- (void)applicationWillTerminate:(id)v1;
- (void)applicationSignificantTimeChange:(id)v1;
- (void)application:(id)v1 willChangeStatusBarOrientation:(long long)v2 duration:(double)v3;
- (void)application:(id)v1 didChangeStatusBarOrientation:(long long)v2;
- (void)application:(id)v1 willChangeStatusBarFrame:(struct CGRect)v2;
- (void)application:(id)v1 didChangeStatusBarFrame:(struct CGRect)v2;
- (void)application:(id)v1 didRegisterUserNotificationSettings:(id)v2;
- (void)application:(id)v1 didRegisterForRemoteNotificationsWithDeviceToken:(id)v2;
- (void)application:(id)v1 didFailToRegisterForRemoteNotificationsWithError:(id)v2;
- (void)application:(id)v1 didReceiveRemoteNotification:(id)v2;
- (void)application:(id)v1 didReceiveLocalNotification:(id)v2;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forLocalNotification:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forRemoteNotification:(id)v3 withResponseInfo:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forRemoteNotification:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)application:(id)v1 handleActionWithIdentifier:(id)v2 forLocalNotification:(id)v3 withResponseInfo:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (void)application:(id)v1 didReceiveRemoteNotification:(id)v2 fetchCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 performFetchWithCompletionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)application:(id)v1 performActionForShortcutItem:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 handleEventsForBackgroundURLSession:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 handleWatchKitExtensionRequest:(id)v2 reply:(void (^ /* unknown block signature */)(void))v3;
- (void)applicationShouldRequestHealthAuthorization:(id)v1;
- (id)application:(id)v1 handlerForIntent:(id)v2;
- (void)application:(id)v1 handleIntent:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)applicationDidEnterBackground:(id)v1;
- (void)applicationWillEnterForeground:(id)v1;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)v1;
- (void)applicationProtectedDataDidBecomeAvailable:(id)v1;
- (unsigned long long)application:(id)v1 supportedInterfaceOrientationsForWindow:(id)v2;
- (bool)application:(id)v1 shouldAllowExtensionPointIdentifier:(id)v2;
- (id)application:(id)v1 viewControllerWithRestorationIdentifierPath:(id)v2 coder:(id)v3;
- (bool)application:(id)v1 shouldSaveSecureApplicationState:(id)v2;
- (bool)application:(id)v1 shouldRestoreSecureApplicationState:(id)v2;
- (void)application:(id)v1 willEncodeRestorableStateWithCoder:(id)v2;
- (void)application:(id)v1 didDecodeRestorableStateWithCoder:(id)v2;
- (bool)application:(id)v1 shouldSaveApplicationState:(id)v2;
- (bool)application:(id)v1 shouldRestoreApplicationState:(id)v2;
- (bool)application:(id)v1 willContinueUserActivityWithType:(id)v2;
- (bool)application:(id)v1 continueUserActivity:(id)v2 restorationHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)application:(id)v1 didFailToContinueUserActivityWithType:(id)v2 error:(id)v3;
- (void)application:(id)v1 didUpdateUserActivity:(id)v2;
- (void)application:(id)v1 userDidAcceptCloudKitShareWithMetadata:(id)v2;
- (id)application:(id)v1 configurationForConnectingSceneSession:(id)v2 options:(id)v3;
- (void)application:(id)v1 didDiscardSceneSessions:(id)v2;
- (bool)applicationShouldAutomaticallyLocalizeKeyCommands:(id)v1;
- (id)window;
- (void)setWindow:(id)v1;
@end


/*****************************************************************/

@protocol GDTCORApplicationDelegate<UIApplicationDelegate>
@end


/*****************************************************************/

@protocol GDTCORStoragePromiseProtocol<GDTCORStorageProtocol>
- (id)batchIDsForTarget:(long long)v1;
- (id)removeBatchWithID:(id)v1 deleteEvents:(bool)v2;
- (id)removeBatchesWithIDs:(id)v1 deleteEvents:(bool)v2;
- (id)removeAllBatchesForTarget:(long long)v1 deleteEvents:(bool)v2;
- (id)fetchAndUpdateMetricsWithHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)fetchStorageMetadata;
- (id)hasEventsForTarget:(long long)v1;
- (id)batchWithEventSelector:(id)v1 batchExpiration:(id)v2;
@end


/*****************************************************************/

@protocol GULHeartbeatDateStorable<NSObject>
- (id)heartbeatDateForTag:(id)v1;
- (bool)setHearbeatDate:(id)v1 forTag:(id)v2;
@end


/*****************************************************************/

@protocol NSXMLParserDelegate<NSObject>

@optional
- (void)parserDidStartDocument:(id)v1;
- (void)parserDidEndDocument:(id)v1;
- (void)parser:(id)v1 foundNotationDeclarationWithName:(id)v2 publicID:(id)v3 systemID:(id)v4;
- (void)parser:(id)v1 foundUnparsedEntityDeclarationWithName:(id)v2 publicID:(id)v3 systemID:(id)v4 notationName:(id)v5;
- (void)parser:(id)v1 foundAttributeDeclarationWithName:(id)v2 forElement:(id)v3 type:(id)v4 defaultValue:(id)v5;
- (void)parser:(id)v1 foundElementDeclarationWithName:(id)v2 model:(id)v3;
- (void)parser:(id)v1 foundInternalEntityDeclarationWithName:(id)v2 value:(id)v3;
- (void)parser:(id)v1 foundExternalEntityDeclarationWithName:(id)v2 publicID:(id)v3 systemID:(id)v4;
- (void)parser:(id)v1 didStartElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4 attributes:(id)v5;
- (void)parser:(id)v1 didEndElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4;
- (void)parser:(id)v1 didStartMappingPrefix:(id)v2 toURI:(id)v3;
- (void)parser:(id)v1 didEndMappingPrefix:(id)v2;
- (void)parser:(id)v1 foundCharacters:(id)v2;
- (void)parser:(id)v1 foundIgnorableWhitespace:(id)v2;
- (void)parser:(id)v1 foundProcessingInstructionWithTarget:(id)v2 data:(id)v3;
- (void)parser:(id)v1 foundComment:(id)v2;
- (void)parser:(id)v1 foundCDATA:(id)v2;
- (id)parser:(id)v1 resolveExternalEntityName:(id)v2 systemID:(id)v3;
- (void)parser:(id)v1 parseErrorOccurred:(id)v2;
- (void)parser:(id)v1 validationErrorOccurred:(id)v2;
@end


/*****************************************************************/

@protocol NSURLSessionDelegate<NSObject>

@optional
- (void)URLSession:(id)v1 didBecomeInvalidWithError:(id)v2;
- (void)URLSession:(id)v1 didBecomeInvalidWithError:(id)v2;
- (void)URLSession:(id)v1 didReceiveChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)URLSession:(id)v1 didReceiveChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)v1;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G728ShareInviteFollowerViewModel (G7)<CNContactViewControllerDelegate,CNContactPickerDelegate>
- (void)contactPicker:(id)v1 didSelectContact:(id)v2;
@end


/*****************************************************************/

@interface UIViewController (G7)
@property (nonatomic,readonly) NSString * className;
- (id)className;
@end


/*****************************************************************/

@interface _TtC2G736AlertScheduleDaysTableViewController (G7)
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForFooterInSection:(long long)v2;
@end


/*****************************************************************/

@interface _TtC2G720ActionSheetContainer (G7)<UIPopoverPresentationControllerDelegate>
- (void)prepareForPopoverPresentation:(id)v1;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
@end


/*****************************************************************/

@interface _TtC2G719DebugViewController (G71)
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (bool)textFieldShouldReturn:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G724MainTabBarViewController (G7)<UITabBarControllerDelegate>
- (bool)tabBarController:(id)v1 shouldSelectViewController:(id)v2;
- (void)tabBarController:(id)v1 didSelectViewController:(id)v2;
@end


/*****************************************************************/

@interface _TtC2G728OnboardingHomeViewController (G7)<DXCMLegalAgreementsVCDelegate>
- (void)userAgreed;
@end


/*****************************************************************/

@interface _TtC2G739HourMinutePickerAllowZeroViewController (G7)<UIPickerViewDelegate,UIPickerViewDataSource>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (double)pickerView:(id)v1 widthForComponent:(long long)v2;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
@end


/*****************************************************************/

@interface _TtC2G739OnboardingOverviewSectionViewController (G7)<UIScrollViewDelegate>
- (void)scrollViewDidScroll:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G724TrendGraphViewController (G7)
- (void)didScrubWithGestureRecognizer:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G711AudioPlayer (G7)<AVAudioPlayerDelegate>
- (void)audioPlayerDidFinishPlaying:(id)v1 successfully:(bool)v2;
@end


/*****************************************************************/

@interface _TtC2G733AddEventActionSheetViewController (G7)<UITableViewDataSource,UITableViewDelegate>
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
@end


/*****************************************************************/

@interface _TtC2G719AboutViewController (G7)
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
@end


/*****************************************************************/

@interface _TtC2G717WebViewController (G7)<WKNavigationDelegate>
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 decidePolicyForNavigationResponse:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didFailProvisionalNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didFailNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
@end


/*****************************************************************/

@interface UINavigationController (G7)
@property (nonatomic,readonly) bool shouldPopOnTransition;
- (bool)shouldPopOnTransition;
@end


/*****************************************************************/

@interface _TtC2G710CameraView (G7)<AVCaptureVideoDataOutputSampleBufferDelegate>
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (void)captureOutput:(id)v1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)v2 fromConnection:(id)v3;
@end


/*****************************************************************/

@interface _TtC2G735PhoneConflictBlockingViewController (G7)<UITableViewDelegate,UITableViewDataSource>
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC2G732NewEventCollectionViewController (G7)<UITextFieldDelegate,UICollectionViewDelegate>
- (void)collectionView:(id)v1 willDisplayCell:(id)v2 forItemAtIndexPath:(id)v3;
- (bool)collectionView:(id)v1 shouldSelectItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (void)onIntensitySwitchChange:(id)v1;
- (void)onCancelButtonTap:(id)v1;
- (void)onBloodGlucoseTextFieldValueChange:(id)v1;
- (void)onBloodGlucoseTextFieldDidBeginEditing:(id)v1;
- (void)onBloodGlucoseTextFieldDidEndEditing:(id)v1;
- (void)onDateTimeButtonTap:(id)v1;
- (void)onDatePickerValueChange:(id)v1;
- (void)onSaveButtonTap:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G729LandscapeDetailViewController (G7)
- (id)createLandscapeTrendGraphWithDataSourceWithCoder:(id)v1;
- (id)createLandscapeControlCenterViewControllerWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G734CalibrationLearnMoreViewController (G7)<UITextViewDelegate>
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
@end


/*****************************************************************/

@interface _TtC2G711AppDelegate (G7)<UNUserNotificationCenterDelegate>
- (void)userNotificationCenter:(id)v1 didReceiveNotificationResponse:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 willPresentNotification:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
@end


/*****************************************************************/

@interface _TtC2G733AlertProfileDetailsViewController (G7)
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (void)tableView:(id)v1 willDisplayFooterView:(id)v2 forSection:(long long)v3;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)showMoreInfo:(id)v1;
- (void)infoButtonTapped;
@end


/*****************************************************************/

@interface _TtC2G734SoundAndVibrateTableViewController (G7)
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 titleForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
@end


/*****************************************************************/

@interface _TtC2G722SettingsViewController (G7)<UIPopoverPresentationControllerDelegate>
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G733ActionSheetPresentationController (G7)
- (void)handleTapWithRecognizer:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G730EventsCollectionViewController (G71)<UIPopoverPresentationControllerDelegate>
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)refreshEventList;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G744SoundIntensityActionSheetTableViewController (G7)
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
@end


/*****************************************************************/

@interface _TtC2G729ManualCodeEntryViewController (G7)<UIKeyInput>
@property (nonatomic,readonly) bool hasText;
- (bool)hasText;
- (void)insertText:(id)v1;
- (void)deleteBackward;
@end


/*****************************************************************/

@interface _TtC2G733SoundSelectionTableViewController (G7)
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
@end


/*****************************************************************/

@interface _TtC2G727AlertProfilesViewController (G7)<UIPopoverPresentationControllerDelegate>
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (void)tableView:(id)v1 willDisplayFooterView:(id)v2 forSection:(long long)v3;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)infoButtonTapped;
@end


/*****************************************************************/

@interface UICollectionViewCell (G7)
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic,retain) UIColor * shadowColor;
- (double)cornerRadius;
- (void)setCornerRadius:(double)v1;
- (double)borderWidth;
- (void)setBorderWidth:(double)v1;
- (id)borderColor;
- (void)setBorderColor:(id)v1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)v1;
- (float)shadowOpacity;
- (void)setShadowOpacity:(float)v1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)v1;
- (id)shadowColor;
- (void)setShadowColor:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G741GlucoseLevelThresholdPickerViewController (G7)<UIPickerViewDataSource,UIPickerViewDelegate>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (double)pickerView:(id)v1 rowHeightForComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
@end


/*****************************************************************/

@interface _TtC2G739ShareInviteNotificationSettingStackView (G7)
- (void)showDelayFirstNotificationDurationPicker;
@end


/*****************************************************************/

@interface _TtC2G733PhoneConflictDetailViewController (G7)<UITableViewDelegate,UITableViewDataSource>
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC2G724StopSensorViewController (G7)<UITableViewDelegate>
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC2G721GlucoseViewController (G71)<UIPopoverPresentationControllerDelegate,UIScrollViewDelegate,UICollectionViewDelegateFlowLayout,UICollectionViewDelegate,UICollectionViewDataSource>
- (long long)numberOfSectionsInCollectionView:(id)v1;
- (long long)collectionView:(id)v1 numberOfItemsInSection:(long long)v2;
- (id)collectionView:(id)v1 cellForItemAtIndexPath:(id)v2;
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
- (struct CGSize)collectionView:(id)v1 layout:(id)v2 sizeForItemAtIndexPath:(id)v3;
- (double)collectionView:(id)v1 layout:(id)v2 minimumLineSpacingForSectionAtIndex:(long long)v3;
- (void)scrollViewDidScroll:(id)v1;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)prepareForPopoverPresentation:(id)v1;
@end


/*****************************************************************/

@interface NSData (NXOAuth2)
+ (id)gul_dataByInflatingGzippedData:(id)v1 error:(id *)v2;
+ (id)gul_dataByGzippingData:(id)v1 error:(id *)v2;
- (id)nx_SHA1Digest;
- (id)nx_SHA1Hexdigest;
@end


/*****************************************************************/

@interface NSString (NXOAuth2)
+ (id)nxoauth2_stringWithUUID;
+ (id)nxoauth2_stringWithEncodedQueryParameters:(id)v1;
- (id)nxoauth2_parametersFromEncodedQueryString;
- (id)nxoauth2_URLEncodedString;
- (id)nxoauth2_URLDecodedString;
@end


/*****************************************************************/

@interface NSURL (NXOAuth2)
- (id)nxoauth2_URLByAddingParameters:(id)v1;
- (id)nxoauth2_valueForQueryParameterKey:(id)v1;
- (id)nxoauth2_URLWithoutQueryString;
- (id)nxoauth2_URLStringWithoutQueryString;
@end


/*****************************************************************/

@interface _TtC9DexAppKit18WatchCommunication (DexAppKit)<WCSessionDelegate>
- (void)session:(id)v1 activationDidCompleteWithState:(long long)v2 error:(id)v3;
- (void)sessionReachabilityDidChange:(id)v1;
- (void)sessionDidBecomeInactive:(id)v1;
- (void)sessionDidDeactivate:(id)v1;
- (void)sessionWatchStateDidChange:(id)v1;
- (void)session:(id)v1 didReceiveMessage:(id)v2;
- (void)session:(id)v1 didReceiveMessage:(id)v2 replyHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)session:(id)v1 didReceiveUserInfo:(id)v2;
- (void)session:(id)v1 didReceiveApplicationContext:(id)v2;
- (void)session:(id)v1 didReceiveFile:(id)v2;
- (void)session:(id)v1 didFinishFileTransfer:(id)v2 error:(id)v3;
@end


/*****************************************************************/

@interface NSNumber (FIRCLSWrappedReportAction)
- (long long)reportActionValue;
@end


/*****************************************************************/

@interface NSURLSession (GULPromises)
- (id)gul_dataTaskPromiseWithRequest:(id)v1;
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingAPI17XMLResponseParser (SecureNetworkingAPI)<NSXMLParserDelegate>
- (void)parser:(id)v1 didStartElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4 attributes:(id)v5;
- (void)parser:(id)v1 parseErrorOccurred:(id)v2;
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingPKI19SecureNetworkClient (SecureNetworkingPKI)<NSURLSessionDelegate>
- (void)URLSession:(id)v1 didReceiveChallenge:(id)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
@end


/*****************************************************************/

@interface _TtC15TimeProviderAPI18XMLTimestampParser (TimeProviderAPI)<NSXMLParserDelegate>
- (void)parser:(id)v1 didStartElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4 attributes:(id)v5;
- (void)parser:(id)v1 foundCharacters:(id)v2;
- (void)parser:(id)v1 didEndElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4;
@end


/*****************************************************************/

@interface _TtC2G732AddEventActionSheetTableViewCell : UITableViewCell {
    id iconImage;
    id titleLabel;
    id detailsLabel;
    id circleIconImage;
}
@property (nonatomic) UIImageView * iconImage;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * detailsLabel;
@property (nonatomic) UIImageView * circleIconImage;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719FollowerDetailsCell : UITableViewCell {
    id valueLabel;
}
@property (nonatomic) UILabel * valueLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722BottomRoundedImageView : UIImageView
- (void)layoutSubviews;
- (id)initWithImage:(id)v1;
- (id)initWithImage:(id)v1 highlightedImage:(id)v2;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G721PhoneConflictItemCell : UITableViewCell {
    id conflictName;
}
@property (nonatomic) UILabel * conflictName;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723BaseAlertViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722SensorDetailsViewModel : _TtCs12_SwiftObject {
    id sensorSessionCellViewModel;
    id accessibilityText;
    id mobileDeviceValue;
    id receiverPairingValue;
    id _topButtonAction;
    id _bottomButtonAction;
    id pairingCodeValue;
    id lastCalibrationTime;
    id txIdValue;
    id firmwareValue;
    id softwareNumberValue;
    id displayStateSubscriber;
    id dateFormatter;
}
@end


/*****************************************************************/

@interface _TtC2G726LandscapeSingleReadoutView : UIView {
    id contentView;
    id titleLabel;
    id valueLabel;
    id icon;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * valueLabel;
@property (nonatomic) UIImageView * icon;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G710BadgeLabel : UILabel
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)prepareForInterfaceBuilder;
@end


/*****************************************************************/

@interface _TtC2G727ShareStatusDetailHeaderView : UITableViewHeaderFooterView {
    id label;
    id message;
}
@property (nonatomic,retain) UILabel * label;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717EventSwimlaneNode : _TtC12PhoenixUIKit16BaseSwimlaneNode<SKPhysicsContactDelegate>
- (id)initWithTexture:(id)v1 color:(id)v2 size:(struct CGSize)v3;
- (id)initWithCoder:(id)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC2G79LifeMeter : UIView {
    id contentView;
    id fineIndicatorView;
    id coarseIndicatorStackView;
    id fineViewWidthConstraint;
    id fineIndicatorViewBackground;
    id timeLeft;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UIView * fineIndicatorView;
@property (nonatomic) UIStackView * coarseIndicatorStackView;
@property (nonatomic) NSLayoutConstraint * fineViewWidthConstraint;
@property (nonatomic) UIView * fineIndicatorViewBackground;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724PhoneConflictSummaryCell : UITableViewCell {
    id title;
    id conflictDescription;
    id howToFixButton;
}
@property (nonatomic) UILabel * title;
@property (nonatomic) UILabel * conflictDescription;
@property (nonatomic) UIButton * howToFixButton;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G716ReLoginViewModel : _TtCs12_SwiftObject {
    id appCore;
    id localizeURL;
    id webViewAction;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC2G731EventDebugActionSheetController : _TtC2G720BaseUIViewController {
    id segmentControl;
    id dateLabel;
    id dateSlider;
    id saveEventButton;
    id clearDatabaseButton;
    id noteEvent;
    id actionSheetDelegate;
    id eventRepository;
    id calibrationState;
    id calibrationDate;
}
@property (nonatomic) UISegmentedControl * segmentControl;
@property (nonatomic) UILabel * dateLabel;
@property (nonatomic) UISlider * dateSlider;
@property (nonatomic) _TtC2G714DXCMPillButton * saveEventButton;
@property (nonatomic) _TtC2G714DXCMPillButton * clearDatabaseButton;
@property (nonatomic) _TtC2G714DXCMPillButton * noteEvent;
- (void)viewDidLoad;
- (void)onEventTypeSelected:(id)v1;
- (void)onDateSliderUpdate:(id)v1;
- (void)onSaveEvent:(id)v1;
- (void)onClearEventsDatabase:(id)v1;
- (void)addMockNoteEvent;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730BluetoothOffHelpViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G710SensorCell : UICollectionViewCell {
    id sensorIconImageView;
    id sensorTitleLabel;
    id infoLabel;
    id lifeMeterContainer;
    id warmupTimeLabel;
    id lifeMeter;
    id viewModel;
}
@property (nonatomic) UIImageView * sensorIconImageView;
@property (nonatomic) UILabel * sensorTitleLabel;
@property (nonatomic) UILabel * infoLabel;
@property (nonatomic) UIView * lifeMeterContainer;
@property (nonatomic) UILabel * warmupTimeLabel;
@property (nonatomic) _TtC2G79LifeMeter * lifeMeter;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728SecurityScreenViewController : _TtC2G720BaseUIViewController {
    id versionLabel;
    id copyrightLabel;
}
@property (nonatomic) UILabel * versionLabel;
@property (nonatomic) UILabel * copyrightLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727GcsUoMOptionsViewController : _TtC2G720BaseUIViewController {
    id onDoneBlock;
    id appStateRepository;
    id flagImageView;
    id countryOfResidenceLabel;
    id mgdlRadionButton;
    id mmolRadioButton;
    id mgdlLabel;
    id mmolLabel;
    id nextButton;
}
@property (nonatomic) UIImageView * flagImageView;
@property (nonatomic) UILabel * countryOfResidenceLabel;
@property (nonatomic) _TtC2G711RadioButton * mgdlRadionButton;
@property (nonatomic) _TtC2G711RadioButton * mmolRadioButton;
@property (nonatomic) UILabel * mgdlLabel;
@property (nonatomic) UILabel * mmolLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * nextButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)technicalSupportButtonPressedWithSender:(id)v1;
- (void)radioButtonSelectedWithRadioButton:(id)v1;
- (void)nextButtonPressedWithSender:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721ConnectionsHeaderView : UITableViewHeaderFooterView {
    id label;
    id infoButton;
    id viewType;
}
@property (nonatomic) UILabel * label;
@property (nonatomic) UIButton * infoButton;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727ShareInviteFlowProgressView : UIProgressView
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
@end


/*****************************************************************/

@interface _TtC2G714DXCMPillButton : UIButton {
    id savedBackgroundColor;
    id customTitleInsets;
    id isHaptic;
    id borderColor;
    id borderWidth;
    id tapMargin;
    id alwaysShowBorder;
}
@property (nonatomic) bool isHaptic;
@property (nonatomic) bool isDestructive;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double tapMargin;
@property (nonatomic) bool alwaysShowBorder;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool enabled;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (bool)isHighlighted;
- (bool)isEnabled;
- (void)layoutSubviews;
- (void)sendAction:(SEL)v1 to:(id)v2 forEvent:(id)v3;
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G733PhoneConflictDetailViewController : _TtC2G720BaseUIViewController {
    id conflictTitle;
    id conflictDescription;
    id instructionsTitle;
    id actionButtonView;
    id actionButton;
    id instructionsTable;
    id instructionsViewHeight;
    id moreInformationButton;
    id conflictType;
    id cellSpacing;
    id instructionCellIdentifier;
}
@property (nonatomic) UILabel * conflictTitle;
@property (nonatomic) UILabel * conflictDescription;
@property (nonatomic) UILabel * instructionsTitle;
@property (nonatomic) _TtC2G714DesignableView * actionButtonView;
@property (nonatomic) UIButton * actionButton;
@property (nonatomic) UITableView * instructionsTable;
@property (nonatomic) NSLayoutConstraint * instructionsViewHeight;
@property (nonatomic) UIButton * moreInformationButton;
- (void)viewDidLoad;
- (void)openSettings:(id)v1;
- (id)termsOfUseSegueAction:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G736SilenceAllModeSettingsViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id activateButton;
    id cancelButton;
    id activationPageTitle;
    id activationPageContent;
    id setTimeSectionTitle;
    id setTimeSectionExpirationTime;
    id setTimeSectionDurationSlider;
    id setTimeSectionDuration;
    id durationTextSubscription;
    id expirationTextSubscription;
    id descriptionTextSubscriber;
    id quietModeModel;
    id sliderHapticFeedbackGenerator;
    id previousSliderValue;
}
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * activateButton;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UILabel * activationPageTitle;
@property (nonatomic) UILabel * activationPageContent;
@property (nonatomic) UILabel * setTimeSectionTitle;
@property (nonatomic) UILabel * setTimeSectionExpirationTime;
@property (nonatomic) UISlider * setTimeSectionDurationSlider;
@property (nonatomic) UILabel * setTimeSectionDuration;
- (void)viewDidLoad;
- (void)onActivateButton:(id)v1;
- (void)onCancelButton:(id)v1;
- (void)onSliderChange:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728StopSensorFeedbackHeaderView : UITableViewHeaderFooterView
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G728SettingsNavigationController : UINavigationController {
    id createdToaster;
}
@property (nonatomic,readonly) bool shouldPopOnTransition;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)v1;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G715EventsViewModel : _TtCs12_SwiftObject {
    id eventRepositoryMonitor;
    id appSettingsRepositoryMonitor;
    id glucoseRepositoryMonitor;
    id appCore;
    id subscribers;
    id tooltipDelegate;
    id firstEventToolTipTitle;
    id firstEventToolTipDescription;
    id firstEventToolTipButtonTitle;
    id showFirstEventToolTip;
    id _todayEvents;
    id _yesterdayEvents;
    id _dayBeforeYesterdayEvents;
    id _lastUpdatedEvent;
    id _showEmptyState;
}
@end


/*****************************************************************/

@interface _TtC2G724AlertActionTableViewCell : UITableViewCell {
    id descriptionLabel;
    id actionName;
    id accessibilityName;
    id actionColor;
}
@property (nonatomic) UILabel * descriptionLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725GlucoseTimeIntervalButton : _TtC2G719DXCMSecondaryButton {
    id timeInterval;
}
@property (nonatomic) bool selected;
@property (nonatomic) bool highlighted;
- (bool)isSelected;
- (bool)isHighlighted;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G723LandscapeMagGlassMiniVC : UIViewController {
    id subscribers;
    id viewModel;
    id trendArrows;
    id egvNumericDisplay;
    id egvUnitDisplay;
}
@property (nonatomic,retain) UILabel * trendArrows;
@property (nonatomic,retain) UILabel * egvNumericDisplay;
@property (nonatomic,retain) UILabel * egvUnitDisplay;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G738AppIntegrityErrorNotificationViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G710ColorTheme : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G724WarmupHelpViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729NewEventConfirmationViewModel : _TtCs12_SwiftObject {
    id eventRecord;
    id valueString;
    id eventRepositoryMonitor;
    id appCore;
}
@end


/*****************************************************************/

@interface _TtC2G726SensorSessionCellViewModel : _TtCs12_SwiftObject {
    id displayStateSubscriber;
    id warmupTimeSubscriber;
    id sessionModeSubscriber;
    id mode;
    id warmupTime;
    id insertionTime;
    id expireTime;
    id sessionEndTime;
    id transmitterIsPairing;
    id appCoreService;
}
@end


/*****************************************************************/

@interface _TtC2G735ConnectionsNavigationViewController : UINavigationController {
    id createdToaster;
}
@property (nonatomic,readonly) bool shouldPopOnTransition;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)v1;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G734AppBluetoothOffAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G733ShareRevokedConsentViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id dismissSubscriber;
    id goToConsent;
    id dismissBtn;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * goToConsent;
@property (nonatomic) _TtC12PhoenixUIKit14TertiaryButton * dismissBtn;
- (void)viewDidLoad;
- (void)goToConsentTapped:(id)v1;
- (void)consentCloseButtonTapped;
- (void)dismissTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732LogCalibrationCollectionViewCell : UICollectionViewCell {
    id secondOptionLabel;
    id radioButton;
    id bottomSeparatorView;
    id stateSubscriber;
    id model;
}
@property (nonatomic) UIButton * secondOptionLabel;
@property (nonatomic) _TtC2G711RadioButton * radioButton;
@property (nonatomic) UIView * bottomSeparatorView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717WearLocationUtils : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G713AlertsManager : _TtCs12_SwiftObject {
    id timeManager;
    id minimumAlertTimeSpacing;
    id _nextUIAlert;
    id currentNotificationViewController;
    id latestUIAlertLocalNotificationIdentifier;
    id firedLocalNotificationIdentifiers;
    id nextUIAlertSubscriber;
    id scheduledAlertTimes;
    id localNotificationSubscriberPool;
    id soundManager;
}
@end


/*****************************************************************/

@interface _TtC2G735DiskSpaceVeryLowAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728ActionSheetDismissalAnimator : NSObject<UIViewControllerAnimatedTransitioning> {
    id interactionController;
}
- (double)transitionDuration:(id)v1;
- (void)animateTransition:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719ACMDetailsViewModel : _TtCs12_SwiftObject {
    id screenTitle;
    id message;
    id resultId;
    id messageID;
    id canAcknowledge;
    id moreInfoUrl;
    id upgradeUrl;
    id primaryButtonTitle;
    id secondaryButtonTitle;
}
@end


/*****************************************************************/

@interface _TtC2G724TrendGraphViewController : UIViewController {
    id xAxisUpdateTimer;
    id subscribers;
    id graphContainer;
    id skView;
    id moreButton;
    id hourButton3;
    id hourButton6;
    id hourButton12;
    id hourButton24;
    id graphContainerTopSpacing;
    id graphContainerHeight;
    id graphContainerHeightRatio;
    id skViewBottomSpacing;
    id skViewTopSpacing;
    id moreButtonHeight;
    id timeManager;
    id hourButtons;
    id selectedTimeInterval;
    id calloutBubble;
    id dottedLineLayer;
    id currentEGVDataDot;
    id glucoseHapticFeedbackGenerator;
    id glucoseSwimlanePresenter;
    id timelineSwimlanePresenter;
    id tickmarkInterval;
    id glucoseViewDataSource;
    id trendGraphDataSource;
    id pendingActions;
}
@property (nonatomic) UIView * graphContainer;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * skView;
@property (nonatomic) UIButton * moreButton;
@property (nonatomic) _TtC2G725GlucoseTimeIntervalButton * hourButton3;
@property (nonatomic) _TtC2G725GlucoseTimeIntervalButton * hourButton6;
@property (nonatomic) _TtC2G725GlucoseTimeIntervalButton * hourButton12;
@property (nonatomic) _TtC2G725GlucoseTimeIntervalButton * hourButton24;
@property (nonatomic) NSLayoutConstraint * graphContainerTopSpacing;
@property (nonatomic) NSLayoutConstraint * graphContainerHeight;
@property (nonatomic) NSLayoutConstraint * graphContainerHeightRatio;
@property (nonatomic) NSLayoutConstraint * skViewBottomSpacing;
@property (nonatomic) NSLayoutConstraint * skViewTopSpacing;
@property (nonatomic) NSLayoutConstraint * moreButtonHeight;
- (id)initWithCoder:(id)v1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)selectTimeIntervalWithSender:(id)v1;
- (void)moreButtonAction:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728StartNewSensorViewController : _TtC2G720BaseUIViewController {
    id newSensorInserted;
    id sensorImage;
    id howToInsertSensorBtn;
    id entryPoint;
    id nextScreenSegueId;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * newSensorInserted;
@property (nonatomic) UIImageView * sensorImage;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * howToInsertSensorBtn;
- (void)onHowToInsertSensorButtonTap:(id)v1;
- (void)onCancelButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725ClassicSoundTableViewCell : UITableViewCell {
    id nameLabel;
    id checkmarkImageLabel;
    id name;
}
@property (nonatomic) UILabel * nameLabel;
@property (nonatomic) UIImageView * checkmarkImageLabel;
@property (nonatomic) bool selected;
- (bool)isSelected;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728ScrollViewDividerLineManager : _TtCs12_SwiftObject {
    id dividerLine;
    id fadeDuration;
}
@end


/*****************************************************************/

@interface _TtC2G730ActionSheetPresentationManager : NSObject<UIViewControllerTransitioningDelegate> {
    id dimmingViewAlpha;
}
- (id)animationControllerForPresentedController:(id)v1 presentingController:(id)v2 sourceController:(id)v3;
- (id)animationControllerForDismissedController:(id)v1;
- (id)interactionControllerForPresentation:(id)v1;
- (id)interactionControllerForDismissal:(id)v1;
- (id)presentationControllerForPresentedViewController:(id)v1 presentingViewController:(id)v2 sourceViewController:(id)v3;
- (id)init;
@end


/*****************************************************************/

@interface _TtC2G739ShareInviteNotificationSettingStackView : UIStackView {
    id stackView;
    id sliderSectionView;
    id thresholdValueLabel;
    id enabledSwitch;
    id enabledStatusLabel;
    id titleLabel;
    id thresholdSlider;
    id delayFirstNotificationView;
    id delayFirstTitleLabel;
    id delayFirstLabel;
    id delayFirstChevronImage;
    id footerLabel;
    id subscriptions;
    id viewModel;
    id actionSheetPresenter;
}
@property (nonatomic) UIStackView * stackView;
@property (nonatomic) UIView * sliderSectionView;
@property (nonatomic) UILabel * thresholdValueLabel;
@property (nonatomic) UISwitch * enabledSwitch;
@property (nonatomic) UILabel * enabledStatusLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UISlider * thresholdSlider;
@property (nonatomic) UIView * delayFirstNotificationView;
@property (nonatomic) UILabel * delayFirstTitleLabel;
@property (nonatomic) UILabel * delayFirstLabel;
@property (nonatomic) UIImageView * delayFirstChevronImage;
@property (nonatomic) UILabel * footerLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)enableToggled:(id)v1;
- (void)sliderValueChanged:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728AlertSoundConflictFooterView : UITableViewHeaderFooterView {
    id descriptionLabel;
}
@property (nonatomic) UILabel * descriptionLabel;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719ShareOnboardingCell : UICollectionViewCell
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G718RepositoryMonitors : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G727ShowQuietModesTableViewCell : UITableViewCell {
    id showQuietModesLabel;
}
@property (nonatomic) UILabel * showQuietModesLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727StopSensorFeedbackViewModel : _TtCs12_SwiftObject {
    id appSettingsRepositoryMonitor;
    id subscribers;
    id showSensorRemovalInstructions;
}
@end


/*****************************************************************/

@interface ViewGlucoseIntent : INIntent
- (id)init;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G719HowToTableViewModel : _TtC2G719OnboardingViewModel
@end


/*****************************************************************/

@interface _TtC2G730BaseUICollectionViewController : UICollectionViewController {
    id screenDisplayStartTime;
}
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (id)initWithCollectionViewLayout:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G717BaseUIApplication : UIApplication
- (bool)sendAction:(SEL)v1 to:(id)v2 from:(id)v3 forEvent:(id)v4;
- (id)init;
@end


/*****************************************************************/

@interface _TtC2G723PhotoCodeEntryViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G738SensorFailedRestartAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (void)sensorRemovalInstructionsButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730PhoneConflictRepositoryMonitor : _TtCs12_SwiftObject {
    id criticalAlertsNotificationIdentifier;
    id jailbreakNotificationIdentifier;
    id ELC;
    id notificationCenter;
    id _currentCriticalAlertsNotficationRequest;
    id applicationStatusSubscriber;
    id _currentConflicts;
    id _currentBlockingConflicts;
    id _shouldBlockAlertEngine;
}
@end


/*****************************************************************/

@interface _TtC2G740BackdoorPairNewTransmitterViewController : _TtC2G720BaseUIViewController<UITextFieldDelegate> {
    id transmitterIdTextField;
    id sensorCodeTextField;
    id transmitterPairingProgressIndicator;
    id currentStateLabel;
    id pairNewTransmitterButton;
    id startSensorButton;
    id stopSensorButton;
    id displayStateSubscriber;
}
@property (nonatomic) UITextField * transmitterIdTextField;
@property (nonatomic) UITextField * sensorCodeTextField;
@property (nonatomic) UIActivityIndicatorView * transmitterPairingProgressIndicator;
@property (nonatomic) UILabel * currentStateLabel;
@property (nonatomic) UIButton * pairNewTransmitterButton;
@property (nonatomic) UIButton * startSensorButton;
@property (nonatomic) UIButton * stopSensorButton;
- (void)pairTransmitterButtonPressed:(id)v1;
- (void)viewDidLoad;
- (void)stopSensorButtonPressed:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721NewEventInfoViewModel : _TtCs12_SwiftObject {
    id navigationTitle;
    id glossaryInfo;
}
@end


/*****************************************************************/

@interface _TtC2G730RecoverableErrorViewController : _TtC2G720BaseUIViewController {
    id playVideoButton;
    id instructionTitle;
    id instructionText;
    id errorLabel;
    id showInstructionsButton;
    id iPhone8Image;
    id iPhone8InstructionsVideo;
    id iPhoneXInstructionsVideo;
    id iPhone8Title;
    id iPhone8Instructions;
}
@property (nonatomic) UIButton * playVideoButton;
@property (nonatomic) UILabel * instructionTitle;
@property (nonatomic) UILabel * instructionText;
@property (nonatomic) UILabel * errorLabel;
- (void)viewDidLoad;
- (void)instructionsButtonTapped:(id)v1;
- (void)playVideoTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G715LogFileObserver : NSObject<NSFilePresenter> {
    id presentedItemURL;
    id presentedItemOperationQueue;
    id fileManager;
    id securityProvider;
    id subscribers;
    id shouldLogWidgetData;
    id fileChangeHandled;
}
@property (nonatomic,copy) NSURL * presentedItemURL;
@property (nonatomic,retain) NSOperationQueue * presentedItemOperationQueue;
- (void)presentedItemDidChange;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G715InsulinSwimlane : _TtC12PhoenixUIKit12BaseSwimlane {
    id bars;
}
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726AppIntegrityErrorViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G730OnboardingAlertsViewController : _TtC2G736MVVMTutorialOnboardingViewController {
    id watchVideoMessageContent;
    id highLabel;
    id lowLabel;
    id blankSpace;
    id nextButtonContainerView;
    id viewTextVersionButtonContainerView;
    id heightConstraints;
    id viewsWithNoHeightConstraints;
    id nextScreenButton;
    id highMGDL;
    id lowMGDL;
}
@property (nonatomic) UIView * watchVideoMessageContent;
@property (nonatomic) UILabel * highLabel;
@property (nonatomic) UILabel * lowLabel;
@property (nonatomic) UIView * blankSpace;
@property (nonatomic) UIView * nextButtonContainerView;
@property (nonatomic) UIView * viewTextVersionButtonContainerView;
@property (nonatomic,copy) NSArray * heightConstraints;
@property (nonatomic,copy) NSArray * viewsWithNoHeightConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillLayoutSubviews;
- (void)onPlayVideoButtonTap:(id)v1;
- (void)onTextVersionButtonTap:(id)v1;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726WarmupStatusViewController : _TtC2G720BaseUIViewController {
    id warmupTime;
    id statusLabel;
    id detailLabel;
    id titleLabel;
    id titleLabelTopConstraint;
    id noAlertsView;
    id helpButtonContainerView;
    id cardView;
    id cardViewInset;
    id warmupStatusViewModel;
    id statusTextSubscriber;
    id timeRemainingTextSubscriber;
    id helpButton;
}
@property (nonatomic) UILabel * warmupTime;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) NSLayoutConstraint * titleLabelTopConstraint;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIView * helpButtonContainerView;
@property (nonatomic) _TtC2G712DXCMCardView * cardView;
- (id)initWithCoder:(id)v1;
- (void)loadViewIfNeeded;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722RemindMeLaterToastable : UIView {
    id messageLabel;
    id contentView;
    id message;
    id onTapAction;
    id identifier;
}
@property (nonatomic) UILabel * messageLabel;
@property (nonatomic) UIView * contentView;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732TransmitterPairingViewController : _TtC2G720BaseUIViewController {
    id descriptionLabel;
    id pairingCodeLabel;
    id noAlertsView;
    id loadingImageView;
    id helpButtonContainerView;
    id pairingCode;
    id spinnerSubscriber;
    id helpButton;
}
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * pairingCodeLabel;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIImageView * loadingImageView;
@property (nonatomic) UIView * helpButtonContainerView;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)helpButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730TechnicalAlertDetailsViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
    id accessibilityText;
    id alertProfileType;
}
@end


/*****************************************************************/

@interface _TtC2G737SensorPairedActionSheetViewController : _TtC2G723BaseAlertViewController {
    id okButton;
    id actionSheetBottomConstraint;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okButton;
@property (nonatomic) NSLayoutConstraint * actionSheetBottomConstraint;
- (void)viewDidLoad;
- (void)onOKButtonTap:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717NoConnectionsCell : UICollectionViewCell {
    id noAvailableConnectionsLabel;
}
@property (nonatomic) UILabel * noAvailableConnectionsLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726SplashScreenViewController : _TtC2G720BaseUIViewController {
    id versionLabel;
    id copyrightLabel;
}
@property (nonatomic) UILabel * versionLabel;
@property (nonatomic) UILabel * copyrightLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717NewEventViewModel : _TtCs12_SwiftObject {
    id _eventType;
    id originalEventRecord;
    id _entryTypeRows;
    id _secondSectionRows;
    id _state;
    id selectedDate;
    id eventRepositoryMonitor;
    id minBGEntryMgdl;
    id maxBGEntryMgdl;
    id minBGEntryMmol;
    id maxBGEntryMmol;
    id minInsulinEntryFast;
    id maxInsulinEntryFast;
    id minInsulinEntryLong;
    id maxInsulinEntryLong;
    id minCarbsEntryLong;
    id maxCarbsEntryLong;
    id fastActingRange;
    id longActingRange;
    id selectedIntensity;
    id selectedActivityDuration;
    id downChevronImage;
    id upChevronImage;
}
@end


/*****************************************************************/

@interface _TtC2G736NewInsulinEventConfirmationViewModel : _TtCs12_SwiftObject {
    id eventRecord;
    id insulinString;
    id eventRepositoryMonitor;
    id appCore;
}
@end


/*****************************************************************/

@interface _TtC2G721GlucoseAlertViewModel : _TtCs12_SwiftObject {
    id glucoseViewDataSource;
    id alertType;
    id glucoseCompassPresenter;
    id viewModelSubscriber;
    id _shouldDismissPublisher;
    id _currentGlucose;
}
@end


/*****************************************************************/

@interface _TtC2G760OnboardingSensorReadingsTextVersionFullDisplayViewController : _TtC2G728MVVMOnboardingViewController {
    id glucoseCompass;
    id trendImageView;
    id doneButton;
}
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * glucoseCompass;
@property (nonatomic) UIImageView * trendImageView;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * doneButton;
- (void)viewDidLoad;
- (void)onDoneButtonTapped:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718BulkDataCGMLogging : _TtCs12_SwiftObject {
    id subscribers;
    id alertProfileRepoMonitor;
    id quietModesRepositoryMonitor;
    id daysOfWeekList;
    id settingDate;
}
@end


/*****************************************************************/

@interface _TtC2G740LogCalibrationDisabledCollectionViewCell : UICollectionViewCell {
    id radioButton;
    id optionLabel;
    id calibrationDisabledLabel;
    id bottomSeparatorView;
    id stateSubscriber;
    id model;
}
@property (nonatomic) _TtC2G711RadioButton * radioButton;
@property (nonatomic) UIButton * optionLabel;
@property (nonatomic) UILabel * calibrationDisabledLabel;
@property (nonatomic) UIView * bottomSeparatorView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729LandscapeDetailViewController : _TtC2G720BaseUIViewController {
    id toolTipDelayInSeconds;
    id subscribers;
    id controlBarTopConstraint;
    id trendGraphBottomConstraint;
}
@property (nonatomic) NSLayoutConstraint * controlBarTopConstraint;
@property (nonatomic) NSLayoutConstraint * trendGraphBottomConstraint;
@property (nonatomic,readonly) bool shouldAutorotate;
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic,readonly) bool prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)dealloc;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G710DXCMButton : UIButton {
    id cornerRadius;
    id shadowRadius;
    id shadowOffset;
    id shadowColor;
    id shadowOpacity;
    id borderWidth;
    id borderColor;
}
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic,retain) UIColor * shadowColor;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718UrgentLowViewModel : _TtCs12_SwiftObject {
    id alertProfileType;
    id accessibilityText;
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC2G726ShareStatusDetailViewModel : _TtCs12_SwiftObject {
    id delegate;
    id diffableDataSource;
    id rootNetworkStatus;
    id authStatusProvider;
}
@end


/*****************************************************************/

@interface _TtC2G727IntensitySoundTableViewCell : UITableViewCell {
    id nameLabel;
    id intensityLabel;
    id checkmarkImageView;
    id name;
    id intensity;
}
@property (nonatomic) UILabel * nameLabel;
@property (nonatomic) UILabel * intensityLabel;
@property (nonatomic) UIImageView * checkmarkImageView;
@property (nonatomic) bool selected;
- (bool)isSelected;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G734DebugConnectionsMenuViewController : _TtC2G720BaseUIViewController {
    id pairTransmitterButton;
    id pairReceiverButton;
}
@property (nonatomic) UIButton * pairTransmitterButton;
@property (nonatomic) UIButton * pairReceiverButton;
- (void)pairTransmitterButtonPressed:(id)v1;
- (void)pairReceiverButtonPressed:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722AlertScheduleViewModel : _TtCs12_SwiftObject {
    id maxTimeInterval;
    id timeManager;
    id scheduleSnapshot;
    id daysEnabled;
    id startTimeInterval;
    id rawEndTimeInterval;
    id updatedDaysEnabled;
}
@end


/*****************************************************************/

@interface _TtC2G717AlertsCoreService : _TtCs12_SwiftObject {
    id alertRepository;
    id bulkDataLogger;
    id timeManager;
    id settingsPublisher;
    id blockingAlertsMonitor;
    id timeLossMonitor;
    id settingsRepositoryMonitor;
    id alertStateTracker;
    id alertsEngine;
    id subscribers;
    id glucoseRepositoryMonitor;
    id alertProfilesRepositoryMonitor;
    id _persistedBluetoothState;
    id _persistedBluetoothStateTimestamp;
    id _persistedTxSessionState;
    id _persistedTxSessionStateTimestamp;
    id currentAlertMapPublisher;
    id $__lazy_storage_$_txSessionEventPublisher;
    id $__lazy_storage_$_bluetoothEventPublisher;
}
@end


/*****************************************************************/

@interface _TtC2G723CgmStatusViewController : _TtC2G720BaseUIViewController {
    id dexcomLogo;
    id glucoseCompass;
    id glucoseCompassTopSpacing;
    id glucoseViewDataSource;
    id viewModelSubscriptions;
    id glucoseCompassPresenter;
}
@property (nonatomic) UIImageView * dexcomLogo;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * glucoseCompass;
@property (nonatomic) NSLayoutConstraint * glucoseCompassTopSpacing;
- (void)doubleTapMagGlass:(id)v1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732PairNewTransmitterViewController : _TtC2G720BaseUIViewController {
    id noAlertsView;
    id startNewSensorButton;
}
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * startNewSensorButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)startNewSensor:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G757OnboardingTreatmentDecisionsTextFullDisplayViewController : _TtC2G728MVVMOnboardingViewController {
    id containerBodyTop;
    id containerBodyBottom;
    id bodyTopLabel;
    id heighBlackSpace;
    id doneButton;
    id heighItems;
    id blankSpace;
}
@property (nonatomic) UIView * containerBodyTop;
@property (nonatomic) UIView * containerBodyBottom;
@property (nonatomic) UILabel * bodyTopLabel;
@property (nonatomic) NSLayoutConstraint * heighBlackSpace;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * doneButton;
- (void)viewDidLoad;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G737PairingUnsuccessfulHelpViewController : _TtC2G720BaseUIViewController {
    id doneButton;
    id keepPhoneCloseView;
    id insertSensorView;
    id checkPairingCodeView;
    id moveAwayFromOthersView;
    id navItem;
    id checkParingCodeBadge;
    id tooManyBtSensorBadge;
    id subscriptions;
    id backButtonAccessibilityIDText;
    id pairingCode;
}
@property (nonatomic) UIBarButtonItem * doneButton;
@property (nonatomic) _TtC2G714DesignableView * keepPhoneCloseView;
@property (nonatomic) _TtC2G714DesignableView * insertSensorView;
@property (nonatomic) _TtC2G714DesignableView * checkPairingCodeView;
@property (nonatomic) _TtC2G714DesignableView * moveAwayFromOthersView;
@property (nonatomic) UINavigationItem * navItem;
@property (nonatomic) UILabel * checkParingCodeBadge;
@property (nonatomic) UILabel * tooManyBtSensorBadge;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)doneButtonTapped:(id)v1;
- (void)touchesEnded:(id)v1 withEvent:(id)v2;
- (void)startNewSensorButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724ACMTimeOutViewController : _TtC2G720BaseUIViewController {
    id dimmingView;
    id loadingImageView;
    id connectionErrorLabel;
    id retryBlock;
}
@property (nonatomic) UIView * dimmingView;
@property (nonatomic) UIImageView * loadingImageView;
@property (nonatomic) UILabel * connectionErrorLabel;
- (void)viewDidLoad;
- (void)retryButtonPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729QuietModeBannerViewController : _TtC2G720BaseUIViewController {
    id quietModeImage;
    id messageLabel;
    id contentView;
    id editButton;
    id bannerTopConstraint;
    id bannerBottomConstraint;
    id bannerLeadingConstraint;
    id bannerTrailingConstraint;
    id imageSizeConstraint;
    id trendScreenSpacing;
    id tableHeaderViewSpacing;
    id bannerType;
    id viewModel;
    id bannerTextSubscription;
    id iconNameSubscription;
}
@property (nonatomic) UIImageView * quietModeImage;
@property (nonatomic) UILabel * messageLabel;
@property (nonatomic) UIView * contentView;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * editButton;
@property (nonatomic) NSLayoutConstraint * bannerTopConstraint;
@property (nonatomic) NSLayoutConstraint * bannerBottomConstraint;
@property (nonatomic) NSLayoutConstraint * bannerLeadingConstraint;
@property (nonatomic) NSLayoutConstraint * bannerTrailingConstraint;
@property (nonatomic) NSLayoutConstraint * imageSizeConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)editQuietModeSettings:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717DXCMPrimaryButton : _TtC2G714DXCMPillButton
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G727TimeIssueHelpViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G712WebViewModel : _TtCs12_SwiftObject {
    id url;
    id localizeURL;
    id webViewAction;
}
@end


/*****************************************************************/

@interface _TtC2G728CriticalAlertsViewController : _TtC2G728MVVMOnboardingViewController<UIScrollViewDelegate> {
    id enableCriticalAlertsButton;
    id titleLabel;
    id descriptionLabel;
    id scrollView;
    id dividerLine;
    id criticalAlertImageView;
    id scrollViewDividerLineManager;
    id nextButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * enableCriticalAlertsButton;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIView * dividerLine;
@property (nonatomic) UIImageView * criticalAlertImageView;
- (void)viewDidLoad;
- (void)appMovedToForeground;
- (void)enableCriticalAlerts;
- (void)goToNextScreen:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732ActionSheetInteractionController : UIPercentDrivenInteractiveTransition<UIGestureRecognizerDelegate> {
    id shouldCompleteTransition;
    id viewController;
    id interactionInProgress;
    id isCanceled;
}
- (bool)gestureRecognizerShouldBegin:(id)v1;
- (void)handleGesture:(id)v1;
- (void)cancelInteractiveTransition;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G739SharedContainerAppGroupSecurityProvider : _TtCs12_SwiftObject {
    id key;
    id keyName;
}
@end


/*****************************************************************/

@interface _TtC2G741SecondAlertProfileConfirmationActionSheet : _TtC2G720BaseUIViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
    id actionSheetDelegate;
    id presentingProfileViewController;
    id profileName;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okButton;
- (void)viewDidLoad;
- (void)onConfirmation:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727LocationPermissionViewModel : NSObject<CLLocationManagerDelegate> {
    id _locationPermissionRestricted;
    id _isoCountryCode;
    id locationManager;
    id authorizationStatus;
}
- (void)locationManager:(id)v1 didChangeAuthorizationStatus:(int)v2;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729GcsConfirmationViewController : _TtC2G720BaseUIViewController {
    id flagImageView;
    id countryOfResidenceLabel;
    id unitOfMeasureLabel;
    id confirmButton;
    id onDoneBlock;
    id appStateRepository;
}
@property (nonatomic) UIImageView * flagImageView;
@property (nonatomic) UILabel * countryOfResidenceLabel;
@property (nonatomic) UILabel * unitOfMeasureLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * confirmButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)technicalSupportButtonPressedWithSender:(id)v1;
- (void)onConfirm:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G735BriefSensorIssueAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G741GlucoseLevelThresholdPickerViewController : _TtC2G720BaseUIViewController {
    id saveButton;
    id cancelButton;
    id picker;
    id alertTitleLabel;
    id alertDescriptionLabel;
    id minutesLeadingConstraint;
    id displayedUnits;
    id minutePickerViewBottomConstraint;
    id delegate;
    id actionSheetDelegate;
    id valueComponentIndex;
    id pickerViewLeadingConstant;
    id pickerViewHeightConstant;
    id pickerViewBottomPaddingConstant;
    id pickerTitle;
    id pickerDescription;
    id viewModel;
}
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * saveButton;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UIPickerView * picker;
@property (nonatomic) UILabel * alertTitleLabel;
@property (nonatomic) UILabel * alertDescriptionLabel;
@property (nonatomic) NSLayoutConstraint * minutesLeadingConstraint;
@property (nonatomic) UILabel * displayedUnits;
@property (nonatomic) NSLayoutConstraint * minutePickerViewBottomConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)savePressed:(id)v1;
- (void)cancelPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718BadgeTableViewCell : _TtC12PhoenixUIKit16DexTableViewCell {
    id showBadge;
}
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G731EventCalibrationDescriptionCell : UICollectionViewCell {
    id descriptionLabel;
    id calibrationDescription;
}
@property (nonatomic) UILabel * descriptionLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G715ELCLanguageCode : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G712NoAlertsView : UIView {
    id contentView;
    id imageWidthConstraint;
    id titleLabel;
    id stackView;
    id imageView;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) NSLayoutConstraint * imageWidthConstraint;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UIStackView * stackView;
@property (nonatomic) UIImageView * imageView;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732UnrecoverableErrorViewController : _TtC2G720BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G731DiskSpaceLowAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721MinutePickerViewModel : _TtCs12_SwiftObject {
    id pickerMinutes;
    id originalMinutes;
    id currentRow;
}
@end


/*****************************************************************/

@interface _TtC2G717EventMoreInfoCell : UICollectionViewCell {
    id moreInfoTextView;
}
@property (nonatomic) UITextView * moreInfoTextView;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G79TactSMach : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G718SettingsHeaderView : UITableViewHeaderFooterView {
    id infoButton;
    id _textLabel;
    id isInfoButtonVisible;
    id headerAccessibilityIdentifier;
}
@property (nonatomic,retain) UILabel * textLabel;
@property (nonatomic) UIButton * infoButton;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721BlockingAlertsMonitor : _TtCs12_SwiftObject {
    id diskSpaceEventPublisher;
    id databaseEventPublisher;
    id currentBlockingAlert;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC2G718SettingsFooterView : UITableViewHeaderFooterView {
    id _textLabel;
}
@property (nonatomic,retain) UILabel * textLabel;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G7P33_FF5B06A5E3A9DE1AE36149CB0CCA77985Toast : _TtCs12_SwiftObject {
    id uuid;
    id state;
    id toastableView;
    id needsDismissal;
    id horizontalPadding;
    id siblingToasterIDs;
    id appearingDate;
    id containerView;
    id leftConstraint;
    id rightConstraint;
    id bottomConstraint;
    id heightConstraint;
}
- (void)dismiss;
- (void)tap;
@end


/*****************************************************************/

@interface _TtC2G743TroubleshootingKeepPhoneCloseViewController : _TtC2G720BaseUIViewController {
    id distanceDescriptionLabel;
    id distanceTitleLabel;
    id backButtonAccessibilityIDText;
}
@property (nonatomic) UILabel * distanceDescriptionLabel;
@property (nonatomic) UILabel * distanceTitleLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G739HourMinutePickerAllowZeroViewController : _TtC2G720BaseUIViewController {
    id saveButton;
    id cancelButton;
    id hourMinutePickerView;
    id alertTitleLabel;
    id alertDescriptionLabel;
    id hourMinutePickerViewBottomConstraint;
    id delegate;
    id actionSheetDelegate;
    id duration;
    id originalDuration;
    id minuteInterval;
    id alertTitle;
    id alertDescription;
    id valueComponentIndex;
    id pickerViewBottomPaddingConstant;
    id pickerValueWidth;
    id pickerUnitWidth;
    id pickerFontSize;
    id hourList;
    id minList;
    id hourString;
    id minString;
}
@property (nonatomic) UIButton * saveButton;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UIPickerView * hourMinutePickerView;
@property (nonatomic) UILabel * alertTitleLabel;
@property (nonatomic) UILabel * alertDescriptionLabel;
@property (nonatomic) NSLayoutConstraint * hourMinutePickerViewBottomConstraint;
- (void)savePressed:(id)v1;
- (void)cancelPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727QuietModesRepositoryMonitor : _TtCs12_SwiftObject {
    id quietModesRepository;
    id subscriptions;
    id notificationCenter;
    id _activatedQuietMode;
    id _activationTime;
    id _expirationTime;
    id _vibrateIndefinitely;
    id _quietModesAccess;
    id onQuietModeUpdate;
}
@end


/*****************************************************************/

@interface _TtC2G717BackdoorViewModel : _TtCs12_SwiftObject {
    id thresholdsViewModel;
    id alertProfilesRepositoryMonitor;
    id lockScreenDelay;
    id mainScreenDelay;
    id subscribers;
    id onboardingStates;
    id onboardingStatesAccessibilityIds;
    id rootNetworkStatus;
    id silentModeIcon;
    id numOfHoursOfData;
    id phoneConflictState;
    id egvValue;
    id egvLabel;
    id egvRate;
    id alternativeLabel;
    id trendArrow;
    id secondaryDisplayReadings;
    id alertIcon;
    id showBanner;
    id shouldShowTrendGraph;
    id bannerTitle;
    id settingsRepositoryMonitor;
    id graphHeight;
    id targetRangeEnabled;
    id lowThresholdEnabled;
    id lowThresholdValue;
    id highThresholdEnabled;
    id highThresholdValue;
    id shouldShowUnitOfMeasure;
    id acmEnvironmentValidity;
}
@end


/*****************************************************************/

@interface _TtC2G733AddEventActionSheetViewController : _TtC2G720BaseUIViewController {
    id tableView;
    id events;
    id actionSheetDelegate;
    id eventSelectedDelegate;
    id headerHeight;
    id eventRowHeight;
    id marginBottom;
}
@property (nonatomic) UITableView * tableView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G714EmptyEventCell : UICollectionViewCell {
    id noEventsLabel;
}
@property (nonatomic) UILabel * noEventsLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730HourMinutePickerViewController : _TtC2G720BaseUIViewController {
    id saveButton;
    id cancelButton;
    id hourMinutePickerView;
    id alertTitleLabel;
    id alertDescriptionLabel;
    id hourMinutePickerViewBottomConstraint;
    id delegate;
    id actionSheetDelegate;
    id duration;
    id originalDuration;
    id minuteInterval;
    id alertTitle;
    id alertDescription;
    id valueComponentIndex;
    id pickerViewBottomPaddingConstant;
}
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * saveButton;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UIDatePicker * hourMinutePickerView;
@property (nonatomic) UILabel * alertTitleLabel;
@property (nonatomic) UILabel * alertDescriptionLabel;
@property (nonatomic) NSLayoutConstraint * hourMinutePickerViewBottomConstraint;
- (void)hourMinutePickerTimeIntervalChanged:(id)v1;
- (void)savePressed:(id)v1;
- (void)cancelPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718G7SafetyLargeSheet : _TtC2G720BaseUIViewController {
    id settingsGroupView;
    id moreInfoWebView;
    id screenTime;
    id lowPowerMode;
    id completeGuideBtn;
    id navigationBar;
    id webController;
    id delegate;
}
@property (nonatomic) UIView * settingsGroupView;
@property (nonatomic) UIView * moreInfoWebView;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * screenTime;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * lowPowerMode;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * completeGuideBtn;
@property (nonatomic) UINavigationBar * navigationBar;
- (void)viewDidLoad;
- (void)viewDidDisappear:(bool)v1;
- (void)close;
- (void)screenTimeButtonPressed;
- (void)lowPowerModeButtonPressed;
- (void)guideButtonPressed;
- (id)createWebViewWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G733ActionSheetPresentationController : UIPresentationController {
    id dimmingView;
    id dimmingViewAlpha;
}
@property (nonatomic,readonly) struct CGRect frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)v1 presentingViewController:(id)v2;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)containerViewWillLayoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G757OnboardingSensorReadingsTextVersionMagGlassViewController : _TtC2G728MVVMOnboardingViewController {
    id firstCompass;
    id secondCompass;
    id endPointGreenArrowDownImageView;
    id endPointGreenArrowUpImageView;
    id nextButtonContainerView;
}
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * firstCompass;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * secondCompass;
@property (nonatomic) UIImageView * endPointGreenArrowDownImageView;
@property (nonatomic) UIImageView * endPointGreenArrowUpImageView;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726ShareLoadingViewController : _TtC2G720BaseUIViewController {
    id loadingView;
    id loadingImageView;
}
@property (nonatomic) UIView * loadingView;
@property (nonatomic) UIImageView * loadingImageView;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723AlertsSettingsPublisher : _TtCs12_SwiftObject {
    id initialValue;
    id newSettings;
}
@end


/*****************************************************************/

@interface _TtC2G721WarmupStatusViewModel : _TtCs12_SwiftObject {
    id _statusText;
    id _timeRemainingText;
    id warmupTimeSubscriber;
    id timeRemaining;
    id warmingInProgressToastKey;
    id currentVisibleToast;
    id warmUpCompleteMessage;
    id warmUpCompleteButtonTitle;
    id warmingInProgressMessage;
    id warmingInProgressButtonTitle;
}
@end


/*****************************************************************/

@interface _TtC2G726CertificatesViewController : _TtC2G720BaseUIViewController {
    id loadingView;
    id loadingImageView;
    id spinnerText;
    id certificateManagerCancellable;
    id appStateRepository;
    id certificateViewModel;
    id onDoneBlock;
}
@property (nonatomic) UIView * loadingView;
@property (nonatomic) UIImageView * loadingImageView;
@property (nonatomic) UILabel * spinnerText;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732EnterTransmitterSNViewController : _TtC2G720BaseUIViewController {
    id backButton;
}
@property (nonatomic) UIBarButtonItem * backButton;
- (id)initWithCoder:(id)v1;
- (void)backButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G710VideoUtils : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G735PhoneConflictBlockingViewController : _TtC2G720BaseUIViewController {
    id actionTitle;
    id actionBody;
    id conflictName;
    id instructionsTitle;
    id instructionsTableView;
    id instructionsViewHeight;
    id iconImageView;
    id alertTitle;
    id topConstraint;
    id actionButtonView;
    id actionButton;
    id separator;
    id bottomConstraint;
    id conflictType;
    id viewModel;
    id blockingConflictSubscription;
    id isOnboarding;
    id instructionCellIdentifier;
}
@property (nonatomic) UILabel * actionTitle;
@property (nonatomic) UILabel * actionBody;
@property (nonatomic) UILabel * conflictName;
@property (nonatomic) UILabel * instructionsTitle;
@property (nonatomic) UITableView * instructionsTableView;
@property (nonatomic) NSLayoutConstraint * instructionsViewHeight;
@property (nonatomic) UIImageView * iconImageView;
@property (nonatomic) UILabel * alertTitle;
@property (nonatomic) NSLayoutConstraint * topConstraint;
@property (nonatomic) _TtC2G714DesignableView * actionButtonView;
@property (nonatomic) UIButton * actionButton;
@property (nonatomic) UIView * separator;
@property (nonatomic) NSLayoutConstraint * bottomConstraint;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)openPhoneSettings:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726AlertSettingsTableViewCell : UITableViewCell {
    id alertSettingsNameLabel;
    id alertSettingsStateLabel;
    id offString;
    id onString;
    id silencedString;
    id displayType;
    id setting;
}
@property (nonatomic) UILabel * alertSettingsNameLabel;
@property (nonatomic) UILabel * alertSettingsStateLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722SingleWordBreakUILabel : UILabel
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
@end


/*****************************************************************/

@interface _TtC2G732RadioIntensityCollectionViewCell : UICollectionViewCell {
    id delegate;
    id radioLight;
    id radioMedium;
    id radioHeavy;
    id model;
}
@property (nonatomic) _TtC2G711RadioButton * radioLight;
@property (nonatomic) _TtC2G711RadioButton * radioMedium;
@property (nonatomic) _TtC2G711RadioButton * radioHeavy;
- (void)onRadioLightTap:(id)v1;
- (void)onRadioMediumTap:(id)v1;
- (void)onRadioHeavyTap:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727AlertScheduleDaysHeaderView : UITableViewHeaderFooterView {
    id descriptionLabel;
}
@property (nonatomic) UILabel * descriptionLabel;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G731ActionSheetPresentationAnimator : NSObject<UIViewControllerAnimatedTransitioning>
- (double)transitionDuration:(id)v1;
- (void)animateTransition:(id)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC2G736SensorSiteInstructionsViewController : _TtC2G736SensorInstructionsBaseViewController {
    id sevenAndOlderLabel;
    id sixAndYoungerLabel;
    id sensorSiteDescriptionLabel;
    id faqsLabel;
    id nextButtonContainerView;
    id instructionsFontSize;
    id abdomenAllowed;
}
@property (nonatomic) UILabel * sevenAndOlderLabel;
@property (nonatomic) UILabel * sixAndYoungerLabel;
@property (nonatomic) _TtC2G722SingleWordBreakUILabel * sensorSiteDescriptionLabel;
@property (nonatomic) UILabel * faqsLabel;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)nextButtonTapped:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G731GlucoseCollectionViewDataSource : _TtCs12_SwiftObject {
    id allCellItems;
}
@end


/*****************************************************************/

@interface _TtC2G724LocalNotificationManager : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G726GlossaryCollectionViewCell : UICollectionViewCell {
    id glossaryTitleLabel;
    id glossaryDefinitionsLabel;
    id url;
}
@property (nonatomic) UILabel * glossaryTitleLabel;
@property (nonatomic) UILabel * glossaryDefinitionsLabel;
- (void)glossaryDefinitionTapped;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727SensorExpiresAlertViewModel : _TtCs12_SwiftObject {
    id alertType;
}
@end


/*****************************************************************/

@interface _TtC2G78Toasters : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G720TargetRangeViewModel : _TtCs12_SwiftObject {
    id isOn;
    id graphHeight;
    id accessibilityIDText;
    id currentLocale;
}
@end


/*****************************************************************/

@interface _TtC2G730PairingCodeEntryViewController : _TtC2G720BaseUIViewController {
    id takePhotoLabel;
    id takePhotoBtn;
    id enterCodeManuallyBtn;
    id subscribers;
    id isOnboardingInProgress;
}
@property (nonatomic) UILabel * takePhotoLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * takePhotoBtn;
@property (nonatomic) _TtC12PhoenixUIKit15SecondaryButton * enterCodeManuallyBtn;
- (void)onTakePhotoButtonTap:(id)v1;
- (void)onEnterCodeManuallyButtonTap:(id)v1;
- (void)viewDidLoad;
- (void)dismissController;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718QualtricsViewModel : _TtCs12_SwiftObject {
    id localizeURL;
    id webViewAction;
}
@end


/*****************************************************************/

@interface _TtC2G725AlertProfileNameViewModel : _TtCs12_SwiftObject {
    id alertRepository;
    id invalidProfileNameCharacters;
    id maxProfileNameLength;
    id maxProfileNameByteSize;
    id displayType;
    id startingName;
}
@end


/*****************************************************************/

@interface GraphHeightResolutionResult : INEnumResolutionResult
+ (id)successWithResolvedGraphHeight:(long long)v1;
+ (id)confirmationRequiredWithGraphHeightToConfirm:(long long)v1;
@end


/*****************************************************************/

@interface _TtC2G724ManualCodeEntryViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G721BulkDataLoggingHelper : _TtCs12_SwiftObject {
    id cgmBulkDataLogger;
    id subscriptions;
    id firstTime;
}
- (void)logPowerStateChanged;
@end


/*****************************************************************/

@interface _TtC2G719ShareHomeStatusCell : UITableViewCell {
    id statusLabel;
    id errorBadgeLabel;
    id dataConsentButton;
}
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * errorBadgeLabel;
@property (nonatomic) UIButton * dataConsentButton;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G741TroubleshootingInsertSensorViewController : _TtC2G720BaseUIViewController {
    id backButtonAccessibilityIDText;
}
- (void)onHowToInsertSensorButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723TimeIssueViewController : _TtC2G720BaseUIViewController {
    id statusLabel;
    id detailLabel;
    id noAlertsView;
    id helpButtonContainerView;
    id cardView;
    id helpButton;
}
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIView * helpButtonContainerView;
@property (nonatomic) _TtC2G712DXCMCardView * cardView;
- (id)initWithCoder:(id)v1;
- (void)loadViewIfNeeded;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G736PhoneBluetoothOffAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728HighLowAlertDetailsViewModel : _TtCs12_SwiftObject {
    id alertProfileType;
    id thresholdType;
    id alertProfilesRepositoryMonitor;
    id alertThresholdSettingsViewModel;
    id thresholdSettings;
    id correspondingThresholdSettings;
    id alertLevelPickerData;
    id levelPickerData;
    id accessibilityIDText;
    id accessibilityText;
    id levelPickerSelectedIndex;
    id selectedIndex;
    id defaultLowAlertSound;
    id defaultHighAlertSound;
    id forMoreThanMinuteInterval;
    id minimumSnoozeDuration;
    id maximumSnoozeDuration;
    id delayFirstAlertSection;
    id toolTipTitle;
    id toolTipDescription;
    id currentSetting;
    id tooltipDelegate;
}
@end


/*****************************************************************/

@interface _TtC2G712DebugAppCore : _TtCs12_SwiftObject {
    id persistedAccessToken;
    id isCommunicatingWithTx;
    id glucoseReadings;
    id acceleratedTimeInterval;
    id fixedCurrentTime;
    id mockShareMonitor;
    id displayState;
    id bleState;
    id blePermissionState;
    id timeLossState;
    id authStatus;
    id persistenceErrorEvent;
    id diskSpaceState;
    id snapshotAggregator;
}
@end


/*****************************************************************/

@interface _TtC2G732QuietModesMoreInfoViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id silenceAllSection;
    id mainStack;
    id scrollView;
    id contentView;
    id summaryHeader;
    id summaryContent;
    id silenceAllHeader;
    id silenceAllContent;
    id vibrateHeader;
    id vibrateContent;
}
@property (nonatomic) UIStackView * silenceAllSection;
@property (nonatomic) UIStackView * mainStack;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIView * contentView;
@property (nonatomic) UILabel * summaryHeader;
@property (nonatomic) UILabel * summaryContent;
@property (nonatomic) UILabel * silenceAllHeader;
@property (nonatomic) UILabel * silenceAllContent;
@property (nonatomic) UILabel * vibrateHeader;
@property (nonatomic) UILabel * vibrateContent;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724ShareOnboardingViewModel : _TtCs12_SwiftObject {
    id appCore;
    id onboardingBegan;
    id onboardingDismissed;
}
@end


/*****************************************************************/

@interface _TtC2G729FeatureFlagsRepositoryMonitor : _TtCs12_SwiftObject {
    id featureFlagRepository;
    id onFeatureFlagUpdate;
    id featureFlags;
}
@end


/*****************************************************************/

@interface _TtC2G716MockShareMonitor : _TtCs12_SwiftObject {
    id debugLastError;
    id _isMonitoringActive;
    id _status;
    id startMonitoringInvoked;
    id stopMonitoringInvoked;
    id hasServerError;
    id receivedInvitation;
    id deleteFollowerInvoked;
    id deletedContactId;
    id getFollowersAndStatesInvoked;
    id pauseSharingFollowerInvoked;
    id resumeSharingFollowerInvoked;
    id dataShareUpdated;
    id pausedSubscriptionId;
    id resumeSubscriptionId;
    id dataShareUpdateSubscriptionId;
    id dataSharePermissionsValue;
    id updateFollowerInvoked;
    id updatedFollower;
}
@end


/*****************************************************************/

@interface _TtC2G729EnableBluetoothViewController : _TtC2G728MVVMOnboardingViewController {
    id titleText;
    id descriptionText;
    id enableButton;
    id appLifeCycleSubscription;
    id subscribers;
    id nextButton;
}
@property (nonatomic) UILabel * titleText;
@property (nonatomic) UILabel * descriptionText;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * enableButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)enableBluetooth;
- (void)nextScreen;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725EmptyEventsViewController : _TtC2G720BaseUIViewController<UIScrollViewDelegate> {
    id emptyEventsImageView;
    id emptyEventsTitleLabel;
    id emptyEventsDescriptionLabel;
    id separator;
    id infoContainer;
    id enterYourFirstEventButton;
    id eventsViewModel;
    id emptyEventSubscriber;
    id addEventActionSheetSubscriber;
}
@property (nonatomic) UIImageView * emptyEventsImageView;
@property (nonatomic) UILabel * emptyEventsTitleLabel;
@property (nonatomic) UILabel * emptyEventsDescriptionLabel;
@property (nonatomic) UIView * separator;
@property (nonatomic) UIScrollView * infoContainer;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * enterYourFirstEventButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)onAddFirstEvent:(id)v1;
- (void)scrollViewDidScroll:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723DebugDBImporterExporter : _TtCs12_SwiftObject {
    id watchDBFilePublisher;
}
@end


/*****************************************************************/

@interface _TtC2G719NetworkReachability : _TtCs12_SwiftObject {
    id networkStatus;
    id monitor;
    id queue;
    id currentNetworkPath;
}
@end


/*****************************************************************/

@interface _TtCC2G731GlucoseCollectionViewDataSource15GlucoseCellItem : _TtCs12_SwiftObject {
    id type;
    id isVisible;
    id viewController;
}
@end


/*****************************************************************/

@interface _TtC2G718ShareHomeShareCell : UITableViewCell {
    id enabledSwitch;
}
@property (nonatomic) UISwitch * enabledSwitch;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G720EmptyEventsViewModel : _TtCs12_SwiftObject {
    id appStateRepositoryMonitor;
    id emptyStateSubscriber;
    id _showEmptyState;
}
@end


/*****************************************************************/

@interface _TtC2G721ToolTipViewController : _TtC2G720BaseUIViewController {
    id descriptionLabel;
    id contentView;
    id descriptionText;
    id currentSettingText;
}
@property (nonatomic,retain) UILabel * descriptionLabel;
@property (nonatomic,retain) UIView * contentView;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721GlucoseViewController : _TtC2G720BaseUIViewController {
    id collectionView;
    id glucoseCollectionViewDataSource;
    id glucoseViewDataSource;
    id magGlassViewController;
    id statusViewController;
    id reportsViewController;
    id trendGraphViewController;
    id cgmStatusViewModelSubscription;
    id pairNewSensorSubscriptions;
    id trendGraphAndClarityCardSubscription;
    id cellSpacing;
    id createdToaster;
    id warmupToastText;
    id silenceAllTooltipTitle;
    id silenceAllTooltipText;
    id silenceAllTooltipButtonTitle;
    id vibrateToastTitle;
    id vibrateToastText;
    id quietModesRepositoryMonitor;
    id appStateRepositoryMonitor;
    id quietModeBannerViewController;
    id activeQuietModeSubscription;
    id toolTipCheckTimer;
    id toolTipCheckPublisher;
    id toolTipCheckSubscription;
    id clarityCardSubscription;
    id glucoseViewVisible;
    id userDefaults;
    id stickyHeaderDelegate;
    id toolTipController;
}
@property (nonatomic,readonly) bool shouldAutorotate;
@property (nonatomic,retain) UICollectionView * collectionView;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidLayoutSubviews;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G714DesignableView : UIView
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G728NewEventNavigationController : UINavigationController
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G725ELCLanguageSettingManager : _TtCs12_SwiftObject {
    id elcSupportedLanguageCode;
    id blockingConflictViewController;
    id keyValueRepository;
    id backgroundTaskName;
    id alertsBackgroundTaskFinishedNotification;
    id elcAlertsNotificationIdentifier;
    id elcAlertsAcknowledgeKey;
    id serialQueue;
    id _shouldBlockAlertEngine;
    id _currentAlertsNotficationRequest;
    id applicationStatusSubscriber;
    id languageCode;
    id txSessionStatePublisher;
}
@end


/*****************************************************************/

@interface _TtC2G732TwoHourSensorAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721ReportsViewController : _TtC2G720BaseUIViewController {
    id clarityViewModel;
    id clarityDayCountSubscriber;
    id clarityInfoButtonSubscriber;
    id clarityDayCountKey;
    id glucoseRepositoryMonitor;
    id clarityCardViewModel;
    id createdToaster;
}
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728SliderTimeCollectionViewCell : UICollectionViewCell {
    id slider;
    id minutesLabel;
    id currentMinutes;
    id model;
    id delegate;
    id hasDurationSliderChanged;
}
@property (nonatomic) UISlider * slider;
@property (nonatomic) UILabel * minutesLabel;
- (void)valueChangedWithSender:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730AlertScheduleInfoTableViewCell : UITableViewCell {
    id nameLabel;
    id valueLabel;
    id displayType;
    id alertSchedule;
    id $__lazy_storage_$_timeFormatter;
}
@property (nonatomic) UILabel * nameLabel;
@property (nonatomic) UILabel * valueLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725ShareInvitationStatusView : UIView {
    id contentView;
    id statusImageView;
    id statusLabel;
    id statusDetailLabel;
    id statusImage;
    id statusText;
    id statusDetailText;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIImageView * statusImageView;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * statusDetailLabel;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728ShareHomeFollowersHeaderView : UITableViewHeaderFooterView {
    id _textLabel;
    id isEnabled;
    id isVisible;
}
@property (nonatomic,retain) UILabel * textLabel;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719OnboardingViewModel : _TtCs12_SwiftObject {
    id textSideMarginsForIphoneSE;
    id criticalImageSideMarginsForIphoneSE;
    id titleTextSizeForIphoneSE;
    id titleTopMarginsForIphoneSE;
    id bodySizeForIphoneSE;
    id timeManager;
    id glucoseUnits;
    id popToViewController;
    id glucoseCompassPresenter;
    id selectedTimeInterval;
    id didCameFromSettings;
    id tickmarkInterval;
    id settingsImported;
}
@end


/*****************************************************************/

@interface _TtC2G7P33_FF5B06A5E3A9DE1AE36149CB0CCA77987Toaster : _TtCs12_SwiftObject {
    id viewController;
    id baseInset;
    id animationDuration;
    id containerView;
    id toasts;
}
@end


/*****************************************************************/

@interface _TtC2G730SettingsTestActionSheetContent : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id delegate;
    id initialMode;
    id transmitterPairingStatusUpdateSubscriber;
    id receiverPairingStatusUpdateSubscriber;
    id pairTransmitterButton;
    id pairReceiverButton;
    id modeControl;
    id timeLeft;
}
@property (nonatomic) UIButton * pairTransmitterButton;
@property (nonatomic) UIButton * pairReceiverButton;
@property (nonatomic,retain) UISegmentedControl * modeControl;
@property (nonatomic,retain) UISlider * timeLeft;
- (void)pairTransmitterButtonPressed:(id)v1;
- (void)pairReceiverButtonPressed:(id)v1;
- (void)modeWithSender:(id)v1;
- (void)timeWithSender:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724ComputeACMViewController : _TtC2G720BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G716ShortcutsManager : _TtCs12_SwiftObject {
    id _allShortcuts;
    id _voiceShortcuts;
}
@end


/*****************************************************************/

@interface _TtC2G729InLineAcknowledgableToastable : UIView {
    id contentView;
    id bodyLabel;
    id acknowledgeButton;
    id body;
    id timeToDismiss;
    id completion;
    id identifier;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UILabel * bodyLabel;
@property (nonatomic) UIButton * acknowledgeButton;
- (id)initWithCoder:(id)v1;
- (void)acknowledgeButtonPressed:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718DebugLogOutputCell : UITableViewCell {
    id textView;
}
@property (nonatomic) UITextView * textView;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G714BulkDataLogger : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G739OnboardingOverviewSectionViewController : _TtC2G728MVVMOnboardingViewController {
    id scrollView;
    id scrollDownMessageBluerView;
    id nextButtonContainerView;
    id duration;
}
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIVisualEffectView * scrollDownMessageBluerView;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)onNextScreenButton:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730GlucoseContainerViewController : UIViewController {
    id phoneConflictIconView;
    id phoneConflictCountLabel;
    id phoneConflictViewModel;
    id alertBannerView;
    id alertBannerIcon;
    id alertBannerHeightConstraint;
    id alertBannerLabel;
    id alertBannerBorderView;
    id urgentLowSoonCountdownTimerName;
    id alertBannerHeightConstant;
    id systemStateContainerView;
    id stickyHeaderView;
    id magContainerBottom;
    id statusBarHeader;
    id miniMagGlass;
    id glucoseContainerHeaderView;
    id glucoseCompassPresenter;
    id noAlertsView;
    id warmupCountdownView;
    id thresholdTrendView;
    id warmupViewModel;
    id subscriptions;
    id criticalAlertWindow;
    id glucoseViewDataSource;
    id observers;
    id statusBarStyle;
    id glucoseViewController;
}
@property (nonatomic,readonly) bool shouldAutorotate;
@property (nonatomic) UIView * phoneConflictIconView;
@property (nonatomic) _TtC2G710BadgeLabel * phoneConflictCountLabel;
@property (nonatomic) UIView * alertBannerView;
@property (nonatomic) UIImageView * alertBannerIcon;
@property (nonatomic) NSLayoutConstraint * alertBannerHeightConstraint;
@property (nonatomic) UILabel * alertBannerLabel;
@property (nonatomic) UIView * alertBannerBorderView;
@property (nonatomic) _TtC2G724SystemStateContainerView * systemStateContainerView;
@property (nonatomic) UIView * stickyHeaderView;
@property (nonatomic) NSLayoutConstraint * magContainerBottom;
@property (nonatomic) UIView * statusBarHeader;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * miniMagGlass;
@property (nonatomic) UIView * glucoseContainerHeaderView;
@property (nonatomic,readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (id)embedGlucoseViewControllerWithCoder:(id)v1 sender:(id)v2 segueIdentifier:(id)v3;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (void)headerStateViewTapped;
- (void)onAddEvent:(id)v1;
- (void)dismissModal;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727ReplaceSensorAlertViewModel : _TtCs12_SwiftObject {
    id _graceTimeRemaining;
    id alertData;
    id displayStateSubscriber;
}
@end


/*****************************************************************/

@interface _TtC2G720CAMSConsentViewModel : _TtCs12_SwiftObject {
    id appCore;
    id localizeURL;
    id webViewAction;
    id isDataSharePermitted;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC2G719CriticalAlertWindow : UIWindow
- (id)initWithWindowScene:(id)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
@end


/*****************************************************************/

@interface _TtC2G726RemoveSensorViewController : _TtC2G720BaseUIViewController {
    id pullingOffSensorButton;
    id faqsButton;
    id pullingOffSensorStackView;
    id dexcomfFAQStackView;
    id pullingOffSensorStackViewTopConstraint;
}
@property (nonatomic) UIButton * pullingOffSensorButton;
@property (nonatomic) UIButton * faqsButton;
@property (nonatomic) UIStackView * pullingOffSensorStackView;
@property (nonatomic) UIStackView * dexcomfFAQStackView;
@property (nonatomic) NSLayoutConstraint * pullingOffSensorStackViewTopConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)removeSensorFAQTapped:(id)v1;
- (void)pullingOffSensorButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G734ReConsentActionSheetViewController : _TtC2G720BaseUIViewController {
    id consentTitle;
    id consentDescription;
    id continueButton;
    id dismissButton;
    id actionSheetDelegate;
}
@property (nonatomic) UILabel * consentTitle;
@property (nonatomic) UILabel * consentDescription;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * continueButton;
@property (nonatomic) _TtC12PhoenixUIKit15SecondaryButton * dismissButton;
- (void)viewDidLoad;
- (void)onContinueButtonTap:(id)v1;
- (void)onDismissButtonTap:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725BaseUITableViewController : UITableViewController {
    id screenDisplayStartTime;
}
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G7P33_F63190A4AA18CBB046A1B5812A1AF51C12FeatureFlags : _TtCs12_SwiftObject {
    id deafultJSONFilename;
    id currentFeatureFlagObject;
}
@end


/*****************************************************************/

@interface _TtC2G729ShareFollowerDetailsViewModel : _TtCs12_SwiftObject {
    id shareReaction;
    id _follower;
    id _followerRemoved;
    id defaultHeaderHeight;
    id topHeaderConstraintFactor;
    id bottomFooterConstraintFactor;
    id defaultNotificationRowCount;
    id defaultRowCount;
    id followersSubscriber;
    id shouldShowToast;
    id dataSharingUpdated;
    id followerNotificationSettings;
    id resendInviteDelegate;
    id resumeSharingDelegate;
    id subscriptions;
    id model;
    id onText;
    id offText;
}
@end


/*****************************************************************/

@interface _TtC2G710GCSService : _TtCs12_SwiftObject {
    id gcsURLRepositoryMonitor;
    id keyValueRepository;
    id featureFlagRepositoryMonitor;
    id gcsApi;
    id _status;
    id cancellables;
}
@end


/*****************************************************************/

@interface _TtC2G722GcsUoMOptionsViewModel : NSObject {
    id gcsUoMOptionsModel;
    id imageWidth;
    id imageHeight;
    id fontSize;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface TrendGraphTimespanResolutionResult : INEnumResolutionResult
+ (id)successWithResolvedTrendGraphTimespan:(long long)v1;
+ (id)confirmationRequiredWithTrendGraphTimespanToConfirm:(long long)v1;
@end


/*****************************************************************/

@interface _TtC2G729SensorCodeStartViewController : _TtC2G720BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface WidgetConfigurationIntent : INIntent
@property (nonatomic) long long trendGraphHours;
- (id)init;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G736TransmitterPairingHelpViewController : _TtC2G720BaseUIViewController {
    id titleLabel;
    id subTitleLabel;
    id listTitleLabel;
    id item1TextLabel;
    id item2TextLabel;
    id item3TextLabel;
    id item4TextLabel;
    id doneButton;
    id navItem;
    id item1View;
    id item2View;
    id item3View;
    id item4View;
    id checkParingCodeBadge;
    id tooManyBtSensorBadge;
    id subscriptions;
    id topConstraint;
    id bottomConstraint;
    id topConstraintFactor;
    id bottomConstraintFactor;
    id backButtonAccessibilityIDText;
    id pairingCode;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * subTitleLabel;
@property (nonatomic) UILabel * listTitleLabel;
@property (nonatomic) UILabel * item1TextLabel;
@property (nonatomic) UILabel * item2TextLabel;
@property (nonatomic) UILabel * item3TextLabel;
@property (nonatomic) UILabel * item4TextLabel;
@property (nonatomic) UIBarButtonItem * doneButton;
@property (nonatomic) UINavigationItem * navItem;
@property (nonatomic) _TtC2G714DesignableView * item1View;
@property (nonatomic) _TtC2G714DesignableView * item2View;
@property (nonatomic) _TtC2G714DesignableView * item3View;
@property (nonatomic) _TtC2G714DesignableView * item4View;
@property (nonatomic) UILabel * checkParingCodeBadge;
@property (nonatomic) UILabel * tooManyBtSensorBadge;
@property (nonatomic) NSLayoutConstraint * topConstraint;
@property (nonatomic) NSLayoutConstraint * bottomConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)doneButtonTapped:(id)v1;
- (void)cancelSearchTapped:(id)v1;
- (void)editPairingCodeTapped:(id)v1;
- (void)touchesEnded:(id)v1 withEvent:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ViewGlucoseIntentResponse : INIntentResponse {
    id code;
}
@property (nonatomic,copy) NSString * glucose;
@property (nonatomic,copy) NSString * rate;
@property (nonatomic) long long code;
+ (id)successIntentResponseWithGlucose:(id)v1 rate:(id)v2;
+ (id)lowMgdlReadingIntentResponseWithRate:(id)v1;
+ (id)highMgdlReadingIntentResponseWithRate:(id)v1;
+ (id)lowMmolReadingIntentResponseWithRate:(id)v1;
+ (id)highMmolReadingIntentResponseWithRate:(id)v1;
- (id)initWithCode:(long long)v1 userActivity:(id)v2;
- (id)init;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G724SoundAndVibrateViewModel : _TtCs12_SwiftObject {
    id alertIdentifier;
    id alertProfileType;
    id quietModesRepositoryMonitor;
    id alertProfileSettingsRepositoryMonitor;
    id rowsInSoundPreferenceSection;
    id rowsInAlertSoundSection;
    id accessibilityText;
    id baseSoundConflictDescriptionText;
}
@end


/*****************************************************************/

@interface _TtC2G78Snackbar : UIView {
    id animationDirection;
    id contentView;
    id stackView;
    id messageLabel;
    id contentHeight;
    id animationDuration;
    id animatedConstraint;
    id swipeRecognizer;
    id viewController;
    id contentViewController;
    id duration;
    id message;
    id dismissCompletion;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIStackView * stackView;
@property (nonatomic) UILabel * messageLabel;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)dealloc;
- (void)hide;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728BackdoorDebugAlertsViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G714ShareHomeModel : _TtCs12_SwiftObject {
    id networkStatus;
    id dataShareStatus;
    id authStatusProvider;
    id allowedSharing;
    id followers;
    id subscriptions;
    id shareMonitor;
}
@end


/*****************************************************************/

@interface _TtC2G718DXCMTertiaryButton : _TtC2G714DXCMPillButton
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G732DisplayDevicesInfoViewController : _TtC2G723BaseAlertViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G738FollowerInvitationNavigationController : UINavigationController {
    id onDoneBlock;
    id didCompleteInvitation;
}
- (void)viewDidDisappear:(bool)v1;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G737CalibrationDateTimeCollectionViewCell : UICollectionViewCell {
    id dateTimeLabel;
    id model;
}
@property (nonatomic) UILabel * dateTimeLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G712DXCMCardView : UIView {
    id cornerRadius;
    id shadowRadius;
    id shadowOffset;
    id shadowColor;
    id shadowOpacity;
    id borderWidth;
    id borderColor;
}
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic,retain) UIColor * shadowColor;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724DisplayHistoryRepository : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G731SensorFailedAlertViewController : _TtC2G723BaseAlertViewController {
    id okayBtn;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayBtn;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G734PhoneConflictSummaryViewController : _TtC2G720BaseUIViewController {
    id conflictsTitle;
    id conflictsDescription;
    id tableView;
    id phoneConflictsIcon;
    id viewModel;
    id conflictItemIdentifier;
    id phoneConflictHelpSubscription;
    id $__lazy_storage_$_dataSource;
}
@property (nonatomic) UILabel * conflictsTitle;
@property (nonatomic) UILabel * conflictsDescription;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) UIImageView * phoneConflictsIcon;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)close;
- (void)completeGuide:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718ThresholdTrendView : UIView {
    id contentView;
    id thresholdLabel;
    id trendLabel;
    id threshold;
    id trend;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UILabel * thresholdLabel;
@property (nonatomic) UILabel * trendLabel;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G747OnboardingUrgentAlertsTextVersionViewController : _TtC2G728MVVMOnboardingViewController {
    id firstCompass;
    id secondCompass;
    id urgentLowDescriptionLabel;
    id urgentLowSoonDescriptionLabel;
    id customizeAlertsTextLabel;
    id urgentLowNSoonoteLabel;
    id glucoseLabel;
    id eventsLabel;
    id connectionsLabel;
    id settingsLabel;
    id greenOval;
    id glucoseImageView;
    id eventsImageView;
    id connectionsImageView;
    id settingsImageView;
    id bottomCardView;
    id doneButton;
}
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * firstCompass;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * secondCompass;
@property (nonatomic) UILabel * urgentLowDescriptionLabel;
@property (nonatomic) UILabel * urgentLowSoonDescriptionLabel;
@property (nonatomic) UILabel * customizeAlertsTextLabel;
@property (nonatomic) UILabel * urgentLowNSoonoteLabel;
@property (nonatomic) UILabel * glucoseLabel;
@property (nonatomic) UILabel * eventsLabel;
@property (nonatomic) UILabel * connectionsLabel;
@property (nonatomic) UILabel * settingsLabel;
@property (nonatomic) UIImageView * greenOval;
@property (nonatomic) UIImageView * glucoseImageView;
@property (nonatomic) UIImageView * eventsImageView;
@property (nonatomic) UIImageView * connectionsImageView;
@property (nonatomic) UIImageView * settingsImageView;
@property (nonatomic) _TtC2G721CardViewWithoutShadow * bottomCardView;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * doneButton;
- (void)viewDidLoad;
- (void)onDoneButtonTapped:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721WarmupHeaderViewModel : _TtCs12_SwiftObject {
    id _timeRemainingText;
    id statusText;
    id warmupTimeSubscriber;
    id timeRemaining;
}
@end


/*****************************************************************/

@interface _TtC2G728OnboardingHomeViewController : _TtC2G728MVVMOnboardingViewController<UIGestureRecognizerDelegate> {
    id cardsStackView;
    id overviewCard;
    id overviewButton;
    id overviewTitleLabel;
    id overviewDescriptionLabel;
    id dexTitleImageView;
    id overviewImage;
    id overviewCompleteLabel;
    id appSetupCard;
    id appSetupButton;
    id appSetupTitleLabel;
    id appSetupDescriptionLabel;
    id appSetupImage;
    id startSensorCard;
    id startSensorButton;
    id startSensorTitleLabel;
    id startSensorDescriptionLabel;
    id startSensorImage;
    id showInitialLegalAgreements;
    id buttonSizeForIphoneSE;
    id cardSideMargins;
    id cardsStackViewWidthForIphoneSE;
    id titleTextSizeForIphoneSE;
    id bodySizeForIphoneSE;
    id cornerRadiusForButton;
    id cornerRadiusForIphoneSE;
    id appStateRepository;
    id featureFlagsRepository;
    id subscribers;
}
@property (nonatomic) UIStackView * cardsStackView;
@property (nonatomic) _TtC2G712DXCMCardView * overviewCard;
@property (nonatomic) UIButton * overviewButton;
@property (nonatomic) UILabel * overviewTitleLabel;
@property (nonatomic) UILabel * overviewDescriptionLabel;
@property (nonatomic) UIImageView * dexTitleImageView;
@property (nonatomic) UIImageView * overviewImage;
@property (nonatomic) UILabel * overviewCompleteLabel;
@property (nonatomic) _TtC2G712DXCMCardView * appSetupCard;
@property (nonatomic) UIButton * appSetupButton;
@property (nonatomic) UILabel * appSetupTitleLabel;
@property (nonatomic) UILabel * appSetupDescriptionLabel;
@property (nonatomic) UIImageView * appSetupImage;
@property (nonatomic) _TtC2G712DXCMCardView * startSensorCard;
@property (nonatomic) UIButton * startSensorButton;
@property (nonatomic) UILabel * startSensorTitleLabel;
@property (nonatomic) UILabel * startSensorDescriptionLabel;
@property (nonatomic) UIImageView * startSensorImage;
- (void)onOverviewTap:(id)v1;
- (void)onAppSetupTap:(id)v1;
- (void)onStartSensorTap:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727BackdoorTableViewController : _TtC2G725BaseUITableViewController {
    id mockSwitch;
    id unitsOfMeasureValueLabel;
    id targetRangeValueLabel;
    id diskSpaceRemainingLabel;
    id alertProfilesToolTipsValueLabel;
    id debugViewModel;
    id toolBar;
    id onboardingStatePicker;
}
@property (nonatomic) UISwitch * mockSwitch;
@property (nonatomic) UILabel * unitsOfMeasureValueLabel;
@property (nonatomic) UILabel * targetRangeValueLabel;
@property (nonatomic) UILabel * diskSpaceRemainingLabel;
@property (nonatomic) UILabel * alertProfilesToolTipsValueLabel;
- (void)viewDidLoad;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)mockSwitchChangeWithSender:(id)v1;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G711AudioPlayer : NSObject {
    id player;
    id observers;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728AlertProfileDetailsViewModel : _TtCs12_SwiftObject {
    id alertManager;
    id quietModesRepository;
    id quietModesSwitchesShowing;
    id displayType;
    id subscribers;
    id profileInfo;
}
@end


/*****************************************************************/

@interface _TtC2G729SignalLossAlertViewController : _TtC2G723BaseAlertViewController {
    id distanceDescriptionLabel;
    id okayButton;
}
@property (nonatomic) UILabel * distanceDescriptionLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G720ShareStatusShareCell : UITableViewCell {
    id statusLabel;
    id errorBadgeLabel;
    id statusLabelTrailingContraint;
    id errorLeadingContstraint;
}
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * errorBadgeLabel;
@property (nonatomic) NSLayoutConstraint * statusLabelTrailingContraint;
@property (nonatomic) NSLayoutConstraint * errorLeadingContstraint;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G739OnboardingSafetyStatementViewController : _TtC2G728MVVMOnboardingViewController {
    id safetyStatementDescription;
    id okButton;
    id fullSafetyStatementButton;
}
@property (nonatomic) UILabel * safetyStatementDescription;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okButton;
@property (nonatomic) _TtC12PhoenixUIKit14TertiaryButton * fullSafetyStatementButton;
- (void)viewDidLoad;
- (void)next;
- (void)showSafetyStatement;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G736MVVMTutorialOnboardingViewController : _TtC2G728MVVMOnboardingViewController {
    id statusSubscriber;
    id avPlayerViewController;
    id playerStatus;
    id player;
}
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G713HelpViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC2G733ChangingFastAlertDetailsViewModel : _TtCs12_SwiftObject {
    id alertProfileType;
    id changingFastType;
    id alertIdentifier;
    id indexPaths;
    id accessibilityIDText;
    id selectedIndex;
    id alertLevelPickerData;
    id buttonGroup;
}
@end


/*****************************************************************/

@interface _TtC2G713DXCMAddButton : UIButton {
    id cornerRadius;
    id shadowRadius;
    id shadowOpacity;
    id shadowColor;
    id buttonHapticFeedbackGenerator;
}
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowRadius;
@property (nonatomic) float shadowOpacity;
@property (nonatomic,retain) UIColor * shadowColor;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (void)touchesEnded:(id)v1 withEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G716CountryCodeUtils : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G721CardViewWithoutShadow : UIView {
    id cornerRadius;
    id borderWidth;
}
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
@end


/*****************************************************************/

@interface _TtC2G724ClarityCardInfoViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G747AlertThresholdsActionSheetContentViewController : _TtC2G720BaseUIViewController {
    id resizeSheetDelegate;
    id actionSheetDelegate;
    id viewModel;
    id quietModesRepositoryMonitor;
    id quietModesSubscriptions;
    id contentSliderNormalHeight;
    id contentSliderSmallDevicesHeight;
    id quietModesViewNormalBottomOffset;
    id quietModesViewSmallDevicesBottomOffset;
    id pickerViewBottomPaddingConstant;
    id alertProfiles;
    id showQuietModesButton;
    id lowThresholdSwitch;
    id highThresholdSwitch;
    id lowThresholdSlider;
    id highThresholdSlider;
    id lowSliderView;
    id highSliderView;
    id lowThresholdContainerView;
    id highThresholdContainerView;
    id lowThresholdValueLabel;
    id highThresholdValueLabel;
    id quietModeDisabledView;
    id quietModeAccessView;
    id quietModesView;
    id vibrateModeSwitch;
    id silenceAllModeSwitch;
    id highAlertViewHeightConstraint;
    id lowAlertViewHeightConstraint;
    id quietModesViewBottomConstraint;
    id silenceAllSwitchContainingView;
    id separationViewBetweenQuietModeSwitches;
}
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * showQuietModesButton;
@property (nonatomic) UISwitch * lowThresholdSwitch;
@property (nonatomic) UISwitch * highThresholdSwitch;
@property (nonatomic) UISlider * lowThresholdSlider;
@property (nonatomic) UISlider * highThresholdSlider;
@property (nonatomic) UIView * lowSliderView;
@property (nonatomic) UIView * highSliderView;
@property (nonatomic) _TtC2G714DesignableView * lowThresholdContainerView;
@property (nonatomic) _TtC2G714DesignableView * highThresholdContainerView;
@property (nonatomic) UILabel * lowThresholdValueLabel;
@property (nonatomic) UILabel * highThresholdValueLabel;
@property (nonatomic) UIView * quietModeDisabledView;
@property (nonatomic) UIView * quietModeAccessView;
@property (nonatomic) UIView * quietModesView;
@property (nonatomic) UISwitch * vibrateModeSwitch;
@property (nonatomic) UISwitch * silenceAllModeSwitch;
@property (nonatomic) NSLayoutConstraint * highAlertViewHeightConstraint;
@property (nonatomic) NSLayoutConstraint * lowAlertViewHeightConstraint;
@property (nonatomic) NSLayoutConstraint * quietModesViewBottomConstraint;
@property (nonatomic) UIView * silenceAllSwitchContainingView;
@property (nonatomic) UIView * separationViewBetweenQuietModeSwitches;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)resizeOnAppear;
- (void)switchChanged:(id)v1;
- (void)sliderChange:(id)v1;
- (void)didEndChanging:(id)v1;
- (void)onQuietModesMoreInfo:(id)v1;
- (void)onShowQuietModes:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732ShareSetupCompleteViewController : _TtC2G720BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G725StartSensorViewController : _TtC2G720BaseUIViewController<UIScrollViewDelegate> {
    id feedbackReceived;
    id isWarmUpStateOrGracePeriod;
    id startNewSensorTitle;
    id cancelButton;
    id feedbackView;
    id feedbackThankYouText;
    id step1Label;
    id removeSensorNowTitle;
    id removeSensorNowSubTitle;
    id moreInfoContainerView;
    id moreInfoButton;
    id pullingPatchImageView;
    id isPullingPatchPainfulButton;
    id isPullingPatchPainfulInstructionLabel;
    id faqStackView;
    id faqTextPrompt;
    id faqsButton;
    id step2Label;
    id insertNewSensorTitle;
    id howToInsertBtn;
    id newSensorInsertedBtn;
    id topConstraintForStep1Container;
}
@property (nonatomic) UINavigationItem * startNewSensorTitle;
@property (nonatomic) UIBarButtonItem * cancelButton;
@property (nonatomic) UIView * feedbackView;
@property (nonatomic) UILabel * feedbackThankYouText;
@property (nonatomic) UILabel * step1Label;
@property (nonatomic) UILabel * removeSensorNowTitle;
@property (nonatomic) UILabel * removeSensorNowSubTitle;
@property (nonatomic) UIView * moreInfoContainerView;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * moreInfoButton;
@property (nonatomic) UIImageView * pullingPatchImageView;
@property (nonatomic) UIButton * isPullingPatchPainfulButton;
@property (nonatomic) UILabel * isPullingPatchPainfulInstructionLabel;
@property (nonatomic) UIStackView * faqStackView;
@property (nonatomic) UILabel * faqTextPrompt;
@property (nonatomic) UIButton * faqsButton;
@property (nonatomic) UILabel * step2Label;
@property (nonatomic) UILabel * insertNewSensorTitle;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * howToInsertBtn;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * newSensorInsertedBtn;
@property (nonatomic) NSLayoutConstraint * topConstraintForStep1Container;
- (void)onCancelButtonTap:(id)v1;
- (void)onHowToInsertSensorButtonTap:(id)v1;
- (void)onNewSensorIsInsertedButtonTap:(id)v1;
- (void)moreInfoButtonTap:(id)v1;
- (void)isPullingPatchPainfulButtonTap:(id)v1;
- (void)removeSensorFAQTapped:(id)v1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729AppBluetoothOffViewController : _TtC2G720BaseUIViewController {
    id statusLabel;
    id detailLabel;
    id bluetoothOffImageView;
    id imageHeightConstraint;
    id imageTopConstraint;
    id noAlertsView;
    id helpButtonContainerView;
    id helpButton;
}
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIImageView * bluetoothOffImageView;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) NSLayoutConstraint * imageTopConstraint;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIView * helpButtonContainerView;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G754OnboardingTreatmentDecisionsTextMagGlassViewController : _TtC2G728MVVMOnboardingViewController {
    id glucoseMeterTopImageView;
    id numberAndArrowGlucoseCompass;
    id numberGlucoseCompass;
    id arrowGlucoseCompass;
    id glucoseMeterBottomImageView;
    id numberAndArrowBodyLabel;
    id numberAndArrowFooterLabel;
    id cgmTreatmentDecisionLabel;
    id nextButtonContainerView;
}
@property (nonatomic) UIImageView * glucoseMeterTopImageView;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * numberAndArrowGlucoseCompass;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * numberGlucoseCompass;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * arrowGlucoseCompass;
@property (nonatomic) UIImageView * glucoseMeterBottomImageView;
@property (nonatomic) UILabel * numberAndArrowBodyLabel;
@property (nonatomic) UILabel * numberAndArrowFooterLabel;
@property (nonatomic) UILabel * cgmTreatmentDecisionLabel;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724InvalidCORViewController : _TtC2G720BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G7P33_FF5B06A5E3A9DE1AE36149CB0CCA779820ToasterContainerView : UIView {
    id touchableFrame;
}
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G719DebugViewController : _TtC2G720BaseUIViewController<UITextFieldDelegate,UIPickerViewDataSource,UIPickerViewDelegate> {
    id trendPickerComponentNumber;
    id egvTextField;
    id trendPickerView;
    id trendPickerData;
    id subscribers;
}
@property (nonatomic) UITextField * egvTextField;
@property (nonatomic) UIPickerView * trendPickerView;
- (void)sendNewEGVPressed:(id)v1;
- (void)sendThreeDaysOfEGVPressed:(id)v1;
- (void)graphHeightChanged:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)dismissPressedWithSender:(id)v1;
- (void)showButtonLibrary:(id)v1;
- (void)showDBInfo:(id)v1;
- (void)shareWatchCGMCoreDB;
- (void)shareWatchDexAppKitDB;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721GlucoseViewDataSource : _TtCs12_SwiftObject {
    id _trendGraphDataSource;
    id _cgmStatusViewModel;
    id _trendGraphAvailable;
    id _clarityCardAvailable;
    id _timeIntervalInHours;
    id urgentLowBannerText;
    id cgmStatusSubscriber;
    id trendGraphCombinedSubscriber;
    id trendGraphCGMReadingsSubscriber;
    id trendGraphAvailabilitySubscriber;
    id clarityCardAvailabilitySubscriber;
    id glucoseRepositoryMonitor;
    id settingsRepositoryMonitor;
}
@end


/*****************************************************************/

@interface _TtC2G728MVVMOnboardingViewController : _TtC2G720BaseUIViewController {
    id viewModel;
}
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (void)onDoneBarButtonTap;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G714QualtricsUtils : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G718G7SafetySmallSheet : _TtC2G723BaseAlertViewController {
    id viewNowBtn;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * viewNowBtn;
- (void)viewDidLoad;
- (void)viewNowButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G737GracePeriodExpiredAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)okButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G731SignalLossAlertDetailsViewModel : _TtCs12_SwiftObject {
    id alertProfileType;
    id indexPaths;
    id accessibilityIDText;
    id accessibilityText;
    id secondaryProfileHeaderTextSize;
    id forMoreThanMinuteInterval;
    id forMoreThanTitle;
    id forMoreThanDescription;
}
@end


/*****************************************************************/

@interface _TtC2G727UserEventsRepositoryMonitor : _TtCs12_SwiftObject {
    id eventRepository;
    id subscribers;
    id _eventCache;
    id lastUpdatedEvent;
}
- (void)processEvents;
@end


/*****************************************************************/

@interface _TtC2G734GcsConfirmUoMOptionsViewController : _TtC2G720BaseUIViewController {
    id confirmationTextLabel;
    id confirmButton;
    id changeUnitOfMeasureButton;
    id delegate;
    id unitOfMeasurement;
}
@property (nonatomic,retain) UILabel * confirmationTextLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * confirmButton;
@property (nonatomic) _TtC12PhoenixUIKit14TertiaryButton * changeUnitOfMeasureButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)confirmButtonPressedWithSender:(id)v1;
- (void)changeUnitOfMeasureButtonPressedWithSender:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721ShareStatusDetailCell : UITableViewCell {
    id cardLabel;
    id statusLabel;
    id messageLabel;
    id statusIcon;
    id hintToResolveLabel;
    id cardBottomConstraint;
    id issueSolveAction;
}
@property (nonatomic) UILabel * cardLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * messageLabel;
@property (nonatomic) UIImageView * statusIcon;
@property (nonatomic) UILabel * hintToResolveLabel;
@property (nonatomic) NSLayoutConstraint * cardBottomConstraint;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730AboutCalibrationViewController : _TtC2G720BaseUIViewController {
    id iUnderstandButton;
    id eventRecord;
    id bgValueString;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * iUnderstandButton;
- (void)onIUnderstandButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724InsulinSwimlanePresenter : _TtC12PhoenixUIKit21BaseSwimlanePresenter {
    id insulinEvents;
    id theme;
    id minimumOffsetBetweenOverlappingEvents;
}
@end


/*****************************************************************/

@interface _TtC2G738SensorAttachInstructionsViewController : _TtC2G736SensorInstructionsBaseViewController {
    id nextButtonContainerView;
}
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)nextButtonTapped:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730ShareFollowerDetailsHeaderView : UITableViewHeaderFooterView {
    id headerLabel;
    id headerIcon;
}
@property (nonatomic) UILabel * headerLabel;
@property (nonatomic) UIImageView * headerIcon;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G734LegalAgreementsModalViewController : DXCMLegalAgreementsModalVC {
    id networkReachability;
    id subscribers;
    id networkIsReachable;
}
- (void)viewDidAppear:(bool)v1;
- (id)initWithAddress:(id)v1;
- (id)initWithURL:(id)v1;
- (id)initWithURLRequest:(id)v1;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G731AppleHealthOnCollectionViewCell : UICollectionViewCell {
    id statusLabel;
    id viewModel;
}
@property (nonatomic) UILabel * statusLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G737TroubleshootingMoveAwayViewController : _TtC2G720BaseUIViewController {
    id backButtonAccessibilityIDText;
    id distanceDescriptionLabel;
    id distanceTitleLabel;
}
@property (nonatomic) UILabel * distanceDescriptionLabel;
@property (nonatomic) UILabel * distanceTitleLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719QuietModesViewModel : _TtCs12_SwiftObject {
    id timeRemainingTimer;
    id timeRemainingPublisher;
    id timeRemainingSubscription;
    id _activeQuietMode;
    id _activationTime;
    id _expirationTime;
    id _vibrateIndefinitely;
    id _timerDurationText;
    id _timerExpirationText;
    id _timerDescriptionText;
    id sliderMaxMinutes;
    id sliderMaxSteps;
    id newDurationIsIndefinite;
    id timeRemaining;
    id modeToEdit;
    id newDurationTime;
    id editingState;
    id quietModesRepositoryMonitor;
}
@end


/*****************************************************************/

@interface _TtC2G726MinutePickerViewController : _TtC2G720BaseUIViewController<UIPickerViewDataSource,UIPickerViewDelegate> {
    id saveButton;
    id cancelButton;
    id minutePickerView;
    id alertTitleLabel;
    id alertDescriptionLabel;
    id minutesLeadingConstraint;
    id minutePickerViewBottomConstraint;
    id delegate;
    id actionSheetDelegate;
    id alertTitle;
    id alertDescription;
    id valueComponentIndex;
    id defaultCompnentCount;
    id minutePickerViewModel;
    id pickerViewLeadingConstant;
    id pickerViewHeightConstant;
    id pickerViewBottomPaddingConstant;
}
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * saveButton;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UIPickerView * minutePickerView;
@property (nonatomic) UILabel * alertTitleLabel;
@property (nonatomic) UILabel * alertDescriptionLabel;
@property (nonatomic) NSLayoutConstraint * minutesLeadingConstraint;
@property (nonatomic) NSLayoutConstraint * minutePickerViewBottomConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)savePressed:(id)v1;
- (void)cancelPressed:(id)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (double)pickerView:(id)v1 rowHeightForComponent:(long long)v2;
- (id)pickerView:(id)v1 viewForRow:(long long)v2 forComponent:(long long)v3 reusingView:(id)v4;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717MaterialTextField : UIView {
    id errorText;
    id inactiveBorderColor;
    id inactivePlaceholderColor;
    id inactiveBackgroundColor;
    id editingBorderColor;
    id editingPlaceholderColor;
    id editingBackgroundColor;
    id invalidBorderColor;
    id invalidPlaceholderColor;
    id invalidBackgroundColor;
    id contentView;
    id stack;
    id borderAndBackgroundContainer;
    id placeholderLabel;
    id textField;
    id clearTextButton;
    id errorLabel;
    id errorBadge;
    id _text;
    id editingBegan;
    id editingEnded;
}
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic,copy) NSString * placeholder;
@property (nonatomic,copy) NSString * errorText;
@property (nonatomic,retain) UIColor * inactiveBorderColor;
@property (nonatomic,retain) UIColor * inactivePlaceholderColor;
@property (nonatomic,retain) UIColor * inactiveBackgroundColor;
@property (nonatomic,retain) UIColor * editingBorderColor;
@property (nonatomic,retain) UIColor * editingPlaceholderColor;
@property (nonatomic,retain) UIColor * editingBackgroundColor;
@property (nonatomic,retain) UIColor * invalidBorderColor;
@property (nonatomic,retain) UIColor * invalidPlaceholderColor;
@property (nonatomic,retain) UIColor * invalidBackgroundColor;
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UIStackView * stack;
@property (nonatomic) _TtC2G714DesignableView * borderAndBackgroundContainer;
@property (nonatomic) UILabel * placeholderLabel;
@property (nonatomic) UITextField * textField;
@property (nonatomic) UIButton * clearTextButton;
@property (nonatomic) UILabel * errorLabel;
@property (nonatomic) UIButton * errorBadge;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
@property (nonatomic,copy) NSString * accessibilityIdentifier;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (bool)becomeFirstResponder;
- (bool)resignFirstResponder;
- (void)editingDidBegin;
- (void)editingChanged;
- (void)eiditingDidEnd;
- (void)clearTextTapped;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727AlertScheduleDaysFooterView : UITableViewHeaderFooterView
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G723AcknowledgableToastable : UIView {
    id stackView;
    id titleLabel;
    id bodyLabel;
    id contentView;
    id acknowledgeButton;
    id secondaryButton;
    id title;
    id body;
    id identifier;
    id buttonTitle;
    id timeToDismiss;
    id completion;
    id defaultSpacing;
    id secondaryButtonTitle;
    id secondaryCompletion;
    id shouldDismissOnSecondaryButton;
    id secondaryButtonIsHidden;
}
@property (nonatomic) UIStackView * stackView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * bodyLabel;
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIButton * acknowledgeButton;
@property (nonatomic) UIButton * secondaryButton;
- (id)initWithCoder:(id)v1;
- (void)acknowledgeButtonPressed:(id)v1;
- (void)secondaryButtonPressed:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732InvalidPairingCodeViewController : _TtC2G720BaseUIViewController {
    id takePhotoLabel;
    id takePhotoBtn;
    id reEnterCodeBtn;
    id actionSheetDelegate;
    id delegate;
}
@property (nonatomic) UILabel * takePhotoLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * takePhotoBtn;
@property (nonatomic) _TtC12PhoenixUIKit15SecondaryButton * reEnterCodeBtn;
- (void)onTakePhotoButtonTap:(id)v1;
- (void)onEnterCodeManuallyButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G720GraphHeightViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
    id currentLocale;
    id settingsRepo;
}
@end


/*****************************************************************/

@interface _TtC2G715ShareStatusCell : UICollectionViewCell {
    id summaryLabel;
    id errorCountLabel;
}
@property (nonatomic) UILabel * summaryLabel;
@property (nonatomic) UILabel * errorCountLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730EventsCollectionViewController : _TtC2G730BaseUICollectionViewController {
    id eventsViewModel;
    id subscribers;
    id $__lazy_storage_$_dataSource;
    id confirmableToolTip;
}
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)reloadCollectionView;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
- (void)scrollViewDidScroll:(id)v1;
- (id)initWithCollectionViewLayout:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718ShareHomeViewModel : _TtCs12_SwiftObject {
    id _followers;
    id _shareStatus;
    id activeFollowers;
    id inactiveFollowers;
    id loginRequired;
    id errorCount;
    id diffableDataSource;
    id subscriptions;
    id model;
    id currentTimeProvider;
    id followersSectionIndex;
    id inviteFollowersSectionIndex;
}
- (void)shareToggled:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G719DXCMSecondaryButton : _TtC2G714DXCMPillButton
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G734CalibrationLearnMoreViewController : _TtC2G720BaseUIViewController {
    id moreInformationTextView;
    id faqURL;
}
@property (nonatomic) UITextView * moreInformationTextView;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730OnboardingNavigationController : UINavigationController<UINavigationControllerDelegate> {
    id viewControllerToPopTo;
}
- (void)viewDidLoad;
- (void)navigationController:(id)v1 willShowViewController:(id)v2 animated:(bool)v3;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726BluetoothOffViewController : _TtC2G720BaseUIViewController {
    id statusLabel;
    id detailLabel;
    id bluetoothOffImageView;
    id imageHeightConstraint;
    id imageTopConstraint;
    id noAlertsView;
    id helpButtonContainerView;
    id helpButton;
}
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIImageView * bluetoothOffImageView;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) NSLayoutConstraint * imageTopConstraint;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIView * helpButtonContainerView;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G736SensorInstructionsBaseViewController : _TtC2G728MVVMOnboardingViewController {
    id delegate;
    id isOnboarding;
}
- (void)viewDidLoad;
- (void)skip;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G731PhoneConflictHelpViewController : _TtC2G720BaseUIViewController {
    id phoneConflictsTitle;
    id phoneConflictsDescription;
    id phoneConflictsIcon;
    id tableView;
    id tableViewHeight;
    id howToFix;
    id dismissButton;
    id conflictItemIdentifier;
    id viewModel;
    id phoneConflictHelpSubscription;
    id $__lazy_storage_$_dataSource;
    id actionSheetDelegate;
}
@property (nonatomic) UILabel * phoneConflictsTitle;
@property (nonatomic) UILabel * phoneConflictsDescription;
@property (nonatomic) UIImageView * phoneConflictsIcon;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) NSLayoutConstraint * tableViewHeight;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * howToFix;
@property (nonatomic) _TtC12PhoenixUIKit14TertiaryButton * dismissButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)showHowTo:(id)v1;
- (void)dismiss:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723GCSURLRepositoryMonitor : _TtCs12_SwiftObject {
    id urlRepository;
    id onURLUpdate;
    id urls;
}
@end


/*****************************************************************/

@interface _TtC2G725ClarityeA1CViewController : UIViewController {
    id daysTextField;
    id dataCapturePercentTextField;
    id acceleratedDaysLabel;
}
@property (nonatomic) UITextField * daysTextField;
@property (nonatomic) UITextField * dataCapturePercentTextField;
@property (nonatomic) UILabel * acceleratedDaysLabel;
- (void)viewDidLoad;
- (void)resetTimeAndData:(id)v1;
- (void)sendEgvData:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G710EventsCell : UICollectionViewCell {
    id eventIcon;
    id eventTitle;
    id eventValue;
    id eventValueUnits;
    id eventDetails;
    id eventDescription;
    id disclosureIndicator;
    id isDetailsView;
    id $__lazy_storage_$_dateFormatter;
    id event;
    id showDisclosureIndicator;
}
@property (nonatomic) UIImageView * eventIcon;
@property (nonatomic) UILabel * eventTitle;
@property (nonatomic) UILabel * eventValue;
@property (nonatomic) UILabel * eventValueUnits;
@property (nonatomic) UILabel * eventDetails;
@property (nonatomic) UILabel * eventDescription;
@property (nonatomic) UIImageView * disclosureIndicator;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730LandscapeMagGlassMiniViewModel : _TtCs12_SwiftObject {
    id subscribers;
    id _displayNeedsUpdating;
    id glucoseNumericValueString;
    id glucoseUnitsDisplayString;
    id glucoseRateArrowDisplayString;
}
@end


/*****************************************************************/

@interface WidgetConfigurationIntentResponse : INIntentResponse {
    id code;
}
@property (nonatomic) long long code;
- (id)initWithCode:(long long)v1 userActivity:(id)v2;
- (id)init;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtCV2G7P33_F7B3B58C377A85923E0C69DC3CAFA9A410ShortcutVC11Coordinator : NSObject<INUIEditVoiceShortcutViewControllerDelegate,INUIAddVoiceShortcutViewControllerDelegate> {
    id parent;
    id viewDisplayStartTime;
    id viewName;
}
- (void)addVoiceShortcutViewController:(id)v1 didFinishWithVoiceShortcut:(id)v2 error:(id)v3;
- (void)addVoiceShortcutViewControllerDidCancel:(id)v1;
- (void)editVoiceShortcutViewController:(id)v1 didUpdateVoiceShortcut:(id)v2 error:(id)v3;
- (void)editVoiceShortcutViewController:(id)v1 didDeleteVoiceShortcutWithIdentifier:(id)v2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727GlucoseTabSettingsViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
    id settingsRepo;
}
@end


/*****************************************************************/

@interface _TtC2G727IntensityCollectionViewCell : UICollectionViewCell {
    id switchIntensity;
    id separatorLineView;
    id model;
    id delegate;
}
@property (nonatomic) UISwitch * switchIntensity;
@property (nonatomic) UIView * separatorLineView;
- (void)onSwitch:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G736GlucoseLevelThresholdPickerViewModel : _TtCs12_SwiftObject {
    id pickerDisplayList;
    id pickerInterval;
    id originalLevel;
    id selectedRow;
    id originalRow;
}
@end


/*****************************************************************/

@interface _TtC2G724QuietModeBannerViewModel : _TtCs12_SwiftObject {
    id activeQuietMode;
    id _bannerText;
    id _bannerIconImageName;
    id timeRemainingTimer;
    id timeRemainingPublisher;
    id timeRemainingSubscription;
    id expirationTime;
    id vibrateIndefinitely;
    id subscribers;
    id quietModesRepositoryMonitor;
}
@end


/*****************************************************************/

@interface _TtC2G742OnboardingSearchingForSensorViewController : _TtC2G720BaseUIViewController {
    id loadingImage;
    id pairingCodeLabel;
    id distanceDescriptionLabel;
    id pairingCode;
    id subscribers;
    id txId;
}
@property (nonatomic) UIImageView * loadingImage;
@property (nonatomic) UILabel * pairingCodeLabel;
@property (nonatomic) UILabel * distanceDescriptionLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)pairingCancelled;
- (void)pairingCodeEdit;
- (void)helpButtonTap:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729LegalAgreementsViewController : DXCMLegalAgreementsVC {
    id networkReachability;
    id subscribers;
    id networkIsReachable;
}
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)updateErrorHTML;
- (id)initWithAddress:(id)v1;
- (id)initWithURL:(id)v1;
- (id)initWithURLRequest:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G713SceneDelegate : UIResponder<UIWindowSceneDelegate> {
    id applicationServiceStarter;
    id window;
    id splashWindow;
    id privacyWindow;
}
@property (nonatomic,retain) UIWindow * window;
- (void)scene:(id)v1 willConnectToSession:(id)v2 options:(id)v3;
- (void)sceneWillEnterForeground:(id)v1;
- (void)sceneWillResignActive:(id)v1;
- (void)sceneDidBecomeActive:(id)v1;
- (void)scene:(id)v1 continueUserActivity:(id)v2;
- (void)sceneDidEnterBackground:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717SnackbarToastable : UIView {
    id contentView;
    id stackView;
    id iconImageView;
    id messageLabel;
    id message;
    id identifier;
    id icon;
    id duration;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIStackView * stackView;
@property (nonatomic) UIImageView * iconImageView;
@property (nonatomic) UILabel * messageLabel;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G715DXCMButtonLabel : _TtC2G710DXCMButton
- (void)prepareForInterfaceBuilder;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725SnapshotAggregatorManager : _TtCs12_SwiftObject {
    id sharedContainerManager;
    id txSessionStatePublisher;
    id settingsRepositoryMonitor;
    id appCoreService;
    id displayState;
    id quietModesRepositoryMonitor;
    id diskSpaceEventPublisher;
    id databaseEventPublisher;
    id phoneConflictRepositoryMonitor;
    id alertProfilesMonitor;
    id acmEnvironmentValidity;
    id timeManager;
    id subscriptions;
    id filePresenter;
    id lastEGV;
    id bgTaskScheduler;
    id isUrgentLowSoon;
    id urgentLowBannerLabel;
    id blockingStatePublisher;
    id snapshotUpdated;
    id publishSnapshot;
    id serialQueue;
    id sharedContainerSuite;
    id logger;
    id _lastWidgetReload;
}
@end


/*****************************************************************/

@interface _TtC2G710HeaderView : UICollectionReusableView {
    id infoButton;
    id headerTitle;
    id indexPath;
    id delegate;
}
@property (nonatomic) UIButton * infoButton;
@property (nonatomic) UILabel * headerTitle;
- (void)tappedInfoButton:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G739SensorPeelOffInstructionsViewController : _TtC2G736SensorInstructionsBaseViewController {
    id overPatchLabel;
    id overPatchDetailLabel;
    id nextButtonContainerView;
    id nextButton;
}
@property (nonatomic) UILabel * overPatchLabel;
@property (nonatomic) UILabel * overPatchDetailLabel;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)nextButtonTapped:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724ConnectionErrorViewModel : _TtCs12_SwiftObject {
    id appCore;
    id gcsService;
    id accessToken;
    id subscribers;
    id debugErrorMessage;
}
@end


/*****************************************************************/

@interface _TtC2G723SoundSelectionViewModel : _TtCs12_SwiftObject {
    id cellAccessibilityIdBase;
    id soundNameAccessibilityIdBase;
    id alertProfilesRepositoryMonitor;
    id alertIdentifier;
    id alertProfileType;
    id alertSoundOptions;
    id _currentAlertSound;
    id currentSoundIntensity;
}
@end


/*****************************************************************/

@interface _TtC2G724SensorAlreadyPairedAlert : _TtC2G723BaseAlertViewController {
    id titleLabel;
    id bodyLabel;
    id okayButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * bodyLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G714AppCoreService : _TtCs12_SwiftObject {
    id displayState;
    id bleState;
    id authStatus;
    id persistenceError;
    id isCommunicatingWithTx;
    id acmEnvironmentValidity;
    id lifeCycleManager;
    id gcsService;
    id healthSystemBackgroundTaskName;
    id appCore;
    id appCoreEventSubscriptions;
    id $__lazy_storage_$_bulkDataLogging;
    id lastThirdPartyUpload;
    id thirdPartyHealthSystem;
}
- (void)refreshDisplayState;
@end


/*****************************************************************/

@interface _TtC2G720DebugLogFileObserver : NSObject<NSFilePresenter> {
    id presentedItemURL;
    id presentedItemOperationQueue;
    id fileManager;
    id logFileUpdatedSubject;
}
@property (nonatomic,copy) NSURL * presentedItemURL;
@property (nonatomic,retain) NSOperationQueue * presentedItemOperationQueue;
- (void)presentedItemDidChange;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G738TroubleshootingCheckCodeViewController : _TtC2G720BaseUIViewController {
    id pairingCode;
    id backButtonAccessibilityIDText;
    id pairingCodeContainerView;
    id pairingCodeLabel;
}
@property (nonatomic) UIView * pairingCodeContainerView;
@property (nonatomic) UILabel * pairingCodeLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)editPairingCodeTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G720ConnectionsViewModel : _TtCs12_SwiftObject {
    id _connections;
    id subscriptions;
    id shareStatusSubscription;
    id appCore;
    id networkReachabilityProvider;
    id authStatusProvider;
    id shareMonitor;
    id $__lazy_storage_$_shareHomeViewModel;
    id appleHealthViewModel;
}
@end


/*****************************************************************/

@interface _TtC2G724PersistentCountdownTimer : _TtCs12_SwiftObject {
    id _countdownCompleted;
    id countdownCheckTimer;
    id countdownTimerName;
    id countdownStartDate;
    id countdownTimeInterval;
}
@end


/*****************************************************************/

@interface _TtC2G759OnboardingSensorReadingsTextVersionTrendGraphViewController : _TtC2G728MVVMOnboardingViewController {
    id recentReadingsImageView;
    id mostRecentImageView;
    id blackDotsImageView;
    id nextButtonContainerView;
}
@property (nonatomic) UIImageView * recentReadingsImageView;
@property (nonatomic) UIImageView * mostRecentImageView;
@property (nonatomic) UIImageView * blackDotsImageView;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G739CancelPairingConfirmationViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id cancelSearchBtn;
    id goBackBtn;
}
@property (nonatomic) _TtC12PhoenixUIKit24PrimaryDestructiveButton * cancelSearchBtn;
@property (nonatomic) _TtC12PhoenixUIKit14TertiaryButton * goBackBtn;
- (void)viewDidLoad;
- (void)cancelSearchTapped:(id)v1;
- (void)goBackTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G739TwentyFourHourSensorAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725AlertProfileTableViewCell : UITableViewCell {
    id radioButton;
    id alertProfileNameLabel;
    id chevronImageView;
    id alertProfileStateLabel;
    id alertScheduleTriggerLabel;
    id alertScheduleView;
    id noAlertScheduleConstraint;
    id alertScheduleConstraint;
    id alertRepository;
    id onLabelText;
    id offLabelText;
    id startsLabelPrefix;
    id endsLabelPrefix;
    id $__lazy_storage_$_dateFormatter;
    id showAlertScheduleView;
    id profileInfo;
}
@property (nonatomic) _TtC2G711RadioButton * radioButton;
@property (nonatomic) UILabel * alertProfileNameLabel;
@property (nonatomic) UIImageView * chevronImageView;
@property (nonatomic) UILabel * alertProfileStateLabel;
@property (nonatomic) UILabel * alertScheduleTriggerLabel;
@property (nonatomic) UIView * alertScheduleView;
@property (nonatomic) NSLayoutConstraint * noAlertScheduleConstraint;
@property (nonatomic) NSLayoutConstraint * alertScheduleConstraint;
- (void)onSelection:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G733SignalLossHelpLargeViewController : _TtC2G720BaseUIViewController {
    id barButtonItem;
    id navigationBar;
    id contentView;
}
@property (nonatomic) UIBarButtonItem * barButtonItem;
@property (nonatomic) UINavigationBar * navigationBar;
- (void)viewDidLoad;
- (void)closeAction:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727QuietModesVisibilityUtility : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G730LandscapeToolTipViewController : _TtC2G720BaseUIViewController {
    id imageView;
    id tooltipTitleLabel;
    id tooltipDetailsLabel;
    id tooltipOkButton;
}
@property (nonatomic) UIImageView * imageView;
@property (nonatomic) UILabel * tooltipTitleLabel;
@property (nonatomic) UILabel * tooltipDetailsLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * tooltipOkButton;
@property (nonatomic,readonly) bool shouldAutorotate;
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations;
- (void)dismissButtonPressed:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722PhoneConflictViewModel : _TtCs12_SwiftObject {
    id _count;
    id currentConflicts;
    id currentBlockingConflicts;
    id offerHelp;
    id snackBarDisplayHistory;
    id phoneConflictSubscriptions;
    id backgroundTimerSubscription;
    id displayHistoryRepo;
    id phoneConflictRepo;
    id backgroundTimer;
}
@end


/*****************************************************************/

@interface _TtC2G725LandscapeReadoutViewModel : _TtCs12_SwiftObject {
    id displayableEvents;
}
@end


/*****************************************************************/

@interface _TtC2G743PairingUnsuccessfulHelpNavigationController : UINavigationController
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G711CalloutView : _TtC2G712DXCMCardView {
    id timeLabel;
    id glucoseLabel;
}
- (id)init;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721ShareHomeFollowerCell : UITableViewCell {
    id nicknameLabel;
    id statusLabel;
    id chevron;
    id isEnabled;
}
@property (nonatomic) UILabel * nicknameLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UIImageView * chevron;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722AlertProfilesViewModel : _TtCs12_SwiftObject {
    id subscribers;
    id alertRepository;
    id quietModesRepository;
    id quietModesSwitchesShowing;
    id primaryProfileInfo;
    id secondaryProfileInfo;
    id currentToolTip;
    id finalToolTip;
    id pageThreeToolTipTitle;
    id pageFourToolTipTitle;
}
@end


/*****************************************************************/

@interface _TtC2G720BaseUIViewController : UIViewController {
    id screenDisplayStartTime;
    id isModalController;
}
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G728WarmupSnackbarViewController : _TtC2G720BaseUIViewController
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G719BSIDetailsViewModel : _TtCs12_SwiftObject {
    id indexPaths;
    id accessibilityIDText;
    id accessibilityText;
    id alertProfilesRepositoryMonitor;
    id alertProfileType;
    id forMoreThanMinuteInterval;
    id forMoreThanTitle;
    id forMoreThanDescription;
}
@end


/*****************************************************************/

@interface _TtC2G714HowToViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
    id backButtonTitle;
}
@end


/*****************************************************************/

@interface _TtC2G721EventDetailsViewModel : _TtCs12_SwiftObject {
    id userEventsRepositoryMonitor;
    id eventRecord;
    id $__lazy_storage_$_timeFormatter;
    id editAndDeleteButtonShadowColor;
    id editAndDeleteButtonShadowOffset;
    id editAndDeleteButtonShadowRadius;
    id editAndDeleteButtonCornerRadius;
    id deleteAlertTitle;
    id deleteAlertCancelTitle;
    id deleteAlertDeleteTitle;
}
@end


/*****************************************************************/

@interface _TtC2G724SignalLossViewController : _TtC2G720BaseUIViewController {
    id cardView;
    id noAlertsView;
    id sensorIconImage;
    id statusLabel;
    id detailLabel;
    id helpButtonContainerView;
    id cardViewInset;
    id helpButton;
}
@property (nonatomic) UIView * cardView;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIImageView * sensorIconImage;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIView * helpButtonContainerView;
- (id)initWithCoder:(id)v1;
- (void)loadViewIfNeeded;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726EventsNavigationController : UINavigationController {
    id navBarHeightSmallState;
    id navBarLargeTitleHeight;
    id imageSizeForLargeState;
    id imageSizeForSmallState;
    id imageRightMarginForLargeState;
    id imageSizeThreshold;
    id circleImage;
    id imageConfiguration;
    id createdToaster;
    id $__lazy_storage_$_centerConstraint;
    id $__lazy_storage_$_heigthConstraint;
    id $__lazy_storage_$_widthConstraint;
    id $__lazy_storage_$_rightConstraint;
    id navigationButton;
    id addEventActionSheetSubscriber;
}
@property (nonatomic,readonly) bool shouldPopOnTransition;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidLayoutSubviews;
- (void)onNavigationButtonTap;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719TimeServiceProvider : _TtCs12_SwiftObject {
    id _passedBackgroundTimeThreshold;
}
@end


/*****************************************************************/

@interface _TtC2G728SignalLossHelpViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G738AppleHealthAvailableCollectionViewCell : UICollectionViewCell
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G712CAMSCloudAPI : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G715LegalAgreements : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G710EventShape : _TtCs12_SwiftObject {
    id xStart;
    id barAttribute;
    id iconAttribute;
    id name;
    id node;
    id iconNode;
}
@end


/*****************************************************************/

@interface _TtC2G710CameraView : UIView {
    id timeoutLength;
    id captureSession;
    id captureDevice;
    id pixelBuffer;
    id $__lazy_storage_$_detectBarcodeRequest;
    id timeoutTimer;
    id subscribers;
    id scannerPreviewLayer;
    id delegate;
}
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730SoundAndVibrateSafetyViewModel : _TtCs12_SwiftObject {
    id alertSoundPreference;
    id alertIdentifier;
    id cancelCompletionHandler;
    id saveCompletionHandler;
}
@end


/*****************************************************************/

@interface _TtC2G732ConfirmableToolTipViewController : _TtC2G720BaseUIViewController {
    id contentView;
    id titleLabel;
    id descriptionLabel;
    id iUnderstandButton;
    id isInverted;
    id titleText;
    id descriptionText;
    id confirmationButtonTitleText;
    id confirmationAction;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * iUnderstandButton;
- (void)onIUnderstandTap:(id)v1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732ButtonLibraryTableViewController : UITableViewController {
    id numberOfButtons;
}
- (void)viewDidLoad;
- (void)close:(id)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G711RadioButton : UIButton {
    id outerCircleLayer;
    id innerCircleLayer;
    id value;
    id outerCircleColor;
    id innerCircleCircleColor;
    id outerCircleLineWidth;
    id innerCircleGap;
    id outerCircleShouldChangeColor;
}
@property (nonatomic,retain) UIColor * outerCircleColor;
@property (nonatomic,retain) UIColor * innerCircleCircleColor;
@property (nonatomic) double outerCircleLineWidth;
@property (nonatomic) double innerCircleGap;
@property (nonatomic) bool outerCircleShouldChangeColor;
@property (nonatomic) bool selected;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (bool)isSelected;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724MockReachabilityProvider : _TtCs12_SwiftObject {
    id networkStatus;
}
@end


/*****************************************************************/

@interface _TtC2G723ShareFollowerStatusView : UIView {
    id contentView;
    id statusIcon;
    id statusLabel;
    id descriptionLabel;
    id actionButtonIcon;
    id actionButtonLabel;
    id actionStackView;
    id viewModel;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIImageView * statusIcon;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIButton * actionButtonIcon;
@property (nonatomic) UIButton * actionButtonLabel;
@property (nonatomic) UIStackView * actionStackView;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)actionButtonPressed:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730AlertProfilesRepositoryMonitor : _TtCs12_SwiftObject {
    id alertProfileRepository;
    id alertThresholds;
    id timeManager;
    id _alertScheduleWasManuallyUpdated;
    id alertScheduleQueue;
    id alertScheduleTimer;
    id alertScheduleTrigger;
    id lastProfileUpdate;
    id onAlertProfilesUpdate;
    id alertProfiles;
}
@end


/*****************************************************************/

@interface _TtC2G731DiskSpaceCriticalViewController : _TtC2G720BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G714AboutViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
    id isWatchAppInstalled;
    id watchSoftwareNumber;
}
@end


/*****************************************************************/

@interface _TtC2G714LoginViewModel : _TtCs12_SwiftObject {
    id appCore;
    id gcsService;
    id localizeURL;
    id showLogin;
    id webViewAction;
    id gcsResult;
    id subscribers;
    id statusSubscriber;
    id isValidatingLoginAndGCSConfiguration;
    id maximumRetryCount;
    id retryCount;
    id accessToken;
}
@end


/*****************************************************************/

@interface _TtC2G724GlucoseRepositoryMonitor : _TtCs12_SwiftObject {
    id displayStateSubscriber;
    id bleStateSubscriber;
    id warmupTimer;
    id pairingExpireTimer;
    id warmupInfo;
    id warmCompletedEveryFifteenTimer;
    id checkSubscriber;
    id appCoreService;
    id warmupSnackbarDelegate;
    id _glucoseReadingModels;
    id _hasHistoricalGlucoseData;
    id _displayState;
    id _warmupTimeRemaining;
    id onTxSessionStateUpdate;
    id onBluetoothStateUpdate;
    id persistenceErrorEventSubscriber;
}
- (void)updateWarmupTime;
- (void)updateWrmup;
- (void)updateTransmitterPairingStatus;
@end


/*****************************************************************/

@interface _TtC2G722MockAuthStatusProvider : _TtCs12_SwiftObject {
    id authStatus;
}
@end


/*****************************************************************/

@interface _TtC2G721LandscapeEgvHoverView : _TtC2G712DXCMCardView {
    id timeLabel;
    id glucoseLabel;
    id $__lazy_storage_$_dayFormatter;
    id $__lazy_storage_$_timeFormatter;
    id height;
    id egv;
    id date;
}
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728ShareInviteFollowerViewModel : NSObject {
    id invitationReaction;
    id invitationTemplatePublisher;
    id invitationTemplate;
    id nickname;
    id validatedNickname;
    id nicknameValidationError;
    id updatedNicknameFromContact;
    id presentEmailList;
    id isNicknameNextButtonEnabled;
    id nicknameErrorText;
    id minNicknameLength;
    id maxNicknameLength;
    id invalidNicknameCharacters;
    id validatedEmail;
    id emailValidationError;
    id emailErrorText;
    id isEmailNextButtonEnabled;
    id minEmailAddressLength;
    id maxEmailAddressLength;
    id emailRegEx;
    id readingOnlyOptionBorderColor;
    id readingOnlyOptionBackgroundColor;
    id readingOnlySelected;
    id readingOnlyImage;
    id readingAndGraphOptionBorderColor;
    id readingAndGraphOptionBackgroundColor;
    id readingAndGraphSelected;
    id readingAndGraphImage;
    id sharer;
    id model;
    id subscriptions;
    id isResending;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732HighPriorityStateTransferManager : _TtCs12_SwiftObject {
    id _currentState;
    id kvRepoKey;
    id disableSnapshotManager;
    id keyValueRepository;
    id watchCommunication;
    id timeManager;
    id watchMessageTypeRequest;
    id watchMessageTypeData;
    id subscribers;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC2G722LegalAgreementsManager : DXCMLegalAgreementsManager
- (void)presentViewOnlyAgreementsFromVC:(id)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC2G741OnboardingAlertsTextVersionViewController : _TtC2G728MVVMOnboardingViewController {
    id firstCompass;
    id secondCompass;
    id trendGraphImageView;
    id firstTrhendGraph;
    id secondTrhendGraph;
    id yellowTrendGraph;
    id redTrendGraph;
    id lowTrendGraphDescriptionLabel;
    id nextButtonContainerView;
}
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * firstCompass;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * secondCompass;
@property (nonatomic) UIImageView * trendGraphImageView;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * firstTrhendGraph;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * secondTrhendGraph;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * yellowTrendGraph;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * redTrendGraph;
@property (nonatomic) UILabel * lowTrendGraphDescriptionLabel;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G713EventSwimlane : _TtC12PhoenixUIKit12BaseSwimlane {
    id events;
}
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G712SoundManager : _TtCs12_SwiftObject {
    id vibrateModeEscalationBuffer;
    id alertProfilesRepositoryMonitor;
    id quietModesRepositoryMonitor;
    id displayStateSubscriber;
    id volumeView;
    id isVolumeOverridden;
    id restoreVolume;
    id txCommunicationLossState;
}
@end


/*****************************************************************/

@interface _TtC2G728EventValueCollectionViewCell : UICollectionViewCell {
    id genericLabelForUnitInput;
    id eventValueTextField;
    id eventValueUnitsLabel;
    id highlightSeparatorView;
    id bottomHighlightSeparatorView;
    id model;
}
@property (nonatomic) UILabel * genericLabelForUnitInput;
@property (nonatomic) UITextField * eventValueTextField;
@property (nonatomic) UILabel * eventValueUnitsLabel;
@property (nonatomic) UIView * highlightSeparatorView;
@property (nonatomic) UIView * bottomHighlightSeparatorView;
- (void)awakeFromNib;
- (void)dismissKeyboard;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730BriefSensorIssueViewController : _TtC2G720BaseUIViewController {
    id statusLabel;
    id detailLabel;
    id noAlertsView;
    id helpButtonContainerView;
    id cardView;
    id helpButton;
}
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) _TtC2G712NoAlertsView * noAlertsView;
@property (nonatomic) UIView * helpButtonContainerView;
@property (nonatomic) _TtC2G712DXCMCardView * cardView;
- (id)initWithCoder:(id)v1;
- (void)loadViewIfNeeded;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G721CertificatesViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G729GcsConfirmUoMOptionsViewModel : _TtCs12_SwiftObject {
    id gcsConfirmUoMOptionsModel;
    id confirmationDescriptionFormat;
    id unitOfMeasureDescriptionFormat;
    id imageWidth;
    id imageHeight;
    id fontSize;
}
@end


/*****************************************************************/

@interface _TtC2G735ShareFollowerNotificationsViewModel : NSObject {
    id defaultConfigs;
    id onText;
    id offText;
    id model;
    id unitOfMeasure;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725SettingsRepositoryMonitor : _TtCs12_SwiftObject {
    id _appleHealthEnabledStatus;
    id _unitOfMeasure;
    id _thresholds;
    id _isClarityCardEnabled;
    id _trendGraphHeight;
    id _trendGraphTargetRangeStatus;
    id _showAlertProfilesToolTips;
    id _wearableInformation;
    id observers;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC2G731StopSensorRemovalViewController : _TtC2G720BaseUIViewController {
    id feedbackView;
    id pullingPatchIsPainfulButton;
    id removalInstructionsTextView;
    id dontShowThisAgainButton;
    id okayButton;
    id feedbackReceived;
}
@property (nonatomic) UIView * feedbackView;
@property (nonatomic) UIButton * pullingPatchIsPainfulButton;
@property (nonatomic) UITextView * removalInstructionsTextView;
@property (nonatomic) UIButton * dontShowThisAgainButton;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)onPullingPatchIsPainfulButtonTap:(id)v1;
- (void)onDontShowThisAgainButtonTap:(id)v1;
- (void)onOkButtonTap:(id)v1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G719WarmupCountdownView : UIView {
    id contentView;
    id timerLabel;
    id secondaryLabel;
    id countdown;
    id status;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UILabel * timerLabel;
@property (nonatomic) UILabel * secondaryLabel;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732AlertScheduleSwitchTableViewCell : UITableViewCell {
    id nameLabel;
    id stateLabel;
    id scheduleSwitch;
    id alertSchedule;
}
@property (nonatomic) UILabel * nameLabel;
@property (nonatomic) UILabel * stateLabel;
@property (nonatomic) UISwitch * scheduleSwitch;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G734SharedContainerAppGroupFileManager : _TtCs12_SwiftObject {
    id name;
    id containerURL;
}
@end


/*****************************************************************/

@interface _TtC2G723HealthKitSetupAssistant : _TtCs12_SwiftObject {
    id healthKitStore;
    id healthKitDataTypeProvider;
    id healthKitQueue;
    id mgPerdLUnit;
    id mmolPerLUnit;
}
- (void)setUnitOfMeasure;
@end


/*****************************************************************/

@interface _TtC2G733VibrateModeSettingsViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id timerSettingSlider;
    id timerDurationLabel;
    id activateButton;
    id expirationTimeLabel;
    id timerDescriptionLabel;
    id subscribers;
    id quietModeModel;
    id sliderHapticFeedbackGenerator;
    id previousSliderValue;
}
@property (nonatomic) UISlider * timerSettingSlider;
@property (nonatomic) UILabel * timerDurationLabel;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * activateButton;
@property (nonatomic) UILabel * expirationTimeLabel;
@property (nonatomic) UILabel * timerDescriptionLabel;
- (void)viewDidLoad;
- (void)onActivateButton:(id)v1;
- (void)onCancelButton:(id)v1;
- (void)onSliderChange:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728DatePickerCollectionViewCell : UICollectionViewCell {
    id datePicker;
    id model;
}
@property (nonatomic) UIDatePicker * datePicker;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G711TimeManager : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G723LogBGCollectionViewCell : UICollectionViewCell {
    id firstOptionLabel;
    id radioButton;
    id stateSubscriber;
    id model;
}
@property (nonatomic) UIButton * firstOptionLabel;
@property (nonatomic) _TtC2G711RadioButton * radioButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G724SystemStateContainerView : UIView
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)awakeFromNib;
@end


/*****************************************************************/

@interface _TtC2G725AddNoteCollectionViewCell : UICollectionViewCell {
    id detailsTextView;
    id counterLabel;
    id bottomSeparatorView;
    id defaultBackgroundColor;
    id validBackgroundColor;
    id invalidBackgroundColor;
    id defaultBorderColor;
    id validBorderColor;
    id invalidBorderColor;
    id defaultCounterColor;
    id validCounterColor;
    id invalidCounterColor;
    id maximumLength;
    id maximumByteSize;
    id _isValid;
    id _noteEntryLog;
    id stateSubscriber;
    id model;
    id $__lazy_storage_$_noteHandler;
}
@property (nonatomic) UITextView * detailsTextView;
@property (nonatomic) UILabel * counterLabel;
@property (nonatomic) UIView * bottomSeparatorView;
@property (nonatomic,retain) UIColor * defaultBackgroundColor;
@property (nonatomic,retain) UIColor * validBackgroundColor;
@property (nonatomic,retain) UIColor * invalidBackgroundColor;
@property (nonatomic,retain) UIColor * defaultBorderColor;
@property (nonatomic,retain) UIColor * validBorderColor;
@property (nonatomic,retain) UIColor * invalidBorderColor;
@property (nonatomic,retain) UIColor * defaultCounterColor;
@property (nonatomic,retain) UIColor * validCounterColor;
@property (nonatomic,retain) UIColor * invalidCounterColor;
@property (nonatomic) long long maximumLength;
@property (nonatomic) long long maximumByteSize;
- (void)dismissKeyboard;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G742OnboardingTreatmentDecisionsViewController : _TtC2G736MVVMTutorialOnboardingViewController {
    id watchVideoMessageContent;
    id blankSpace;
    id nextButtonContainerView;
    id viewTextVersionButtonContainerView;
    id heightConstraints;
    id viewsWithNoHeightConstraints;
    id nextButton;
}
@property (nonatomic) UIView * watchVideoMessageContent;
@property (nonatomic) UIView * blankSpace;
@property (nonatomic) UIView * nextButtonContainerView;
@property (nonatomic) UIView * viewTextVersionButtonContainerView;
@property (nonatomic,copy) NSArray * heightConstraints;
@property (nonatomic,copy) NSArray * viewsWithNoHeightConstraints;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(bool)v1;
- (void)onPlayVideoButtonTap:(id)v1;
- (void)onTextVersionButtonTap:(id)v1;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727TimeLossAlertViewController : _TtC2G723BaseAlertViewController {
    id okayButton;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * okayButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723ImportSettingsViewModel : _TtCs12_SwiftObject {
    id settingsImported;
    id shareMonitor;
}
@end


/*****************************************************************/

@interface _TtC2G733LandscapeTrendGraphViewController : UIViewController {
    id xAxisUpdateTimer;
    id trendGraphSubscriber;
    id graphOrchestrator;
    id currentTimePublisher;
    id graphContainer;
    id graphContainerView;
    id graphContainerInsetTop;
    id graphContainerInsetLeft;
    id graphContainerInsetRight;
    id glucoseViewDataSource;
    id glucoseSwimlanePresenter;
    id timelineSwimlanePresenter;
    id insulinSwimlanePresenter;
    id eventSwimlanePresenter;
    id trendGraphDataSource;
    id currentGlucoseSwimlaneLayoutWeight;
    id egvHoverView;
    id dottedLineLayer;
    id currentEgvDot;
    id scrubbingDelegate;
    id $__lazy_storage_$_timelineSwimlane;
}
@property (nonatomic) UIView * graphContainer;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * graphContainerView;
@property (nonatomic) NSLayoutConstraint * graphContainerInsetTop;
@property (nonatomic) NSLayoutConstraint * graphContainerInsetLeft;
@property (nonatomic) NSLayoutConstraint * graphContainerInsetRight;
- (void)startScrubbingWithGestureRecognizer:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)dealloc;
- (void)selectTimeInterval:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G720AppleHealthViewModel : _TtCs12_SwiftObject {
    id appleHealthSummaryModel;
    id observers;
    id activationComplete;
    id healthKitAssistant;
}
@end


/*****************************************************************/

@interface _TtC2G736BackdoorLogOutputTableViewController : UITableViewController {
    id writtenSnapshots;
    id logSubscriber;
    id sharedContainerManager;
    id sharedContainerSuite;
    id outputToggle;
}
@property (nonatomic) UISwitch * outputToggle;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)monitorLogOutputToggled:(id)v1;
- (void)exportLogPressed:(id)v1;
- (void)clearLogPressed:(id)v1;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G7P33_6156595934460A4D2BA90C4652FBE7AD12NoteDelegate : NSObject<UITextViewDelegate> {
    id spaceWarning;
    id cancellables;
    id byteCountExceeded;
    id _characterCount;
    id _errorString;
    id _borderColor;
    id _counterColor;
    id _backgroundColor;
    id _noteEntryLog;
    id resetColorsToDefault;
    id maximumLength;
    id maximumByteSize;
    id _isValid;
}
- (void)textViewDidBeginEditing:(id)v1;
- (void)textViewDidChange:(id)v1;
- (void)textViewDidEndEditing:(id)v1;
- (bool)textView:(id)v1 shouldChangeTextInRange:(struct _NSRange)v2 replacementText:(id)v3;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728QuietModeSwitchTableViewCell : UITableViewCell {
    id title;
    id modeSwitch;
    id icon;
    id silenceAllIdPrefix;
    id vibrateIdPrefix;
    id titleId;
    id switchId;
    id iconId;
    id repositoryMonitor;
    id activeModeSubscrition;
    id parentViewController;
    id mode;
}
@property (nonatomic) UILabel * title;
@property (nonatomic) UISwitch * modeSwitch;
@property (nonatomic) UIImageView * icon;
- (void)onQuietModeSwitch:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G718MockShareHomeModel : _TtCs12_SwiftObject {
    id debugLastError;
    id followers;
    id networkStatus;
    id dataShareStatus;
    id allowedSharing;
    id statusDetail;
    id authStatusProvider;
    id inviteMethodIsCalled;
    id receivedNickName;
    id receivedEmailAddress;
    id receivedAppUser;
    id receivedNotificationSettings;
    id shareInternetError;
    id shareServerError;
    id shareSuccess;
    id deleteFollowerInvoked;
    id contactIDToDelete;
    id subscriptionIDToPause;
    id subscriptionIDToResume;
    id subscriptionIDToUpdate;
    id dataSharingOption;
    id updatedFollowerInformation;
}
@end


/*****************************************************************/

@interface _TtC2G725GcsConfirmUoMOptionsModel : NSObject {
    id unitOfMeasure;
    id countryCode;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732AddEventHeaderSheetTableViewCell : UITableViewCell {
    id eventTitleLabel;
}
@property (nonatomic) UILabel * eventTitleLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729AlertProfileNameTableViewCell : UITableViewCell {
    id nameLabel;
    id valueLabel;
    id name;
}
@property (nonatomic) UILabel * nameLabel;
@property (nonatomic) UILabel * valueLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722EventSwimlanePresenter : _TtC12PhoenixUIKit21BaseSwimlanePresenter {
    id theme;
    id minimumOffsetBetweenOverlappingEvents;
    id userEvents;
    id touchedEvent;
}
@end


/*****************************************************************/

@interface _TtC2G729PhoneConflictInstructionsCell : UITableViewCell {
    id lineNumber;
    id instructionLabel;
    id lineNumberWidth;
}
@property (nonatomic) UILabel * lineNumber;
@property (nonatomic) UILabel * instructionLabel;
@property (nonatomic) NSLayoutConstraint * lineNumberWidth;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G726ShareAddInviteFollowerCell : UITableViewCell {
    id isEnabled;
}
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G732SensorExpiredAlertViewController : _TtC2G723BaseAlertViewController
- (void)OKButtonPressed;
- (void)sensorRemovalInstructionsButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G738OnboardingSensorReadingsViewController : _TtC2G736MVVMTutorialOnboardingViewController {
    id watchVideoMessageContent;
    id blankSpace;
    id nextButtonContainerView;
    id viewTextVersionButtonContainerView;
    id heightConstraints;
    id viewsWithNoHeightConstraints;
    id subscriber;
    id nextButton;
}
@property (nonatomic) UIView * watchVideoMessageContent;
@property (nonatomic) UIView * blankSpace;
@property (nonatomic) UIView * nextButtonContainerView;
@property (nonatomic) UIView * viewTextVersionButtonContainerView;
@property (nonatomic,copy) NSArray * heightConstraints;
@property (nonatomic,copy) NSArray * viewsWithNoHeightConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillLayoutSubviews;
- (void)onPlayVideoButtonTap:(id)v1;
- (void)onTextVersionButtonTap:(id)v1;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725ApplicationServiceStarter : _TtCs12_SwiftObject {
    id cancelTimer;
    id cancellable;
}
@end


/*****************************************************************/

@interface _TtC2G722SharedContainerManager : NSObject<NSFilePresenter> {
    id presentedItemURL;
    id presentedItemOperationQueue;
    id fileManager;
    id securityProvider;
    id loggingQueue;
    id logFileName;
}
@property (nonatomic,copy) NSURL * presentedItemURL;
@property (nonatomic,retain) NSOperationQueue * presentedItemOperationQueue;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G740ShareInviteNotificationSettingsViewModel : _TtCs12_SwiftObject {
    id statusOnText;
    id statusOffText;
    id delayFirstLocalizedTitle;
    id model;
    id unitOfMeasure;
    id followerName;
    id thresholdSelectionAllowed;
    id delayFirstIntervalAllowed;
    id settingsDescriptionText;
    id settingsTitleText;
    id settingsEnabled;
    id settingsStatusText;
    id thresholdSelectionAvailable;
    id delayFirstSelectionAvailable;
    id selectedEnableStatus;
    id selectedThreshold;
    id selectedDelay;
}
@end


/*****************************************************************/

@interface _TtC2G737EditPairingConfirmationViewController : _TtC2G720BaseUIViewController {
    id pairingCodeLabel;
    id actionSheetDelegate;
    id pairingCode;
    id editPairingConnections;
}
@property (nonatomic) UILabel * pairingCodeLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)confirmTapped:(id)v1;
- (void)cancelTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G729LandscapeReadoutContainerView : UIView {
    id contentView;
    id readingsStackView;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIStackView * readingsStackView;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G756OnboardingTreatmentDecisionsTextTrendGraphViewController : _TtC2G728MVVMOnboardingViewController {
    id contentGlucoseCompassView;
    id trustHowYouFeelGlucoseCompass;
    id bgMeterImageView;
    id nextButtonContainerView;
}
@property (nonatomic) UIView * contentGlucoseCompassView;
@property (nonatomic) _TtC12PhoenixUIKit14GlucoseCompass * trustHowYouFeelGlucoseCompass;
@property (nonatomic) UIImageView * bgMeterImageView;
@property (nonatomic) UIView * nextButtonContainerView;
- (void)viewDidLoad;
- (void)onNextScreenButtonTap:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G728BGDateTimeCollectionViewCell : UICollectionViewCell {
    id dateTimeButton;
    id chevronImageView;
    id shouldInit;
    id model;
}
@property (nonatomic) UIButton * dateTimeButton;
@property (nonatomic) UIImageView * chevronImageView;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G725AppStateRepositoryMonitor : _TtCs12_SwiftObject {
    id keyValueRepository;
    id _showEmptyState;
    id _showFirstEventToolTip;
    id _showSensorRemovalInstructions;
    id _showFirstVibrateToast;
    id _showFirstSilenceAllToolTip;
    id _showQuietModeInfo;
    id _showGCSConfirmationModal;
    id _showCertificateModal;
    id _showInitialLegalAgreements;
    id _showLandscapeToolTip;
    id _globalFeatureControlCheck;
    id _settingsViewedSmallPhoneSafetyModal;
    id _settingsViewedLargePhoneSafetyScreen;
    id onSmallPhoneSafetyModalAcknowledged;
    id onLargePhoneSafetyModalFirstViewing;
    id showFirstWarmupToast;
}
@end


/*****************************************************************/

@interface _TtC2G725ShareHomeStatusFooterView : UITableViewHeaderFooterView {
    id shareFooterTextLabel;
    id message;
}
@property (nonatomic,retain) UILabel * shareFooterTextLabel;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G730PaginatedToolTipViewController : _TtC2G720BaseUIViewController {
    id contentView;
    id titleLabel;
    id descriptionLabel;
    id pageNumberLabel;
    id backButton;
    id nextButton;
    id titleText;
    id descriptionText;
    id pageNumber;
    id totalPageCount;
    id backButtonAction;
    id nextButtonAction;
    id isInverted;
    id closeButtonText;
    id backButtonText;
    id nextButtonText;
    id doneButtonText;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * pageNumberLabel;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * backButton;
@property (nonatomic) _TtC12PhoenixUIKit14TextLinkButton * nextButton;
- (void)onBackButtonTap:(id)v1;
- (void)onNextButtonTap:(id)v1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G735ConnectionsCollectionViewController : _TtC2G730BaseUICollectionViewController<UICollectionViewDelegateFlowLayout> {
    id sensorSessionCellViewModel;
    id subscribers;
    id snackbar;
    id connectionsViewModel;
    id $__lazy_storage_$_dataSource;
    id specialFetchfollowersRequest;
}
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G734BriefSensorIssueHelpViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727StopSensorFeedbackTitleCell : UITableViewCell
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC2G718GcsUoMOptionsModel : NSObject {
    id countryCode;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722StopSensorFeedbackCell : UITableViewCell {
    id feedbackButton;
    id feedbackLabel;
}
@property (nonatomic) UIButton * feedbackButton;
@property (nonatomic) UILabel * feedbackLabel;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G732AllowNotificationsViewController : _TtC2G728MVVMOnboardingViewController<UIScrollViewDelegate> {
    id scrollViewDividerLineManager;
    id nextButton;
    id turnOnNotificationsButton;
    id titleLabel;
    id descriptionLabel;
    id scrollView;
    id dividerLine;
}
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * turnOnNotificationsButton;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIView * dividerLine;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)appMovedToForeground;
- (void)nextScreen;
- (void)turnOnNotifications;
- (void)scrollViewDidScroll:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G723AcknowledgeableSnackBar : _TtC2G78Snackbar
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
@end


/*****************************************************************/

@interface _TtC2G739OnboardingPairingCompleteViewController : _TtC2G720BaseUIViewController {
    id distanceDescriptionLabel;
    id finishButton;
}
@property (nonatomic) UILabel * distanceDescriptionLabel;
@property (nonatomic) _TtC12PhoenixUIKit13PrimaryButton * finishButton;
- (void)viewDidLoad;
- (void)onFinishButtonTap:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G733SecondaryDisplaySnapshotDebugData : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC2G722UrgentLowSoonViewModel : _TtCs12_SwiftObject {
    id indexPaths;
    id accessibilityIDText;
    id accessibilityText;
    id alertRepository;
    id alertProfileType;
    id footerText;
}
@end


/*****************************************************************/

@interface _TtC2G722ConfirmationDetailView : UIView {
    id contentView;
    id titleLabel;
    id detailLabel;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * detailLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G711ClarityCell : UICollectionViewCell {
    id clarityIcon;
    id detailsLabel;
}
@property (nonatomic) UIImageView * clarityIcon;
@property (nonatomic) UILabel * detailsLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G715TimeLossMonitor : _TtCs12_SwiftObject {
    id alertsTimeLossEventPublisher;
    id timeLossSubscriber;
}
@end


/*****************************************************************/

@interface _TtC2G724MainTabBarViewController : UITabBarController {
    id repositoryMonitor;
    id warmingProcessViewModel;
    id connectionsViewModel;
    id subscribers;
    id viewedPhoneSafetyScreenSubscriber;
    id pairingCode;
    id badgeLabel;
}
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717SettingsViewModel : _TtCs12_SwiftObject {
    id tooltipDelegate;
}
@end


/*****************************************************************/

@interface _TtC2G714AppCoreAdaptor : _TtCs12_SwiftObject {
    id displayState;
    id bleState;
    id blePermissionState;
    id isCommunicatingWithTx;
    id authStatus;
    id persistenceErrorEvent;
    id diskSpaceState;
    id timeLossState;
    id appCoreSubscriptions;
    id $__lazy_storage_$_urlRepository;
}
@end


/*****************************************************************/

@interface _TtC2G733AppBluetoothOffHelpViewController : _TtC2G720BaseUIViewController {
    id actionSheetDelegate;
    id goToSettingsButton;
}
@property (nonatomic) _TtC12PhoenixUIKit17CellButtonOnWhite * goToSettingsButton;
- (void)viewDidLoad;
- (void)openAppSettings:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G731AlertThresholdSettingsViewModel : _TtCs12_SwiftObject {
    id thresholdDataSource;
    id toolTipTitle;
    id toolTipDescription;
    id currentSetting;
    id tooltipDelegate;
    id showLowGlucoseAlertInfo;
    id showHighGlucoseAlertInfo;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC2G720ActionSheetContainer : _TtC2G720BaseUIViewController {
    id contentView;
    id contentViewHeightConstraint;
    id contentViewController;
    id presentationManager;
    id interactionController;
    id toolTipDescription;
    id isDismissable;
    id toolTipStatuseDelegate;
    id isToolTipShown;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) NSLayoutConstraint * contentViewHeightConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G717AlertStateTracker : _TtCs12_SwiftObject {
    id alertStatusMap;
    id inAppMap;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC2G719CombineAVPlayerItem : AVPlayerItem {
    id _playerItemStatus;
    id observerVideoStatus;
}
- (id)initWithAsset:(id)v1;
- (void)dealloc;
- (id)initWithAsset:(id)v1 automaticallyLoadedAssetKeys:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G711AppDelegate : UIResponder<UIApplicationDelegate> {
    id applicationServiceStarter;
}
- (unsigned long long)application:(id)v1 supportedInterfaceOrientationsForWindow:(id)v2;
- (bool)application:(id)v1 didFinishLaunchingWithOptions:(id)v2;
- (void)applicationWillEnterForeground:(id)v1;
- (void)applicationDidBecomeActive:(id)v1;
- (id)application:(id)v1 configurationForConnectingSceneSession:(id)v2 options:(id)v3;
- (void)application:(id)v1 didDiscardSceneSessions:(id)v2;
- (void)applicationWillTerminate:(id)v1;
- (void)applicationSignificantTimeChange:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G722SettingsViewController : _TtC2G725BaseUITableViewController {
    id iPhoneSafetyTableViewCell;
    id dataConsentTableViewCell;
    id settingsViewModel;
    id headerIdentifier;
    id headerHeight;
    id headerHorizontalMargins;
    id headerVerticalMargins;
    id footerIdentifier;
    id glucoseRepositoryMonitor;
    id subscriptions;
    id toolTipIsShowing;
}
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (id)tableView:(id)v1 titleForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 willDisplayHeaderView:(id)v2 forSection:(long long)v3;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)createGlucoseTabSettingsTableViewControllerWithCoder:(id)v1 sender:(id)v2 segueIdentifier:(id)v3;
- (id)createShortcutsViewController:(id)v1;
- (id)createAboutViewControllerWithCoder:(id)v1;
- (id)createConsentsWebViewController:(id)v1;
- (id)createHelpViewControllerWithCoder:(id)v1;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G727ObservedNotificationManager : _TtCs12_SwiftObject {
    id readyToPairAlertIsActive;
    id subscriptions;
}
@end


/*****************************************************************/

@interface _TtC2G719CustomCodeLabelView : UIView {
    id codeLabel;
    id grayView;
}
@property (nonatomic,retain) UILabel * codeLabel;
@property (nonatomic,retain) UIView * grayView;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC2G733PhoneConflictNavigationController : UINavigationController {
    id viewModel;
    id phoneConflictHelpSubscription;
}
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (void)dismissViewControllerAnimated:(bool)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine15D1AlertSettings : _TtC18AlertsStateMachine13AlertSettings
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine34HysteresisThresholdAlertAttributes : _TtC18AlertsStateMachine24ThresholdAlertAttributes {
    id suspendType;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine10DataLogger : _TtCs12_SwiftObject {
    id alertsDataLogging;
    id glucoseAlerts;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine15G7AlertSettings : _TtC18AlertsStateMachine13AlertSettings
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine15AlertAttributes : _TtCs12_SwiftObject {
    id isPlatformEnabled;
    id isUserEnabled;
    id reAlertType;
    id forMoreThanType;
    id alertAcknowledgmentType;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine28RateThresholdAlertAttributes : _TtC18AlertsStateMachine24ThresholdAlertAttributes {
    id trendThreshold;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine24ThresholdAlertAttributes : _TtC18AlertsStateMachine15AlertAttributes {
    id mgdlThreshold;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine13AlertSettings : _TtCs12_SwiftObject {
    id sensorSessionDurationWithoutGracePeriod;
    id sensorSessionDurationWithGracePeriod;
    id transmitterDurationWithoutGracePeriod;
    id gracePeriodInSeconds;
    id isSensorExpiredCalculated;
    id isSensorFailedDueToRestartDerived;
    id isAutomaticSessionStart;
    id reAlertPaddingInSeconds;
    id urgentLowGlucose;
    id urgentLowSoonGlucose;
    id lowGlucose;
    id highGlucose;
    id risingFast;
    id fallingFast;
    id signalLoss;
    id briefSensorIssue;
    id sensorFailed;
    id sensorFailedDueToRestart;
    id twentyFourHourSensorExpiration;
    id sixHourSensorExpiration;
    id twoHourSensorExpiration;
    id sensorExpired;
    id thirtyMinuteSensorExpiration;
    id transmitterLastSession;
    id transmitterLowBattery;
    id transmitterFailed;
    id transmitterExpired;
    id transmitterEndOfLifeThreeWeeks;
    id transmitterEndOfLifeTwoWeeks;
    id transmitterPairingFailed;
    id transmitterNotFound;
    id diskSpaceLow;
    id diskSpaceVeryLow;
    id diskSpaceCritical;
    id recoverableDatabase;
    id transmitterPaired;
    id warmupComplete;
    id gracePeriodTwoHourExpiration;
    id gracePeriodThirtyMinuteExpiration;
    id gracePeriodExpired;
    id calibrationNotUsed;
    id timeLoss;
    id unrecoverableDatabase;
    id pairingTakingTooLong;
    id transmitterAlreadyPaired;
    id sensorUnsupported;
    id bluetoothRadioOff;
    id appBluetoothOff;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine13AlertingState : _TtCs12_SwiftObject {
    id alertMap;
    id dictionaryOfAlerts;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine12AlertsEngine : _TtCs12_SwiftObject {
    id underlyingCurrentAlertingState;
    id alertStatePublisher;
    id dataLogger;
    id repository;
    id timeProvider;
    id settingsPublisher;
    id bluetoothEventPublisher;
    id txSessionEventPublisher;
    id databaseEventPublisher;
    id diskSpaceEventPublisher;
    id timeLossEventPublisher;
    id _currentInternalState;
    id currentAlertSettings;
    id settingsSubscriber;
    id bluetoothStateSubscriber;
    id txSessionEventSubscriber;
    id databaseStateSubscriber;
    id diskSpaceStateSubscriber;
    id timeLossStateSubscriber;
    id alertingStateQueue;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine13AnyStateEvent : _TtCs12_SwiftObject {
    id timestamp;
}
@end


/*****************************************************************/

@interface _TtC9AppCompat14AcmHttpRequest : _TtCs12_SwiftObject {
    id sessionConfig;
    id $__lazy_storage_$_session;
    id networkTimeout;
}
@end


/*****************************************************************/

@interface _TtC9AppCompat6AcmApi : _TtCs12_SwiftObject {
    id cloudApi;
    id appId;
    id repository;
    id timeProvider;
    id runtimeInformation;
    id checkFrequency;
}
@end


/*****************************************************************/

@interface _TtC9AppCompat11AcmCloudApi : _TtCs12_SwiftObject {
    id baseUrl;
    id httpRequest;
}
@end


/*****************************************************************/

@interface _TtC16BLECommunication10BLEManager : NSObject {
    id delegate;
    id serviceGraph;
    id centralManager;
    id queue;
    id peripheralScanResults;
    id bleCommunications;
    id reconnectPeripherals;
    id isScanning;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC16BLECommunication16BLECommunication : NSObject {
    id delegate;
    id peripheral;
    id bleProfile;
    id characteristics;
    id peripheralQueue;
    id writeQueue;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC16BLECommunication18ResettingSemaphore : _TtCs12_SwiftObject {
    id semaphore;
}
@end


/*****************************************************************/

@interface _TtC16BLECommunication14Characteristic : _TtCs12_SwiftObject {
    id cbPeripheral;
    id cbCharacteristic;
    id currentMode;
    id name;
    id uuid;
    id timeout;
    id dataBuffer;
    id bufferQueue;
    id operationQueue;
    id writeSemaphore;
    id readSemaphore;
    id streamSemaphore;
    id notifySemaphore;
    id maxWriteSize;
}
@end


/*****************************************************************/

@interface _TtC8BulkData16BulkDataManifest : _TtCs12_SwiftObject {
    id recordType;
    id count;
    id firstDateTime;
    id lastDateTime;
    id firstKey;
    id lastKey;
    id $__lazy_storage_$_unixDateFormatter;
}
@end


/*****************************************************************/

@interface _TtC8BulkData11BulkDataAPI : _TtCs12_SwiftObject {
    id requestSubscriber;
    id serialQueue;
    id receiveQueue;
    id maxPostSizeInBytes;
    id currentDataPost;
    id accountID;
    id dataStreamType;
    id transmitterID;
    id postSequenceNumber;
    id secureTransit;
    id timeProvider;
    id persistenceDelegate;
    id transmitterSoftware;
    id transmitterVersion;
    id installationID;
}
@end


/*****************************************************************/

@interface _TtC8BulkData12BulkDataPost : _TtCs12_SwiftObject {
    id uuid;
    id isFinalized;
    id estimatedSize;
    id privateDataManifests;
    id publicDataManifests;
    id privateDataEntries;
    id publicDataEntries;
    id dataStreamType;
    id accountID;
    id transmitterID;
    id postSequenceNumber;
    id version;
    id transmitterSoftware;
    id transmitterVersion;
    id installationID;
}
@end


/*****************************************************************/

@interface _TtC8BulkData20BulkDataContentEntry : _TtCs12_SwiftObject {
    id recordType;
    id records;
}
@end


/*****************************************************************/

@interface PodsDummy_ClarityCard : NSObject
@end


/*****************************************************************/

@interface _TtC11ClarityCard24DefaultClarityCalculator : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC11ClarityCard11ClarityView : UIView {
    id interaction;
    id colors;
    id fonts;
    id displayedDayCount;
    id timeInRangeViewModel;
    id glucoseStatisticsViewModel;
    id clarityLogo;
    id adjustsForContentSizeCategory;
    id contentStack;
    id headerStack;
    id clarityLogoView;
    id titleLabel;
    id infoButton;
    id dayCountPicker;
    id glucoseStatistics;
    id divider;
    id timeInRangeTitle;
    id timeInRangeView;
    id g7HeaderView;
    id g7HeaderViewConstraints;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)traitCollectionDidChange:(id)v1;
- (void)infoButtonTapped;
- (void)selectedDayCountChanged;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard21ClarityViewController : UIViewController {
    id viewModel;
    id clarityView;
    id cancellables;
    id updateParentLayout;
}
- (void)loadView;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard16ClarityViewModel : _TtCs12_SwiftObject {
    id _displayedDayCount;
    id userSelectedDayCount;
    id userTappedInfoButton;
    id _timeInRangeViewModel;
    id _glucoseStatisticsViewModel;
    id calculator;
    id dataSource;
    id cancellables;
}
@end


/*****************************************************************/

@interface _TtC11ClarityCard14DayCountPicker : UIControl {
    id colors;
    id selectedDayCount;
    id dayCountButtons;
    id adjustsForContentSizeCategory;
    id accessibilityIdentifierPrefix;
    id dayCounts;
    id stack;
}
- (id)initWithCoder:(id)v1;
- (void)traitCollectionDidChange:(id)v1;
- (void)buttonTapped:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard14DXCMPillButton : UIButton {
    id customTitleInsets;
    id isHaptic;
    id borderColor;
    id borderWidth;
    id selectedColor;
    id tapMargin;
    id alwaysShowBorder;
}
@property (nonatomic) bool isHaptic;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * selectedColor;
@property (nonatomic) double tapMargin;
@property (nonatomic) bool alwaysShowBorder;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
@property (nonatomic) bool selected;
- (bool)isSelected;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (void)sendAction:(SEL)v1 to:(id)v2 forEvent:(id)v3;
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard21GlucoseStatisticsView : UIView {
    id fonts;
    id colors;
    id accessibilityIdentifierPrefix;
    id titleLabel;
    id averageGlucoseView;
    id gmiView;
    id verticalStack;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard17SharedCalculation : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC11ClarityCard27StatisticValueLabelUnitView : UIView {
    id fonts;
    id colors;
    id accessibilityIdentifierPrefix;
    id valueLabel;
    id statLabel;
    id unitLabel;
    id verticalStack;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard26TimeInRangePercentageUtils : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC11ClarityCard23TimeInRangePercentsView : UIView {
    id fonts;
    id colors;
    id accessibilityIdentifierPrefix;
    id maxAvailableWidth;
    id veryHighLabel;
    id highLabel;
    id inRangeLabel;
    id lowLabel;
    id veryLowLabel;
    id stack;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard19TimeInRangeResistor : UIView {
    id colors;
    id accessibilityIdentifierPrefix;
    id stack;
    id veryHighBar;
    id highBar;
    id inRangeBar;
    id lowBar;
    id veryLowBar;
    id minimumBarHeight;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtCC11ClarityCard19TimeInRangeResistorP33_3E7C60A01DD0E323DA6ECF144E344EFB3Bar : UIView {
    id percentage;
    id category;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
@end


/*****************************************************************/

@interface _TtC11ClarityCard15TimeInRangeView : UIView {
    id fonts;
    id colors;
    id accessibilityIdentifierPrefix;
    id horizontalStack;
    id verticalStack;
    id resistor;
    id percents;
    id deltaLabel;
    id notEnoughDataLabel;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC11ClarityCard20TimeInRangeViewModel : _TtCs12_SwiftObject {
    id dataSource;
    id locale;
}
@end


/*****************************************************************/

@interface _TtC22CloudCommonServiceCore11JSONHelpers : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC22CloudCommonServiceCore6Base64 : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface PodsDummy_DXCMLegalAgreements : NSObject
@end


/*****************************************************************/

@interface DXCMLegalAgreementsManager : NSObject<NSURLSessionDelegate> {
    DXCMLegalAgreementsVC * _legalVC;
    unsigned long long _state;
    NSMutableData * _responseData;
    NSURLSession * _session;
    bool _isOAuthResponsePending;
    UIApplication * _sharedApplication;
    NSString * _overrideAccessToken;
    bool _suppressLegalUpdateAlert;
    bool _shouldShowUpdatedAgreementsAlert;
    NSObject<DXCMLegalAgreementsProtocol> * _delegate;
    NSBundle * _frameworkBundle;
    UIAlertController * _updatedAgreementsAlert;
    NSString * _appNumber;
    NSString * _appVersion;
    NSString * _username;
    NSString * _password;
    NSString * _languageCode;
    NSString * _countryCode;
}
@property (nonatomic) bool shouldShowUpdatedAgreementsAlert;
@property (retain,nonatomic) UIAlertController * updatedAgreementsAlert;
@property (retain,nonatomic) NSString * appNumber;
@property (retain,nonatomic) NSString * appVersion;
@property (retain,nonatomic) NSString * username;
@property (retain,nonatomic) NSString * password;
@property (retain,nonatomic) NSString * languageCode;
@property (retain,nonatomic) NSString * countryCode;
@property (readonly,nonatomic) UIApplication * application;
@property (nonatomic) NSObject<DXCMLegalAgreementsProtocol> * delegate;
@property (retain,nonatomic) NSBundle * frameworkBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedManager;
+ (void)initWithAppNumber:(id)v1 sharedApplication:(id)v2;
+ (void)initWithAppNumber:(id)v1 sharedApplication:(id)v2 legalUrls:(id)v3;
+ (id)legalUrls;
+ (void)setLegalUrls:(id)v1;
- (void)checkServerAcceptanceStatusWithUsername:(id)v1 withPassword:(id)v2 withCountryCode:(id)v3;
- (void)checkServerAcceptanceStatusWithAccessToken:(id)v1 withCountryCode:(id)v2;
- (void)checkforAppUpdateWithUsername:(id)v1 withPassword:(id)v2 withCountryCode:(id)v3;
- (void)checkForAppUpdateWithAccessToken:(id)v1 withCountryCode:(id)v2;
- (void)applicationDidEnterBackground;
- (bool)eulaAccepted;
- (void)setEulaAccepted:(bool)v1;
- (bool)serverNeedsUserAgreedUpdate;
- (void)primeWithUserName:(id)v1 withPassword:(id)v2 withCountryCode:(id)v3;
- (void)primeWithAccessToken:(id)v1 withCountryCode:(id)v2;
- (void)legalWebViewDisappeared;
- (void)populateLegalVC:(id)v1;
- (void)presentViewOnlyAgreementsFromVC:(id)v1;
- (void)resetAllUserAgreements;
- (void)resetLocalEula;
- (id)init;
- (void)clearPII;
- (id)token;
- (bool)canShowUpdatedAgreementsAlert;
- (void)showAgreementsUpdatedAlertWithTextDicts:(id)v1;
- (id)topMostControllerForWindow:(id)v1;
- (void)showErrorView;
- (void)setSharedApplication:(id)v1;
- (void)initFrameworkBundle;
- (void)setStateIdle;
- (id)getStateString;
- (void)requestAcceptanceStatus;
- (void)requestAgreementsUpdatedAlertText;
- (void)userAgreedToUpdatedAgreements;
- (void)requestUserAgreementStatus;
- (void)resetUserAgreements:(id)v1;
- (id)getAcceptanceStatusURL;
- (void)beginDisplayAgreementsUpdatedAlert;
- (id)getLegalTranslationsDictionaryUrl;
- (void)sendRequest:(id)v1;
- (void)handleErrorWithContext:(id)v1 withError:(id)v2;
- (void)handleErrorWithContext:(id)v1 withException:(id)v2;
- (void)handleErrorWithContext:(id)v1 withUrlResponse:(id)v2;
- (void)finalizeErrorHandling;
- (bool)isShowErrorState;
- (void)sendLegalAgreementsUrl;
- (id)getLegalAgreementsUrlStringWithIsViewOnly:(bool)v1;
- (void)getOrUseOAuthToken;
- (bool)isTokenValid;
- (void)requestOAUthToken;
- (void)requestUserAgreementsAcceptanceStatus;
- (void)setUserAgreed;
- (void)setupOauthClient;
- (void)emptyOauthAccountStore;
- (void)createOauthClient;
- (void)setCustomHeader:(id)v1;
- (void)addOauthObservers;
- (void)checkForAppUpdate;
- (bool)isOkStatusCode:(id)v1;
- (bool)hasInternet;
- (void)storeLocalUserAgreed;
- (void)storeCurrentAppVersion;
- (void)setServerNeedsUserAgreedUpdate:(bool)v1;
- (id)getVersionString;
- (id)fixJsonNewlines:(id)v1 forHtml:(bool)v2;
- (void)oauthAccountDidChange:(id)v1;
- (void)useOAuthToken;
- (void)oauthAccountDidFailToRequestAccess:(id)v1;
- (void)passURL:(id)v1;
- (void)URLSession:(id)v1 dataTask:(id)v2 didReceiveResponse:(id)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)URLSession:(id)v1 dataTask:(id)v2 didReceiveData:(id)v3;
- (void)URLSession:(id)v1 task:(id)v2 didCompleteWithError:(id)v3;
- (void)processUserAcceptanceStatusResponse:(unsigned long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMLegalAgreementsModalVC : SVModalWebViewController {
    bool _isViewOnly;
    DXCMLegalAgreementsVC * webViewController;
}
@property (retain,nonatomic) DXCMLegalAgreementsVC * webViewController;
@property (nonatomic) bool isViewOnly;
- (id)initWithURLRequest:(id)v1;
- (void)viewDidDisappear:(bool)v1;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMLegalAgreementsVC : SVWebViewController<WKNavigationDelegate,WKNavigationDelegate,WKUIDelegate> {
    bool _isViewOnly;
    bool _isModal;
    bool _isError;
    bool _isLegalProcessing;
    NSString * _exitSegueID;
    NSObject<DXCMLegalAgreementsVCDelegate> * _agreementsDelegate;
    NSTimer * _pageTimeoutTimer;
    UIActivityIndicatorView * _spinner;
}
@property (retain,nonatomic) NSTimer * pageTimeoutTimer;
@property (retain,nonatomic) UIActivityIndicatorView * spinner;
@property (nonatomic) bool isError;
@property (nonatomic) bool isLegalProcessing;
@property (nonatomic) bool isViewOnly;
@property (nonatomic) bool isModal;
@property (retain,nonatomic) NSString * exitSegueID;
@property (nonatomic) NSObject<DXCMLegalAgreementsVCDelegate> * agreementsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)webView:(id)v1 decidePolicyForNavigationResponse:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)updateErrorHTML;
- (void)legalAgreementsUrlAcquired:(id)v1;
- (void)doneButtonTapped:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)initSpinner;
- (void)startPageTimeoutTimer;
- (void)cancelPageTimeoutTimer;
- (void)refreshButtonEnabled:(bool)v1;
- (void)bindPostMessageFunctionToWebview:(id)v1;
- (void)completed;
- (bool)isCustomURL:(id)v1;
- (void)processCustomURLRequest:(id)v1;
- (id)dictionaryFromJsonString:(id)v1;
- (void)setRetryButtonEnabledState:(bool)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
- (void)webView:(id)v1 didFailNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (id)webView:(id)v1 createWebViewWithConfiguration:(id)v2 forNavigationAction:(id)v3 windowFeatures:(id)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMLegalConfig : NSObject
+ (id)getLegalClientIdFromConfigFile;
+ (id)getLegalURLForKey:(id)v1;
+ (id)getValueFromConfigFileForKey:(id)v1;
+ (id)pathToOriginalConfigFile:(id)v1;
+ (id)pathToCustomConfigFile:(id)v1;
@end


/*****************************************************************/

@interface DXCMLegalUrls : NSObject {
    NSString * _baseUrl1;
    NSString * _baseUrl2;
    NSString * _legalClientID;
    NSString * _legalClientSecret;
    NSString * _agreementsUrl;
    NSString * _agreementsViewUrl;
    NSString * _agreementsStatusUrl;
    NSString * _setUserAgreedUrl;
    NSString * _authorizationUrl;
    NSString * _tokenUrl;
    NSString * _translationUrl;
    NSString * _requestAgreementsUrl;
    NSString * _acceptAgreementsUrl;
}
@property (retain,nonatomic) NSString * baseUrl1;
@property (retain,nonatomic) NSString * baseUrl2;
@property (retain,nonatomic) NSString * legalClientID;
@property (retain,nonatomic) NSString * legalClientSecret;
@property (retain,nonatomic) NSString * agreementsUrl;
@property (retain,nonatomic) NSString * agreementsViewUrl;
@property (retain,nonatomic) NSString * agreementsStatusUrl;
@property (retain,nonatomic) NSString * setUserAgreedUrl;
@property (retain,nonatomic) NSString * authorizationUrl;
@property (retain,nonatomic) NSString * tokenUrl;
@property (retain,nonatomic) NSString * translationUrl;
@property (retain,nonatomic) NSString * requestAgreementsUrl;
@property (retain,nonatomic) NSString * acceptAgreementsUrl;
- (id)getLegalUrlForType:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2AccessToken : NSObject<NSCoding> {
    NSString * accessToken;
    NSString * refreshToken;
    NSString * tokenType;
    NSDate * expiresAt;
    NSSet * scope;
    NSString * responseBody;
}
@property (readonly,nonatomic) NSString * accessToken;
@property (readonly,nonatomic) NSString * refreshToken;
@property (readonly,nonatomic) NSString * tokenType;
@property (readonly,nonatomic) NSDate * expiresAt;
@property (readonly,nonatomic) bool doesExpire;
@property (readonly,nonatomic) bool hasExpired;
@property (readonly,nonatomic) NSSet * scope;
@property (readonly,nonatomic) NSString * responseBody;
+ (id)tokenWithResponseBody:(id)v1;
+ (id)tokenWithResponseBody:(id)v1 tokenType:(id)v2;
+ (id)serviceNameWithProvider:(id)v1;
+ (id)tokenFromDefaultKeychainWithServiceProviderName:(id)v1;
- (id)initWithAccessToken:(id)v1;
- (id)initWithAccessToken:(id)v1 refreshToken:(id)v2 expiresAt:(id)v3;
- (id)initWithAccessToken:(id)v1 refreshToken:(id)v2 expiresAt:(id)v3 scope:(id)v4;
- (id)initWithAccessToken:(id)v1 refreshToken:(id)v2 expiresAt:(id)v3 scope:(id)v4 responseBody:(id)v5;
- (id)initWithAccessToken:(id)v1 refreshToken:(id)v2 expiresAt:(id)v3 scope:(id)v4 responseBody:(id)v5 tokenType:(id)v6;
- (void)restoreWithOldToken:(id)v1;
- (id)description;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)storeInDefaultKeychainWithServiceProviderName:(id)v1;
- (void)removeFromDefaultKeychainWithServiceProviderName:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2Account : NSObject<NXOAuth2ClientDelegate,NXOAuth2TrustDelegate> {
    NSString * accountType;
    NSString * identifier;
    NSObject<NSObject><NSCoding><NSCopying> * userData;
    NXOAuth2Client * oauthClient;
    NXOAuth2AccessToken * accessToken;
}
@property (readonly,copy,nonatomic) NSString * accountType;
@property (readonly,copy,nonatomic) NSString * identifier;
@property (copy,nonatomic) NSObject<NSObject><NSCoding><NSCopying> * userData;
@property (readonly,nonatomic) NXOAuth2Client * oauthClient;
@property (readonly,nonatomic) NXOAuth2AccessToken * accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initAccountWithOAuthClient:(id)v1 accountType:(id)v2;
- (id)initAccountWithAccessToken:(id)v1 accountType:(id)v2;
- (int)connection:(id)v1 trustModeForHostname:(id)v2;
- (id)connection:(id)v1 trustedCertificatesForHostname:(id)v2;
- (void)oauthClientNeedsAuthentication:(id)v1;
- (void)oauthClientDidGetAccessToken:(id)v1;
- (void)oauthClientDidLoseAccessToken:(id)v1;
- (void)oauthClientDidRefreshAccessToken:(id)v1;
- (void)oauthClient:(id)v1 didFailToGetAccessTokenWithError:(id)v2;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2AccountStore : NSObject<NXOAuth2ClientDelegate,NXOAuth2TrustDelegate> {
    NSMutableDictionary * pendingOAuthClients;
    NSMutableDictionary * accountsDict;
    NSMutableDictionary * configurations;
    NSMutableDictionary * trustModeHandler;
    NSMutableDictionary * trustedCertificatesHandler;
}
@property (retain,nonatomic) NSMutableDictionary * pendingOAuthClients;
@property (retain,nonatomic) NSMutableDictionary * accountsDict;
@property (retain,nonatomic) NSMutableDictionary * configurations;
@property (retain,nonatomic) NSMutableDictionary * trustModeHandler;
@property (retain,nonatomic) NSMutableDictionary * trustedCertificatesHandler;
@property (readonly,nonatomic) NSArray * accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedStore;
+ (id)keychainServiceName;
+ (id)accountsFromDefaultKeychain;
+ (void)storeAccountsInDefaultKeychain:(id)v1;
+ (void)removeFromDefaultKeychain;
- (id)init;
- (void)dealloc;
- (id)accountsWithAccountType:(id)v1;
- (id)accountWithIdentifier:(id)v1;
- (void)requestAccessToAccountWithType:(id)v1;
- (void)requestAccessToAccountWithType:(id)v1 withPreparedAuthorizationURLHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)requestAccessToAccountWithType:(id)v1 username:(id)v2 password:(id)v3;
- (void)requestAccessToAccountWithType:(id)v1 assertionType:(id)v2 assertion:(id)v3;
- (void)requestClientCredentialsAccessWithType:(id)v1;
- (void)removeAccount:(id)v1;
- (void)setClientID:(id)v1 secret:(id)v2 authorizationURL:(id)v3 tokenURL:(id)v4 redirectURL:(id)v5 forAccountType:(id)v6;
- (void)setClientID:(id)v1 secret:(id)v2 scope:(id)v3 authorizationURL:(id)v4 tokenURL:(id)v5 redirectURL:(id)v6 keyChainGroup:(id)v7 forAccountType:(id)v8;
- (void)setClientID:(id)v1 secret:(id)v2 scope:(id)v3 authorizationURL:(id)v4 tokenURL:(id)v5 redirectURL:(id)v6 keyChainGroup:(id)v7 tokenType:(id)v8 forAccountType:(id)v9;
- (void)setConfiguration:(id)v1 forAccountType:(id)v2;
- (id)configurationForAccountType:(id)v1;
- (void)setTrustModeHandlerForAccountType:(id)v1 block:(void (^ /* unknown block signature */)(void))v2;
- (void)setTrustedCertificatesHandlerForAccountType:(id)v1 block:(void (^ /* unknown block signature */)(void))v2;
- (void (^ /* unknown block signature */)(void))trustModeHandlerForAccountType:(id)v1;
- (void (^ /* unknown block signature */)(void))trustedCertificatesHandlerForAccountType:(id)v1;
- (bool)handleRedirectURL:(id)v1;
- (id)pendingOAuthClientForAccountType:(id)v1;
- (id)accountTypeOfPendingOAuthClient:(id)v1;
- (void)oauthClientNeedsAuthentication:(id)v1;
- (void)oauthClientDidGetAccessToken:(id)v1;
- (void)addAccount:(id)v1;
- (void)oauthClientDidLoseAccessToken:(id)v1;
- (void)oauthClient:(id)v1 didFailToGetAccessTokenWithError:(id)v2;
- (int)connection:(id)v1 trustModeForHostname:(id)v2;
- (id)connection:(id)v1 trustedCertificatesForHostname:(id)v2;
- (void)accountDidChangeUserData:(id)v1;
- (void)accountDidChangeAccessToken:(id)v1;
- (void)accountDidLoseAccessToken:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2Client : NSObject<NXOAuth2ConnectionDelegate> {
    bool authenticating;
    bool persistent;
    NSString * clientId;
    NSString * clientSecret;
    NSSet * desiredScope;
    NSString * userAgent;
    NSString * assertion;
    NSString * keyChainGroup;
    NSURL * authorizeURL;
    NSURL * tokenURL;
    NSString * tokenType;
    NXOAuth2Connection * authConnection;
    NXOAuth2AccessToken * accessToken;
    NSMutableArray * waitingConnections;
    long long refreshConnectionDidRetryCount;
    NSObject<NXOAuth2ClientDelegate> * delegate;
    NSDictionary * additionalAuthenticationParameters;
    NSDictionary * _customHeaderFields;
    NSString * _tokenRequestHTTPMethod;
    NSString * _acceptType;
}
@property (nonatomic,getter=isAuthenticating) bool authenticating;
@property (readonly,copy,nonatomic) NSString * clientId;
@property (readonly,copy,nonatomic) NSString * clientSecret;
@property (readonly,copy,nonatomic) NSString * tokenType;
@property (retain,nonatomic) NSDictionary * additionalAuthenticationParameters;
@property (retain,nonatomic) NSDictionary * customHeaderFields;
@property (copy,nonatomic) NSSet * desiredScope;
@property (copy,nonatomic) NSString * tokenRequestHTTPMethod;
@property (copy,nonatomic) NSString * userAgent;
@property (copy,nonatomic) NSString * acceptType;
@property (retain,nonatomic) NXOAuth2AccessToken * accessToken;
@property (nonatomic) NSObject<NXOAuth2ClientDelegate> * delegate;
@property (nonatomic,getter=isPersistent) bool persistent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithClientID:(id)v1 clientSecret:(id)v2 authorizeURL:(id)v3 tokenURL:(id)v4 delegate:(id)v5;
- (id)initWithClientID:(id)v1 clientSecret:(id)v2 authorizeURL:(id)v3 tokenURL:(id)v4 accessToken:(id)v5 keyChainGroup:(id)v6 persistent:(bool)v7 delegate:(id)v8;
- (id)initWithClientID:(id)v1 clientSecret:(id)v2 authorizeURL:(id)v3 tokenURL:(id)v4 accessToken:(id)v5 tokenType:(id)v6 keyChainGroup:(id)v7 persistent:(bool)v8 delegate:(id)v9;
- (void)dealloc;
- (void)requestAccess;
- (id)authorizationURLWithRedirectURL:(id)v1;
- (bool)openRedirectURL:(id)v1;
- (void)requestTokenWithAuthGrant:(id)v1 redirectURL:(id)v2;
- (void)authenticateWithClientCredentials;
- (void)authenticateWithUsername:(id)v1 password:(id)v2;
- (void)authenticateWithAssertionType:(id)v1 assertion:(id)v2;
- (void)refreshAccessToken;
- (void)refreshAccessTokenAndRetryConnection:(id)v1;
- (void)removeConnectionFromWaitingQueue:(id)v1;
- (void)oauthConnection:(id)v1 didFinishWithData:(id)v2;
- (void)oauthConnection:(id)v1 didFailWithError:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2Connection : NSObject {
    NSURLConnection * connection;
    NSMutableURLRequest * request;
    NSURLResponse * response;
    NSDictionary * requestParameters;
    NSMutableData * data;
    bool savesData;
    id context;
    NSDictionary * userInfo;
    NXOAuth2Client * client;
    NSObject<NXOAuth2ConnectionDelegate> * delegate;
    void (^ /* unknown block signature */)(void) responseHandler;
    void (^ /* unknown block signature */)(void) sendingProgressHandler;
    bool sendConnectionDidEndNotification;
}
@property (readonly,nonatomic) NSObject<NXOAuth2TrustDelegate> * trustDelegate;
@property (nonatomic) NSObject<NXOAuth2ConnectionDelegate> * delegate;
@property (readonly,nonatomic) NSData * data;
@property (nonatomic) bool savesData;
@property (readonly,nonatomic) long long expectedContentLength;
@property (readonly,nonatomic) NSURLResponse * response;
@property (readonly,nonatomic) long long statusCode;
@property (retain,nonatomic) id context;
@property (retain,nonatomic) NSDictionary * userInfo;
@property (readonly,nonatomic) NXOAuth2Client * client;
- (id)initWithRequest:(id)v1 requestParameters:(id)v2 oauthClient:(id)v3 sendingProgressHandler:(void (^ /* unknown block signature */)(void))v4 responseHandler:(void (^ /* unknown block signature */)(void))v5;
- (id)initWithRequest:(id)v1 requestParameters:(id)v2 oauthClient:(id)v3 delegate:(id)v4;
- (void)dealloc;
- (id)description;
- (void)cancel;
- (void)retry;
- (id)createConnection;
- (id)descriptionForRequest:(id)v1;
- (void)applyParameters:(id)v1 onRequest:(id)v2;
- (bool)trustsAuthenticationChallenge:(id)v1 forHostname:(id)v2 withTrustMode:(int)v3;
- (bool)isServerCertificateForAuthenticationChallenge:(id)v1 andHostname:(id)v2 matchingCertificate:(id)v3;
- (void)stream:(id)v1 didSendBytes:(unsigned long long)v2 ofTotal:(unsigned long long)v3;
- (void)connection:(id)v1 didReceiveResponse:(id)v2;
- (void)connection:(id)v1 didReceiveData:(id)v2;
- (void)connectionDidFinishLoading:(id)v1;
- (void)connection:(id)v1 didFailWithError:(id)v2;
- (id)connection:(id)v1 willSendRequest:(id)v2 redirectResponse:(id)v3;
- (void)connection:(id)v1 didSendBodyData:(long long)v2 totalBytesWritten:(long long)v3 totalBytesExpectedToWrite:(long long)v4;
- (id)connection:(id)v1 needNewBodyStream:(id)v2;
- (bool)connection:(id)v1 canAuthenticateAgainstProtectionSpace:(id)v2;
- (void)connection:(id)v1 didReceiveAuthenticationChallenge:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2FileStreamWrapper : NSObject {
    NSInputStream * stream;
    unsigned long long contentLength;
    NSString * fileName;
    NSString * contentType;
}
@property (readonly,nonatomic) NSInputStream * stream;
@property (readonly,nonatomic) unsigned long long contentLength;
@property (readonly,copy,nonatomic) NSString * fileName;
@property (copy,nonatomic) NSString * contentType;
+ (id)wrapperWithStream:(id)v1 contentLength:(unsigned long long)v2;
+ (id)wrapperWithStream:(id)v1 contentLength:(unsigned long long)v2 fileName:(id)v3;
- (id)init;
- (id)initWithStream:(id)v1 contentLength:(unsigned long long)v2;
- (id)initWithStream:(id)v1 contentLength:(unsigned long long)v2 fileName:(id)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2PostBodyPart : NSObject {
    NSString * contentHeaders;
    NSInputStream * contentStream;
    unsigned long long contentLength;
}
@property (readonly,nonatomic) NSString * contentHeaders;
@property (readonly,nonatomic) NSInputStream * contentStream;
@property (readonly,nonatomic) unsigned long long contentLength;
+ (id)partWithName:(id)v1 content:(id)v2;
- (id)initWithName:(id)v1 content:(id)v2;
- (id)initWithName:(id)v1 streamContent:(id)v2 streamLength:(unsigned long long)v3 fileName:(id)v4;
- (id)initWithName:(id)v1 streamContent:(id)v2 streamLength:(unsigned long long)v3 fileName:(id)v4 contentType:(id)v5;
- (id)initWithName:(id)v1 dataContent:(id)v2;
- (id)initWithName:(id)v1 fileContent:(id)v2;
- (id)initWithName:(id)v1 stringContent:(id)v2;
- (id)initWithHeaders:(id)v1 dataContent:(id)v2;
- (id)initWithHeaders:(id)v1 streamContent:(id)v2 length:(unsigned long long)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2PostBodyStream : NSInputStream {
    NSString * boundary;
    NSArray * contentStreams;
    NSInputStream * currentStream;
    unsigned long long streamIndex;
    unsigned long long numBytesTotal;
}
@property (readonly) NSString * boundary;
@property (readonly) unsigned long long length /* backed by numBytesTotal */;
- (id)initWithParameters:(id)v1;
- (id)partsForParameters:(id)v1;
- (id)streamsForParameters:(id)v1 contentLength:(unsigned long long *)v2;
- (void)open;
- (void)close;
- (bool)hasBytesAvailable;
- (long long)read:(char *)v1 maxLength:(unsigned long long)v2;
- (bool)getBuffer:(char * *)v1 length:(unsigned long long *)v2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)scheduleInRunLoop:(id)v1 forMode:(id)v2;
- (void)removeFromRunLoop:(id)v1 forMode:(id)v2;
- (void)_scheduleInCFRunLoop:(id)v1 forMode:(id)v2;
- (void)_setCFClientFlags:(unsigned long long)v1 callback:(void * *)v2 context:(struct anonymous_type_8)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NXOAuth2Request : NSObject<NXOAuth2ConnectionDelegate> {
    NSDictionary * parameters;
    NSURL * resource;
    NSString * requestMethod;
    NXOAuth2Account * account;
    NXOAuth2Connection * connection;
    NXOAuth2Request * me;
}
@property (retain,nonatomic) NXOAuth2Connection * connection;
@property (retain,nonatomic) NXOAuth2Request * me;
@property (retain,nonatomic) NXOAuth2Account * account;
@property (retain,nonatomic) NSString * requestMethod;
@property (retain,nonatomic) NSURL * resource;
@property (retain,nonatomic) NSDictionary * parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)performMethod:(id)v1 onResource:(id)v2 usingParameters:(id)v3 withAccount:(id)v4 sendProgressHandler:(void (^ /* unknown block signature */)(void))v5 responseHandler:(void (^ /* unknown block signature */)(void))v6;
- (id)initWithResource:(id)v1 method:(id)v2 parameters:(id)v3;
- (id)signedURLRequest;
- (void)performRequestWithSendingProgressHandler:(void (^ /* unknown block signature */)(void))v1 responseHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)cancel;
- (void)oauthConnection:(id)v1 didFinishWithData:(id)v2;
- (void)oauthConnection:(id)v1 didFailWithError:(id)v2;
- (void)applyParameters:(id)v1 onRequest:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SVModalWebViewController : UINavigationController {
    SVWebViewController * _webViewController;
    UIColor * _barsTintColor;
    NSObject<WKNavigationDelegate> * _navigationDelegate;
}
@property (retain,nonatomic) SVWebViewController * webViewController;
@property (retain,nonatomic) UIColor * barsTintColor;
@property (nonatomic) NSObject<WKNavigationDelegate> * navigationDelegate;
- (id)initWithAddress:(id)v1;
- (id)initWithURL:(id)v1;
- (id)initWithURLRequest:(id)v1;
- (void)viewWillAppear:(bool)v1;
- (void)setWebViewDelegate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SVWebViewController : UIViewController<WKNavigationDelegate> {
    NSObject<WKNavigationDelegate> * _navigationDelegate;
    WKWebView * _webView;
    UIBarButtonItem * _backBarButtonItem;
    UIBarButtonItem * _forwardBarButtonItem;
    UIBarButtonItem * _refreshBarButtonItem;
    UIBarButtonItem * _stopBarButtonItem;
    UIBarButtonItem * _spacerBarButtonItem;
    NSURLRequest * _request;
}
@property (retain,nonatomic) NSURLRequest * request;
@property (nonatomic) NSObject<WKNavigationDelegate> * navigationDelegate;
@property (retain,nonatomic) WKWebView * webView;
@property (retain,nonatomic) UIBarButtonItem * backBarButtonItem;
@property (retain,nonatomic) UIBarButtonItem * forwardBarButtonItem;
@property (retain,nonatomic) UIBarButtonItem * refreshBarButtonItem;
@property (retain,nonatomic) UIBarButtonItem * stopBarButtonItem;
@property (retain,nonatomic) UIBarButtonItem * spacerBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithAddress:(id)v1;
- (id)initWithURL:(id)v1;
- (id)initWithURLRequest:(id)v1;
- (void)loadRequest:(id)v1;
- (void)viewDidLoad;
- (void)hideUIBarButton:(id)v1;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (id)svImageNamed:(id)v1;
- (void)updateToolbarItems;
- (void)goBackTapped:(id)v1;
- (void)goForwardTapped:(id)v1;
- (void)reloadTapped:(id)v1;
- (void)stopTapped:(id)v1;
- (void)doneButtonTapped:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC9DexAppKit15BulkDataManager : _TtCs12_SwiftObject {
    id _uploadResult;
    id transmitterID;
    id txInfoDelegate;
    id bulkDataAPI;
    id accountID;
    id uploadFrequencyDefault;
    id uploadFrequencyRetry;
    id dailyRecordsUpdateInterval;
    id timeCheckDelta;
    id minUploadFrequency;
    id maxUploadFrequency;
    id $__lazy_storage_$_uploadFrequency;
    id timeProvider;
    id kKeyLastUploadAttempt;
    id kKeyLastDeviceSettingsUpdate;
    id kKeyLastInventoryRecordUpdate;
    id kKeyLastDeveloperLogsFetch;
    id kKeyLastEventsFetch;
    id kKeyLastUploadFrequency;
    id kKeyInstallationID;
    id isNetworkReachablePrivate;
    id isUploadingBulkDataPrivate;
    id lifeCycleManager;
    id authManager;
    id subscriptions;
    id persistenceDelegate;
    id apiRepository;
    id eventLogger;
    id devLogger;
    id backgroundTaskName;
    id serialQueue;
    id accessQueue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21BulkDataApiRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id bulkDataDao;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21FeatureFlagRepository : _TtCs12_SwiftObject {
    id persistedFeatureFlagRecord;
    id persistenceEventPublisher;
    id featureFlagRecordDao;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15AcmTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18DexKitOrchestrator : _TtCs12_SwiftObject {
    id persistence;
    id persistenceEventMonitor;
    id timeProvider;
    id developerLogger;
    id keychainManager;
    id eventLogger;
    id timeStateManager;
    id acmProvider;
    id diskSpaceMonitor;
    id watchCommunication;
    id authManager;
    id consentEventLogMonitor;
    id appId;
    id appSoftwareNumber;
    id subscriptions;
    id bulkDataManager;
    id secureNetworkingManager;
    id namedValuesManager;
    id settingsSyncManager;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit19SettingsSyncManager : _TtCs12_SwiftObject {
    id settingsSyncConfig;
    id namedValuesManager;
    id lifeCycleManager;
    id authManager;
    id eventLogger;
    id timeProvider;
    id persistence;
    id snoozeEnabledAlerts;
    id delayEnabledAlerts;
    id rateEnabledAlerts;
    id subscriptions;
    id backgroundTaskName;
    id watchCommunication;
    id watchCommSettingsSync;
    id settingsQueue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit28SecureNetworkingTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit19AppLifeCycleManager : _TtCs12_SwiftObject {
    id observers;
    id backgroundTasks;
    id backgroundTaskSignposts;
    id logFlusher;
    id serialQueue;
    id appLifeCycleEvent;
    id userNotificationRequests;
    id appForegroundStatus;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit11AuthManager : _TtCs12_SwiftObject {
    id serialQueue;
    id subscriptions;
    id tokenNeedsRefresh;
    id activeRefreshTokenCallbackUrl;
    id activeRefreshTokenFuture;
    id activeAccessTokenFuture;
    id config;
    id timeProvider;
    id repo;
    id networkClient;
    id eventLogger;
    id watchCommunication;
    id _authStatus;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit26SecureNetworkingRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id secureNetworkingKeyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22AlertSettingsRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20UserEventsRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id userEventRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15TimeProviderDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18BLEEventLogMonitor : _TtCs12_SwiftObject {
    id bleStateMonitor;
    id blePermissionMonitor;
    id eventLogger;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15GCSURLRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit16GCSURLRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id gcsUrlRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20BLEPermissionMonitor : _TtCs12_SwiftObject {
    id permissionProxy;
    id _authorization;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit17KeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit33SecureNetworkingKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit13AcmRepository : _TtCs12_SwiftObject {
    id acmKeyValueRecordDao;
    id persistenceEventPublisher;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit14EventLogRecord : _TtCs12_SwiftObject {
    id recordId;
    id type;
    id subType;
    id time;
    id moreInfo;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit16TimeStateManager : _TtCs12_SwiftObject {
    id timeProvider;
    id eventLogger;
    id timeSubscriber;
    id isoDateFormatterNative;
    id isoDateFormatterUTC;
    id _timeState;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit17AuthManagerReader : _TtCs12_SwiftObject {
    id subscriptions;
    id timeProvider;
    id repo;
    id watchCommunication;
    id _authStatus;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21EventLoggerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id eventLoggerDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit19QuietModesRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18WatchCommunication : NSObject {
    id session;
    id decoder;
    id encoder;
    id watchStateChangePublisher;
    id messagePublisher;
    id filePublisher;
    id watchEventLogger;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC9DexAppKit33TimeProviderBackgroundTaskManager : _TtCs12_SwiftObject {
    id backgroundTaskManager;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit26QuietModesRecordRepository : _TtCs12_SwiftObject {
    id updatedQuietModesRecord;
    id persistenceEventPublisher;
    id quietModesRecordDao;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18KeyValueRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id keyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18NamedValuesManager : _TtCs12_SwiftObject {
    id secureNetworkingManager;
    id subscriptions;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit14AlertRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit17DiskSpaceProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC9DexAppKit15BLEStateMonitor : _TtCs12_SwiftObject {
    id _bleState;
    id subscriber;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18UserEventRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22AlertScheduleRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21AuthManagerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id authKeyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15DatabaseManager : _TtCs12_SwiftObject {
    id dbPool;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18BLEPermissionProxy : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC9DexAppKit21AuthKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit25SyncableKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20FeatureFlagRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22ConsentEventLogMonitor : _TtCs12_SwiftObject {
    id currentConsentStatus;
    id eventLogger;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit25BulkDataManagerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id bulkDataKeyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22AlertProfileRepository : _TtCs12_SwiftObject {
    id syncedAlertProfile;
    id updatedAlertProfiles;
    id persistenceEventPublisher;
    id alertProfileRecordDao;
    id alertScheduleRecordDao;
    id alertSettingsRecordDao;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21BulkDataPostRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21DeveloperLogRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21AlertProfileRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit11Persistence : _TtCs12_SwiftObject {
    id databaseManager;
    id timeProviderRepository;
    id developerLogRepository;
    id eventLoggerRepository;
    id bulkDataApiRepository;
    id bulkDataManagerRepository;
    id secureNetworkingRepository;
    id authManagerRepository;
    id acmRepository;
    id alertRepo;
    id userEventsRepo;
    id alertProfileRepo;
    id quietModesRecordRepo;
    id urlRepo;
    id featureFlagRepo;
    id keyValueRepo;
    id syncableKeyValueRepo;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22DeveloperLogRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id developerLogRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15AlertRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id alertRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit11EventLogger : _TtCs12_SwiftObject {
    id eventLoggerRepository;
    id timeProvider;
    id eventLoggerConfig;
    id operationQueue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20AcmKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15DeveloperLogger : DDAbstractDatabaseLogger {
    id repository;
    id timeProvider;
    id logBuffer;
    id operationQueue;
}
- (bool)db_log:(id)v1;
- (void)db_save;
- (void)db_delete;
- (void)db_saveAndDelete;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC9DexAppKit14EventLoggerDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit25BulkDataKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22TimeProviderRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id dao;
    id phoneTimeKey;
    id rtcTimeKey;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit23PersistenceEventMonitor : _TtCs12_SwiftObject {
    id persistenceErrorEvent;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit16DiskSpaceMonitor : _TtCs12_SwiftObject {
    id _currentStatus;
    id diskSpaceProvider;
    id lifeCycleSubscriber;
    id lifeCycleManager;
    id backgroundTaskName;
    id diskSpaceConfig;
    id serialQueue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit11AcmProvider : _TtCs12_SwiftObject {
    id acmRepository;
    id timeProvider;
    id appId;
    id appSoftwareNumber;
    id _acmApi;
    id acmConfig;
    id acmSettings;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit26SyncableKeyValueRepository : _TtCs12_SwiftObject {
    id syncedKeyValue;
    id updatedKeyValue;
    id deletedKeyValue;
    id persistenceEventPublisher;
    id keyValueRecordDao;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit11AlertRecord : _TtCs12_SwiftObject {
    id recordId;
    id uuid;
    id identifier;
    id currentStatus;
    id changeType;
    id lifeTimeAlertCount;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity12ECJPakePhase : _TtCs12_SwiftObject {
    id createPayload;
    id verifyPayload;
    id verifyPayloadData;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity14SwiftMbedUtils : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity9ECKeyPair : _TtCs12_SwiftObject {
    id publicPoint;
    id privatePoint;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity6BigInt : _TtCs12_SwiftObject {
    id bigNumData;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity12CSRGenerator : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface CSR : NSObject
- (id)makeCertificateSigningRequest:(id)v1 signRequestBlock:(void (^ /* unknown block signature */)(void))v2;
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity7ECPoint : _TtCs12_SwiftObject {
    id x;
    id y;
    id curve;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity15ChallengeHelper : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity7ECJPake : _TtCs12_SwiftObject {
    id curve;
    id payloadFactory;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity16ECKeyPairFactory : _TtCs12_SwiftObject {
    id curve;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity18ECJPakeParticipant : _TtCs12_SwiftObject {
    id participantName;
    id otherParticipantName;
    id password;
    id round2PayloadCreated;
    id round2PayloadVerified;
    id curve;
    id payloadFactory;
    id ecjpake;
    id keyPairFactory;
    id localX1KeyPair;
    id localX2KeyPair;
    id remoteX3PublicKey;
    id remoteX4PublicKey;
    id remoteXmPublicKey;
    id $__lazy_storage_$_ecJPakePhases;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity14ECJPakePayload : _TtCs12_SwiftObject {
    id publicKey;
    id epherealKey;
    id schnorrSignature;
}
@end


/*****************************************************************/

@interface _TtC14DexcomSecurity21ECJPakePayloadFactory : _TtCs12_SwiftObject {
    id curve;
}
@end


/*****************************************************************/

@interface FBLPromise : NSObject {
    long long _state;
    NSMutableSet * _pendingObjects;
    id _value;
    NSError * _error;
    NSMutableArray * _observers;
}
@property (readonly,nonatomic) bool isPending;
@property (readonly,nonatomic) bool isFulfilled;
@property (readonly,nonatomic) bool isRejected;
@property (readonly,nonatomic) id value;
@property (readonly,nonatomic) NSError * error;
+ (void (^ /* unknown block signature */)(void))wrapCompletion;
+ (void (^ /* unknown block signature */)(void))wrapCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapObjectCompletion;
+ (void (^ /* unknown block signature */)(void))wrapObjectCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapErrorCompletion;
+ (void (^ /* unknown block signature */)(void))wrapErrorCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapObjectOrErrorCompletion;
+ (void (^ /* unknown block signature */)(void))wrapObjectOrErrorCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapErrorOrObjectCompletion;
+ (void (^ /* unknown block signature */)(void))wrapErrorOrObjectCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrap2ObjectsOrErrorCompletion;
+ (void (^ /* unknown block signature */)(void))wrap2ObjectsOrErrorCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapBoolCompletion;
+ (void (^ /* unknown block signature */)(void))wrapBoolCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapBoolOrErrorCompletion;
+ (void (^ /* unknown block signature */)(void))wrapBoolOrErrorCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapIntegerCompletion;
+ (void (^ /* unknown block signature */)(void))wrapIntegerCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapIntegerOrErrorCompletion;
+ (void (^ /* unknown block signature */)(void))wrapIntegerOrErrorCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapDoubleCompletion;
+ (void (^ /* unknown block signature */)(void))wrapDoubleCompletionOn;
+ (void (^ /* unknown block signature */)(void))wrapDoubleOrErrorCompletion;
+ (void (^ /* unknown block signature */)(void))wrapDoubleOrErrorCompletionOn;
+ (id)wrapCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapObjectCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapObjectCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapErrorCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapErrorCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapObjectOrErrorCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapObjectOrErrorCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapErrorOrObjectCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapErrorOrObjectCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrap2ObjectsOrErrorCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrap2ObjectsOrErrorCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapBoolCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapBoolCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapBoolOrErrorCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapBoolOrErrorCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapIntegerCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapIntegerCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapIntegerOrErrorCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapIntegerOrErrorCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapDoubleCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapDoubleCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)wrapDoubleOrErrorCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 wrapDoubleOrErrorCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (id)dispatchGroup;
+ (void (^ /* unknown block signature */)(void))retry;
+ (void (^ /* unknown block signature */)(void))retryOn;
+ (void (^ /* unknown block signature */)(void))retryAgain;
+ (void (^ /* unknown block signature */)(void))retryAgainOn;
+ (id)retry:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 retry:(void (^ /* unknown block signature */)(void))v2;
+ (id)attempts:(long long)v1 retry:(void (^ /* unknown block signature */)(void))v2;
+ (id)onQueue:(id)v1 attempts:(long long)v2 retry:(void (^ /* unknown block signature */)(void))v3;
+ (id)attempts:(long long)v1 delay:(double)v2 condition:(void (^ /* unknown block signature */)(void))v3 retry:(void (^ /* unknown block signature */)(void))v4;
+ (id)onQueue:(id)v1 attempts:(long long)v2 delay:(double)v3 condition:(void (^ /* unknown block signature */)(void))v4 retry:(void (^ /* unknown block signature */)(void))v5;
+ (void (^ /* unknown block signature */)(void))race;
+ (void (^ /* unknown block signature */)(void))raceOn;
+ (id)race:(id)v1;
+ (id)onQueue:(id)v1 race:(id)v2;
+ (void (^ /* unknown block signature */)(void))doOn;
+ (id)do:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 do:(void (^ /* unknown block signature */)(void))v2;
+ (void (^ /* unknown block signature */)(void))async;
+ (void (^ /* unknown block signature */)(void))asyncOn;
+ (id)async:(void (^ /* unknown block signature */)(void))v1;
+ (id)onQueue:(id)v1 async:(void (^ /* unknown block signature */)(void))v2;
+ (void (^ /* unknown block signature */)(void))any;
+ (void (^ /* unknown block signature */)(void))anyOn;
+ (id)any:(id)v1;
+ (id)onQueue:(id)v1 any:(id)v2;
+ (void (^ /* unknown block signature */)(void))all;
+ (void (^ /* unknown block signature */)(void))allOn;
+ (id)all:(id)v1;
+ (id)onQueue:(id)v1 all:(id)v2;
+ (void (^ /* unknown block signature */)(void))pending;
+ (void (^ /* unknown block signature */)(void))resolved;
+ (void)initialize;
+ (id)defaultDispatchQueue;
+ (void)setDefaultDispatchQueue:(id)v1;
+ (id)pendingPromise;
+ (id)resolvedWith:(id)v1;
- (void (^ /* unknown block signature */)(void))validate;
- (void (^ /* unknown block signature */)(void))validateOn;
- (id)validate:(void (^ /* unknown block signature */)(void))v1;
- (id)onQueue:(id)v1 validate:(void (^ /* unknown block signature */)(void))v2;
- (void (^ /* unknown block signature */)(void))timeout;
- (void (^ /* unknown block signature */)(void))timeoutOn;
- (id)timeout:(double)v1;
- (id)onQueue:(id)v1 timeout:(double)v2;
- (void (^ /* unknown block signature */)(void))then;
- (void (^ /* unknown block signature */)(void))thenOn;
- (id)then:(void (^ /* unknown block signature */)(void))v1;
- (id)onQueue:(id)v1 then:(void (^ /* unknown block signature */)(void))v2;
- (void (^ /* unknown block signature */)(void))reduce;
- (void (^ /* unknown block signature */)(void))reduceOn;
- (id)reduce:(id)v1 combine:(void (^ /* unknown block signature */)(void))v2;
- (id)onQueue:(id)v1 reduce:(id)v2 combine:(void (^ /* unknown block signature */)(void))v3;
- (void (^ /* unknown block signature */)(void))recover;
- (void (^ /* unknown block signature */)(void))recoverOn;
- (id)recover:(void (^ /* unknown block signature */)(void))v1;
- (id)onQueue:(id)v1 recover:(void (^ /* unknown block signature */)(void))v2;
- (void (^ /* unknown block signature */)(void))delay;
- (void (^ /* unknown block signature */)(void))delayOn;
- (id)delay:(double)v1;
- (id)onQueue:(id)v1 delay:(double)v2;
- (void (^ /* unknown block signature */)(void))catch;
- (void (^ /* unknown block signature */)(void))catchOn;
- (id)catch:(void (^ /* unknown block signature */)(void))v1;
- (id)onQueue:(id)v1 catch:(void (^ /* unknown block signature */)(void))v2;
- (void (^ /* unknown block signature */)(void))always;
- (void (^ /* unknown block signature */)(void))alwaysOn;
- (id)always:(void (^ /* unknown block signature */)(void))v1;
- (id)onQueue:(id)v1 always:(void (^ /* unknown block signature */)(void))v2;
- (void)fulfill:(id)v1;
- (void)reject:(id)v1;
- (id)description;
- (id)initPending;
- (id)initWithResolution:(id)v1;
- (void)dealloc;
- (void)addPendingObject:(id)v1;
- (void)observeOnQueue:(id)v1 fulfill:(void (^ /* unknown block signature */)(void))v2 reject:(void (^ /* unknown block signature */)(void))v3;
- (id)chainOnQueue:(id)v1 chainedFulfill:(void (^ /* unknown block signature */)(void))v2 chainedReject:(void (^ /* unknown block signature */)(void))v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_PromisesObjC : NSObject
@end


/*****************************************************************/

@interface FIRAnalyticsConfiguration : NSObject
+ (id)sharedInstance;
- (void)postNotificationName:(id)v1 value:(id)v2;
- (void)setAnalyticsCollectionEnabled:(bool)v1;
- (void)setAnalyticsCollectionEnabled:(bool)v1 persistSetting:(bool)v2;
@end


/*****************************************************************/

@interface FIRApp : NSObject {
    bool _isDefaultApp;
    FIROptions * _options;
    NSString * _name;
    FIRComponentContainer * _container;
    FIRHeartbeatLogger * _heartbeatLogger;
}
@property (readonly,nonatomic) bool isDefaultApp;
@property (retain,nonatomic) FIRComponentContainer * container;
@property (readonly) FIRHeartbeatLogger * heartbeatLogger;
@property (readonly,copy,nonatomic) NSString * name;
@property (readonly,copy,nonatomic) FIROptions * options;
@property (nonatomic,getter=isDataCollectionDefaultEnabled) bool dataCollectionDefaultEnabled;
+ (void)configure;
+ (void)configureWithOptions:(id)v1;
+ (id)applicationNameAllowedCharacters;
+ (void)configureWithName:(id)v1 options:(id)v2;
+ (void)appWasConfiguredTwice:(id)v1 usingOptions:(id)v2;
+ (id)defaultApp;
+ (id)appNamed:(id)v1;
+ (id)allApps;
+ (void)resetApps;
+ (void)addAppToAppDictionary:(id)v1;
+ (void)sendNotificationsToSDKs:(id)v1;
+ (id)errorForMissingOptions;
+ (id)errorForInvalidAppID;
+ (bool)isDefaultAppConfigured;
+ (void)registerLibrary:(id)v1 withVersion:(id)v2;
+ (void)registerInternalLibrary:(Class)v1 withName:(id)v2;
+ (void)registerInternalLibrary:(Class)v1 withName:(id)v2 withVersion:(id)v3;
+ (id)userAgent;
+ (id)firebaseUserAgent;
+ (bool)validateAppID:(id)v1;
+ (id)actualBundleID;
+ (bool)validateAppIDFormat:(id)v1 withVersion:(id)v2;
+ (bool)validateAppIDFingerprint:(id)v1 withVersion:(id)v2;
+ (id)readDataCollectionSwitchFromUserDefaultsForApp:(id)v1;
+ (id)readDataCollectionSwitchFromPlist;
+ (void)registerSwiftComponents;
- (void)deleteApp:(void (^ /* unknown block signature */)(void))v1;
- (id)initInstanceWithName:(id)v1 options:(id)v2;
- (void)dealloc;
- (bool)configureCore;
- (void)checkExpectedBundleID;
- (bool)isAppIDValid;
- (id)expectedBundleID;
- (void)clearDataCollectionSwitchFromUserDefaults;
- (void)subscribeForAppDidBecomeActiveNotifications;
- (void)appDidBecomeActive:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRBundleUtil : NSObject
+ (id)relevantBundles;
+ (id)optionsDictionaryPathWithResourceName:(id)v1 andFileType:(id)v2 inBundles:(id)v3;
+ (id)relevantURLSchemes;
+ (bool)hasBundleIdentifierPrefix:(id)v1 inBundles:(id)v2;
+ (id)bundleIdentifierByRemovingLastPartFrom:(id)v1;
@end


/*****************************************************************/

@interface FIRComponent : NSObject {
    Protocol * _protocol;
    long long _instantiationTiming;
    NSArray * _dependencies;
    void (^ /* unknown block signature */)(void) _creationBlock;
}
@property (readonly,nonatomic) Protocol * protocol;
@property (readonly,nonatomic) long long instantiationTiming;
@property (readonly,copy,nonatomic) NSArray * dependencies;
@property (readonly,copy,nonatomic) void (^ /* unknown block signature */)(void) creationBlock;
+ (id)componentWithProtocol:(id)v1 creationBlock:(void (^ /* unknown block signature */)(void))v2;
+ (id)componentWithProtocol:(id)v1 instantiationTiming:(long long)v2 dependencies:(id)v3 creationBlock:(void (^ /* unknown block signature */)(void))v4;
- (id)initWithProtocol:(id)v1 instantiationTiming:(long long)v2 dependencies:(id)v3 creationBlock:(void (^ /* unknown block signature */)(void))v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRComponentContainer : NSObject {
    FIRApp * _app;
    NSMutableDictionary * _components;
    NSMutableDictionary * _cachedInstances;
    NSMutableArray * _eagerProtocolsToInstantiate;
}
@property (retain,nonatomic) NSMutableDictionary * components;
@property (retain,nonatomic) NSMutableDictionary * cachedInstances;
@property (retain,nonatomic) NSMutableArray * eagerProtocolsToInstantiate;
@property (readonly,nonatomic) FIRApp * app;
+ (void)registerAsComponentRegistrant:(Class)v1;
+ (void)registerAsComponentRegistrant:(Class)v1 inSet:(id)v2;
- (id)initWithApp:(id)v1;
- (id)initWithApp:(id)v1 registrants:(id)v2;
- (void)populateComponentsFromRegisteredClasses:(id)v1 forApp:(id)v2;
- (void)instantiateEagerComponents;
- (id)instantiateInstanceForProtocol:(id)v1 withBlock:(void (^ /* unknown block signature */)(void))v2;
- (id)__instanceForProtocol:(id)v1;
- (id)instanceForProtocol:(id)v1;
- (void)removeAllCachedInstances;
- (void)removeAllComponents;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRComponentType : NSObject
+ (id)instanceForProtocol:(id)v1 inContainer:(id)v2;
@end


/*****************************************************************/

@interface FIRConfiguration : NSObject {
    FIRAnalyticsConfiguration * _analyticsConfiguration;
}
@property (retain,nonatomic) FIRAnalyticsConfiguration * analyticsConfiguration;
+ (id)sharedInstance;
- (id)init;
- (void)setLoggerLevel:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRDependency : NSObject {
    bool _isRequired;
    Protocol * _protocol;
}
@property (readonly,nonatomic) Protocol * protocol;
@property (readonly,nonatomic) bool isRequired;
+ (id)dependencyWithProtocol:(id)v1;
+ (id)dependencyWithProtocol:(id)v1 isRequired:(bool)v2;
- (id)initWithProtocol:(id)v1 isRequired:(bool)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_FirebaseCore : NSObject
@end


/*****************************************************************/

@interface FIRFirebaseUserAgent : NSObject {
    NSString * _firebaseUserAgent;
    NSDictionary * _environmentComponents;
    NSMutableDictionary * _valuesByComponent;
}
@property (readonly,nonatomic) NSMutableDictionary * valuesByComponent;
@property (readonly,nonatomic) NSDictionary * environmentComponents;
@property (readonly,nonatomic) NSString * firebaseUserAgent;
+ (id)environmentComponents;
- (id)init;
- (void)setValue:(id)v1 forComponent:(id)v2;
- (void)reset;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRHeartbeatLogger : NSObject<FIRHeartbeatLoggerProtocol> {
    FIRHeartbeatController * _heartbeatController;
    void (^ /* unknown block signature */)(void) _userAgentProvider;
}
@property (readonly,nonatomic) FIRHeartbeatController * heartbeatController;
@property (readonly,copy) void (^ /* unknown block signature */)(void) userAgentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void (^ /* unknown block signature */)(void))currentUserAgentProvider;
- (id)initWithAppID:(id)v1;
- (id)initWithAppID:(id)v1 userAgentProvider:(void (^ /* unknown block signature */)(void))v2;
- (void)log;
- (id)flushHeartbeatsIntoPayload;
- (long long)heartbeatCodeForToday;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRLoggerWrapper : NSObject
+ (void)logWithLevel:(long long)v1 withService:(id)v2 withCode:(id)v3 withMessage:(id)v4 withArgs:(char *)v5;
+ (void)logWithLevel:(long long)v1 service:(id)v2 code:(id)v3 message:(id)v4;
@end


/*****************************************************************/

@interface FIROptions : NSObject<NSCopying> {
    NSDictionary * _analyticsOptionsDictionary;
    bool _usingOptionsFromDefaultPlist;
    bool _editingLocked;
    NSString * _deepLinkURLScheme;
    NSString * _appGroupID;
    NSMutableDictionary * _optionsDictionary;
}
@property (retain,nonatomic) NSMutableDictionary * optionsDictionary;
@property (readonly,nonatomic) NSDictionary * analyticsOptionsDictionary;
@property (readonly,nonatomic) bool isAnalyticsCollectionExplicitlySet;
@property (readonly,nonatomic) bool isAnalyticsCollectionEnabled;
@property (readonly,nonatomic) bool isAnalyticsCollectionDeactivated;
@property (readonly,copy,nonatomic) NSString * libraryVersionID;
@property (nonatomic) bool usingOptionsFromDefaultPlist;
@property (readonly,nonatomic) bool isMeasurementEnabled;
@property (nonatomic,getter=isEditingLocked) bool editingLocked;
@property (copy,nonatomic) NSString * APIKey;
@property (copy,nonatomic) NSString * bundleID;
@property (copy,nonatomic) NSString * clientID;
@property (copy,nonatomic) NSString * trackingID;
@property (copy,nonatomic) NSString * GCMSenderID;
@property (copy,nonatomic) NSString * projectID;
@property (copy,nonatomic) NSString * androidClientID;
@property (copy,nonatomic) NSString * googleAppID;
@property (copy,nonatomic) NSString * databaseURL;
@property (copy,nonatomic) NSString * deepLinkURLScheme;
@property (copy,nonatomic) NSString * storageBucket;
@property (copy,nonatomic) NSString * appGroupID;
+ (id)defaultOptions;
+ (id)defaultOptionsDictionary;
+ (id)plistFilePathWithName:(id)v1;
+ (void)resetDefaultOptions;
- (id)initInternalWithOptionsDictionary:(id)v1;
- (id)copyWithZone:(struct _NSZone *)v1;
- (id)init;
- (id)initWithContentsOfFile:(id)v1;
- (id)initWithGoogleAppID:(id)v1 GCMSenderID:(id)v2;
- (void)checkEditingLocked;
- (void)setLibraryVersionID:(id)v1;
- (bool)isEqual:(id)v1;
- (bool)isEqualToOptions:(id)v1;
- (unsigned long long)hash;
- (id)analyticsOptionsDictionaryWithInfoDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_FirebaseCoreInternal : NSObject
@end


/*****************************************************************/

@interface FIRHeartbeatController : NSObject {
    id heartbeatController;
}
- (id)initWithId:(id)v1;
- (void)log:(id)v1;
- (id)flush;
- (id)flushHeartbeatFromToday;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRHeartbeatsPayload : NSObject {
    id heartbeatsPayload;
}
@property (nonatomic,readonly) bool isEmpty;
- (id)headerValue;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC20FirebaseCoreInternal19HeartbeatController : _TtCs12_SwiftObject {
    id storage;
    id heartbeatsStorageCapacity;
    id dateProvider;
}
@end


/*****************************************************************/

@interface _TtC20FirebaseCoreInternal16HeartbeatStorage : _TtCs12_SwiftObject {
    id id;
    id storage;
    id encoder;
    id decoder;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC20FirebaseCoreInternal11FileStorage : _TtCs12_SwiftObject {
    id url;
    id fileManager;
}
@end


/*****************************************************************/

@interface _TtC20FirebaseCoreInternal19UserDefaultsStorage : _TtCs12_SwiftObject {
    id defaults;
    id key;
}
@end


/*****************************************************************/

@interface FIRCLSAnalyticsManager : NSObject<FIRAnalyticsInteropListener> {
    bool _registeredAnalyticsEventListener;
    NSObject<FIRAnalyticsInterop> * _analytics;
}
@property (retain,nonatomic) NSObject<FIRAnalyticsInterop> * analytics;
@property (nonatomic) bool registeredAnalyticsEventListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)logCrashWithTimeStamp:(double)v1 toAnalytics:(id)v2;
- (id)initWithAnalytics:(id)v1;
- (void)registerAnalyticsListener;
- (void)messageTriggered:(id)v1 parameters:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSApplicationIdentifierModel : NSObject {
    NSDictionary * _architectureUUIDMap;
    NSString * _buildInstanceID;
    struct anonymous_type_9 _builtSDK;
    struct anonymous_type_10 _minimumSDK;
}
@property (copy,nonatomic) NSDictionary * architectureUUIDMap;
@property (copy,nonatomic) NSString * buildInstanceID;
@property (readonly,nonatomic) struct anonymous_type_11 builtSDK;
@property (readonly,nonatomic) struct anonymous_type_12 minimumSDK;
@property (readonly,nonatomic) NSString * bundleID;
@property (readonly,nonatomic) NSString * displayName;
@property (readonly,nonatomic) NSString * platform;
@property (readonly,nonatomic) NSString * buildVersion;
@property (readonly,nonatomic) NSString * displayVersion;
@property (readonly,nonatomic) NSString * synthesizedVersion;
@property (readonly,nonatomic) long long installSource;
@property (readonly,nonatomic) NSString * builtSDKString;
@property (readonly,nonatomic) NSString * minimumSDKString;
- (id)init;
- (bool)computeExecutableInfo;
- (void)computeInstanceIdentifier;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSAsyncOperation : NSOperation {
    bool _internalExecuting;
    bool _internalFinished;
    void (^ /* unknown block signature */)(void) _asyncCompletion;
    NSRecursiveLock * _lock;
}
@property (retain,nonatomic) NSRecursiveLock * lock;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) asyncCompletion;
- (id)init;
- (bool)isConcurrent;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;
- (void)changeValueForKey:(id)v1 inBlock:(void (^ /* unknown block signature */)(void))v2;
- (void)lock:(void (^ /* unknown block signature */)(void))v1;
- (bool)checkForCancellation;
- (void)unlockedMarkFinished;
- (void)unlockedMarkStarted;
- (void)unlockedMarkComplete;
- (void)markStarted;
- (void)markDone;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSFrame : NSObject {
    long long _address;
    long long _sampleCount;
    long long _offsetIntoBinaryTextSegment;
    NSString * _binaryName;
    NSUUID * _binaryUUID;
}
@property long long address;
@property long long sampleCount;
@property long long offsetIntoBinaryTextSegment;
@property (retain) NSString * binaryName;
@property (retain) NSUUID * binaryUUID;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSThread : NSObject {
    bool _threadBlamed;
    NSString * _threadName;
    NSArray * _frames;
}
@property (retain) NSString * threadName;
@property bool threadBlamed;
@property (retain) NSArray * frames;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSCallStackTree : NSObject {
    bool _callStackPerThread;
    NSArray * _threads;
}
@property (retain) NSArray * threads;
@property (nonatomic) bool callStackPerThread;
- (id)initWithMXCallStackTree:(id)v1;
- (void)flattenSubFrames:(id)v1 intoFrames:(id)v2;
- (id)getArrayRepresentation;
- (id)getDictionaryRepresentation:(id)v1;
- (id)getFramesOfBlamedThread;
- (id)convertFramesFor:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSCodeMapping : NSObject {
    int _source;
    NSURL * _URL;
    NSString * _sourceName;
}
@property (readonly,copy,nonatomic) NSURL * URL;
@property (nonatomic) int source;
@property (readonly,copy,nonatomic) NSString * sourceName;
+ (id)mappingWithURL:(id)v1;
- (id)initWithURL:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSCompoundOperation : FIRCLSFABAsyncOperation {
    NSArray * _operations;
    NSOperationQueue * _compoundQueue;
    unsigned long long _completedOperations;
    NSMutableArray * _errors;
    NSObject<OS_dispatch_queue> * _countingQueue;
}
@property (retain,nonatomic) NSOperationQueue * compoundQueue;
@property (nonatomic) unsigned long long completedOperations;
@property (retain,nonatomic) NSMutableArray * errors;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * countingQueue;
@property (copy,nonatomic) NSArray * operations;
- (id)init;
- (void)main;
- (void)cancel;
- (void)injectCompoundAsyncCompletionInOperation:(id)v1;
- (void)injectCompoundSyncCompletionInOperation:(id)v1;
- (void)updateCompletionCountsWithError:(id)v1;
- (void)attemptCompoundCompletion;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSDataCollectionArbiter : NSObject {
    NSLock * _mutex;
    FBLPromise * _dataCollectionEnabled;
    bool _promiseResolved;
    FIRApp * _app;
    NSDictionary * _appInfo;
}
+ (bool)isCrashlyticsCollectionEnabledWithApp:(id)v1 withAppInfo:(id)v2;
+ (long long)stickySetting;
- (id)initWithApp:(id)v1 withAppInfo:(id)v2;
- (bool)isLegacyDataCollectionKeyInPlist;
- (bool)isCrashlyticsCollectionEnabled;
- (void)setCrashlyticsCollectionEnabled:(bool)v1;
- (id)waitForCrashlyticsCollectionEnabled;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSDataCollectionToken : NSObject
+ (id)validToken;
- (bool)isValid;
@end


/*****************************************************************/

@interface FIRCLSDemangleOperation : FIRCLSThreadArrayOperation
+ (id)demangleSymbol:(const  char *)v1;
+ (id)demangleBlockInvokeCppSymbol:(const  char *)v1;
+ (id)demangleCppSymbol:(const  char *)v1;
- (id)demangleSymbol:(const  char *)v1;
- (void)main;
@end


/*****************************************************************/

@interface FIRCLSDownloadAndSaveSettingsOperation : FIRCLSNetworkOperation {
    NSObject<FIRCLSDownloadAndSaveSettingsOperationDelegate> * _delegate;
    NSError * _error;
    NSURL * _settingsURL;
    NSFileManager * _fileManager;
    NSString * _settingsDirectoryPath;
    NSString * _settingsFilePath;
    FIRCLSInstallIdentifierModel * _installIDModel;
    FIRCLSFABNetworkClient * _networkClient;
}
@property (readonly,nonatomic) NSURL * settingsURL;
@property (readonly,nonatomic) NSFileManager * fileManager;
@property (readonly,nonatomic) NSString * settingsDirectoryPath;
@property (readonly,nonatomic) NSString * settingsFilePath;
@property (readonly,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (readonly,nonatomic) FIRCLSFABNetworkClient * networkClient;
@property (readonly,nonatomic) NSObject<FIRCLSDownloadAndSaveSettingsOperationDelegate> * delegate;
@property (readonly,nonatomic) NSError * error;
- (id)initWithGoogleAppID:(id)v1 delegate:(id)v2 settingsURL:(id)v3 settingsDirectoryPath:(id)v4 settingsFilePath:(id)v5 installIDModel:(id)v6 networkClient:(id)v7 token:(id)v8;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)v1;
- (void)main;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSdSYM : NSObject {
    FIRCLSMachOBinary * _binary;
    NSBundle * _bundle;
}
@property (readonly,nonatomic) NSBundle * bundle;
@property (readonly,nonatomic) FIRCLSMachOBinary * binary;
@property (readonly,copy,nonatomic) NSString * bundleIdentifier;
@property (readonly,copy,nonatomic) NSURL * executableURL;
@property (readonly,copy,nonatomic) NSString * executablePath;
@property (readonly,copy,nonatomic) NSString * bundleVersion;
@property (readonly,copy,nonatomic) NSString * shortBundleVersion;
+ (id)dSYMWithURL:(id)v1;
- (id)initWithURL:(id)v1;
- (void)enumerateUUIDs:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSExecutionIdentifierModel : NSObject {
    NSString * _executionID;
}
@property (readonly,nonatomic) NSString * executionID;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSExistingReportManager : NSObject {
    FIRCLSFileManager * _fileManager;
    FIRCLSReportUploader * _reportUploader;
    NSOperationQueue * _operationQueue;
    FIRCLSSettings * _settings;
    FIRCLSDataCollectionArbiter * _dataArbiter;
    FIRCLSOnDemandModel * _onDemandModel;
    NSArray * _existingUnemptyActiveReportPaths;
    NSArray * _processingReportPaths;
    NSArray * _preparedReportPaths;
    FIRCLSInternalReport * _newestInternalReport;
}
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) FIRCLSReportUploader * reportUploader;
@property (retain,nonatomic) NSOperationQueue * operationQueue;
@property (retain,nonatomic) FIRCLSSettings * settings;
@property (retain,nonatomic) FIRCLSDataCollectionArbiter * dataArbiter;
@property (retain,nonatomic) FIRCLSOnDemandModel * onDemandModel;
@property (retain,nonatomic) NSArray * existingUnemptyActiveReportPaths;
@property (retain,nonatomic) NSArray * processingReportPaths;
@property (retain,nonatomic) NSArray * preparedReportPaths;
@property (retain,nonatomic) FIRCLSInternalReport * newestInternalReport;
@property (readonly,nonatomic) unsigned long long unsentReportsCount;
@property (readonly,nonatomic) FIRCrashlyticsReport * newestUnsentReport;
- (id)initWithManagerData:(id)v1 reportUploader:(id)v2;
- (void)collectExistingReports;
- (id)getUnsentActiveReportsAndDeleteEmptyOrOld:(id)v1;
- (void)sendUnsentReportsWithToken:(id)v1 asUrgent:(bool)v2;
- (void)processExistingActiveReportPath:(id)v1 dataCollectionToken:(id)v2 asUrgent:(bool)v3;
- (void)deleteUnsentReports;
- (void)handleOnDemandReportUpload:(id)v1 dataCollectionToken:(id)v2 asUrgent:(bool)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSFABAsyncOperation : NSOperation {
    bool _internalExecuting;
    bool _internalFinished;
    void (^ /* unknown block signature */)(void) _asyncCompletion;
    NSRecursiveLock * _lock;
}
@property (retain,nonatomic) NSRecursiveLock * lock;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) asyncCompletion;
- (id)init;
- (bool)isConcurrent;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;
- (void)changeValueForKey:(id)v1 inBlock:(void (^ /* unknown block signature */)(void))v2;
- (void)lock:(void (^ /* unknown block signature */)(void))v1;
- (bool)checkForCancellation;
- (void)unlockedMarkFinished;
- (void)unlockedMarkStarted;
- (void)unlockedMarkComplete;
- (void)markStarted;
- (void)markDone;
- (void)finishWithError:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSFABNetworkClient : NSObject<NSURLSessionDelegate,NSURLSessionTaskDelegate> {
    NSURLSession * _session;
}
@property (readonly,nonatomic) NSURLSession * session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)init;
- (id)initWithQueue:(id)v1;
- (id)initWithSessionConfiguration:(id)v1 queue:(id)v2;
- (void)dealloc;
- (double)randomDoubleWithMin:(double)v1 max:(double)v2;
- (double)generateRandomJitter;
- (double)computeDelayForResponse:(id)v1 withRetryCount:(unsigned long long)v2;
- (void)runAfterRetryValueFromResponse:(id)v1 attempts:(unsigned long long)v2 onQueue:(id)v3 block:(void (^ /* unknown block signature */)(void))v4;
- (void)runAfterRetryValueFromResponse:(id)v1 attempts:(unsigned long long)v2 block:(void (^ /* unknown block signature */)(void))v3;
- (void)startDataTaskWithRequest:(id)v1 retryLimit:(unsigned long long)v2 tries:(unsigned long long)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)startDataTaskWithRequest:(id)v1 retryLimit:(unsigned long long)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)startDataTaskWithRequest:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)startDownloadTaskWithRequest:(id)v1 retryLimit:(unsigned long long)v2 tries:(unsigned long long)v3 completionHandler:(void (^ /* unknown block signature */)(void))v4;
- (void)startDownloadTaskWithRequest:(id)v1 retryLimit:(unsigned long long)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)startDownloadTaskWithRequest:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)invalidateAndCancel;
- (void)URLSession:(id)v1 didBecomeInvalidWithError:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSFileManager : NSObject {
    NSString * _rootPath;
    NSString * _cachesPath;
    bool _crashFileMarkerExists;
    NSFileManager * _underlyingFileManager;
}
@property (nonatomic) bool crashFileMarkerExists;
@property (readonly,nonatomic) NSFileManager * underlyingFileManager;
@property (readonly,nonatomic) NSString * settingsDirectoryPath;
@property (readonly,nonatomic) NSString * settingsFilePath;
@property (readonly,nonatomic) NSString * settingsCacheKeyPath;
@property (readonly,nonatomic) NSString * rootPath;
@property (readonly,nonatomic) NSString * cachesPath;
@property (readonly,nonatomic) NSString * structurePath;
@property (readonly,nonatomic) NSString * activePath;
@property (readonly,nonatomic) NSString * processingPath;
@property (readonly,nonatomic) NSString * pendingPath;
@property (readonly,nonatomic) NSString * preparedPath;
@property (readonly,nonatomic) NSArray * activePathContents;
@property (readonly,nonatomic) NSArray * preparedPathContents;
@property (readonly,nonatomic) NSArray * processingPathContents;
- (id)init;
- (bool)fileExistsAtPath:(id)v1;
- (bool)createFileAtPath:(id)v1 contents:(id)v2 attributes:(id)v3;
- (bool)createDirectoryAtPath:(id)v1;
- (bool)removeItemAtPath:(id)v1;
- (bool)removeContentsOfDirectoryAtPath:(id)v1;
- (bool)moveItemAtPath:(id)v1 toDirectory:(id)v2;
- (bool)didCrashOnPreviousExecution;
- (bool)metricKitDiagnosticFileExists;
- (void)createEmptyMetricKitFile:(id)v1;
- (void)enumerateFilesInDirectory:(id)v1 usingBlock:(void (^ /* unknown block signature */)(void))v2;
- (id)fileSizeAtPath:(id)v1;
- (id)contentsOfDirectory:(id)v1;
- (id)pathNamespace;
- (id)versionedPath;
- (bool)createReportDirectories;
- (id)setupNewPathForExecutionIdentifier:(id)v1;
- (bool)moveItemAtPath:(id)v1 toPath:(id)v2 error:(id *)v3;
- (id)dataWithContentsOfFile:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSInstallIdentifierModel : NSObject {
    NSString * _installID;
    FIRInstallations * _installations;
}
@property (copy,nonatomic) NSString * installID;
@property (readonly,nonatomic) FIRInstallations * installations;
- (id)initWithInstallations:(id)v1;
- (id)readInstallationUUID;
- (id)generateInstallationUUID;
- (bool)regenerateInstallIDIfNeededWithBlock:(void (^ /* unknown block signature */)(void))v1;
- (bool)rotateCrashlyticsInstallUUIDWithIID:(id)v1 error:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSInternalReport : NSObject {
    NSString * _identifier;
    NSString * _path;
    NSArray * _metadataSections;
    NSString * _installID;
}
@property (readonly,copy,nonatomic) NSString * directoryName;
@property (copy,nonatomic) NSString * path;
@property (readonly,nonatomic) bool hasAnyEvents;
@property (readonly,copy,nonatomic) NSString * binaryImagePath;
@property (readonly,copy,nonatomic) NSString * metadataPath;
@property (readonly,copy,nonatomic) NSString * orgID;
@property (readonly,copy,nonatomic) NSString * installID;
@property (readonly,nonatomic) bool isCrash;
@property (readonly,copy,nonatomic) NSString * identifier;
@property (readonly,copy,nonatomic) NSDictionary * customKeys;
@property (readonly,copy,nonatomic) NSString * bundleVersion;
@property (readonly,copy,nonatomic) NSString * bundleShortVersionString;
@property (readonly,copy,nonatomic) NSDate * dateCreated;
@property (readonly,copy,nonatomic) NSDate * crashedOnDate;
@property (readonly,copy,nonatomic) NSString * OSVersion;
@property (readonly,copy,nonatomic) NSString * OSBuildVersion;
+ (id)reportWithPath:(id)v1;
+ (id)crashFileNames;
+ (id)readFIRCLSFileAtPath:(id)v1;
- (id)initWithPath:(id)v1 executionIdentifier:(id)v2;
- (id)initWithPath:(id)v1;
- (id)pathForContentFile:(id)v1;
- (bool)checkExistenceOfAtLeastOneFileInArray:(id)v1;
- (void)enumerateSymbolicatableFilesInContent:(void (^ /* unknown block signature */)(void))v1;
- (id)metadataSections;
- (id)timeFromCrashContentFile:(id)v1 sectionName:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSLaunchMarkerModel : NSObject {
    FIRCLSFileManager * _fileManager;
}
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
- (id)initWithFileManager:(id)v1;
- (bool)checkForAndCreateLaunchMarker;
- (id)launchFailureMarkerPath;
- (bool)createLaunchFailureMarker;
- (bool)launchFailureMarkerPresent;
- (bool)removeLaunchFailureMarker;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSMachOBinary : NSObject {
    NSURL * _url;
    struct FIRCLSMachOFile _file;
    NSMutableArray * _slices;
    NSString * _instanceIdentifier;
}
@property (readonly,copy,nonatomic) NSURL * URL;
@property (readonly,copy,nonatomic) NSString * path;
@property (readonly,nonatomic) NSArray * slices;
@property (readonly,copy,nonatomic) NSString * instanceIdentifier;
+ (id)MachOBinaryWithPath:(id)v1;
+ (id)hashNSString:(id)v1;
- (id)initWithURL:(id)v1;
- (void)dealloc;
- (void)enumerateUUIDs:(void (^ /* unknown block signature */)(void))v1;
- (id)sliceForArchitecture:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSMachOSlice : NSObject {
    struct FIRCLSMachOSlice _slice;
    NSString * _uuidString;
    NSArray * _linkedDylibs;
    struct anonymous_type_15 _minimumOSVersion;
    struct anonymous_type_16 _linkedSDKVersion;
}
@property (readonly,copy,nonatomic) NSString * uuid;
@property (readonly,copy,nonatomic) NSString * architectureName;
@property (readonly,nonatomic) NSArray * linkedDylibs;
@property (readonly,nonatomic) struct anonymous_type_17 minimumOSVersion;
@property (readonly,nonatomic) struct anonymous_type_18 linkedSDKVersion;
+ (id)runningSlice;
- (id)initWithSlice:(struct FIRCLSMachOSlice *)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSManagerData : NSObject {
    NSString * _googleAppID;
    GDTCORTransport * _googleTransport;
    FIRInstallations * _installations;
    NSObject<FIRAnalyticsInterop> * _analytics;
    FIRCLSFileManager * _fileManager;
    FIRCLSDataCollectionArbiter * _dataArbiter;
    FIRCLSApplicationIdentifierModel * _appIDModel;
    FIRCLSInstallIdentifierModel * _installIDModel;
    FIRCLSExecutionIdentifierModel * _executionIDModel;
    FIRCLSOnDemandModel * _onDemandModel;
    FIRCLSSettings * _settings;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}
@property (readonly,nonatomic) NSString * googleAppID;
@property (retain,nonatomic) GDTCORTransport * googleTransport;
@property (retain,nonatomic) FIRInstallations * installations;
@property (retain,nonatomic) NSObject<FIRAnalyticsInterop> * analytics;
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) FIRCLSDataCollectionArbiter * dataArbiter;
@property (retain,nonatomic) FIRCLSApplicationIdentifierModel * appIDModel;
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (retain,nonatomic) FIRCLSExecutionIdentifierModel * executionIDModel;
@property (readonly,nonatomic) FIRCLSOnDemandModel * onDemandModel;
@property (retain,nonatomic) FIRCLSSettings * settings;
@property (retain,nonatomic) NSOperationQueue * operationQueue;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
- (id)initWithGoogleAppID:(id)v1 googleTransport:(id)v2 installations:(id)v3 analytics:(id)v4 fileManager:(id)v5 dataArbiter:(id)v6 settings:(id)v7 onDemandModel:(id)v8;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSMetricKitManager : NSObject<MXMetricManagerSubscriber> {
    bool _metricKitPromiseFulfilled;
    FBLPromise * _metricKitDataAvailable;
    FIRCLSExistingReportManager * _existingReportManager;
    FIRCLSFileManager * _fileManager;
    FIRCLSManagerData * _managerData;
}
@property (retain) FBLPromise * metricKitDataAvailable;
@property (retain) FIRCLSExistingReportManager * existingReportManager;
@property (retain) FIRCLSFileManager * fileManager;
@property (retain) FIRCLSManagerData * managerData;
@property bool metricKitPromiseFulfilled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithManagerData:(id)v1 existingReportManager:(id)v2 fileManager:(id)v3;
- (void)registerMetricKitManager;
- (void)didReceiveDiagnosticPayloads:(id)v1;
- (bool)processMetricKitPayload:(id)v1 skipCrashEvent:(bool)v2;
- (void)didReceiveMetricPayloads:(id)v1;
- (id)waitForMetricKitDataAvailable;
- (id)convertThreadsToArray:(id)v1;
- (id)convertThreadsToArrayForNonfatal:(id)v1;
- (id)convertMetadataToDictionary:(id)v1;
- (void)fulfillMetricKitPromise;
- (bool)writeDictionaryToFile:(id)v1 file:(id)v2 newLineData:(id)v3;
- (id)getSignalName:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSMultipartMimeStreamEncoder : NSObject<NSStreamDelegate> {
    unsigned long long _length;
    NSString * _boundary;
    NSOutputStream * _outputStream;
}
@property (nonatomic) unsigned long long length;
@property (copy,nonatomic) NSString * boundary;
@property (readonly,copy,nonatomic) NSData * headerData;
@property (readonly,copy,nonatomic) NSData * footerData;
@property (retain,nonatomic) NSOutputStream * outputStream;
@property (readonly,copy,nonatomic) NSString * contentTypeHTTPHeaderValue;
@property (readonly,copy,nonatomic) NSString * contentLengthHTTPHeaderValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)populateRequest:(id)v1 withDataFromEncoder:(void (^ /* unknown block signature */)(void))v2;
+ (id)contentTypeHTTPHeaderValueWithBoundary:(id)v1;
+ (id)encoderWithStream:(id)v1 andBoundary:(id)v2;
+ (id)generateBoundary;
- (id)initWithStream:(id)v1 andBoundary:(id)v2;
- (void)encode:(void (^ /* unknown block signature */)(void))v1;
- (void)beginEncoding;
- (void)endEncoding;
- (void)addFileData:(id)v1 fileName:(id)v2 mimeType:(id)v3 fieldName:(id)v4;
- (void)addValue:(id)v1 fieldName:(id)v2;
- (void)addFile:(id)v1 fileName:(id)v2 mimeType:(id)v3 fieldName:(id)v4;
- (bool)writeBytes:(void *)v1 ofLength:(unsigned long long)v2;
- (void)writeData:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSNetworkOperation : FIRCLSFABAsyncOperation {
    FIRCLSDataCollectionToken * _token;
    NSString * _googleAppID;
}
@property (readonly,nonatomic) NSString * googleAppID;
@property (readonly,nonatomic) FIRCLSDataCollectionToken * token;
- (id)initWithGoogleAppID:(id)v1 token:(id)v2;
- (void)startWithToken:(id)v1;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)v1;
- (id)mutableRequestWithDefaultHTTPHeadersForURL:(id)v1 timeout:(double)v2;
- (id)userAgentString;
- (id)localeIdentifier;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSNetworkResponseHandler : NSObject
+ (id)headerForResponse:(id)v1 withKey:(id)v2;
+ (double)retryValueForResponse:(id)v1;
+ (id)requestIdForResponse:(id)v1;
+ (bool)contentTypeForResponse:(id)v1 matchesRequest:(id)v2;
+ (long long)cancelReasonFromURLError:(id)v1;
+ (bool)retryableURLError:(id)v1;
+ (id)errorForCode:(long long)v1 userInfo:(id)v2;
+ (id)errorForResponse:(id)v1 ofType:(long long)v2 status:(long long)v3;
+ (void)clientResponseType:(id)v1 handler:(void (^ /* unknown block signature */)(void))v2;
+ (void)handleCompletedResponse:(id)v1 forOriginalRequest:(id)v2 error:(id)v3 block:(void (^ /* unknown block signature */)(void))v4;
@end


/*****************************************************************/

@interface FIRCLSNotificationManager : NSObject
- (void)registerNotificationListener;
- (void)captureInitialNotificationStates;
- (void)willBecomeActive:(id)v1;
- (void)didBecomeInactive:(id)v1;
- (void)didChangeOrientation:(id)v1;
- (void)didChangeUIOrientation:(id)v1;
@end


/*****************************************************************/

@interface FIRCLSOnDemandModel : NSObject {
    int _recordedOnDemandExceptionCount;
    int _droppedOnDemandExceptionCount;
    int _queuedOperationsCount;
    FIRCLSSettings * _settings;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double _lastUpdated;
    double _currentStep;
    FIRCLSFileManager * _fileManager;
    NSMutableArray * _storedActiveReportPaths;
}
@property (readonly,nonatomic) int recordedOnDemandExceptionCount;
@property (readonly,nonatomic) int droppedOnDemandExceptionCount;
@property (readonly,nonatomic) int queuedOperationsCount;
@property (retain,nonatomic) FIRCLSSettings * settings;
@property (retain,nonatomic) NSOperationQueue * operationQueue;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (nonatomic) double lastUpdated;
@property (nonatomic) double currentStep;
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) NSMutableArray * storedActiveReportPaths;
- (id)initWithFIRCLSSettings:(id)v1 fileManager:(id)v2;
- (bool)recordOnDemandExceptionIfQuota:(id)v1 withDataCollectionEnabled:(bool)v2 usingExistingReportManager:(id)v3;
- (double)calculateUploadDelay;
- (double)calculateStepDuration;
- (void)implementOnDemandUploadDelay:(int)v1;
- (id)recordOnDemandExceptionWithModel:(id)v1;
- (void)setDroppedOnDemandExceptionCount:(int)v1;
- (void)incrementDroppedExceptionCount;
- (void)decrementDroppedExceptionCount;
- (void)resetDroppedExceptionCount;
- (void)setRecordedOnDemandExceptionCount:(int)v1;
- (void)incrementRecordedExceptionCount;
- (void)decrementRecordedExceptionCount;
- (int)getQueuedOperationsCount;
- (void)setQueuedOperationsCount:(int)v1;
- (void)incrementQueuedOperationCount;
- (void)decrementQueuedOperationCount;
- (bool)isQueueFull;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSProcessReportOperation : NSOperation {
    FIRCLSSymbolResolver * _symbolResolver;
    FIRCLSInternalReport * _report;
}
@property (readonly,nonatomic) FIRCLSSymbolResolver * symbolResolver;
@property (readonly,nonatomic) FIRCLSInternalReport * report;
- (id)initWithReport:(id)v1 resolver:(id)v2;
- (id)binaryImagePath;
- (id)threadArrayFromFile:(id)v1;
- (bool)symbolicateFile:(id)v1 withResolver:(id)v2;
- (void)main;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSRecordApplication : FIRCLSRecordBase {
    NSString * _build_version;
    NSString * _display_version;
}
@property (copy,nonatomic) NSString * build_version;
@property (copy,nonatomic) NSString * display_version;
- (id)initWithDict:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSRecordBase : NSObject
- (id)initWithDict:(id)v1;
@end


/*****************************************************************/

@interface FIRCLSRecordHost : FIRCLSRecordBase {
    NSString * _platform;
}
@property (copy,nonatomic) NSString * platform;
- (id)initWithDict:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSRecordIdentity : FIRCLSRecordBase {
    NSString * _build_version;
}
@property (copy,nonatomic) NSString * build_version;
- (id)initWithDict:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSReportAdapter : NSObject<GDTCOREventDataObject> {
    bool _hasCrashed;
    FIRCLSInstallIdentifierModel * _installIDModel;
    NSString * _fiid;
    NSString * _folderPath;
    NSString * _googleAppID;
    FIRCLSRecordIdentity * _identity;
    FIRCLSRecordHost * _host;
    FIRCLSRecordApplication * _application;
    struct _google_crashlytics_Report _report;
}
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (copy,nonatomic) NSString * fiid;
@property (readonly,nonatomic) bool hasCrashed;
@property (retain,nonatomic) NSString * folderPath;
@property (retain,nonatomic) NSString * googleAppID;
@property (retain,nonatomic) FIRCLSRecordIdentity * identity;
@property (retain,nonatomic) FIRCLSRecordHost * host;
@property (retain,nonatomic) FIRCLSRecordApplication * application;
@property (nonatomic) struct _google_crashlytics_Report report;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)combinedDictionariesFromFilePath:(id)v1;
+ (id)dictionariesFromEachLineOfFile:(id)v1;
- (id)initWithPath:(id)v1 googleAppId:(id)v2 installIDModel:(id)v3 fiid:(id)v4;
- (void)dealloc;
- (void)loadMetaDataFile;
- (id)transportBytes;
- (struct _google_crashlytics_Report)protoReport;
- (struct _google_crashlytics_FilesPayload)protoFilesPayload;
- (id)clsRecordFilePaths;
- (int)protoPlatformFromString:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSReportManager : NSObject {
    FIRCLSFileManager * _fileManager;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSOperationQueue * _operationQueue;
    NSObject<FIRAnalyticsInterop> * _analytics;
    FBLPromise * _unsentReportsAvailable;
    FBLPromise * _reportActionProvided;
    FBLPromise * _unsentReportsHandled;
    id _checkForUnsentReportsCalled;
    bool _registeredAnalyticsEventListener;
    NSString * _googleAppID;
    GDTCORTransport * _googleTransport;
    FIRCLSDataCollectionArbiter * _dataArbiter;
    FIRCLSSettings * _settings;
    FIRCLSLaunchMarkerModel * _launchMarker;
    FIRCLSApplicationIdentifierModel * _appIDModel;
    FIRCLSInstallIdentifierModel * _installIDModel;
    FIRCLSExecutionIdentifierModel * _executionIDModel;
    FIRCLSAnalyticsManager * _analyticsManager;
    FIRCLSExistingReportManager * _existingReportManager;
    FIRCLSSettingsManager * _settingsManager;
    FIRCLSNotificationManager * _notificationManager;
    FIRCLSMetricKitManager * _metricKitManager;
}
@property (readonly,nonatomic) NSString * googleAppID;
@property (retain,nonatomic) GDTCORTransport * googleTransport;
@property (retain,nonatomic) FIRCLSDataCollectionArbiter * dataArbiter;
@property (retain,nonatomic) FIRCLSSettings * settings;
@property (retain,nonatomic) FIRCLSLaunchMarkerModel * launchMarker;
@property (retain,nonatomic) FIRCLSApplicationIdentifierModel * appIDModel;
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (retain,nonatomic) FIRCLSExecutionIdentifierModel * executionIDModel;
@property (retain,nonatomic) FIRCLSAnalyticsManager * analyticsManager;
@property (retain,nonatomic) FIRCLSExistingReportManager * existingReportManager;
@property (retain,nonatomic) FIRCLSSettingsManager * settingsManager;
@property (retain,nonatomic) FIRCLSNotificationManager * notificationManager;
@property (retain,nonatomic) FIRCLSMetricKitManager * metricKitManager;
@property (retain,nonatomic) NSOperationQueue * operationQueue;
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
- (id)initWithManagerData:(id)v1 existingReportManager:(id)v2 analyticsManager:(id)v3;
- (id)waitForReportAction;
- (id)waitForMetricKitData;
- (id)checkForUnsentReports;
- (id)sendUnsentReports;
- (id)deleteUnsentReports;
- (id)startWithProfilingMark:(unsigned long long)v1;
- (void)beginSettingsWithToken:(id)v1;
- (void)beginReportUploadsWithToken:(id)v1 blockingSend:(bool)v2;
- (bool)startCrashReporterWithProfilingMark:(unsigned long long)v1 report:(id)v2;
- (void)crashReportingSetupCompleted:(unsigned long long)v1;
- (bool)validateAppIdentifiers;
- (id)setupCurrentReport:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSReportUploader : NSObject {
    NSObject<FIRAnalyticsInterop> * _analytics;
    NSOperationQueue * _operationQueue;
    FIRCLSFileManager * _fileManager;
    NSString * _fiid;
    GDTCORTransport * _googleTransport;
    FIRCLSInstallIdentifierModel * _installIDModel;
    NSString * _googleAppID;
}
@property (retain,nonatomic) GDTCORTransport * googleTransport;
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (readonly,nonatomic) NSString * googleAppID;
@property (readonly,nonatomic) NSOperationQueue * operationQueue;
@property (readonly,nonatomic) FIRCLSFileManager * fileManager;
@property (copy,nonatomic) NSString * fiid;
- (id)initWithManagerData:(id)v1;
- (void)prepareAndSubmitReport:(id)v1 dataCollectionToken:(id)v2 asUrgent:(bool)v3 withProcessing:(bool)v4;
- (void)uploadPackagedReportAtPath:(id)v1 dataCollectionToken:(id)v2 asUrgent:(bool)v3;
- (bool)cleanUpSubmittedReportAtPath:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSSerializeSymbolicatedFramesOperation : FIRCLSThreadArrayOperation {
    NSString * _outputPath;
}
@property (copy,nonatomic) NSString * outputPath;
- (void)main;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSSettings : NSObject {
    bool _isCacheKeyExpired;
    FIRCLSFileManager * _fileManager;
    FIRCLSApplicationIdentifierModel * _appIDModel;
    NSDictionary * _settingsDictionary;
}
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) FIRCLSApplicationIdentifierModel * appIDModel;
@property (retain,nonatomic) NSDictionary * settingsDictionary;
@property (nonatomic) bool isCacheKeyExpired;
@property (readonly,nonatomic) bool isCacheExpired;
@property (readonly,nonatomic) unsigned int cacheDurationSeconds;
@property (readonly,nonatomic) bool collectReportsEnabled;
@property (readonly,nonatomic) bool errorReportingEnabled;
@property (readonly,nonatomic) bool customExceptionsEnabled;
@property (readonly,nonatomic) bool metricKitCollectionEnabled;
@property (readonly,nonatomic) unsigned int errorLogBufferSize;
@property (readonly,nonatomic) unsigned int logBufferSize;
@property (readonly,nonatomic) unsigned int maxCustomExceptions;
@property (readonly,nonatomic) unsigned int maxCustomKeys;
@property (readonly,nonatomic) double onDemandUploadRate;
@property (readonly,nonatomic) double onDemandBackoffBase;
@property (readonly,nonatomic) unsigned int onDemandBackoffStepDuration;
- (id)initWithFileManager:(id)v1 appIDModel:(id)v2;
- (void)reloadFromCacheWithGoogleAppID:(id)v1 currentTimestamp:(double)v2;
- (void)cacheSettingsWithGoogleAppID:(id)v1 currentTimestamp:(double)v2;
- (id)loadCacheKey;
- (void)deleteCachedSettings;
- (id)appSettings;
- (id)sessionSettings;
- (id)featuresSettings;
- (id)fabricSettings;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSSettingsManager : NSObject<FIRCLSDownloadAndSaveSettingsOperationDelegate> {
    FIRCLSApplicationIdentifierModel * _appIDModel;
    FIRCLSInstallIdentifierModel * _installIDModel;
    FIRCLSSettings * _settings;
    FIRCLSFileManager * _fileManager;
    NSDictionary * _configuration;
    NSDictionary * _defaultConfiguration;
    NSString * _googleAppID;
    NSDictionary * _kitVersionsByKitBundleIdentifier;
    FIRCLSFABNetworkClient * _networkClient;
}
@property (retain,nonatomic) FIRCLSApplicationIdentifierModel * appIDModel;
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (retain,nonatomic) FIRCLSSettings * settings;
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) NSDictionary * configuration;
@property (retain,nonatomic) NSDictionary * defaultConfiguration;
@property (copy,nonatomic) NSString * googleAppID;
@property (copy,nonatomic) NSDictionary * kitVersionsByKitBundleIdentifier;
@property (readonly,nonatomic) FIRCLSFABNetworkClient * networkClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithAppIDModel:(id)v1 installIDModel:(id)v2 settings:(id)v3 fileManager:(id)v4 googleAppID:(id)v5;
- (void)beginSettingsWithGoogleAppId:(id)v1 token:(id)v2;
- (void)beginSettingsDownload:(id)v1;
- (void)finishNetworkingSession;
- (void)operation:(id)v1 didDownloadAndSaveSettingsWithError:(id)v2;
- (id)settingsURL;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSSymbolicationOperation : FIRCLSThreadArrayOperation {
    FIRCLSSymbolResolver * _symbolResolver;
}
@property (retain,nonatomic) FIRCLSSymbolResolver * symbolResolver;
- (void)main;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSSymbolResolver : NSObject {
    NSMutableArray * _binaryImages;
}
- (id)init;
- (bool)loadBinaryImagesFromFile:(id)v1;
- (id)loadedBinaryImageForPC:(unsigned long long)v1;
fillInImageDetails:forUUID: (IMP @0x101ce1f9c);
- (id)frameForAddress:(unsigned long long)v1;
- (bool)updateStackFrame:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSThreadArrayOperation : NSOperation {
    NSArray * _threadArray;
}
@property (retain,nonatomic) NSArray * threadArray;
- (void)enumerateFramesWithBlock:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSURLBuilder : NSObject {
    NSMutableString * _URLString;
    unsigned long long _queryParams;
}
@property (retain,nonatomic) NSMutableString * URLString;
@property (nonatomic) unsigned long long queryParams;
+ (id)URLWithBase:(id)v1;
- (id)init;
- (id)escapeString:(id)v1;
- (void)appendComponent:(id)v1;
- (void)escapeAndAppendComponent:(id)v1;
- (void)appendValue:(id)v1 forQueryParam:(id)v2;
- (id)URL;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCLSUserDefaults : NSObject {
    bool _synchronizeWroteToDisk;
    NSURL * _directoryURL;
    NSURL * _fileURL;
    NSDictionary * _persistedDataDictionary;
    NSMutableDictionary * _dataDictionary;
    NSObject<OS_dispatch_queue> * _serialDictionaryQueue;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
}
@property (nonatomic) bool synchronizeWroteToDisk;
@property (readonly,copy,nonatomic) NSURL * directoryURL;
@property (readonly,copy,nonatomic) NSURL * fileURL;
@property (readonly,copy,nonatomic) NSDictionary * persistedDataDictionary;
@property (readonly,copy,nonatomic) NSMutableDictionary * dataDictionary;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * serialDictionaryQueue;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * synchronizationQueue;
+ (id)standardUserDefaults;
- (id)copyWithZone:(struct _NSZone *)v1;
- (id)init;
- (id)generateDirectoryURL;
- (id)generateDirectoryURLForBaseURL:(id)v1 hostAppBundleIdentifier:(id)v2;
- (id)getEscapedAppBundleIdentifier;
- (id)objectForKey:(id)v1;
- (id)stringForKey:(id)v1;
- (bool)boolForKey:(id)v1;
- (long long)integerForKey:(id)v1;
- (void)setObject:(id)v1 forKey:(id)v2;
- (void)setString:(id)v1 forKey:(id)v2;
- (void)setBool:(bool)v1 forKey:(id)v2;
- (void)setInteger:(long long)v1 forKey:(id)v2;
- (void)removeObjectForKey:(id)v1;
- (void)removeAllObjects;
- (id)dictionaryRepresentation;
- (void)synchronize;
- (id)loadDefaults;
- (void)migrateFromNSUserDefaults:(id)v1;
- (id)objectForKeyByMigratingFromNSUserDefaults:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCrashlytics : NSObject<FIRLibrary,FIRCrashlyticsInstanceProvider> {
    bool _didPreviouslyCrash;
    NSString * _googleAppID;
    FIRCLSDataCollectionArbiter * _dataArbiter;
    FIRCLSFileManager * _fileManager;
    FIRCLSReportManager * _reportManager;
    FIRCLSReportUploader * _reportUploader;
    FIRCLSExistingReportManager * _existingReportManager;
    FIRCLSAnalyticsManager * _analyticsManager;
    FIRCLSManagerData * _managerData;
}
@property (nonatomic) bool didPreviouslyCrash;
@property (copy,nonatomic) NSString * googleAppID;
@property (retain,nonatomic) FIRCLSDataCollectionArbiter * dataArbiter;
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) FIRCLSReportManager * reportManager;
@property (retain,nonatomic) FIRCLSReportUploader * reportUploader;
@property (retain,nonatomic) FIRCLSExistingReportManager * existingReportManager;
@property (retain,nonatomic) FIRCLSAnalyticsManager * analyticsManager;
@property (retain,nonatomic) FIRCLSManagerData * managerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)componentsToRegister;
+ (id)crashlytics;
+ (void)setDevelopmentPlatformName:(id)v1;
+ (void)setDevelopmentPlatformVersion:(id)v1;
- (id)initWithApp:(id)v1 appInfo:(id)v2 installations:(id)v3 analytics:(id)v4;
- (void)setCrashlyticsCollectionEnabled:(bool)v1;
- (bool)isCrashlyticsCollectionEnabled;
- (bool)didCrashDuringPreviousExecution;
- (void)processDidCrashDuringPreviousExecution;
- (void)log:(id)v1;
- (void)logWithFormat:(id)v1;
- (void)logWithFormat:(id)v1 arguments:(char *)v2;
- (void)checkForUnsentReportsWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)checkAndUpdateUnsentReportsWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)sendUnsentReports;
- (void)deleteUnsentReports;
- (void)setUserID:(id)v1;
- (void)setCustomValue:(id)v1 forKey:(id)v2;
- (void)setCustomKeysAndValues:(id)v1;
- (id)developmentPlatformName;
- (void)setDevelopmentPlatformName:(id)v1;
- (id)developmentPlatformVersion;
- (void)setDevelopmentPlatformVersion:(id)v1;
- (void)recordError:(id)v1;
- (void)recordError:(id)v1 userInfo:(id)v2;
- (void)recordExceptionModel:(id)v1;
- (void)recordOnDemandExceptionModel:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRCrashlyticsReport : NSObject {
    NSString * _reportID;
    NSDate * _dateCreated;
    bool _hasCrash;
    struct anonymous_type_27 _logStorage;
    const  char * _activeLogPath;
    unsigned int _internalKVCounter;
    struct anonymous_type_28 _internalKVStorage;
    unsigned int _userKVCounter;
    struct anonymous_type_29 _userKVStorage;
    FIRCLSInternalReport * _internalReport;
}
@property (retain,nonatomic) FIRCLSInternalReport * internalReport;
@property (readonly,nonatomic) NSString * reportID;
@property (readonly,nonatomic) NSDate * dateCreated;
@property (readonly,nonatomic) bool hasCrash;
+ (const  char *)filesystemPathForContentFile:(id)v1 inInternalReport:(id)v2;
- (id)initWithInternalReport:(id)v1;
- (bool)checkContextForMethod:(id)v1;
- (void)log:(id)v1;
- (void)logWithFormat:(id)v1;
- (void)logWithFormat:(id)v1 arguments:(char *)v2;
- (void)setUserID:(id)v1;
- (void)setCustomValue:(id)v1 forKey:(id)v2;
- (void)setCustomKeysAndValues:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_FirebaseCrashlytics : NSObject
@end


/*****************************************************************/

@interface FIRExceptionModel : NSObject {
    bool _isFatal;
    bool _onDemand;
    NSArray * _stackTrace;
    NSString * _name;
    NSString * _reason;
}
@property (copy,nonatomic) NSString * name;
@property (copy,nonatomic) NSString * reason;
@property (nonatomic) bool isFatal;
@property (nonatomic) bool onDemand;
@property (copy,nonatomic) NSArray * stackTrace;
+ (id)exceptionModelWithName:(id)v1 reason:(id)v2;
- (id)initWithName:(id)v1 reason:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRStackFrame : NSObject {
    bool _isSymbolicated;
    unsigned int _lineNumber;
    NSString * _symbol;
    NSString * _rawSymbol;
    NSString * _library;
    NSString * _fileName;
    unsigned long long _offset;
    unsigned long long _address;
}
@property (copy,nonatomic) NSString * symbol;
@property (copy,nonatomic) NSString * rawSymbol;
@property (copy,nonatomic) NSString * library;
@property (copy,nonatomic) NSString * fileName;
@property (nonatomic) unsigned int lineNumber;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long address;
@property (nonatomic) bool isSymbolicated;
+ (id)stackFrameWithAddress:(unsigned long long)v1;
+ (id)stackFrameWithSymbol:(id)v1 file:(id)v2 line:(long long)v3;
+ (id)stackFrame;
+ (id)stackFrameWithSymbol:(id)v1;
- (id)initWithSymbol:(id)v1 file:(id)v2 line:(long long)v3;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_FirebaseInstallations : NSObject
@end


/*****************************************************************/

@interface FIRInstallations : NSObject<FIRInstallationsInstanceProvider> {
    FIROptions * _appOptions;
    NSString * _appName;
    FIRInstallationsIDController * _installationsIDController;
}
@property (readonly,nonatomic) FIROptions * appOptions;
@property (readonly,nonatomic) NSString * appName;
@property (readonly,nonatomic) FIRInstallationsIDController * installationsIDController;
+ (void)load;
+ (id)componentsToRegister;
+ (void)validateAppOptions:(id)v1 appName:(id)v2;
+ (void)validateAPIKey:(id)v1;
+ (id)installations;
+ (id)installationsWithApp:(id)v1;
+ (void)assertCompatibleIIDVersion;
+ (bool)isIIDVersionCompatible;
- (id)initWithApp:(id)v1;
- (id)initWithAppOptions:(id)v1 appName:(id)v2 installationsIDController:(id)v3 prefetchAuthToken:(bool)v4;
- (void)installationIDWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)authTokenWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)authTokenForcingRefresh:(bool)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)deleteWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsURLSessionResponse : NSObject {
    NSHTTPURLResponse * _HTTPResponse;
    NSData * _data;
}
@property (retain,nonatomic) NSHTTPURLResponse * HTTPResponse;
@property (retain,nonatomic) NSData * data;
- (id)initWithResponse:(id)v1 data:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsAPIService : NSObject {
    NSURLSession * _URLSession;
    NSString * _APIKey;
    NSString * _projectID;
    NSObject<FIRHeartbeatLoggerProtocol> * _heartbeatLogger;
}
@property (readonly,nonatomic) NSURLSession * URLSession;
@property (readonly,nonatomic) NSString * APIKey;
@property (readonly,nonatomic) NSString * projectID;
@property (readonly) NSObject<FIRHeartbeatLoggerProtocol> * heartbeatLogger;
- (id)initWithAPIKey:(id)v1 projectID:(id)v2 heartbeatLogger:(id)v3;
- (id)initWithURLSession:(id)v1 APIKey:(id)v2 projectID:(id)v3 heartbeatLogger:(id)v4;
- (id)registerInstallation:(id)v1;
- (id)refreshAuthTokenForInstallation:(id)v1;
- (id)deleteInstallation:(id)v1;
- (id)registerRequestWithInstallation:(id)v1;
- (id)registeredInstallationWithInstallation:(id)v1 serverResponse:(id)v2;
- (id)authTokenRequestWithInstallation:(id)v1;
- (id)authTokenWithServerResponse:(id)v1;
- (id)deleteInstallationRequestWithInstallation:(id)v1;
- (id)requestWithURL:(id)v1 HTTPMethod:(id)v2 bodyDict:(id)v3 refreshToken:(id)v4;
- (id)requestWithURL:(id)v1 HTTPMethod:(id)v2 bodyDict:(id)v3 refreshToken:(id)v4 additionalHeaders:(id)v5;
- (id)URLRequestPromise:(id)v1;
- (id)validateHTTPResponseStatusCode:(id)v1;
- (id)sendURLRequest:(id)v1;
- (id)SDKVersion;
- (id)validateInstallation:(id)v1;
- (void)setJSONHTTPBody:(id)v1 forRequest:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsAuthTokenResult : NSObject {
    NSString * _authToken;
    NSDate * _expirationDate;
}
@property (readonly,nonatomic) NSString * authToken;
@property (readonly,nonatomic) NSDate * expirationDate;
- (id)initWithToken:(id)v1 expirationDate:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsBackoffEventData : NSObject {
    long long _eventType;
    NSDate * _lastEventDate;
    long long _eventCount;
    double _backoffTimeInterval;
}
@property (readonly,nonatomic) long long eventType;
@property (readonly,nonatomic) NSDate * lastEventDate;
@property (readonly,nonatomic) long long eventCount;
@property (readonly,nonatomic) double backoffTimeInterval;
+ (double)backoffTimeIntervalWithEvent:(long long)v1 eventCount:(long long)v2;
+ (double)recoverableErrorBackoffTimeForAttemptNumber:(long long)v1;
+ (double)randomMilliseconds;
- (id)initWithEvent:(long long)v1 lastEventDate:(id)v2 eventCount:(long long)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsBackoffController : NSObject<FIRInstallationsBackoffControllerProtocol> {
    void (^ /* unknown block signature */)(void) _currentDateProvider;
    FIRInstallationsBackoffEventData * _lastEventData;
}
@property (readonly,nonatomic) void (^ /* unknown block signature */)(void) currentDateProvider;
@property (retain,nonatomic) FIRInstallationsBackoffEventData * lastEventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)init;
- (id)initWithCurrentDateProvider:(void (^ /* unknown block signature */)(void))v1;
- (bool)isNextRequestAllowed;
- (void)registerEvent:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsErrorUtil : NSObject
+ (id)keyedArchiverErrorWithException:(id)v1;
+ (id)keyedArchiverErrorWithError:(id)v1;
+ (id)keychainErrorWithFunction:(id)v1 status:(int)v2;
+ (id)installationItemNotFoundForAppID:(id)v1 appName:(id)v2;
+ (id)corruptedIIDTokenData;
+ (id)APIErrorWithHTTPResponse:(id)v1 data:(id)v2;
+ (bool)isAPIError:(id)v1 withHTTPCode:(long long)v2;
+ (id)JSONSerializationError:(id)v1;
+ (id)FIDRegistrationErrorWithResponseMissingField:(id)v1;
+ (id)networkErrorWithError:(id)v1;
+ (id)backoffIntervalWaitError;
+ (id)publicDomainErrorWithError:(id)v1;
+ (id)installationsErrorWithCode:(long long)v1 failureReason:(id)v2 underlyingError:(id)v3;
+ (id)rejectedPromiseWithError:(id)v1;
@end


/*****************************************************************/

@interface FIRInstallationsHTTPError : NSError {
    NSHTTPURLResponse * _HTTPResponse;
    NSData * _data;
}
@property (readonly,nonatomic) NSHTTPURLResponse * HTTPResponse;
@property (readonly,nonatomic) NSData * data;
+ (long long)errorCodeWithHTTPCode:(long long)v1;
+ (id)userInfoWithHTTPResponse:(id)v1 data:(id)v2;
+ (bool)supportsSecureCoding;
- (id)initWithHTTPResponse:(id)v1 data:(id)v2;
- (id)copyWithZone:(struct _NSZone *)v1;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsIDController : NSObject {
    NSString * _appID;
    NSString * _appName;
    FIRInstallationsStore * _installationsStore;
    FIRInstallationsIIDStore * _IIDStore;
    FIRInstallationsIIDTokenStore * _IIDTokenStore;
    FIRInstallationsAPIService * _APIService;
    NSObject<FIRInstallationsBackoffControllerProtocol> * _backoffController;
    FIRInstallationsSingleOperationPromiseCache * _getInstallationPromiseCache;
    FIRInstallationsSingleOperationPromiseCache * _authTokenPromiseCache;
    FIRInstallationsSingleOperationPromiseCache * _authTokenForcingRefreshPromiseCache;
    FIRInstallationsSingleOperationPromiseCache * _deleteInstallationPromiseCache;
}
@property (readonly,nonatomic) NSString * appID;
@property (readonly,nonatomic) NSString * appName;
@property (readonly,nonatomic) FIRInstallationsStore * installationsStore;
@property (readonly,nonatomic) FIRInstallationsIIDStore * IIDStore;
@property (readonly,nonatomic) FIRInstallationsIIDTokenStore * IIDTokenStore;
@property (readonly,nonatomic) FIRInstallationsAPIService * APIService;
@property (readonly,nonatomic) NSObject<FIRInstallationsBackoffControllerProtocol> * backoffController;
@property (readonly,nonatomic) FIRInstallationsSingleOperationPromiseCache * getInstallationPromiseCache;
@property (readonly,nonatomic) FIRInstallationsSingleOperationPromiseCache * authTokenPromiseCache;
@property (readonly,nonatomic) FIRInstallationsSingleOperationPromiseCache * authTokenForcingRefreshPromiseCache;
@property (readonly,nonatomic) FIRInstallationsSingleOperationPromiseCache * deleteInstallationPromiseCache;
+ (id)keychainServiceWithAppID:(id)v1;
- (id)initWithApp:(id)v1;
- (id)initWithGoogleAppID:(id)v1 appName:(id)v2 installationsStore:(id)v3 APIService:(id)v4 IIDStore:(id)v5 IIDTokenStore:(id)v6 backoffController:(id)v7;
- (id)getInstallationItem;
- (id)createGetInstallationItemPromise;
- (id)getStoredInstallation;
- (id)createAndSaveFID;
- (id)saveInstallation:(id)v1;
- (id)migrateOrGenerateInstallation;
- (id)createInstallationWithFID:(id)v1 IIDDefaultToken:(id)v2;
- (id)registerInstallationIfNeeded:(id)v1;
- (bool)doesRegistrationErrorRequireConfigChange:(id)v1;
- (id)getAuthTokenForcingRefresh:(bool)v1;
- (id)installationWithValidAuthTokenForcingRefresh:(bool)v1;
- (id)refreshAuthTokenForInstallation:(id)v1;
- (id)regenerateFIDOnRefreshTokenErrorIfNeeded:(id)v1;
- (id)deleteInstallation;
- (id)createDeleteInstallationPromise;
- (id)deleteInstallationLocally:(id)v1;
- (id)sendDeleteInstallationRequestIfNeeded:(id)v1;
- (id)deleteExistingIIDIfNeeded;
- (id)mostRecentInstallationOperation;
- (void)updateBackoffWithSuccess:(bool)v1 APIError:(id)v2;
- (void)postFIDDidChangeNotification;
- (bool)isDefaultApp;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsIIDStore : NSObject
- (id)existingIID;
- (id)deleteExistingIID;
- (id)IIDWithPublicKeyData:(id)v1;
- (id)sha1WithData:(id)v1;
- (id)base64URLEncodedStringWithData:(id)v1;
- (id)IIDPublicKeyData;
- (bool)deleteIID:(id *)v1;
- (bool)deleteKeychainKeyWithTagPrefix:(id)v1 error:(id *)v2;
- (id)keyPairQueryWithTag:(id)v1 returnData:(bool)v2;
- (id)keychainKeyTagWithPrefix:(id)v1;
- (id)mainbundleIdentifier;
- (bool)deleteIIDFlagFromPlist:(id *)v1;
- (bool)hasPlistIIDFlag;
- (id)plistPath;
- (unsigned long long)supportedDirectory;
@end


/*****************************************************************/

@interface FIRInstallationsIIDTokenInfo : NSObject<NSSecureCoding> {
    NSString * _token;
}
@property (copy,nonatomic) NSString * token;
+ (bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsIIDTokenStore : NSObject {
    NSString * _GCMSenderID;
}
@property (readonly,nonatomic) NSString * GCMSenderID;
- (id)initWithGCMSenderID:(id)v1;
- (id)existingIIDDefaultToken;
- (id)IIDCheckinWithData:(id)v1;
- (id)IIDDefaultTokenData;
- (id)IIDDefaultTokenDataKeychainQuery;
- (id)IIDAppIdentifier;
- (id)serviceKeyForAuthorizedEntity:(id)v1 scope:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsItem : NSObject<NSCopying> {
    NSString * _appID;
    NSString * _firebaseAppName;
    NSString * _firebaseInstallationID;
    NSString * _refreshToken;
    FIRInstallationsStoredAuthToken * _authToken;
    long long _registrationStatus;
    NSString * _IIDDefaultToken;
}
@property (readonly,nonatomic) NSString * appID;
@property (readonly,nonatomic) NSString * firebaseAppName;
@property (copy,nonatomic) NSString * firebaseInstallationID;
@property (copy,nonatomic) NSString * refreshToken;
@property (retain,nonatomic) FIRInstallationsStoredAuthToken * authToken;
@property (nonatomic) long long registrationStatus;
@property (retain,nonatomic) NSString * IIDDefaultToken;
+ (id)authTokenWithGenerateTokenAPIJSONData:(id)v1 date:(id)v2 error:(id *)v3;
+ (id)authTokenWithJSONDict:(id)v1 date:(id)v2 error:(id *)v3;
+ (id)dictionaryFromJSONData:(id)v1 error:(id *)v2;
+ (id)validStringOrNilForKey:(id)v1 fromDict:(id)v2;
+ (id)identifierWithAppID:(id)v1 appName:(id)v2;
+ (id)generateFID;
+ (id)base64URLEncodedStringWithData:(id)v1;
- (id)registeredInstallationWithJSONData:(id)v1 date:(id)v2 error:(id *)v3;
- (id)initWithAppID:(id)v1 firebaseAppName:(id)v2;
- (id)copyWithZone:(struct _NSZone *)v1;
- (void)updateWithStoredItem:(id)v1;
- (id)storedItem;
- (id)identifier;
- (bool)isValid:(id *)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsSingleOperationPromiseCache : NSObject {
    void (^ /* unknown block signature */)(void) _newOperationHandler;
    FBLPromise * _pendingPromise;
}
@property (readonly,nonatomic) void (^ /* unknown block signature */)(void) newOperationHandler;
@property (retain,nonatomic) FBLPromise * pendingPromise;
- (id)initWithNewOperationHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)getExistingPendingOrCreateNewPromise;
- (id)getExistingPendingPromise;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsStore : NSObject {
    GULKeychainStorage * _secureStorage;
    NSString * _accessGroup;
    NSObject<OS_dispatch_queue> * _queue;
    GULUserDefaults * _userDefaults;
}
@property (readonly,nonatomic) GULKeychainStorage * secureStorage;
@property (readonly,nonatomic) NSString * accessGroup;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly,nonatomic) GULUserDefaults * userDefaults;
- (id)initWithSecureStorage:(id)v1 accessGroup:(id)v2;
- (id)installationForAppID:(id)v1 appName:(id)v2;
- (id)saveInstallation:(id)v1;
- (id)removeInstallationForAppID:(id)v1 appName:(id)v2;
- (id)installationExistsForAppID:(id)v1 appName:(id)v2;
- (id)setInstallationExists:(bool)v1 forItemWithIdentifier:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsStoredAuthToken : NSObject<NSSecureCoding,NSCopying> {
    long long _status;
    NSString * _token;
    NSDate * _expirationDate;
}
@property long long status;
@property (copy) NSString * token;
@property (copy) NSDate * expirationDate;
@property (readonly,nonatomic) long long storageVersion;
+ (bool)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)v1;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallationsStoredItem : NSObject<NSSecureCoding> {
    NSString * _firebaseInstallationID;
    NSString * _refreshToken;
    FIRInstallationsStoredAuthToken * _authToken;
    long long _registrationStatus;
    NSString * _IIDDefaultToken;
}
@property (copy,nonatomic) NSString * firebaseInstallationID;
@property (copy,nonatomic) NSString * refreshToken;
@property (retain,nonatomic) FIRInstallationsStoredAuthToken * authToken;
@property (nonatomic) long long registrationStatus;
@property (retain,nonatomic) NSString * IIDDefaultToken;
@property (readonly,nonatomic) long long storageVersion;
+ (bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC9G7AppCore13WatchReceiver : _TtCs12_SwiftObject {
    id persistence;
    id txService;
    id appLifeCycleManager;
    id repo;
    id stateManager;
    id watchCommunication;
    id subscriptions;
    id lastContextRecordIds;
    id lastContextRecordTimestamp;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore18CertificateManager : _TtCs12_SwiftObject {
    id _deviceCertificateChain;
    id _userCertificateChain;
    id _userPrivateKey;
    id _devicePrivateKey;
    id algorithm;
    id secureNetworkManager;
    id certificateExpirationWindow;
    id timeProvider;
    id keychain;
    id rootCertificate;
    id certificateProvider;
    id certificateManagerDispatch;
    id maxCertificateLength;
    id defaultCertificateRequestTimeout;
    id persistence;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore15TxServicePruner : _TtCs12_SwiftObject {
    id subscriptions;
    id serialQueue;
    id lastResultAndTime;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore19TxKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore19BulkDataCoreMonitor : _TtCs12_SwiftObject {
    id bulkDataManager;
    id timeProvider;
    id txService;
    id appSoftwareNumber;
    id prevTxSessionState;
    id txServiceRecord;
    id subscriptions;
    id serialQueue;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore21TxSessionStateManager : _TtCs12_SwiftObject {
    id _txSessionState;
    id _isCommunicating;
    id _txCalibrationRequest;
    id txService;
    id timeProvider;
    id appLifeCycleManager;
    id eventScheduler;
    id txSessionStateQueue;
    id incomingQueue;
    id timeUntilSignalLoss;
    id subscriptions;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore20TimeLossStateManager : _TtCs12_SwiftObject {
    id _timeLossState;
    id timeProvider;
    id txSessionStateManager;
    id subscriptions;
    id serialQueue;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore23TxPairingStartRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore24TxControllerTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore19ShareAlertRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore11G7TxInfoDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore9TxService : _TtCs12_SwiftObject {
    id txServiceRepository;
    id txConfiguration;
    id timeProvider;
    id txTickTimeProvider;
    id appLifeCycleManager;
    id bleStatePassthrough;
    id certificateManager;
    id _isCommunicating;
    id _txServiceRecord;
    id bleAuthSubscription;
    id txController;
    id txDelegate;
    id stopCommandResponse;
    id calibrationCommandResponse;
    id subscriptions;
    id dataSource;
    id supportedProducts;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore22TxControllerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id globalIndentifier;
    id txServiceRepository;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore28SecureNetworkingTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore26TransmitterEventLogMonitor : _TtCs12_SwiftObject {
    id keyValueStore;
    id lastTxStaticInfoKey;
    id txService;
    id eventLogger;
    id timeProvider;
    id subscriptions;
    id txSessionStateManager;
    id previousTxSessionState;
    id lifeCycleManager;
    id backgroundTaskName;
    id serialQueue;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore18TxRecordAggregator : _TtCs12_SwiftObject {
    id pairingCode;
    id txId;
    id communicationStartTime;
    id txTimeOffsetInfo;
    id encryptionInfo;
    id diagnosticData;
    id calibrationBounds;
    id sensorReadings;
    id authenticationErrors;
    id communicationErrors;
    id stopCommandResponse;
    id calibrationCommandResponse;
    id deviceList;
    id txFailed;
    id state;
    id dataSource;
    id txSW;
    id status;
}
@end


/*****************************************************************/

@interface _TtCO9G7AppCore14TxSessionState7Pairing : _TtCs12_SwiftObject {
    id pairingCode;
    id txId;
    id pairingStartTime;
    id recentlyFoundSensorCount;
    id communicationError;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore18TxServiceRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtCO9G7AppCore14TxSessionState18BaseTxSessionState : _TtCs12_SwiftObject {
    id pairingCode;
    id txId;
    id deviceList;
    id calibrationBounds;
    id pendingCommands;
    id commandResults;
    id sensorReading;
    id sensorSessionDuration;
    id activatedOnTime;
    id staticInfo;
    id txTimeOffsetInfo;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtCO9G7AppCore14TxSessionState6Failed : _TtCs12_SwiftObject {
    id pairingCode;
    id txId;
    id lastSensorReading;
    id activatedOnTime;
    id staticInfo;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore19TxServiceRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id txServiceRecordDao;
    id txKeyValueRecordDao;
    id txPairingStartRecordDao;
    id infoDao;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore23UserCertificateProvider : _TtCs12_SwiftObject {
    id certManager;
    id defaultTimeout;
    id keyValueRepository;
    id bulkDataManager;
    id bulkDataLastUploadedUserCertKey;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore24DeviceCertificateMonitor : _TtCs12_SwiftObject {
    id reloadAfter;
    id subscriptions;
    id serialQueue;
    id txService;
    id appLifeCycleManager;
    id certificateManager;
    id timeProvider;
    id keychain;
    id lastReplaceKey;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore11Persistence : _TtCs12_SwiftObject {
    id databaseManager;
    id txServiceRepository;
    id shareAlertEventRepository;
}
@end


/*****************************************************************/

@interface _TtCO9G7AppCore14TxSessionState7Nominal : _TtCO9G7AppCore14TxSessionState18BaseTxSessionState
@end


/*****************************************************************/

@interface _TtCO9G7AppCore14TxSessionState10SignalLoss : _TtCO9G7AppCore14TxSessionState18BaseTxSessionState {
    id communicationError;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore29SecureNetworkingPKIRepository : _TtCs12_SwiftObject {
    id keychain;
    id sessionKeysAlias;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore14EventScheduler : _TtCs12_SwiftObject {
    id activeTimers;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore14WatchPublisher : _TtCs12_SwiftObject {
    id persistence;
    id txService;
    id appLifeCycleManager;
    id watchCommunication;
    id subscriptions;
    id lastContextRecordTimestamp;
    id queue;
    id lastTimeSentComplication;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore18TxTickTimeProvider : _TtCs12_SwiftObject {
    id txTickTime;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore12ShareMonitor : _TtCs12_SwiftObject {
    id lastError;
    id _status;
    id _isMonitoringActive;
    id shareManager;
    id appSoftwareNumber;
    id txSessionStateManager;
    id keyValueRepository;
    id appLifeCycleManager;
    id timeProvider;
    id subscriptions;
    id _shouldSendRuntimeInformation;
    id serialQueue;
    id authManager;
    id eventLogger;
    id shareAlertEventRepo;
    id _deviceSerialNumber;
    id postEventsPersistence;
    id _activeFuture;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore21BaseG7AppCoreProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC9G7AppCore6G7Core : _TtCs12_SwiftObject {
    id persistence;
    id appId;
    id appSoftwareNumber;
    id txService;
    id txServicePruner;
    id dexKit;
    id bleEventLogMonitor;
    id transmitterEventLogMonitor;
    id watchPublisher;
    id watchReceiver;
    id certificateManagerInternal;
    id deviceCertificateMonitor;
    id bulkDataMonitor;
    id subscriptions;
    id txSessionStateManager;
    id bleStateMonitor;
    id blePermissionMonitor;
    id timeLossStateManager;
    id persistenceEventMonitor;
    id shareMonitor;
    id gcsApi;
    id gcsUrl;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore25ShareAlertEventRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id alertRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore27CLMProxyCertificateProvider : _TtCs12_SwiftObject {
    id secureNetworkingManager;
}
@end


/*****************************************************************/

@interface _TtC9G7AppCore10TxDelegate : _TtCs12_SwiftObject {
    id txRecordAggregator;
    id _isCommunicating;
    id _txServiceRecord;
    id txDisconnectEventPublisher;
    id txDisconnectEventInfo;
    id txServiceRepository;
    id timeProvider;
    id txTickTimeProvider;
    id appLifeCycleManager;
    id bleStatePassthrough;
    id certificateManager;
    id transmitterCertificateChain;
    id dataSource;
    id recentlyFoundSensors;
    id txController;
}
@end


/*****************************************************************/

@interface _TtC3GCS6GcsApi : _TtCs12_SwiftObject {
    id gcsCloudApi;
    id softwareNumber;
    id appVersion;
    id secureNetworkingManager;
}
@end


/*****************************************************************/

@interface _TtC3GCS11GcsCloudApi : _TtCs12_SwiftObject {
    id baseUrl;
    id httpRequest;
}
@end


/*****************************************************************/

@interface _TtC3GCS14GcsHttpRequest : _TtCs12_SwiftObject {
    id sessionConfig;
    id $__lazy_storage_$_session;
    id networkTimeout;
}
@end


/*****************************************************************/

@interface GDTCCTCompressionHelper : NSObject
+ (id)gzippedData:(id)v1;
+ (bool)isGzipped:(id)v1;
@end


/*****************************************************************/

@interface GDTCCTUploader : NSObject<NSURLSessionDelegate,GDTCCTUploadMetadataProvider,GDTCORUploader> {
    NSOperationQueue * _uploadOperationQueue;
    NSObject<OS_dispatch_queue> * _uploadQueue;
    NSMutableDictionary * _nextUploadTimeByTarget;
}
@property (readonly,nonatomic) NSOperationQueue * uploadOperationQueue;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * uploadQueue;
@property (readonly,nonatomic) NSMutableDictionary * nextUploadTimeByTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)sharedInstance;
+ (void)setTestServerURL:(id)v1;
+ (id)testServerURL;
+ (id)serverURLForTarget:(long long)v1;
- (id)init;
- (void)uploadTarget:(long long)v1 withConditions:(long long)v2;
- (id)FLLAndCSHAndINTAPIKey;
- (id)nextUploadTimeForTarget:(long long)v1;
- (void)setNextUploadTime:(id)v1 forTarget:(long long)v2;
- (id)APIKeyForTarget:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCCTUploadOperation : NSOperation<NSURLSessionDelegate> {
    bool _executing;
    bool _finished;
    bool _uploadAttempted;
    NSObject<OS_dispatch_queue> * _uploaderQueue;
    NSURLSessionUploadTask * _currentTask;
    long long _target;
    long long _conditions;
    NSURL * _uploadURL;
    NSObject<GDTCORStoragePromiseProtocol> * _storage;
    NSObject<GDTCCTUploadMetadataProvider> * _metadataProvider;
    NSObject<GDTCORMetricsControllerProtocol> * _metricsController;
    NSURLSession * _uploaderSession;
    GDTCORMetrics * _currentMetrics;
}
@property (readonly,nonatomic) long long target;
@property (readonly,nonatomic) long long conditions;
@property (readonly,nonatomic) NSURL * uploadURL;
@property (readonly,nonatomic) NSObject<GDTCORStoragePromiseProtocol> * storage;
@property (readonly,nonatomic) NSObject<GDTCCTUploadMetadataProvider> * metadataProvider;
@property (readonly,nonatomic) NSObject<GDTCORMetricsControllerProtocol> * metricsController;
@property (retain,nonatomic) NSURLSession * uploaderSession;
@property (retain,nonatomic) GDTCORMetrics * currentMetrics;
@property (nonatomic,getter=isExecuting) bool executing;
@property (nonatomic,getter=isFinished) bool finished;
@property (nonatomic) bool uploadAttempted;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * uploaderQueue;
@property (readonly,nonatomic) NSURLSessionUploadTask * currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithTarget:(long long)v1 conditions:(long long)v2 uploadURL:(id)v3 queue:(id)v4 storage:(id)v5 metadataProvider:(id)v6 metricsController:(id)v7;
- (id)uploaderSessionCreateIfNeeded;
- (void)uploadTarget:(long long)v1 withConditions:(long long)v2;
- (id)uploadBatch:(id)v1 toTarget:(long long)v2 storage:(id)v3;
- (id)processResponse:(id)v1 forBatch:(id)v2 storage:(id)v3;
- (id)sendURLRequestWithBatch:(id)v1 target:(long long)v2;
- (void)updateNextUploadTimeWithResponse:(id)v1 forTarget:(long long)v2;
- (id)isReadyToUploadTarget:(long long)v1 conditions:(long long)v2;
- (id)genericRejectedPromiseErrorWithReason:(id)v1;
- (bool)readyToUploadTarget:(long long)v1 conditions:(long long)v2;
- (id)constructRequestProtoWithEvents:(id)v1;
- (id)constructRequestWithURL:(id)v1 forTarget:(long long)v2 data:(id)v3;
- (id)eventSelectorTarget:(long long)v1 withConditions:(long long)v2;
- (id)batchByAddingMetricsEventToBatch:(id)v1 forTarget:(long long)v2;
- (void)URLSession:(id)v1 task:(id)v2 willPerformHTTPRedirection:(id)v3 newRequest:(id)v4 completionHandler:(void (^ /* unknown block signature */)(void))v5;
- (bool)isAsynchronous;
- (void)startOperation;
- (void)finishOperation;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORClock : NSObject<NSSecureCoding> {
    long long _timeMillis;
    long long _timezoneOffsetSeconds;
    long long _kernelBootTimeNanoseconds;
    long long _uptimeNanoseconds;
}
@property (readonly,nonatomic) long long timeMillis;
@property (readonly,nonatomic) long long timezoneOffsetSeconds;
@property (readonly,nonatomic) long long kernelBootTimeNanoseconds;
@property (readonly,nonatomic) long long uptimeNanoseconds;
@property (readonly,nonatomic) long long kernelBootTime;
@property (readonly,nonatomic) long long uptime;
+ (id)snapshot;
+ (id)clockSnapshotInTheFuture:(unsigned long long)v1;
+ (bool)supportsSecureCoding;
- (id)init;
- (bool)isAfter:(id)v1;
- (long long)uptimeMilliseconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
@end


/*****************************************************************/

@interface GDTCORDirectorySizeTracker : NSObject {
    NSString * _directoryPath;
    NSNumber * _cachedSizeBytes;
}
@property (readonly,nonatomic) NSString * directoryPath;
@property (retain,nonatomic) NSNumber * cachedSizeBytes;
- (id)initWithDirectoryPath:(id)v1;
- (unsigned long long)directoryContentSize;
- (void)fileWasAddedAtPath:(id)v1 withSize:(unsigned long long)v2;
- (void)fileWasRemovedAtPath:(id)v1 withSize:(unsigned long long)v2;
- (void)resetCachedSize;
- (unsigned long long)calculateDirectoryContentSize;
- (unsigned long long)fileSizeAtURL:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCOREndpoints : NSObject
+ (id)uploadURLs;
+ (id)uploadURLForTarget:(long long)v1;
@end


/*****************************************************************/

@interface GDTCOREvent : NSObject<NSSecureCoding> {
    NSString * _eventID;
    NSString * _mappingID;
    long long _target;
    NSObject<GDTCOREventDataObject> * _dataObject;
    NSData * _serializedDataObjectBytes;
    long long _qosTier;
    GDTCORClock * _clockSnapshot;
    NSDate * _expirationDate;
    NSData * _customBytes;
}
@property (nonatomic) bool needsNetworkConnectionInfoPopulated;
@property (retain,nonatomic) NSData * networkConnectionInfoData;
@property (retain,nonatomic) NSNumber * eventCode;
@property (retain,nonatomic) NSString * eventID;
@property (readonly,nonatomic) NSString * mappingID;
@property (readonly,nonatomic) long long target;
@property (retain,nonatomic) NSObject<GDTCOREventDataObject> * dataObject;
@property (readonly,nonatomic) NSData * serializedDataObjectBytes;
@property (nonatomic) long long qosTier;
@property (retain,nonatomic) GDTCORClock * clockSnapshot;
@property (retain,nonatomic) NSDate * expirationDate;
@property (retain,nonatomic) NSData * customBytes;
+ (id)eventWithMetrics:(id)v1 forTarget:(long long)v2;
+ (id)nextEventID;
+ (bool)supportsSecureCoding;
- (id)initWithMappingID:(id)v1 target:(long long)v2;
- (id)copy;
- (unsigned long long)hash;
- (bool)isEqual:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORFlatFileStorage : NSObject<GDTCORStoragePromiseProtocol,GDTCORStorageProtocol,GDTCORLifecycleProtocol> {
    GDTCORDirectorySizeTracker * _sizeTracker;
    NSObject<GDTCORStorageDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _storageQueue;
    GDTCORUploadCoordinator * _uploadCoordinator;
}
@property (nonatomic) NSObject<GDTCORStorageDelegate> * delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (readonly,nonatomic) GDTCORDirectorySizeTracker * sizeTracker;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * storageQueue;
@property (retain,nonatomic) GDTCORUploadCoordinator * uploadCoordinator;
@property (nonatomic) NSObject<GDTCORStorageDelegate> * delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)sharedInstance;
+ (id)eventDataStoragePath;
+ (id)batchDataStoragePath;
+ (id)libraryDataStoragePath;
+ (id)batchPathForTarget:(long long)v1 batchID:(id)v2 expirationDate:(id)v3;
+ (id)pathForTarget:(long long)v1 eventID:(id)v2 qosTier:(id)v3 expirationDate:(id)v4 mappingID:(id)v5;
- (id)batchIDsForTarget:(long long)v1;
- (id)removeBatchWithID:(id)v1 deleteEvents:(bool)v2;
- (id)removeBatchesWithIDs:(id)v1 deleteEvents:(bool)v2;
- (id)removeAllBatchesForTarget:(long long)v1 deleteEvents:(bool)v2;
- (id)hasEventsForTarget:(long long)v1;
- (id)batchWithEventSelector:(id)v1 batchExpiration:(id)v2;
- (id)fetchAndUpdateMetricsWithHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)fetchStorageMetadata;
- (id)genericRejectedPromiseErrorWithReason:(id)v1;
- (id)init;
- (void)storeEvent:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)batchWithEventSelector:(id)v1 batchExpiration:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)removeBatchWithID:(id)v1 deleteEvents:(bool)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)batchIDsForTarget:(long long)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)libraryDataForKey:(id)v1 onFetchComplete:(void (^ /* unknown block signature */)(void))v2 setNewValue:(void (^ /* unknown block signature */)(void))v3;
- (void)storeLibraryData:(id)v1 forKey:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)removeLibraryDataForKey:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)hasEventsForTarget:(long long)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)checkForExpirations;
- (void)storageSizeWithCallback:(void (^ /* unknown block signature */)(void))v1;
- (id)batchDirPathsForBatchID:(id)v1 error:(id *)v2;
- (bool)moveContentsOfDirectoryAtPath:(id)v1 to:(id)v2 error:(id *)v3;
- (void)syncThreadUnsafeRemoveBatchWithID:(id)v1 deleteEvents:(bool)v2;
- (void)pathsForTarget:(long long)v1 eventIDs:(id)v2 qosTiers:(id)v3 mappingIDs:(id)v4 onComplete:(void (^ /* unknown block signature */)(void))v5;
- (void)nextBatchID:(void (^ /* unknown block signature */)(void))v1;
- (id)eventComponentsFromFilename:(id)v1;
- (id)batchComponentsFromFilename:(id)v1;
- (void)appWillBackground:(id)v1;
- (void)appWillTerminate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORLifecycle : NSObject
+ (void)load;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackgroundNotification:(id)v1;
- (void)applicationWillEnterForegroundNotification:(id)v1;
- (void)applicationWillTerminateNotification:(id)v1;
@end


/*****************************************************************/

@interface GDTCORLogSourceMetrics : NSObject<NSSecureCoding> {
    NSDictionary * _droppedEventCounterByLogSource;
}
@property (readonly,nonatomic) NSDictionary * droppedEventCounterByLogSource;
+ (id)metrics;
+ (id)metricsWithEvents:(id)v1 droppedForReason:(long long)v2;
+ (id)dictionaryByMergingDictionary:(id)v1 withOtherDictionary:(id)v2 uniquingKeysWithBlock:(void (^ /* unknown block signature */)(void))v3;
+ (bool)supportsSecureCoding;
- (id)initWithDroppedEventCounterByLogSource:(id)v1;
- (id)logSourceMetricsByMergingWithLogSourceMetrics:(id)v1;
- (bool)isEqualToLogSourceMetrics:(id)v1;
- (bool)isEqual:(id)v1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORMetrics : NSObject<GDTCOREventDataObject> {
    NSDate * _collectionStartDate;
    GDTCORLogSourceMetrics * _logSourceMetrics;
    NSDate * _collectionEndDate;
    unsigned long long _currentCacheSize;
    unsigned long long _maxCacheSize;
    NSString * _bundleID;
}
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (readonly,nonatomic) NSDate * collectionStartDate;
@property (readonly,nonatomic) GDTCORLogSourceMetrics * logSourceMetrics;
@property (readonly,nonatomic) NSDate * collectionEndDate;
@property (readonly,nonatomic) unsigned long long currentCacheSize;
@property (readonly,nonatomic) unsigned long long maxCacheSize;
@property (readonly,nonatomic) NSString * bundleID;
+ (id)metricsWithMetricsMetadata:(id)v1 storageMetadata:(id)v2;
- (id)transportBytes;
- (id)initWithCollectionStartDate:(id)v1 collectionEndDate:(id)v2 logSourceMetrics:(id)v3 currentCacheSize:(unsigned long long)v4 maxCacheSize:(unsigned long long)v5 bundleID:(id)v6;
- (bool)isEqualToMetrics:(id)v1;
- (bool)isEqual:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORMetricsController : NSObject<GDTCORMetricsControllerProtocol> {
    NSObject<GDTCORStoragePromiseProtocol> * _storage;
}
@property (retain,nonatomic) NSObject<GDTCORStoragePromiseProtocol> * storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)sharedInstance;
- (id)initWithStorage:(id)v1;
- (id)logEventsDroppedForReason:(long long)v1 events:(id)v2;
- (id)getAndResetMetrics;
- (id)offerMetrics:(id)v1;
- (void)storage:(id)v1 didRemoveExpiredEvents:(id)v2;
- (void)storage:(id)v1 didDropEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORMetricsMetadata : NSObject<NSSecureCoding> {
    NSDate * _collectionStartDate;
    GDTCORLogSourceMetrics * _logSourceMetrics;
}
@property (readonly,copy,nonatomic) NSDate * collectionStartDate;
@property (readonly,copy,nonatomic) GDTCORLogSourceMetrics * logSourceMetrics;
+ (id)metadataWithCollectionStartDate:(id)v1 logSourceMetrics:(id)v2;
+ (bool)supportsSecureCoding;
- (id)initWithCollectionStartDate:(id)v1 logSourceMetrics:(id)v2;
- (bool)isEqualToMetricsMetadata:(id)v1;
- (bool)isEqual:(id)v1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORApplication : NSObject<GDTCORApplicationProtocol,GDTCORApplicationDelegate> {
    bool _isRunningInBackground;
}
@property bool isRunningInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (retain,nonatomic) UIWindow * window;
+ (void)load;
+ (void)initialize;
+ (id)sharedApplication;
- (id)init;
- (unsigned long long)beginBackgroundTaskWithName:(id)v1 expirationHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)endBackgroundTask:(unsigned long long)v1;
- (bool)isAppExtension;
- (id)sharedApplicationForBackgroundTask;
- (void)iOSApplicationDidEnterBackground:(id)v1;
- (void)iOSApplicationWillEnterForeground:(id)v1;
- (void)iOSApplicationWillTerminate:(id)v1;
@end


/*****************************************************************/

@interface GDTCORReachability : NSObject {
    struct __SCNetworkReachability * _reachabilityRef;
    NSObject<OS_dispatch_queue> * _reachabilityQueue;
    unsigned int _callbackFlags;
    unsigned int _flags;
}
@property (nonatomic) unsigned int flags;
+ (void)initialize;
+ (id)sharedInstance;
+ (unsigned int)currentFlags;
- (id)init;
- (void)setCallbackFlags:(unsigned int)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORRegistrar : NSObject<GDTCORLifecycleProtocol> {
    NSMutableDictionary * _targetToUploader;
    NSMutableDictionary * _targetToStorage;
    NSMutableDictionary * _targetToMetricsController;
    NSObject<OS_dispatch_queue> * _registrarQueue;
}
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * registrarQueue;
@property (readonly) NSMutableDictionary * targetToUploader;
@property (readonly) NSMutableDictionary * targetToStorage;
@property (readonly) NSMutableDictionary * targetToMetricsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (void)registerUploader:(id)v1 target:(long long)v2;
- (void)registerStorage:(id)v1 target:(long long)v2;
- (void)registerMetricsController:(id)v1 target:(long long)v2;
- (void)setMetricsControllerAsStorageDelegateForTarget:(long long)v1;
- (void)appWillBackground:(id)v1;
- (void)appWillForeground:(id)v1;
- (void)appWillTerminate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORStorageEventSelector : NSObject {
    long long _selectedTarget;
    NSSet * _selectedEventIDs;
    NSSet * _selectedMappingIDs;
    NSSet * _selectedQosTiers;
}
@property (readonly,nonatomic) long long selectedTarget;
@property (readonly,nonatomic) NSSet * selectedEventIDs;
@property (readonly,nonatomic) NSSet * selectedMappingIDs;
@property (readonly,nonatomic) NSSet * selectedQosTiers;
+ (id)eventSelectorForTarget:(long long)v1;
- (id)initWithTarget:(long long)v1 eventIDs:(id)v2 mappingIDs:(id)v3 qosTiers:(id)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORStorageMetadata : NSObject {
    unsigned long long _currentCacheSize;
    unsigned long long _maxCacheSize;
}
@property (readonly,nonatomic) unsigned long long currentCacheSize;
@property (readonly,nonatomic) unsigned long long maxCacheSize;
+ (id)metadataWithCurrentCacheSize:(unsigned long long)v1 maxCacheSize:(unsigned long long)v2;
- (id)initWithCurrentCacheSize:(unsigned long long)v1 maxCacheSize:(unsigned long long)v2;
@end


/*****************************************************************/

@interface GDTCORTransformer : NSObject<GDTCORLifecycleProtocol> {
    NSObject<OS_dispatch_queue> * _eventWritingQueue;
    NSObject<GDTCORApplicationProtocol> * _application;
}
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * eventWritingQueue;
@property (readonly,nonatomic) NSObject<GDTCORApplicationProtocol> * application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (id)initWithApplication:(id)v1;
- (void)transformEvent:(id)v1 withTransformers:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)appWillTerminate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORTransport : NSObject {
    NSString * _mappingID;
    NSArray * _transformers;
    long long _target;
    GDTCORTransformer * _transformerInstance;
}
@property (retain,nonatomic) NSString * mappingID;
@property (retain,nonatomic) NSArray * transformers;
@property (nonatomic) long long target;
@property (retain,nonatomic) GDTCORTransformer * transformerInstance;
- (id)initWithMappingID:(id)v1 transformers:(id)v2 target:(long long)v3;
- (void)sendTelemetryEvent:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)sendDataEvent:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)sendTelemetryEvent:(id)v1;
- (void)sendDataEvent:(id)v1;
- (id)eventForTransport;
- (void)sendEvent:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORUploadBatch : NSObject {
    NSNumber * _batchID;
    NSSet * _events;
}
@property (readonly,nonatomic) NSNumber * batchID;
@property (readonly,nonatomic) NSSet * events;
- (id)initWithBatchID:(id)v1 events:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORUploadCoordinator : NSObject<GDTCORLifecycleProtocol> {
    NSObject<OS_dispatch_queue> * _coordinationQueue;
    NSObject<OS_dispatch_source> * _timer;
    unsigned long long _timerInterval;
    unsigned long long _timerLeeway;
    GDTCORRegistrar * _registrar;
}
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * coordinationQueue;
@property (readonly,nonatomic) NSObject<OS_dispatch_source> * timer;
@property (readonly,nonatomic) unsigned long long timerInterval;
@property (readonly,nonatomic) unsigned long long timerLeeway;
@property (retain,nonatomic) GDTCORRegistrar * registrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (void)forceUploadForTarget:(long long)v1;
- (void)startTimer;
- (void)stopTimer;
- (void)uploadTargets:(id)v1 conditions:(long long)v2;
- (void)signalToStoragesToCheckExpirations;
- (id)storageForTarget:(id)v1;
- (long long)uploadConditions;
- (void)appWillForeground:(id)v1;
- (void)appWillBackground:(id)v1;
- (void)appWillTerminate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_GoogleDataTransport : NSObject
@end


/*****************************************************************/

@interface PodsDummy_GoogleUtilities : NSObject
@end


/*****************************************************************/

@interface GULAppEnvironmentUtil : NSObject
+ (bool)isFromAppStore;
+ (bool)isAppStoreReceiptSandbox;
+ (bool)isSimulator;
+ (id)getSysctlEntry:(const  char *)v1;
+ (id)deviceModel;
+ (id)deviceSimulatorModel;
+ (id)systemVersion;
+ (bool)isAppExtension;
+ (bool)isIOS7OrHigher;
+ (bool)hasSwiftRuntime;
+ (id)applePlatform;
+ (id)appleDevicePlatform;
+ (id)deploymentType;
@end


/*****************************************************************/

@interface GULHeartbeatDateStorage : NSObject<GULHeartbeatDateStorable> {
    NSURL * _fileURL;
    NSString * _fileName;
}
@property (readonly,nonatomic) NSString * fileName;
@property (readonly,nonatomic) NSURL * fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithFileName:(id)v1;
- (id)directoryPathURL;
- (void)checkAndCreateDirectory:(id)v1;
- (id)heartbeatDateForTag:(id)v1;
- (bool)setHearbeatDate:(id)v1 forTag:(id)v2;
- (id)heartbeatDictionaryWithFileURL:(id)v1;
- (bool)writeDictionary:(id)v1 forWritingURL:(id)v2 error:(id *)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GULHeartbeatDateStorageUserDefaults : NSObject<GULHeartbeatDateStorable> {
    NSUserDefaults * _userDefaults;
    NSString * _key;
}
@property (readonly,nonatomic) NSUserDefaults * userDefaults;
@property (readonly,nonatomic) NSString * key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithDefaults:(id)v1 key:(id)v2;
- (id)heartbeatDictionaryFromDefaults;
- (id)heartbeatDateForTag:(id)v1;
- (bool)setHearbeatDate:(id)v1 forTag:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GULKeychainStorage : NSObject {
    NSObject<OS_dispatch_queue> * _keychainQueue;
    NSObject<OS_dispatch_queue> * _inMemoryCacheQueue;
    NSString * _service;
    NSCache * _inMemoryCache;
}
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * keychainQueue;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * inMemoryCacheQueue;
@property (readonly,nonatomic) NSString * service;
@property (readonly,nonatomic) NSCache * inMemoryCache;
- (id)initWithService:(id)v1;
- (id)initWithService:(id)v1 cache:(id)v2;
- (id)getObjectForKey:(id)v1 objectClass:(Class)v2 accessGroup:(id)v3;
- (id)setObject:(id)v1 forKey:(id)v2 accessGroup:(id)v3;
- (id)removeObjectForKey:(id)v1 accessGroup:(id)v2;
- (id)getObjectFromKeychainForKey:(id)v1 objectClass:(Class)v2 accessGroup:(id)v3;
- (void)resetInMemoryCache;
- (id)keychainQueryWithKey:(id)v1 accessGroup:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GULKeychainUtils : NSObject
+ (id)getItemWithQuery:(id)v1 error:(id *)v2;
+ (bool)setItem:(id)v1 withQuery:(id)v2 error:(id *)v3;
+ (bool)removeItemWithQuery:(id)v1 error:(id *)v2;
+ (id)multiplatformQueryWithQuery:(id)v1;
+ (id)keychainErrorWithFunction:(id)v1 status:(int)v2;
@end


/*****************************************************************/

@interface GULLoggerWrapper : NSObject
+ (void)logWithLevel:(long long)v1 withService:(id)v2 withCode:(id)v3 withMessage:(id)v4 withArgs:(char *)v5;
@end


/*****************************************************************/

@interface GULNetworkInfo : NSObject
+ (id)getNetworkInfo;
+ (id)getNetworkMobileCountryCode;
+ (id)getNetworkMobileNetworkCode;
+ (id)formatMcc:(id)v1 andMNC:(id)v2;
+ (long long)getNetworkType;
+ (id)getNetworkRadioType;
@end


/*****************************************************************/

@interface GULSecureCoding : NSObject
+ (id)unarchivedObjectOfClasses:(id)v1 fromData:(id)v2 error:(id *)v3;
+ (id)unarchivedObjectOfClass:(Class)v1 fromData:(id)v2 error:(id *)v3;
+ (id)archivedDataWithRootObject:(id)v1 error:(id *)v2;
+ (id)archivingErrorWithException:(id)v1;
@end


/*****************************************************************/

@interface GULURLSessionDataResponse : NSObject {
    NSHTTPURLResponse * _HTTPResponse;
    NSData * _HTTPBody;
}
@property (readonly,nonatomic) NSHTTPURLResponse * HTTPResponse;
@property (readonly,nonatomic) NSData * HTTPBody;
- (id)initWithResponse:(id)v1 HTTPBody:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GULUserDefaults : NSObject {
    struct __CFString * _appNameRef;
    bool _isPreferenceFileExcluded;
}
@property (readonly) struct __CFString * appNameRef;
@property bool isPreferenceFileExcluded;
+ (id)standardUserDefaults;
- (id)init;
- (id)initWithSuiteName:(id)v1;
- (void)dealloc;
- (id)objectForKey:(id)v1;
- (void)setObject:(id)v1 forKey:(id)v2;
- (void)removeObjectForKey:(id)v1;
- (long long)integerForKey:(id)v1;
- (float)floatForKey:(id)v1;
- (double)doubleForKey:(id)v1;
- (bool)boolForKey:(id)v1;
- (id)stringForKey:(id)v1;
- (id)arrayForKey:(id)v1;
- (id)dictionaryForKey:(id)v1;
- (void)setInteger:(long long)v1 forKey:(id)v2;
- (void)setFloat:(float)v1 forKey:(id)v2;
- (void)setDouble:(double)v1 forKey:(id)v2;
- (void)setBool:(bool)v1 forKey:(id)v2;
- (void)synchronize;
- (void)scheduleSynchronize;
@end


/*****************************************************************/

@interface _TtC11KeychainAPI15KeychainManager : _TtCs12_SwiftObject {
    id configuration;
}
@end


/*****************************************************************/

@interface PodsDummy_PhoenixUIKit_iOS : NSObject
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit9AddButton : UIButton {
    id buttonHapticFeedbackGenerator;
}
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (void)touchesEnded:(id)v1 withEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit4Axis : SKNode {
    id orientation;
    id axisLine;
    id axisSize;
    id tickMarks;
    id tickLabels;
    id lineColor;
    id textures;
}
- (id)initWithCoder:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit16BarChartSwimlane : _TtC12PhoenixUIKit12BaseSwimlane
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit20BarChartSwimlaneNode : _TtC12PhoenixUIKit16BaseSwimlaneNode {
    id renderer;
    id defaultMaskColor;
}
- (id)initWithTexture:(id)v1 color:(id)v2 size:(struct CGSize)v3;
- (id)initWithCoder:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit12BaseSwimlane : SKSpriteNode {
    id layoutHeight;
    id layoutWeight;
    id presenter;
    id swimlaneNode;
    id containerHorizontalInset;
    id containerMaskColor;
    id verticalInset;
    id containerHorizontalMaskInset;
    id horizontalInset;
    id horizontalMaskInset;
    id maskColor;
    id fillColor;
    id xContentCoordinateRange;
    id yContentCoordinateRange;
}
@property (nonatomic) struct CGSize size;
- (id)initWithCoder:(id)v1;
- (id)initWithTexture:(id)v1 color:(id)v2 size:(struct CGSize)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit16BaseSwimlaneNode : SKSpriteNode {
    id rasterize;
    id pagingEnabled;
    id renderableRangePadding;
    id appliedAccumulatedXTranslation;
    id contentNode;
    id cropNode;
    id statusNode;
    id titleNode;
    id needsRedrawCropArea;
    id needsRedrawStatus;
    id needsRedrawTitle;
    id needsRedrawDataPoints;
    id needsPrepareRenderingBuffer;
    id statusText;
    id statusAttribute;
    id statusPosition;
    id titleText;
    id titleAttribute;
    id titlePosition;
    id visibleBuffer;
    id leftSideBuffer;
    id rightSideBuffer;
    id dataSource;
    id xTranslation;
    id yTranslation;
    id horizontalInset;
    id verticalInset;
    id leftMaskNodeName;
    id rightMaskNodeName;
    id pictureFrameNodeName;
    id cropNodeZPosition;
    id defaultMaskColor;
    id horizontalMaskInset;
    id maskColor;
    id $__lazy_storage_$_renderingDistance;
}
@property (nonatomic) struct CGSize size;
- (id)initWithTexture:(id)v1 color:(id)v2 size:(struct CGSize)v3;
- (id)initWithCoder:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit21BaseSwimlanePresenter : _TtCs12_SwiftObject {
    id swimlane;
    id currentTime;
    id viewTimeRange;
    id scrollableTimeRange;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit11ButtonLabel : _TtC12PhoenixUIKit9DexButton {
    id customImageSizeType;
    id widthAnchorConstraint;
}
@property (nonatomic) bool isDestructive;
@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (bool)isEnabled;
- (bool)isHighlighted;
- (void)prepareForInterfaceBuilder;
- (void)setImage:(id)v1 forState:(unsigned long long)v2;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit17CellButtonOnWhite : _TtC12PhoenixUIKit11ButtonLabel
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit27CGMAberrationErrorPresenter : _TtCs12_SwiftObject {
    id abberrationErrorView;
    id lastReceivedReadingState;
    id helpTextDisplayHandler;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit23CGMCalibrationPresenter : _TtCs12_SwiftObject {
    id calibrationView;
    id lastReceivedReadingState;
    id helpTextDisplayHandler;
    id _lastCalibrationTime;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit23CGMCurrentTimePublisher : _TtC12PhoenixUIKit12CGMPublisher
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit12CGMPublisher : _TtCs12_SwiftObject {
    id queue;
    id subscriberList;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit15CGMSensorWarmup : _TtC12PhoenixUIKit12ProgressRing {
    id bottomTextStr;
}
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit24CGMSensorWarmupPresenter : _TtCs12_SwiftObject {
    id identity;
    id sensorWarmupView;
    id sessionPeriodData;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit25CGMSessionPeriodPublisher : _TtC12PhoenixUIKit12CGMPublisher
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit23CGMStartSensorPresenter : _TtCs12_SwiftObject {
    id cgmStatusDisplay;
    id helpTextDisplayHandler;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit9CGMStatus : _TtC12PhoenixUIKit7XibView {
    id titleImageView;
    id titleLabel;
    id statusLabel;
    id helpButton;
    id actionButton;
    id helpTappedDelegate;
    id statusType;
}
@property (nonatomic) UIImageView * titleImageView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) UIButton * actionButton;
- (void)helpButtonClicked:(id)v1;
- (void)prepareForInterfaceBuilder;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit13CGMSubscriber : _TtCs12_SwiftObject {
    id identity;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit21CGMSystemOrchestrator : _TtCs12_SwiftObject {
    id cgmReadingState;
    id glucoseUnits;
    id orchestratorView;
    id glucoseCompassPresenter;
    id calibrationPresenter;
    id aberrationErrorPresenter;
    id warmupPresenter;
    id startSensorPresenter;
    id systemStatusTypePresenter;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit35CGMSystemOrchestratorViewCollection : _TtC12PhoenixUIKit43CGMSystemOrchestratorViewCollectionInternal
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit43CGMSystemOrchestratorViewCollectionInternal : _TtC12PhoenixUIKit7XibView {
    id glucoseCompass;
    id calibrationView;
    id aberrationErrorView;
    id sensorWarmupView;
    id systemStatusTypeView;
    id startSensorView;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit24CGMSystemStatusPublisher : _TtC12PhoenixUIKit12CGMPublisher
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit28CGMSystemStatusTypePresenter : _TtC12PhoenixUIKit13CGMSubscriber {
    id cgmStatusDisplay;
    id lastReceivedSystemStatusType;
    id helpTextDisplayHandler;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit16CircleShadowView : UIView
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit18DexBaseContentView : UIView<NSObject> {
    id separatorConstraint;
    id listView;
    id configuration;
}
- (id)initWithCoder:(id)v1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit9DexButton : UIButton {
    id cornerRadius;
    id shadowRadius;
    id shadowOffset;
    id shadowColor;
    id shadowOpacity;
    id borderWidth;
    id borderColor;
}
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic,retain) UIColor * shadowColor;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtCV12PhoenixUIKit20DexCellConfiguration18DexCellContentView : _TtC12PhoenixUIKit18DexBaseContentView {
    id toggleView;
    id imageView;
    id titleImageView;
    id separatorConstraint;
    id titleSlider;
    id sliderValue;
    id radioButton;
    id detailLabel;
    id disclosureView;
    id accessoryType;
    id titleAccessoryType;
    id isSelected;
    id isGray;
    id isDisabled;
    id grayCellType;
    id accessoryCallback;
}
- (id)initWithCoder:(id)v1;
- (void)controlCallback:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit21DexCollectionViewCell : UICollectionViewListCell
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit24SliderCollectionViewCell : UICollectionViewListCell {
    id sliderValue;
    id valueConfiguration;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit24ToggleCollectionViewCell : _TtC12PhoenixUIKit21DexCollectionViewCell {
    id isToggled;
}
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit16DexTableViewCell : UITableViewCell
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit19SliderTableViewCell : UITableViewCell {
    id sliderValue;
    id valueConfiguration;
}
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit19ToggleTableViewCell : _TtC12PhoenixUIKit16DexTableViewCell {
    id isToggled;
}
- (void)_bridgedUpdateConfigurationUsingState:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit14DropShadowView : UIView {
    id dexcomShadowsView;
    id nibName;
    id contentView;
}
@property (nonatomic) UIView * dexcomShadowsView;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit14EllipsisButton : _TtC12PhoenixUIKit9DexButton
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
@property (nonatomic) bool highlighted;
- (bool)isHighlighted;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit14GlucoseCompass : _TtC12PhoenixUIKit22GlucoseCompassInternal {
    id glucoseValue;
    id glucoseUnits;
    id glucoseUnitTextSize;
    id glucoseTextSize;
}
@property (nonatomic,copy) NSString * glucoseValue;
@property (nonatomic,copy) NSString * glucoseUnits;
@property (nonatomic) double glucoseRate;
@property (nonatomic) long long glucoseUnitTextSize;
@property (nonatomic) long long glucoseTextSize;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit22GlucoseCompassInternal : _TtC12PhoenixUIKit7XibView {
    id labelEGV;
    id labelUnits;
    id egvView;
    id trendView;
    id bottomLayerView;
    id arrowView;
    id labelEGVCenterY;
    id animated;
    id lineColor;
    id lineWidth;
    id frameWorkBundle;
    id normalCenterY;
    id attributedCenterY;
    id cornerRadiusRatio;
    id egvText;
    id unitText;
    id egvAttributedText;
    id unitAttributedText;
    id numArrowMarkers;
    id arrowAngle;
    id glucoseRate;
    id circleBackgroundColor;
    id egvTextColor;
    id unitTextColor;
    id egvTextSize;
    id unitTextSize;
    id circleOuterBackgroundColor;
    id circleInnerArrowColor;
    id circleOuterArrowColor;
    id circleRingColor;
    id outerCircleShadowAttributes;
    id innerCircleShadowAttributes;
}
@property (nonatomic) UILabel * labelEGV;
@property (nonatomic) UILabel * labelUnits;
@property (nonatomic) _TtC12PhoenixUIKit16CircleShadowView * egvView;
@property (nonatomic) _TtC12PhoenixUIKit12TearDropView * trendView;
@property (nonatomic) _TtC12PhoenixUIKit16CircleShadowView * bottomLayerView;
@property (nonatomic) _TtC12PhoenixUIKit15TrendArrowsView * arrowView;
@property (nonatomic) NSLayoutConstraint * labelEGVCenterY;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit23GlucoseCompassPresenter : _TtCs12_SwiftObject {
    id frameworkBundle;
    id glucoseUnits;
    id currentGlucoseData;
    id postDelineatorFontRatio;
    id compassView;
    id currentGlucoseCompassThemable;
    id attributes;
    id subscriberUUID;
    id textStyler;
    id glucoseConfig;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit28GlucoseCompassThemePublisher : _TtC12PhoenixUIKit12CGMPublisher
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit32CGMGlucoseDisplayConfigPublisher : _TtC12PhoenixUIKit12CGMPublisher
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit19GlucoseDataDotModel : _TtCs12_SwiftObject {
    id position;
    id attribute;
    id name;
    id node;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit10ShadedArea : _TtCs12_SwiftObject {
    id node;
    id fillColor;
    id closedPath;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit19CGMGlucosePublisher : _TtC12PhoenixUIKit12CGMPublisher {
    id identity;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit15GlucoseSwimlane : _TtC12PhoenixUIKit12BaseSwimlane {
    id backgroundBands;
    id backgroundLines;
    id targetRangeShadingBand;
    id shadedAreas;
    id backgroundCornerRadius;
    id yAxisAttribute;
    id dataDots;
}
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit19GlucoseSwimlaneNode : _TtC12PhoenixUIKit16BaseSwimlaneNode {
    id zPositionTargetRangeArea;
    id zPositionThresholdBandsArea;
    id zPositionShadedArea;
    id zPositionDataPoints;
    id zPositionThresholdLine;
    id zPositionMaskNode;
    id $__lazy_storage_$_backgroundNode;
    id $__lazy_storage_$_yAxisNode;
    id maskNode;
    id yAxisTickMarkLabels;
    id backgroundBands;
    id targetRangeShadingBand;
    id backgroundLines;
    id backgroundCornerRadius;
    id axisAttribute;
    id tickMargin;
    id needsRedrawBackground;
    id needsRedrawYAxis;
    id textures;
}
@property (nonatomic) struct CGSize size;
- (id)initWithTexture:(id)v1 color:(id)v2 size:(struct CGSize)v3;
- (id)initWithCoder:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit24GlucoseSwimlanePresenter : _TtC12PhoenixUIKit21BaseSwimlanePresenter {
    id glucoseYAxisTickMarkPresenter;
    id enableAreaShading;
    id cgmReadings;
    id glucoseUnitType;
    id nowDotDisplayInterval;
    id glucoseConfig;
    id glucoseSwimlaneTheme;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit13GraphBasicBar : _TtCs12_SwiftObject {
    id startPosition;
    id attribute;
    id name;
    id node;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit18GraphContainerView : SKView {
    id swimlaneContainer;
    id maskColor;
    id horizontalMaskInset;
    id horizontalInset;
    id verticalInset;
}
@property (nonatomic) struct CGRect bounds;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit16GraphExtendedBar : _TtCs12_SwiftObject {
    id startPosition;
    id endPosition;
    id attribute;
    id name;
    id node;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit9GraphLine : _TtCs12_SwiftObject {
    id startPosition;
    id endPosition;
    id attribute;
    id name;
    id node;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit14GraphNormalBar : _TtCs12_SwiftObject {
    id startPosition;
    id endPosition;
    id attribute;
    id name;
    id node;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit17GraphOrchestrator : _TtCs12_SwiftObject {
    id startTime;
    id endTime;
    id currentTimeSubscriber;
    id swimlanePresenters;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit13GraphRenderer : _TtCs12_SwiftObject {
    id straightUpAngle;
    id straightLeftAngle;
    id straightRightAngle;
    id straightDownAngle;
    id contentNode;
    id rasterize;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit12ImageUtility : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit21PhoenixUIKitResources : NSObject
- (id)init;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit10PillButton : UIButton {
    id buttonProps;
    id isHaptic;
    id tapMargin;
    id paragraphTextAlignment;
    id buttonSize;
}
@property (nonatomic) bool highlighted;
@property (nonatomic) bool enabled;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (bool)isHighlighted;
- (bool)isEnabled;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)sendAction:(SEL)v1 to:(id)v2 forEvent:(id)v3;
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (void)setTitle:(id)v1 forState:(unsigned long long)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit13PrimaryButton : _TtC12PhoenixUIKit10PillButton {
    id primaryButtonProps;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit24PrimaryDestructiveButton : _TtC12PhoenixUIKit10PillButton {
    id primaryDestructiveButtonProps;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit20PrimaryOutlineButton : _TtC12PhoenixUIKit10PillButton {
    id primaryOutlineButtonProps;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit12ProgressRing : _TtC12PhoenixUIKit7XibView {
    id ringView;
    id topTextLabel;
    id centerTextLabel;
    id bottomTextLabel;
    id topText;
    id centerText;
    id bottomText;
    id topTextColor;
    id centerTextColor;
    id bottomTextColor;
    id topTextSize;
    id centerTextSize;
    id bottomTextSize;
    id topTextVisibility;
    id centerTextVisibility;
    id bottomTextVisibility;
}
@property (nonatomic) _TtC12PhoenixUIKit8RingView * ringView;
@property (nonatomic) UILabel * topTextLabel;
@property (nonatomic) UILabel * centerTextLabel;
@property (nonatomic) UILabel * bottomTextLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit13PUKColorTheme : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit8RingView : UIView {
    id ringBackgroundColor;
    id ringForegroundColor;
    id ringWidthScaleFactor;
    id maximum;
    id progress;
}
@property (nonatomic,retain) UIColor * ringBackgroundColor;
@property (nonatomic,retain) UIColor * ringForegroundColor;
@property (nonatomic) double ringWidthScaleFactor;
@property (nonatomic) long long maximum;
@property (nonatomic) long long progress;
- (void)drawRect:(struct CGRect)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit15SecondaryButton : _TtC12PhoenixUIKit10PillButton {
    id secondaryButtonProps;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtCV12PhoenixUIKit30SliderCellContentConfiguration21SliderCellContentView : _TtC12PhoenixUIKit18DexBaseContentView {
    id slider;
    id detailLabel;
    id sliderValueChangedCallback;
}
- (id)initWithCoder:(id)v1;
- (void)sliderCallback:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit21SwimlaneContainerView : SKScene {
    id plottableArea;
    id horizontalMaskInset;
    id horizontalInset;
    id verticalInset;
    id maskColor;
    id swimlanes;
}
@property (nonatomic) struct CGSize size;
- (void)update:(double)v1;
- (id)initWithSize:(struct CGSize)v1;
- (id)init;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit12TearDropView : UIView {
    id circleShape;
    id triangleShape;
    id arrowAreaHeightFactor;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit14TertiaryButton : _TtC12PhoenixUIKit10PillButton {
    id tertiaryButtonProps;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit14TextLinkButton : _TtC12PhoenixUIKit10PillButton {
    id zeroInsets;
    id onDarkBackground;
    id textLinkButtonProps;
}
@property (nonatomic) bool zeroInsets;
@property (nonatomic) bool onDarkBackground;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit13TickMarkLabel : _TtCs12_SwiftObject {
    id location;
    id text;
    id attribute;
    id node;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit16TimelineSwimlane : _TtC12PhoenixUIKit12BaseSwimlane {
    id tickDirection;
    id axisHeight;
    id tickMarks;
    id axisColor;
}
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit20TimelineSwimlaneNode : _TtC12PhoenixUIKit16BaseSwimlaneNode {
    id xContentCoordinateRange;
    id tickDirection;
    id axisHeight;
    id axisColor;
    id needsRedrawAxis;
    id $__lazy_storage_$_axis;
}
@property (nonatomic) struct CGSize size;
- (id)initWithTexture:(id)v1 color:(id)v2 size:(struct CGSize)v3;
- (id)initWithCoder:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit25TimelineSwimlanePresenter : _TtC12PhoenixUIKit21BaseSwimlanePresenter {
    id tickMarkPresenter;
}
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit18TouchLineIndicator : _TtC12PhoenixUIKit7XibView
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit12TriangleView : UIView
- (void)drawRect:(struct CGRect)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit15TrendArrowsView : UIView {
    id mode;
    id $__lazy_storage_$_singleTriangleView;
    id $__lazy_storage_$_innerTriangleView;
    id $__lazy_storage_$_outerTriangleView;
    id $__lazy_storage_$_innerArrowShape;
    id $__lazy_storage_$_outerArrowShape;
    id smallArrowRadiusFactor;
    id smallArrowPointLengthFactor;
    id bigArrowRadiusFactor;
    id bigArrowPointLenghtFactor;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC12PhoenixUIKit7XibView : UIView {
    id view;
}
@property (nonatomic,retain) UIView * view;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface Reachability : NSObject {
    bool _reachableOnWWAN;
    void (^ /* unknown block signature */)(void) _reachableBlock;
    void (^ /* unknown block signature */)(void) _unreachableBlock;
    void (^ /* unknown block signature */)(void) _reachabilityBlock;
    struct __SCNetworkReachability * _reachabilityRef;
    NSObject<OS_dispatch_queue> * _reachabilitySerialQueue;
    id _reachabilityObject;
}
@property (nonatomic) struct __SCNetworkReachability * reachabilityRef;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * reachabilitySerialQueue;
@property (retain,nonatomic) id reachabilityObject;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) reachableBlock;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) unreachableBlock;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) reachabilityBlock;
@property (nonatomic) bool reachableOnWWAN;
+ (id)reachabilityWithHostName:(id)v1;
+ (id)reachabilityWithHostname:(id)v1;
+ (id)reachabilityWithAddress:(void *)v1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)v1;
- (void)dealloc;
- (bool)startNotifier;
- (void)stopNotifier;
- (bool)isReachableWithFlags:(unsigned int)v1;
- (bool)isReachable;
- (bool)isReachableViaWWAN;
- (bool)isReachableViaWiFi;
- (bool)isConnectionRequired;
- (bool)connectionRequired;
- (bool)isConnectionOnDemand;
- (bool)isInterventionRequired;
- (long long)currentReachabilityStatus;
- (unsigned int)reachabilityFlags;
- (id)currentReachabilityString;
- (id)currentReachabilityFlags;
- (void)reachabilityChanged:(unsigned int)v1;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_Reachability : NSObject
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingAPI14CryptoProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingAPI20SecureRequestHandler : _TtCs12_SwiftObject {
    id accountId;
    id appId;
    id keyResolver;
    id httpClient;
    id timeProvider;
    id cryptoProvider;
}
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingAPI11KeyResolver : _TtCs12_SwiftObject {
    id repository;
    id rsaKey;
    id rsaKeyIndex;
}
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingAPI23SecureNetworkingManager : _TtCs12_SwiftObject {
    id deviceKeyEndpoint;
    id emptyBodyData;
    id config;
    id repository;
    id timeProvider;
    id keyResolver;
    id networkClient;
    id secureRequestHandler;
    id deviceKeyUrl;
    id cryptoProvider;
    id accessTokenProvider;
}
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingAPI17XMLResponseParser : NSObject {
    id parser;
    id attributes;
    id exceptionElement;
    id guid;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingPKI19SignedMessageHeader : _TtCs12_SwiftObject {
    id encKey;
    id saltID;
    id timestamp;
    id nonce;
    id requestID;
    id accountId;
    id softwareID;
    id isZip;
}
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingPKI4Gzip : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingPKI19SecureNetworkClient : NSObject {
    id credential;
    id urlSession;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingPKI20SecureRequestHandler : _TtCs12_SwiftObject {
    id keyResolver;
    id cryptoProvider;
    id timeProvider;
    id networkClient;
    id accessTokenProvider;
    id accountId;
    id sessionKeysIdentifier;
    id requestTimeoutQueue;
}
@end


/*****************************************************************/

@interface _TtC19SecureNetworkingPKI23SecureNetworkingManager : _TtCs12_SwiftObject {
    id keyResolver;
    id cryptoProvider;
    id timeProvider;
    id clmProxyUrl;
    id shareUrl;
    id gcsUrl;
    id runtimeInfo;
    id networkClient;
    id accessTokenProvider;
    id secureRequestHandler;
    id accountId;
    id userCertificateProvider;
    id repository;
    id requestTimeout;
    id managerQueue;
    id sessionKeysPublisher;
    id userCertPublisher;
}
@end


/*****************************************************************/

@interface _TtC8ShareAPI12ShareManager : _TtCs12_SwiftObject {
    id requestSecureTransitManager;
    id $__lazy_storage_$_followerManager;
    id $__lazy_storage_$_monitoringManager;
    id $__lazy_storage_$_runtimeInformationManager;
    id $__lazy_storage_$_eventsManager;
}
@end


/*****************************************************************/

@interface _TtC8ShareAPI27RequestSecureTransitManager : _TtCs12_SwiftObject {
    id secureNetworkingManager;
}
@end


/*****************************************************************/

@interface _TtC8ShareAPI14RealtimeRecord : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC15TimeProviderAPI19RTCTickTimeProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC15TimeProviderAPI18XMLTimestampParser : NSObject {
    id dateFormatter;
    id parser;
    id timestamp;
    id timestampString;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC15TimeProviderAPI17PhoneTimeProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC15TimeProviderAPI12TimeProvider : _TtCs12_SwiftObject {
    id baseUrl;
    id timeSyncEndpoint;
    id _latestSyncTimeEvent;
    id phoneTimeProvider;
    id rtcTickTimeProvider;
    id repository;
    id txTickTimeSubscriber;
    id backgroundTaskManager;
    id fetchTimeTaskIdentifier;
    id rtcPhoneTimeOffsetCache;
    id rtcServerTimeOffsetCache;
    id phoneTimeOffsets;
    id timeoutDuration;
    id fetchTimeCompletion;
    id serialQueue;
    id completionQueue;
    id httpSuccessCodeRage;
    id timeSyncRequestThrottleLimit;
    id lastRequestRTCTime;
    id urlSession;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG710TxResponse : _TtCs12_SwiftObject {
    id txFailure;
    id txResponse;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG725CalibrationBoundsResponse : _TtC14TxControllerG710TxResponse {
    id sessionNumber;
    id sessionSignature;
    id lastBGvalue;
    id lastCalibrationTime;
    id calibrationProcessingStatus;
    id calibrationsPermitted;
    id lastBGDisplay;
    id lastProcessingUpdateTime;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG79G7Reading : _TtCs12_SwiftObject {
    id txTime;
    id sessionNumber;
    id egv;
    id algorithmState;
    id predictiveEgv;
    id rate;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG719StreamSpeedResponse : _TtC14TxControllerG710TxResponse {
    id speed;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG719G7DiagnosticReading : _TtCs12_SwiftObject {
    id startTime;
    id endTime;
    id data;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG712CommandQueue : _TtCs12_SwiftObject {
    id queue;
    id repo;
    id commandDelegate;
    id delegateQueue;
    id processingQueue;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG719StopSessionResponse : _TtC14TxControllerG710TxResponse {
    id code;
    id time;
    id sessionSignature;
    id processedTime;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG715VersionResponse : _TtC14TxControllerG710TxResponse {
    id versionMajor;
    id versionMinor;
    id versionRevision;
    id versionBuild;
    id swNumber;
    id siliconVersion;
    id serialNumber;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG722DiagnosticDataResponse : _TtC14TxControllerG710TxResponse {
    id status;
    id length;
    id crc;
    id startTime;
    id endTime;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG712PakeResponse : _TtC14TxControllerG710TxResponse {
    id phase;
    id statusResponseSize;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG717ConnectionManager : _TtCs12_SwiftObject {
    id managerQueue;
    id serviceStatus;
    id isProcessing;
    id passedAuth;
    id needToBond;
    id connectionCompleted;
    id timeout;
    id shouldReconnect;
    id denyList;
    id controller;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG712G7Controller : _TtCs12_SwiftObject {
    id commandQueue;
    id repository;
    id configuration;
    id systemTime;
    id bleManager;
    id connectionManager;
    id streamingService;
    id supportedProducts;
    id delegateQueue;
    id controllerDelegate;
    id userCommandDelegate;
    id isActive;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG712G7Repository : _TtCs12_SwiftObject {
    id map;
    id serialQueue;
    id transmitterRepository;
    id decoder;
    id encoder;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG718DeviceListResponse : _TtC14TxControllerG710TxResponse {
    id maxDevices;
    id displayIds;
    id displayTypes;
    id restrictions;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG719CertificateResponse : _TtC14TxControllerG710TxResponse {
    id phase;
    id certificateSize;
    id certificateResponseSize;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG716StreamingService : _TtCs12_SwiftObject {
    id egvList;
    id configuration;
    id repository;
    id cacheAccessQueue;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG717CalibrateResponse : _TtC14TxControllerG710TxResponse {
    id status;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG715ChallengeHelper : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC14TxControllerG723ExtendedVersionResponse : _TtC14TxControllerG710TxResponse {
    id sessionLength;
    id warmupLength;
    id algorithmVersion;
    id hardwareVersion;
    id maxLifetimeDays;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG711EGVResponse : _TtC14TxControllerG710TxResponse {
    id txTime;
    id sequenceNumber;
    id sessionNumber;
    id egvAge;
    id value;
    id algorithmState;
    id secondaryalgorithmState;
    id rate;
    id predictiveValue;
    id timeStamp;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG719EGVBackfillResponse : _TtC14TxControllerG710TxResponse {
    id status;
    id length;
    id crc;
    id firstSequenceNumber;
    id firstTimestamp;
    id lastTimestamp;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG722EncryptionInfoResponse : _TtC14TxControllerG710TxResponse {
    id length;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG725ProofOfPossessionResponse : _TtC14TxControllerG710TxResponse {
    id challenge;
    id popResponseSize;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG718StreamSizeResponse : _TtC14TxControllerG710TxResponse {
    id size;
}
@end


/*****************************************************************/

@interface _TtC11WhiteboxLib16WbCryptoProvider : _TtCs12_SwiftObject {
    id  d;
    id blockSize;
}
@property (nonatomic,readonly) WbCrypto *  d;
@end


/*****************************************************************/

@interface WhiteboxBridge : NSObject
+ (id)getEngineKeyId;
+ (id)getEncryptionKey:(id)v1;
+ (id)getDecryptionKey:(id)v1;
+ (id)getSigningKey:(id)v1;
+ (id)getSigningKeys;
+ (id)getEncryptionKeys;
+ (id)getSoftwareID;
+ (id)engineDecryptionForSessionSigningKeys;
+ (id)engineDecryptionForSessionDecryptionKeys;
+ (id)engineDecryptionForSessionEncryptionKeys;
@end


/*****************************************************************/

@interface _TtC11WhiteboxLib12PKCS7Padding : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface WbCrypto : NSObject
- (void)cryptoInit;
- (id)encrypt:(id)v1 data:(id)v2 iv:(id)v3;
- (id)decrypt:(id)v1 data:(id)v2 iv:(id)v3;
- (id)sign:(id)v1 data:(id)v2;
- (id)decryptToEncryptionKey:(id)v1 data:(id)v2 iv:(id)v3;
- (id)decryptToDecryptionKey:(id)v1 data:(id)v2 iv:(id)v3;
- (id)decryptToHMACKey:(id)v1 data:(id)v2 iv:(id)v3;
- (id) i;
- (id) b;
- (int) 0;
- (int) f;
- (int) q;
- (void) 8;
@end


/*****************************************************************/

@interface _TtC11WhiteboxLib13WbKeyResolver : _TtCs12_SwiftObject
@property (nonatomic,readonly) NSString *  ;
@property (nonatomic,readonly) NSString *  t;
- (long long) D;
- (id) 5;
- (id) V;
- (id) c;
@end


/*****************************************************************/

@interface PodsDummy_nanopb : NSObject
@end


/*****************************************************************/

@interface PodsDummy_Pods_G7_G7 : NSObject
@end


/*****************************************************************/

@interface FIRCrashlytics : NSObject<FIRLibrary,FIRCrashlyticsInstanceProvider> {
    bool _didPreviouslyCrash;
    NSString * _googleAppID;
    FIRCLSDataCollectionArbiter * _dataArbiter;
    FIRCLSFileManager * _fileManager;
    FIRCLSReportManager * _reportManager;
    FIRCLSReportUploader * _reportUploader;
    FIRCLSExistingReportManager * _existingReportManager;
    FIRCLSAnalyticsManager * _analyticsManager;
    FIRCLSManagerData * _managerData;
}
@property (nonatomic) bool didPreviouslyCrash;
@property (copy,nonatomic) NSString * googleAppID;
@property (retain,nonatomic) FIRCLSDataCollectionArbiter * dataArbiter;
@property (retain,nonatomic) FIRCLSFileManager * fileManager;
@property (retain,nonatomic) FIRCLSReportManager * reportManager;
@property (retain,nonatomic) FIRCLSReportUploader * reportUploader;
@property (retain,nonatomic) FIRCLSExistingReportManager * existingReportManager;
@property (retain,nonatomic) FIRCLSAnalyticsManager * analyticsManager;
@property (retain,nonatomic) FIRCLSManagerData * managerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)componentsToRegister;
+ (id)crashlytics;
+ (void)setDevelopmentPlatformName:(id)v1;
+ (void)setDevelopmentPlatformVersion:(id)v1;
- (id)initWithApp:(id)v1 appInfo:(id)v2 installations:(id)v3 analytics:(id)v4;
- (void)setCrashlyticsCollectionEnabled:(bool)v1;
- (bool)isCrashlyticsCollectionEnabled;
- (bool)didCrashDuringPreviousExecution;
- (void)processDidCrashDuringPreviousExecution;
- (void)log:(id)v1;
- (void)logWithFormat:(id)v1;
- (void)logWithFormat:(id)v1 arguments:(char *)v2;
- (void)checkForUnsentReportsWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)checkAndUpdateUnsentReportsWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)sendUnsentReports;
- (void)deleteUnsentReports;
- (void)setUserID:(id)v1;
- (void)setCustomValue:(id)v1 forKey:(id)v2;
- (void)setCustomKeysAndValues:(id)v1;
- (id)developmentPlatformName;
- (void)setDevelopmentPlatformName:(id)v1;
- (id)developmentPlatformVersion;
- (void)setDevelopmentPlatformVersion:(id)v1;
- (void)recordError:(id)v1;
- (void)recordError:(id)v1 userInfo:(id)v2;
- (void)recordExceptionModel:(id)v1;
- (void)recordOnDemandExceptionModel:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FIRInstallations : NSObject<FIRInstallationsInstanceProvider> {
    FIROptions * _appOptions;
    NSString * _appName;
    FIRInstallationsIDController * _installationsIDController;
}
@property (readonly,nonatomic) FIROptions * appOptions;
@property (readonly,nonatomic) NSString * appName;
@property (readonly,nonatomic) FIRInstallationsIDController * installationsIDController;
+ (void)load;
+ (id)componentsToRegister;
+ (void)validateAppOptions:(id)v1 appName:(id)v2;
+ (void)validateAPIKey:(id)v1;
+ (id)installations;
+ (id)installationsWithApp:(id)v1;
+ (void)assertCompatibleIIDVersion;
+ (bool)isIIDVersionCompatible;
- (id)initWithApp:(id)v1;
- (id)initWithAppOptions:(id)v1 appName:(id)v2 installationsIDController:(id)v3 prefetchAuthToken:(bool)v4;
- (void)installationIDWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)authTokenWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)authTokenForcingRefresh:(bool)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)deleteWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCCTUploader : NSObject<NSURLSessionDelegate,GDTCCTUploadMetadataProvider,GDTCORUploader> {
    NSOperationQueue * _uploadOperationQueue;
    NSObject<OS_dispatch_queue> * _uploadQueue;
    NSMutableDictionary * _nextUploadTimeByTarget;
}
@property (readonly,nonatomic) NSOperationQueue * uploadOperationQueue;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * uploadQueue;
@property (readonly,nonatomic) NSMutableDictionary * nextUploadTimeByTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)sharedInstance;
+ (void)setTestServerURL:(id)v1;
+ (id)testServerURL;
+ (id)serverURLForTarget:(long long)v1;
- (id)init;
- (void)uploadTarget:(long long)v1 withConditions:(long long)v2;
- (id)FLLAndCSHAndINTAPIKey;
- (id)nextUploadTimeForTarget:(long long)v1;
- (void)setNextUploadTime:(id)v1 forTarget:(long long)v2;
- (id)APIKeyForTarget:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORFlatFileStorage : NSObject<GDTCORStoragePromiseProtocol,GDTCORStorageProtocol,GDTCORLifecycleProtocol> {
    GDTCORDirectorySizeTracker * _sizeTracker;
    NSObject<GDTCORStorageDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _storageQueue;
    GDTCORUploadCoordinator * _uploadCoordinator;
}
@property (nonatomic) NSObject<GDTCORStorageDelegate> * delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (readonly,nonatomic) GDTCORDirectorySizeTracker * sizeTracker;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * storageQueue;
@property (retain,nonatomic) GDTCORUploadCoordinator * uploadCoordinator;
@property (nonatomic) NSObject<GDTCORStorageDelegate> * delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)sharedInstance;
+ (id)eventDataStoragePath;
+ (id)batchDataStoragePath;
+ (id)libraryDataStoragePath;
+ (id)batchPathForTarget:(long long)v1 batchID:(id)v2 expirationDate:(id)v3;
+ (id)pathForTarget:(long long)v1 eventID:(id)v2 qosTier:(id)v3 expirationDate:(id)v4 mappingID:(id)v5;
- (id)batchIDsForTarget:(long long)v1;
- (id)removeBatchWithID:(id)v1 deleteEvents:(bool)v2;
- (id)removeBatchesWithIDs:(id)v1 deleteEvents:(bool)v2;
- (id)removeAllBatchesForTarget:(long long)v1 deleteEvents:(bool)v2;
- (id)hasEventsForTarget:(long long)v1;
- (id)batchWithEventSelector:(id)v1 batchExpiration:(id)v2;
- (id)fetchAndUpdateMetricsWithHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)fetchStorageMetadata;
- (id)genericRejectedPromiseErrorWithReason:(id)v1;
- (id)init;
- (void)storeEvent:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)batchWithEventSelector:(id)v1 batchExpiration:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)removeBatchWithID:(id)v1 deleteEvents:(bool)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)batchIDsForTarget:(long long)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)libraryDataForKey:(id)v1 onFetchComplete:(void (^ /* unknown block signature */)(void))v2 setNewValue:(void (^ /* unknown block signature */)(void))v3;
- (void)storeLibraryData:(id)v1 forKey:(id)v2 onComplete:(void (^ /* unknown block signature */)(void))v3;
- (void)removeLibraryDataForKey:(id)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)hasEventsForTarget:(long long)v1 onComplete:(void (^ /* unknown block signature */)(void))v2;
- (void)checkForExpirations;
- (void)storageSizeWithCallback:(void (^ /* unknown block signature */)(void))v1;
- (id)batchDirPathsForBatchID:(id)v1 error:(id *)v2;
- (bool)moveContentsOfDirectoryAtPath:(id)v1 to:(id)v2 error:(id *)v3;
- (void)syncThreadUnsafeRemoveBatchWithID:(id)v1 deleteEvents:(bool)v2;
- (void)pathsForTarget:(long long)v1 eventIDs:(id)v2 qosTiers:(id)v3 mappingIDs:(id)v4 onComplete:(void (^ /* unknown block signature */)(void))v5;
- (void)nextBatchID:(void (^ /* unknown block signature */)(void))v1;
- (id)eventComponentsFromFilename:(id)v1;
- (id)batchComponentsFromFilename:(id)v1;
- (void)appWillBackground:(id)v1;
- (void)appWillTerminate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORLifecycle : NSObject
+ (void)load;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackgroundNotification:(id)v1;
- (void)applicationWillEnterForegroundNotification:(id)v1;
- (void)applicationWillTerminateNotification:(id)v1;
@end


/*****************************************************************/

@interface GDTCORMetricsController : NSObject<GDTCORMetricsControllerProtocol> {
    NSObject<GDTCORStoragePromiseProtocol> * _storage;
}
@property (retain,nonatomic) NSObject<GDTCORStoragePromiseProtocol> * storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)load;
+ (id)sharedInstance;
- (id)initWithStorage:(id)v1;
- (id)logEventsDroppedForReason:(long long)v1 events:(id)v2;
- (id)getAndResetMetrics;
- (id)offerMetrics:(id)v1;
- (void)storage:(id)v1 didRemoveExpiredEvents:(id)v2;
- (void)storage:(id)v1 didDropEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface GDTCORApplication : NSObject<GDTCORApplicationProtocol,GDTCORApplicationDelegate> {
    bool _isRunningInBackground;
}
@property bool isRunningInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (retain,nonatomic) UIWindow * window;
+ (void)load;
+ (void)initialize;
+ (id)sharedApplication;
- (id)init;
- (unsigned long long)beginBackgroundTaskWithName:(id)v1 expirationHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)endBackgroundTask:(unsigned long long)v1;
- (bool)isAppExtension;
- (id)sharedApplicationForBackgroundTask;
- (void)iOSApplicationDidEnterBackground:(id)v1;
- (void)iOSApplicationWillEnterForeground:(id)v1;
- (void)iOSApplicationWillTerminate:(id)v1;
@end
