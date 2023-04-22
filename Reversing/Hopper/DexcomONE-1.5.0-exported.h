struct _NSRange {
    unsigned long long field_1;
    unsigned long long field_2;
};

struct anonymous_type_24 {
    char field_1[33];
    bool field_2;
    struct anonymous_type_25 field_3;
    struct anonymous_type_26 field_4;
    struct anonymous_type_27 field_5;
    void field_6;
    unsigned long long field_7;
    void * field_8;
    void * field_9;
    void * field_10;
};

struct opaqueCMSampleBuffer {
};

struct UIEdgeInsets {
    double field_1;
    double field_2;
    double field_3;
    double field_4;
};

struct anonymous_type_14 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct _google_crashlytics_Report {
    struct pb_bytes_array_s * field_1;
    struct pb_bytes_array_s * field_2;
    int field_3;
    struct pb_bytes_array_s * field_4;
    struct pb_bytes_array_s * field_5;
    struct pb_bytes_array_s * field_6;
    struct _google_crashlytics_FilesPayload field_7;
};

struct CGPoint {
    double field_1;
    double field_2;
};

struct anonymous_type_13 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct __SCNetworkReachability {
};

struct __CFString {
};

struct _logs_proto_mobilesdk_ios_ICoreConfiguration {
    bool field_1;
    int field_2;
    unsigned int field_3;
    int * field_4;
    struct pb_bytes_array_s * field_5;
    struct pb_bytes_array_s * field_6;
    struct pb_bytes_array_s * field_7;
    bool field_8;
    int field_9;
    struct pb_bytes_array_s * field_10;
    struct pb_bytes_array_s * field_11;
    bool field_12;
    int field_13;
    bool field_14;
    int field_15;
    struct pb_bytes_array_s * field_16;
    struct pb_bytes_array_s * field_17;
    bool field_18;
    bool field_19;
    bool field_20;
    bool field_21;
    bool field_22;
    int field_23;
    struct pb_bytes_array_s * field_24;
    bool field_25;
    bool field_26;
    bool field_27;
    int field_28;
    struct pb_bytes_array_s * field_29;
    bool field_30;
    bool field_31;
    bool field_32;
    bool field_33;
};

struct anonymous_type_12 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct FIRCLSMachOFile {
    int fd;
    unsigned long long mappedSize;
    void * mappedFile;
};

struct _google_crashlytics_FilesPayload {
    unsigned int field_1;
    struct _google_crashlytics_FilesPayload_File * field_2;
};

struct anonymous_type_30 {
    char * incrementalPath;
    char * compactedPath;
    unsigned int maxIncrementalCount;
    unsigned int maxCount;
};

struct anonymous_type_11 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct anonymous_type_20 {
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

struct anonymous_type_19 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct anonymous_type_28 {
    char * aPath;
    char * bPath;
    unsigned int maxSize;
    unsigned int maxEntries;
    bool restrictBySize;
    unsigned int * entryCount;
};

struct anonymous_type_18 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct anonymous_type_27 {
};

struct CGRect {
    struct CGPoint field_1;
    struct CGSize field_2;
};

struct anonymous_type_17 {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
};

struct _google_crashlytics_FilesPayload_File; /* Incomplete type */

struct anonymous_type_26 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};

struct _NSZone {
};

struct pb_bytes_array_s; /* Incomplete type */

struct anonymous_type_25 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
};



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

@protocol DXCMLegalAgreementsVCDelegate<NSObject>
- (void)userAgreed;
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

@protocol UIPopoverPresentationControllerDelegate<UIAdaptivePresentationControllerDelegate>

@optional
- (void)prepareForPopoverPresentation:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)popoverPresentationControllerDidDismissPopover:(id)v1;
- (void)popoverPresentationController:(id)v1 willRepositionPopoverToRect:(struct CGRect *)v2 inView:(id *)v3;
- (void)popoverPresentationController:(id)v1 willRepositionPopoverToRect:(struct CGRect *)v2 inView:(id *)v3;
@end


/*****************************************************************/

@protocol UIKeyInput<UITextInputTraits>
@property (nonatomic,readonly) bool hasText;
- (bool)hasText;
- (void)insertText:(id)v1;
- (void)deleteBackward;
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

@protocol UIPickerViewDataSource<NSObject>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
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

@protocol FIRCoreDiagnosticsData<NSObject>
@property (retain,nonatomic) NSDictionary * diagnosticObjects;
- (id)diagnosticObjects;
- (void)setDiagnosticObjects:(id)v1;
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

@protocol FIRCoreDiagnosticsInterop<NSObject>
+ (void)sendDiagnosticsData:(id)v1;
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

@interface _TtC10Dexcom_ONE24TrendGraphViewController (Dexcom_ONE)
- (void)didScrubWithGestureRecognizer:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25CrawlerMenuViewController (Dexcom_ONE)<UICollectionViewDelegate>
- (void)collectionView:(id)v1 didSelectItemAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE20ActionSheetContainer (Dexcom_ONE)<UIPopoverPresentationControllerDelegate>
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE35PairTransmitterManualViewController (Dexcom_ONE)<UIKeyInput>
@property (nonatomic,readonly) bool hasText;
- (bool)hasText;
- (void)insertText:(id)v1;
- (void)deleteBackward;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21GlucoseViewController (Dexcom_ONE)<UICollectionViewDelegateFlowLayout,UICollectionViewDelegate,UICollectionViewDataSource>
- (long long)numberOfSectionsInCollectionView:(id)v1;
- (long long)collectionView:(id)v1 numberOfItemsInSection:(long long)v2;
- (id)collectionView:(id)v1 cellForItemAtIndexPath:(id)v2;
- (struct CGSize)collectionView:(id)v1 layout:(id)v2 sizeForItemAtIndexPath:(id)v3;
- (double)collectionView:(id)v1 layout:(id)v2 minimumLineSpacingForSectionAtIndex:(long long)v3;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19DebugViewController (Dexcom_ONE)
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (bool)textFieldShouldReturn:(id)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17WebViewController (Dexcom_ONE)<WKNavigationDelegate>
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 decidePolicyForNavigationResponse:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didFailProvisionalNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didFailNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
@end


/*****************************************************************/

@interface UINavigationController (Dexcom_ONE)
@property (nonatomic,readonly) bool shouldPopOnTransition;
- (bool)shouldPopOnTransition;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24MainTabBarViewController (Dexcom_ONE)<UITabBarControllerDelegate>
- (bool)tabBarController:(id)v1 shouldSelectViewController:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE22SettingsViewController (Dexcom_ONE)<UITableViewDataSource,UITableViewDelegate>
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19AboutViewController (Dexcom_ONE)
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 estimatedHeightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 titleForHeaderInSection:(long long)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE37BackdoorHumanFactorTestViewController (Dexcom_ONE)<UIPickerViewDelegate,UIPickerViewDataSource>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33ActionSheetPresentationController (Dexcom_ONE)
- (void)handleTapWithRecognizer:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE11AudioPlayer (Dexcom_ONE)<AVAudioPlayerDelegate>
- (void)audioPlayerDidFinishPlaying:(id)v1 successfully:(bool)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32OnboardingOverviewViewController (Dexcom_ONE)<DXCMLegalAgreementsVCDelegate>
- (void)userAgreed;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE18HelpViewController (Dexcom_ONE)
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33PhoneConflictDetailViewController (Dexcom_ONE)<UITableViewDelegate,UITableViewDataSource>
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30SensorCodeManualViewController (Dexcom_ONE)<UIKeyInput>
@property (nonatomic,readonly) bool hasText;
- (bool)hasText;
- (void)insertText:(id)v1;
- (void)deleteBackward;
@end


/*****************************************************************/

@interface UICollectionViewCell (Dexcom_ONE)
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

@interface _TtC10Dexcom_ONE10CameraView (Dexcom_ONE1)<AVCaptureVideoDataOutputSampleBufferDelegate>
- (void)captureOutput:(id)v1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)v2 fromConnection:(id)v3;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE11AppDelegate (Dexcom_ONE)<UNUserNotificationCenterDelegate>
- (void)userNotificationCenter:(id)v1 didReceiveNotificationResponse:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 willPresentNotification:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
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

@interface _TtC15TimeProviderAPI18XMLTimestampParser (TimeProviderAPI)<NSXMLParserDelegate>
- (void)parser:(id)v1 didStartElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4 attributes:(id)v5;
- (void)parser:(id)v1 foundCharacters:(id)v2;
- (void)parser:(id)v1 didEndElement:(id)v2 namespaceURI:(id)v3 qualifiedName:(id)v4;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19ACMDetailsViewModel : _TtCs12_SwiftObject {
    id resultId;
    id screenTitle;
    id message;
    id messageID;
    id canAcknowledge;
    id moreInfoUrl;
    id upgradeUrl;
    id primaryButtonTitle;
    id secondaryButtonTitle;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26WarmupStatusViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id warmupTime;
    id statusLabel;
    id titleLabel;
    id detailLabel;
    id helpButton;
    id titleLabelTopConstraint;
    id warmupStatusViewModel;
    id statusTextSubscriber;
    id timeRemainingTextSubscriber;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * warmupTime;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) NSLayoutConstraint * titleLabelTopConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE35BriefSensorIssueAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE18BulkDataCGMLogging : _TtCs12_SwiftObject {
    id subscribers;
    id alertProfileRepoMonitor;
    id daysOfWeekList;
    id settingDate;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30BaseUICollectionViewController : UICollectionViewController {
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

@interface _TtC10Dexcom_ONE34AppBluetoothOffAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE27AlertsEnabledViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id messageView;
}
@property (nonatomic) UILabel * messageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE37ThirtyMinuteSensorAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29TransmitterEOLThreeWeeksAlert : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29GcsConfirmUoMOptionsViewModel : _TtCs12_SwiftObject {
    id unitOfMeasure;
    id countryCode;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31TransmitterSNHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id transmitterIDLabel;
    id titleLabel;
    id subTitle1Label;
    id description1Label;
    id subTitle2Label;
    id description2Label;
    id enterTxSnButton;
    id backButtonAccessibilityIDText;
    id txId;
}
@property (nonatomic) UILabel * transmitterIDLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * subTitle1Label;
@property (nonatomic) UILabel * description1Label;
@property (nonatomic) UILabel * subTitle2Label;
@property (nonatomic) UILabel * description2Label;
@property (nonatomic) UIButton * enterTxSnButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)editTransmitterSNButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE14AboutViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE22SettingsViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id tableView;
    id titleIconCellIdentifier;
    id headerViewIdentifier;
    id sensorCellIdentifier;
    id transmitterCellIdentifier;
    id appleHealthCellIdentifier;
    id settingsViewModel;
    id sensorSessionViewModel;
    id headerHeight;
    id transmitterSettingsModelSubscriber;
    id appleHealthModelSubscriber;
    id subscriptions;
    id sensorSessionCell;
}
@property (nonatomic,retain) UITableView * tableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)dealloc;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23HealthKitSetupAssistant : _TtCs12_SwiftObject {
    id healthKitStore;
    id healthKitDataTypeProvider;
    id healthKitQueue;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE10BackButton : UIButton {
    id contentView;
    id button;
}
@property (nonatomic,retain) UIView * contentView;
@property (nonatomic) UIButton * button;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21BulkDataLoggingHelper : _TtCs12_SwiftObject {
    id cgmBulkDataLogger;
    id subscribers;
    id firstTime;
}
- (void)logAppBecomesInactive;
- (void)appWillTerminate;
- (void)logPowerStateChanged;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE35PairTransmitterManualViewController : _TtC10Dexcom_ONE20BaseUIViewController<UITextInputTraits> {
    id enterTxSNLabel;
    id transmitterSNStackView;
    id successSnackBar;
    id submitButton;
    id submitView;
    id submitViewBottomConstraint;
    id snackBarBottomConstraint;
    id snackBarText;
    id isKeyBoardShown;
    id transmitterSN;
    id maxTransmitterSNLength;
    id snackBarBottomConstant;
    id accessibilityIDText;
    id delegate;
    id keyboardType;
    id keyboardAppearance;
    id canEdit;
}
@property (nonatomic) UILabel * enterTxSNLabel;
@property (nonatomic) UIStackView * transmitterSNStackView;
@property (nonatomic) UIView * successSnackBar;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * submitButton;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * submitView;
@property (nonatomic) NSLayoutConstraint * submitViewBottomConstraint;
@property (nonatomic) NSLayoutConstraint * snackBarBottomConstraint;
@property (nonatomic) UILabel * snackBarText;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic,readonly) bool canBecomeFirstResponder;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)keyboardActivityWithNotification:(id)v1;
- (void)submitButtonTapped:(id)v1;
- (void)showKeyboard;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE22PhoneConflictViewModel : _TtCs12_SwiftObject {
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

@interface _TtC10Dexcom_ONE32ActionSheetInteractionController : UIPercentDrivenInteractiveTransition<UIGestureRecognizerDelegate> {
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

@interface _TtC10Dexcom_ONE19TimeServiceProvider : _TtCs12_SwiftObject {
    id _passedBackgroundTimeThreshold;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE12SplashScreen : _TtC10Dexcom_ONE20BaseUIViewController {
    id copyrightLabel;
}
@property (nonatomic) UILabel * copyrightLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26SensorSessionCellViewModel : _TtCs12_SwiftObject {
    id displayStateSubscriber;
    id warmupTimeSubscriber;
    id sessionModeSubscriber;
    id mode;
    id delegate;
    id warmupTime;
    id insertionTime;
    id expireTime;
    id transmitterIsPairing;
    id maximumGracePeriod;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE20BaseUIViewController : UIViewController {
    id screenDisplayStartTime;
}
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24DisplayHistoryRepository : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31StartSensorWarmupViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id startSensorWarmupButton;
    id txId;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * startSensorWarmupButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)startSensorWarmupPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE20TargetRangeViewModel : _TtCs12_SwiftObject {
    id isOn;
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36PhoneBluetoothOffAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33AppBluetoothOffHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
    id titleLabel;
    id textLabel1;
    id textLabel2;
    id textLabel3;
    id textLabel4;
    id phoneSettingsButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * textLabel1;
@property (nonatomic) UILabel * textLabel2;
@property (nonatomic) UILabel * textLabel3;
@property (nonatomic) UILabel * textLabel4;
@property (nonatomic) UIButton * phoneSettingsButton;
- (void)viewDidLoad;
- (void)openAppSettings:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE34BriefSensorIssueHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
    id titleLabel;
    id topTextLabel;
    id subtitle1Label;
    id subtext1Label;
    id subtitle2Label;
    id listItem1Label;
    id listItem1aLabel;
    id techSupportTextView;
    id listItem2Label;
    id listItem3Label;
    id bottomTextLabel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * topTextLabel;
@property (nonatomic) UILabel * subtitle1Label;
@property (nonatomic) UILabel * subtext1Label;
@property (nonatomic) UILabel * subtitle2Label;
@property (nonatomic) UILabel * listItem1Label;
@property (nonatomic) UILabel * listItem1aLabel;
@property (nonatomic) UITextView * techSupportTextView;
@property (nonatomic) UILabel * listItem2Label;
@property (nonatomic) UILabel * listItem3Label;
@property (nonatomic) UILabel * bottomTextLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31InvalidSensorCodeViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id reEnterCodeLabel;
    id takePhotoButton;
    id enterCodeManuallyButton;
    id actionSheetDelegate;
    id delegate;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * reEnterCodeLabel;
@property (nonatomic) UIButton * takePhotoButton;
@property (nonatomic) UIButton * enterCodeManuallyButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)takePhotoButtonTapped:(id)v1;
- (void)enterCodeManuallyButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32SensorCodeTimedOutViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id noCodeFoundLabel;
    id takePhotoButton;
    id enterCodeManuallyButton;
    id actionSheetDelegate;
    id delegate;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * noCodeFoundLabel;
@property (nonatomic) UIButton * takePhotoButton;
@property (nonatomic) UIButton * enterCodeManuallyButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)takePhotoPressed:(id)v1;
- (void)enterManuallyPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29LegalAgreementsViewController : DXCMLegalAgreementsVC {
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

@interface _TtC10Dexcom_ONE42OnboardingTreatmentDecisionsViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id titleLabel;
    id whenToUseTitle;
    id whenToUseDescriptionLabel;
    id numAndArrowLabel;
    id useDexcomOneLabel;
    id magGlassImage;
    id noArrowMagGlassImage;
    id highGlucoseLabel;
    id whenToUseBGMTitle;
    id whenToUseBGMDescriptionLabel;
    id noNumberLabel;
    id useBGMLabel;
    id noArrowLabel;
    id useBGMLabel2;
    id numDoesntMatchLabel;
    id whenInDoubtLabel;
    id iUnderstandButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * whenToUseTitle;
@property (nonatomic) UILabel * whenToUseDescriptionLabel;
@property (nonatomic) UILabel * numAndArrowLabel;
@property (nonatomic) UILabel * useDexcomOneLabel;
@property (nonatomic) UIImageView * magGlassImage;
@property (nonatomic) UIImageView * noArrowMagGlassImage;
@property (nonatomic) UILabel * highGlucoseLabel;
@property (nonatomic) UILabel * whenToUseBGMTitle;
@property (nonatomic) UILabel * whenToUseBGMDescriptionLabel;
@property (nonatomic) UILabel * noNumberLabel;
@property (nonatomic) UILabel * useBGMLabel;
@property (nonatomic) UILabel * noArrowLabel;
@property (nonatomic) UILabel * useBGMLabel2;
@property (nonatomic) UILabel * numDoesntMatchLabel;
@property (nonatomic) UILabel * whenInDoubtLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * iUnderstandButton;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)nextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25BaseUITableViewController : UITableViewController {
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

@interface _TtC10Dexcom_ONE22LegalAgreementsManager : DXCMLegalAgreementsManager
- (void)presentViewOnlyAgreementsFromVC:(id)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE27ObservedNotificationManager : _TtCs12_SwiftObject {
    id userNotificationRequestsSubscriber;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE10CameraView : UIView {
    id timeoutLength;
    id zoomFactor;
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

@interface _TtC10Dexcom_ONE30TechnicalAlertDetailsViewModel : _TtCs12_SwiftObject {
    id accessibilityText;
    id defaultTechnicalAlertSound;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE16ReLoginViewModel : _TtCs12_SwiftObject {
    id appCore;
    id localizeURL;
    id webViewAction;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE38SensorFailedRestartAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id bannerTitleLabel;
    id noAlertsLabel;
    id instructionTitleLabel;
    id instructionDescriptionLabel;
    id okButton;
    id sensorRemovalInstructionsButton;
}
@property (nonatomic) UILabel * bannerTitleLabel;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * instructionTitleLabel;
@property (nonatomic) UILabel * instructionDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) UIButton * sensorRemovalInstructionsButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (void)sensorRemovalInstructionsButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24PersistentCountdownTimer : _TtCs12_SwiftObject {
    id _countdownCompleted;
    id countdownCheckTimer;
    id countdownTimerName;
    id countdownStartDate;
    id countdownTimeInterval;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONEP33_E929746528AB43759A76DD570BC4F92B7Toaster : _TtCs12_SwiftObject {
    id viewController;
    id baseInset;
    id animationDuration;
    id containerView;
    id toasts;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONEP33_E929746528AB43759A76DD570BC4F92B5Toast : _TtCs12_SwiftObject {
    id uuid;
    id state;
    id toastableView;
    id needsDismissal;
    id horizontalPadding;
    id siblingToasterIDs;
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

@interface _TtC10Dexcom_ONE26TransmitterSNHintViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE47AlertThresholdsActionSheetContentViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
    id viewModel;
    id recommendedSettingsViewModel;
    id snackBar;
    id subscribers;
    id alertsTitleLabel;
    id highAlertLabel;
    id lowAlertLabel;
    id lowThresholdSwitch;
    id highThresholdSwitch;
    id lowThresholdSlider;
    id highThresholdSlider;
    id lowSliderView;
    id highSliderView;
    id lowThresholdValueLabel;
    id highThresholdValueLabel;
    id lowThresholdStatusLabel;
    id highThresholdStatusLabel;
    id sliderHapticFeedbackGenerator;
    id previousSliderValue;
    id alertProfiles;
}
@property (nonatomic) UILabel * alertsTitleLabel;
@property (nonatomic) UILabel * highAlertLabel;
@property (nonatomic) UILabel * lowAlertLabel;
@property (nonatomic) UISwitch * lowThresholdSwitch;
@property (nonatomic) UISwitch * highThresholdSwitch;
@property (nonatomic) UISlider * lowThresholdSlider;
@property (nonatomic) UISlider * highThresholdSlider;
@property (nonatomic) UIView * lowSliderView;
@property (nonatomic) UIView * highSliderView;
@property (nonatomic) UILabel * lowThresholdValueLabel;
@property (nonatomic) UILabel * highThresholdValueLabel;
@property (nonatomic) UILabel * lowThresholdStatusLabel;
@property (nonatomic) UILabel * highThresholdStatusLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)v1;
- (void)switchChanged:(id)v1;
- (void)sliderChange:(id)v1;
- (void)didEndChanging:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21WarmupStatusViewModel : _TtCs12_SwiftObject {
    id _statusText;
    id _timeRemainingText;
    id warmupTimeSubscriber;
    id timeRemaining;
    id warmupCompleteToastIdentifier;
    id warmingInProgressToastIdentifier;
    id warmingInProgressToastKey;
    id warmingToast;
    id currentVisibleToast;
    id warmUpCompleteMessage;
    id warmUpCompleteButtonTitle;
    id warmingInProgressMessage;
    id warmingInProgressButtonTitle;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31SensorFailedAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id bannerTitleLabel;
    id noAlertsLabel;
    id instructionTitleLabel;
    id instructionDescriptionLabel;
    id okButton;
    id sensorRemovalInstructionsButton;
}
@property (nonatomic) UILabel * bannerTitleLabel;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * instructionTitleLabel;
@property (nonatomic) UILabel * instructionDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) UIButton * sensorRemovalInstructionsButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (void)sensorRemovalInstructionsButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29SensorCodeStartViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id accessibilityIDText;
    id heightConstant;
    id onboardingModel;
    id enterSensorLabel;
    id enterSensorDescriptionLabel;
    id backButton;
    id imageHeightConstraint;
    id alreadyInSessionButton;
    id takePhotoButton;
    id enterCodeManuallyButton;
}
@property (nonatomic) UILabel * enterSensorLabel;
@property (nonatomic) UILabel * enterSensorDescriptionLabel;
@property (nonatomic) UIBarButtonItem * backButton;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) _TtC10Dexcom_ONE16DesignableButton * alreadyInSessionButton;
@property (nonatomic) UIButton * takePhotoButton;
@property (nonatomic) UIButton * enterCodeManuallyButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)backPressed:(id)v1;
- (void)takePhotoButtonTapped:(id)v1;
- (void)enterCodeManuallyButtonTapped:(id)v1;
- (void)alreadyInSessionButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE35OnboardingTargetRangeViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id targetRangeImage;
    id titleLabel;
    id targetRangeTitleLabel;
    id targetRangeDescription;
    id nextButton;
}
@property (nonatomic) UIImageView * targetRangeImage;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * targetRangeTitleLabel;
@property (nonatomic) UILabel * targetRangeDescription;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)next;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30BriefSensorIssueViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id statusLabel;
    id detailLabel;
    id helpButton;
    id imageHeightConstraint;
    id imageTopConstraint;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) NSLayoutConstraint * imageTopConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19DebugViewController : _TtC10Dexcom_ONE20BaseUIViewController<UITextFieldDelegate,UIPickerViewDataSource,UIPickerViewDelegate> {
    id trendPickerComponentNumber;
    id egvTextField;
    id trendPickerView;
    id secretTextField;
    id messageLabel;
    id trendPickerData;
}
@property (nonatomic) UITextField * egvTextField;
@property (nonatomic) UIPickerView * trendPickerView;
@property (nonatomic) UITextField * secretTextField;
@property (nonatomic) UILabel * messageLabel;
- (void)sendNewEGVPressed:(id)v1;
- (void)sendThreeDaysOfEGVPressed:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)dismissPressedWithSender:(id)v1;
- (void)showDBInfo:(id)v1;
- (void)showHumanFactorViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29InLineAcknowledgableToastable : UIView {
    id contentView;
    id bodyLabel;
    id acknowledgeButton;
    id body;
    id identifier;
    id timeToDismiss;
    id completion;
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

@interface _TtC10Dexcom_ONE20SupportTableViewCell : UITableViewCell {
    id titleLabel;
    id badge;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * badge;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26BluetoothOffViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id statusLabel;
    id detailLabel;
    id helpButton;
    id imageHeightConstraint;
    id imageTopConstraint;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) NSLayoutConstraint * imageTopConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE34InvalidTransmitterSNViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id reEnterSNLabel;
    id takePhotoButton;
    id enterSNButton;
    id actionSheetDelegate;
    id delegate;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * reEnterSNLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * takePhotoButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * enterSNButton;
- (void)takePhotoPressed:(id)v1;
- (void)enterManuallyPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24ConnectionErrorViewModel : _TtCs12_SwiftObject {
    id appCore;
    id gcsService;
    id accessToken;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE12CAMSCloudAPI : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE14AppCoreService : _TtCs12_SwiftObject {
    id d1DisplayState;
    id bleState;
    id blePermissionState;
    id authStatus;
    id persistenceError;
    id isCommunicatingWithTx;
    id lifeCycleManager;
    id healthSystemBackgroundTaskName;
    id healthKitQueue;
    id appCore;
    id appCoreEventSubscriptions;
    id $__lazy_storage_$_bulkDataLogging;
    id lastThirdPartyUpload;
    id thirdPartyHealthSystem;
    id _storedSensorCode;
    id _isNewSensorPaired;
}
- (void)refreshDisplayState;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17BaseUIApplication : UIApplication
- (bool)sendAction:(SEL)v1 to:(id)v2 from:(id)v3 forEvent:(id)v4;
- (id)init;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28MVVMOnboardingViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id viewModel;
}
- (id)initWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24WarmupHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id helpTextLabel;
    id bottomConstraint;
    id actionSheetDelegate;
    id bottomConstraintFactor;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * helpTextLabel;
@property (nonatomic) NSLayoutConstraint * bottomConstraint;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31DiskSpaceLowAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21ReportsViewController : _TtC10Dexcom_ONE20BaseUIViewController {
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

@interface _TtC10Dexcom_ONE24GlucoseRepositoryMonitor : _TtCs12_SwiftObject {
    id displayStateSubscriber;
    id bleStateSubscriber;
    id warmupTimer;
    id pairingExpireTimer;
    id warmupInfo;
    id checkSubscriber;
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
- (void)updateTransmitterPairingStatus;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32AllowNotificationsViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id shortNextButton;
    id fullWhiteNextButton;
    id fullGreenNextButton;
    id titleLabel;
    id descriptionLabel;
}
@property (nonatomic) UIButton * shortNextButton;
@property (nonatomic) UIButton * fullWhiteNextButton;
@property (nonatomic) UIButton * fullGreenNextButton;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)viewWillAppear:(bool)v1;
- (void)appMovedToForeground;
- (void)fullGreenNextButtonPressed;
- (void)shortNextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25BulkDataAlertStateTracker : _TtCs12_SwiftObject {
    id alertStatusMap;
    id inAppMap;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29FeatureFlagsRepositoryMonitor : _TtCs12_SwiftObject {
    id featureFlagRepository;
    id onFeatureFlagUpdate;
    id featureFlags;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE40TransmitterPairingTimedOutViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id descriptionLabel;
    id takePhotoButton;
    id enterManuallyButton;
    id actionSheetDelegate;
    id delegate;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * takePhotoButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * enterManuallyButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)takePhotoPressed:(id)v1;
- (void)enterManuallyPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE37TransmitterExpiredAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id bannerTitleLabel;
    id noAlertsLabel;
    id instructionTitleLabel;
    id instructionDescriptionLabel;
    id okButton;
    id sensorRemovalInstructionsButton;
}
@property (nonatomic) UILabel * bannerTitleLabel;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * instructionTitleLabel;
@property (nonatomic) UILabel * instructionDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) UIButton * sensorRemovalInstructionsButton;
- (void)viewDidLoad;
- (void)OKButtonPressed:(id)v1;
- (void)sensorRemovalInstructionsButtonPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE9LifeMeter : UIView {
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

@interface _TtC10Dexcom_ONE30BluetoothOffHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
    id titleLabel;
    id textLabel1;
    id textLabel2;
    id textLabel3;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * textLabel1;
@property (nonatomic) UILabel * textLabel2;
@property (nonatomic) UILabel * textLabel3;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE11AppDelegate : UIResponder<UIApplicationDelegate> {
    id applicationServiceStarter;
}
- (bool)application:(id)v1 didFinishLaunchingWithOptions:(id)v2;
- (bool)application:(id)v1 shouldAllowExtensionPointIdentifier:(id)v2;
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

@interface _TtC10Dexcom_ONE18TakePhotoViewModel : _TtCs12_SwiftObject {
    id objectType;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26SignalLossDetailsViewModel : _TtCs12_SwiftObject {
    id indexPaths;
    id accessibilityIDText;
    id accessibilityText;
    id defaultSignalLossAlertSound;
    id forMoreThanMinuteInterval;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30RecoverableErrorViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id subtitleLabel;
    id bodyLabel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * subtitleLabel;
@property (nonatomic) UILabel * bodyLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25ApplicationServiceStarter : _TtCs12_SwiftObject {
    id cancelTimer;
    id cancellable;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE12WebViewModel : _TtCs12_SwiftObject {
    id url;
    id localizeURL;
    id webViewAction;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25AppStateRepositoryMonitor : _TtCs12_SwiftObject {
    id keyValueRepository;
    id _showAlertThresholdWarning;
    id _showAlertSettingsWarning;
    id _showLowGlucoseAlertInfo;
    id _showHighGlucoseAlertInfo;
    id _showInitialLegalAgreements;
    id _showGCSConfirmationModal;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33SensorInsertionHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id mainTitleLabel;
    id instructionsLabel;
    id instructionsButton;
    id backButtonAccessibilityIDText;
}
@property (nonatomic) UILabel * mainTitleLabel;
@property (nonatomic) UILabel * instructionsLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * instructionsButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)insertionInstructionsButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21BlockingAlertsMonitor : _TtCs12_SwiftObject {
    id diskSpaceEventPublisher;
    id databaseEventPublisher;
    id currentBlockingAlert;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE15LegalAgreements : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE20BlockingAlertsHelper : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28OnboardingHomeViewController : UINavigationController<UINavigationControllerDelegate>
- (void)viewDidLoad;
- (void)navigationController:(id)v1 willShowViewController:(id)v2 animated:(bool)v3;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE27TransmitterEOLTwoWeeksAlert : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26MinutePickerViewController : _TtC10Dexcom_ONE20BaseUIViewController<UIPickerViewDataSource,UIPickerViewDelegate> {
    id saveButton;
    id cancelButton;
    id minutePickerView;
    id minuteLabel;
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
@property (nonatomic) UIButton * saveButton;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UIPickerView * minutePickerView;
@property (nonatomic) UILabel * minuteLabel;
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

@interface _TtC10Dexcom_ONE29GcsConfirmationViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id countryOfResidenceLabel;
    id unitOfMeasureLabel;
    id wrongCountryButton;
    id confirmButton;
    id $__lazy_storage_$_appStateRepository;
}
@property (nonatomic) UILabel * countryOfResidenceLabel;
@property (nonatomic) UILabel * unitOfMeasureLabel;
@property (nonatomic) UIButton * wrongCountryButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * confirmButton;
- (void)viewDidLoad;
- (void)onTechnicalSupportButtonTap:(id)v1;
- (void)onConfirmButtonTap:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29SignalLossAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE10GCSService : _TtCs12_SwiftObject {
    id cloudSyncOperationQueue;
    id gcsURLRepositoryMonitor;
    id featureFlagRepositoryMonitor;
    id alertProfileRepositoryMonitor;
    id gcsApi;
    id statusPublisher;
    id gcsURLResult;
    id gcsFeatureFlagResult;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28DataReConsentsViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id consentRequiredLabel;
    id tapContinueLabel;
    id continueButton;
    id dismissButton;
    id actionSheetDelegate;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * consentRequiredLabel;
@property (nonatomic) UILabel * tapContinueLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * continueButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * dismissButton;
- (void)viewDidLoad;
- (void)onContinueButtonTap:(id)v1;
- (void)dismissButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32TransmitterPairingViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id descriptionLabel;
    id helpButton;
    id loadingImageView;
    id noAlertsLabel;
    id txId;
    id subscribers;
}
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) UIImageView * loadingImageView;
@property (nonatomic) UILabel * noAlertsLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)helpButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE27AppleHealthSummaryViewModel : _TtCs12_SwiftObject {
    id _appleHealthSummaryModel;
    id observers;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24SignalLossViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id statusLabel;
    id detailLabel;
    id helpButton;
    id imageHeightConstraint;
    id imageTopConstraint;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) NSLayoutConstraint * imageTopConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28AllowBluetoothViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id titleText;
    id descriptionText;
    id step1Label;
    id step2Label;
    id step3Label;
    id step4Label;
    id allowButton;
    id nextButton;
    id instructionsStackView;
    id scrollViewTopConstraint;
    id scrollView;
    id contentStackView;
    id blePermissionStatusSubscription;
    id appLifeCycleSubscription;
}
@property (nonatomic) UILabel * titleText;
@property (nonatomic) UILabel * descriptionText;
@property (nonatomic) UILabel * step1Label;
@property (nonatomic) UILabel * step2Label;
@property (nonatomic) UILabel * step3Label;
@property (nonatomic) UILabel * step4Label;
@property (nonatomic) UIButton * allowButton;
@property (nonatomic) UIButton * nextButton;
@property (nonatomic) UIStackView * instructionsStackView;
@property (nonatomic) NSLayoutConstraint * scrollViewTopConstraint;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIStackView * contentStackView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidLayoutSubviews;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)enableBluetooth;
- (void)nextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30AlertProfilesRepositoryMonitor : _TtCs12_SwiftObject {
    id alertProfileRepository;
    id alertThresholds;
    id timeManager;
    id alertScheduleQueue;
    id alertScheduleTimer;
    id alertScheduleTrigger;
    id lastProfileUpdate;
    id onAlertProfilesUpdate;
    id alertProfiles;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24AppleHealthTableViewCell : UITableViewCell {
    id titleLabel;
    id statusLabel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * statusLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32EnterTransmitterSNViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id enterTxSNLabel;
    id enterTxSNDescriptionLabel;
    id takePhotoButton;
    id enterSNManuallyButton;
    id backButton;
    id alreadyInSessionButton;
    id imageHeightConstraint;
    id onboardingModel;
    id accessibilityIDText;
    id heightConstant;
}
@property (nonatomic) UILabel * enterTxSNLabel;
@property (nonatomic) UILabel * enterTxSNDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * takePhotoButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * enterSNManuallyButton;
@property (nonatomic) UIBarButtonItem * backButton;
@property (nonatomic) _TtC10Dexcom_ONE16DesignableButton * alreadyInSessionButton;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)backPressed:(id)v1;
- (void)takePhotoButtonTapped:(id)v1;
- (void)enterSNManuallyButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE34PhoneConflictSummaryViewController : UIViewController {
    id closeBarButtonItem;
    id conflictsTitle;
    id tableView;
    id phoneConflictsIcon;
    id mainDescription;
    id viewModel;
    id conflictItemIdentifier;
    id phoneConflictHelpSubscription;
    id $__lazy_storage_$_dataSource;
}
@property (nonatomic) UIBarButtonItem * closeBarButtonItem;
@property (nonatomic) UILabel * conflictsTitle;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) UIImageView * phoneConflictsIcon;
@property (nonatomic) UILabel * mainDescription;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)close:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21GlucoseViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id collectionView;
    id phoneConflictIconView;
    id phoneConflictCountLabel;
    id layout;
    id phoneConflictToastId;
    id cellID;
    id cellSpacing;
    id phoneConflictViewModel;
    id glucoseSubscribers;
    id phoneConflictSubscribers;
    id glucoseViewDataSource;
    id phoneConflictSnackBar;
    id treatmentDecisionToast;
    id createdToaster;
    id magGlassViewController;
    id trendGraphViewController;
    id cellItem;
}
@property (nonatomic,retain) UICollectionView * collectionView;
@property (nonatomic) UIView * phoneConflictIconView;
@property (nonatomic) _TtC10Dexcom_ONE10BadgeLabel * phoneConflictCountLabel;
@property (nonatomic) UICollectionViewFlowLayout * layout;
- (id)initWithCoder:(id)v1;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32TransmitterSettingsTableViewCell : UITableViewCell {
    id titleLabel;
    id transmitterIcon;
    id statusLabel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UIImageView * transmitterIcon;
@property (nonatomic) UILabel * statusLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE39SensorPeelOffInstructionsViewController : _TtC10Dexcom_ONE36SensorInstructionsBaseViewController {
    id step4Title;
    id step4Text;
    id step5Title;
    id step5aText;
    id step5bText;
    id step5cText;
    id step5dText;
    id step6Title;
    id step6Text;
    id nextButton;
}
@property (nonatomic) UILabel * step4Title;
@property (nonatomic) UILabel * step4Text;
@property (nonatomic) UILabel * step5Title;
@property (nonatomic) UILabel * step5aText;
@property (nonatomic) UILabel * step5bText;
@property (nonatomic) UILabel * step5cText;
@property (nonatomic) UILabel * step5dText;
@property (nonatomic) UILabel * step6Title;
@property (nonatomic) UILabel * step6Text;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)nextButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21ToolTipViewController : _TtC10Dexcom_ONE20BaseUIViewController {
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

@interface _TtC10Dexcom_ONE21MinutePickerViewModel : _TtCs12_SwiftObject {
    id pickerMinutes;
    id originalMinutes;
    id currentRow;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24MainTabBarViewController : UITabBarController {
    id mainTabBar;
    id repositoryMonitor;
    id warmingProcessViewModel;
    id subscribers;
}
@property (nonatomic) UITabBar * mainTabBar;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36TransmitterPairingHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id searchingLabel;
    id pairingLabel;
    id toPairLabel;
    id sensorLabel;
    id transmitterLabel;
    id keepPhoneCloseLabel;
    id checkTransmitterLabel;
    id doneButton;
    id navItem;
    id transmitterAttachedView;
    id transmitterHolderView;
    id keepPhoneCloseView;
    id checkTransmitterSNView;
    id topConstraint;
    id topConstraintFactor;
    id bottomConstraintFactor;
    id backButtonAccessibilityIDText;
    id txId;
}
@property (nonatomic) UILabel * searchingLabel;
@property (nonatomic) UILabel * pairingLabel;
@property (nonatomic) UILabel * toPairLabel;
@property (nonatomic) UILabel * sensorLabel;
@property (nonatomic) UILabel * transmitterLabel;
@property (nonatomic) UILabel * keepPhoneCloseLabel;
@property (nonatomic) UILabel * checkTransmitterLabel;
@property (nonatomic) UIBarButtonItem * doneButton;
@property (nonatomic) UINavigationItem * navItem;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * transmitterAttachedView;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * transmitterHolderView;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * keepPhoneCloseView;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * checkTransmitterSNView;
@property (nonatomic) NSLayoutConstraint * topConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)dismissHelpScreen;
- (void)doneButtonTapped:(id)v1;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23TimeIssueViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id statusLabel;
    id detailLabel;
    id helpButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE13AlertsManager : _TtCs12_SwiftObject {
    id timeManager;
    id minimumAlertTimeSpacing;
    id _nextUIAlert;
    id currentNotificationViewController;
    id latestUIAlertLocalNotificationIdentifier;
    id firedLocalNotificationIdentifiers;
    id nextUIAlertSubscriber;
    id scheduledAlertTimes;
    id localNotificationSubscriberPool;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE12DebugAppCore : _TtCs12_SwiftObject {
    id isCommunicatingWithTx;
    id glucoseReadings;
    id acceleratedTimeInterval;
    id fixedCurrentTime;
    id d1DisplayState;
    id bleState;
    id blePermissionState;
    id authStatus;
    id persistenceErrorEvent;
    id timeLossState;
    id diskSpaceState;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28ActionSheetDismissalAnimator : NSObject<UIViewControllerAnimatedTransitioning> {
    id interactionController;
}
- (double)transitionDuration:(id)v1;
- (void)animateTransition:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE14LoginViewModel : _TtCs12_SwiftObject {
    id appCore;
    id gcsService;
    id localizeURL;
    id showLogin;
    id webViewAction;
    id gcsResult;
    id subscribers;
    id maximumRetryCount;
    id retryCount;
    id accessToken;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE8Toasters : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28BackdoorDebugAlertsViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE34LegalAgreementsModalViewController : DXCMLegalAgreementsModalVC {
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

@interface _TtC10Dexcom_ONE23GCSURLRepositoryMonitor : _TtCs12_SwiftObject {
    id urlRepository;
    id onURLUpdate;
    id urls;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24ComputeACMViewController : _TtC10Dexcom_ONE20BaseUIViewController
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25GlucoseTimeIntervalButton : _TtC10Dexcom_ONE14DXCMPillButton {
    id timeInterval;
}
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33PairingUnsuccessfulViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id statusLabel;
    id detailLabel;
    id helpButton;
    id txId;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)helpButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23AlertsSettingsPublisher : _TtCs12_SwiftObject {
    id initialValue;
    id newSettings;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE13SceneDelegate : UIResponder<UIWindowSceneDelegate> {
    id applicationServiceStarter;
    id window;
    id splashWindow;
    id privacyWindow;
    id onboardingState;
}
@property (nonatomic,retain) UIWindow * window;
- (void)scene:(id)v1 willConnectToSession:(id)v2 options:(id)v3;
- (void)sceneWillEnterForeground:(id)v1;
- (void)sceneDidEnterBackground:(id)v1;
- (void)sceneDidBecomeActive:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE8Snackbar : UIView {
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

@interface _TtC10Dexcom_ONE14DesignableView : UIView
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19BSIDetailsViewModel : _TtCs12_SwiftObject {
    id indexPaths;
    id accessibilityIDText;
    id accessibilityText;
    id defaultBSIAlertSound;
    id forMoreThanMinuteInterval;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE20SetupWizardViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE41OnboardingSafetyInformationViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
    id fullStatementButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * fullStatementButton;
- (void)viewDidLoad;
- (void)next;
- (void)showSafetyStatement;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE37PairingUnsuccessfulHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id tryAgainButton;
    id troubleshootingLabel;
    id tip1TitleLabel;
    id tip2TitleLabel;
    id tip3TitleLabel;
    id tip4TitleLabel;
    id doneButton;
    id tryPairingAgainButton;
    id replaceSensorButton;
    id transmitterAttachedView;
    id transmitterHolderView;
    id keepPhoneCloseView;
    id checkTransmitterView;
    id navItem;
    id scrollView;
    id contentView;
    id backButtonAccessibilityIDText;
    id txId;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UIButton * tryAgainButton;
@property (nonatomic) UILabel * troubleshootingLabel;
@property (nonatomic) UILabel * tip1TitleLabel;
@property (nonatomic) UILabel * tip2TitleLabel;
@property (nonatomic) UILabel * tip3TitleLabel;
@property (nonatomic) UILabel * tip4TitleLabel;
@property (nonatomic) UIBarButtonItem * doneButton;
@property (nonatomic) UIButton * tryPairingAgainButton;
@property (nonatomic) UIButton * replaceSensorButton;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * transmitterAttachedView;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * transmitterHolderView;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * keepPhoneCloseView;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * checkTransmitterView;
@property (nonatomic) UINavigationItem * navItem;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIView * contentView;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)doneButtonTapped:(id)v1;
- (void)tryPairingAgainButtonTapped:(id)v1;
- (void)replaceSensorButtonTapped:(id)v1;
- (void)onTransmitterAttachedViewTapped:(id)v1;
- (void)onTransmitterHolderViewTapped:(id)v1;
- (void)onPhoneCloseViewTapped:(id)v1;
- (void)onCheckTransmitterSNViewTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21PhoneConflictItemCell : UITableViewCell {
    id conflictName;
}
@property (nonatomic) UILabel * conflictName;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE27BackdoorTableViewController : _TtC10Dexcom_ONE25BaseUITableViewController {
    id mockSwitch;
    id unitsOfMeasureValueLabel;
    id targetRangeValueLabel;
    id switchEnvironmentsCell;
    id debugViewModel;
}
@property (nonatomic) UISwitch * mockSwitch;
@property (nonatomic) UILabel * unitsOfMeasureValueLabel;
@property (nonatomic) UILabel * targetRangeValueLabel;
@property (nonatomic) UITableViewCell * switchEnvironmentsCell;
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

@interface _TtC10Dexcom_ONE33PhoneConflictNavigationController : UINavigationController {
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

@interface _TtC10Dexcom_ONE27TimeIssueHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
    id noAlertsWarningLabel;
    id titleLabel;
    id textLabel1;
    id textLabel2;
}
@property (nonatomic) UILabel * noAlertsWarningLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * textLabel1;
@property (nonatomic) UILabel * textLabel2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE12DXCMCardView : UIView {
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

@interface _TtC10Dexcom_ONE18RepositoryMonitors : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE16HeaderFooterView : UITableViewHeaderFooterView {
    id label;
    id bottomConstraint;
    id viewType;
    id isHeader;
}
@property (nonatomic) UILabel * label;
@property (nonatomic) NSLayoutConstraint * bottomConstraint;
- (id)initWithReuseIdentifier:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29PhoneConflictInstructionsCell : UITableViewCell {
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

@interface _TtC10Dexcom_ONE24LocalNotificationManager : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25SettingsRepositoryMonitor : _TtCs12_SwiftObject {
    id _appleHealthEnabledStatus;
    id _unitOfMeasure;
    id _thresholds;
    id _trendGraphHeight;
    id _trendGraphTargetRangeStatus;
    id _trendGraphTimeRange;
    id observers;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30GlucoseContainerViewController : UIViewController {
    id glucoseViewDataSource;
    id observers;
    id glucoseViewController;
    id glucoseContainerHeaderView;
}
@property (nonatomic) UIView * glucoseContainerHeaderView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (id)embedGlucoseViewControllerWithCoder:(id)v1 sender:(id)v2 segueIdentifier:(id)v3;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE29CrawlerMenuCollectionViewCell : UICollectionViewCell {
    id menuElementLabel;
    id menuElement;
}
@property (nonatomic) UILabel * menuElementLabel;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE13HelpViewModel : _TtCs12_SwiftObject {
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36SensorInstructionsBaseViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id delegate;
    id viewModel;
}
- (void)viewDidLoad;
- (void)showConfirmationModal;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32PairNewTransmitterViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id pairNewTransmitterButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * pairNewTransmitterButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)pairNewTransmitterPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE14BulkDataLogger : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24TrendGraphViewController : UIViewController {
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
    id trendgraphDataSource;
    id pendingActions;
}
@property (nonatomic) UIView * graphContainer;
@property (nonatomic) _TtC12PhoenixUIKit18GraphContainerView * skView;
@property (nonatomic) UIButton * moreButton;
@property (nonatomic) _TtC10Dexcom_ONE25GlucoseTimeIntervalButton * hourButton3;
@property (nonatomic) _TtC10Dexcom_ONE25GlucoseTimeIntervalButton * hourButton6;
@property (nonatomic) _TtC10Dexcom_ONE25GlucoseTimeIntervalButton * hourButton12;
@property (nonatomic) _TtC10Dexcom_ONE25GlucoseTimeIntervalButton * hourButton24;
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

@interface _TtC10Dexcom_ONE39TwentyFourHourSensorAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31DiskSpaceCriticalViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsTitle;
    id appStoppedWorkingTitle;
    id diskSpaceMessage;
}
@property (nonatomic) UILabel * noAlertsTitle;
@property (nonatomic) UILabel * appStoppedWorkingTitle;
@property (nonatomic) UILabel * diskSpaceMessage;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28SecurityScreenViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id copyrightLabel;
}
@property (nonatomic) UILabel * copyrightLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24ClarityCardInfoViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE38SensorAttachInstructionsViewController : _TtC10Dexcom_ONE36SensorInstructionsBaseViewController {
    id sensorAttachStep7Title;
    id sensorAttachStep7aText;
    id sensorAttachStep7bText;
    id sensorAttachStep7cText;
    id sensorAttachStep7dText;
    id sensorAttachStep7eText;
    id nextButton;
}
@property (nonatomic) UILabel * sensorAttachStep7Title;
@property (nonatomic) UILabel * sensorAttachStep7aText;
@property (nonatomic) UILabel * sensorAttachStep7bText;
@property (nonatomic) UILabel * sensorAttachStep7cText;
@property (nonatomic) UILabel * sensorAttachStep7dText;
@property (nonatomic) UILabel * sensorAttachStep7eText;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)nextButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE25GlucoseCollectionViewCell : UICollectionViewCell
- (id)preferredLayoutAttributesFittingAttributes:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE34OnboardingTrendGraphViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id trendGraphImage;
    id titleLabel;
    id trendGraphTitleLabel;
    id trendGraphDescription;
    id nextButton;
}
@property (nonatomic) UIImageView * trendGraphImage;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * trendGraphTitleLabel;
@property (nonatomic) UILabel * trendGraphDescription;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)nextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE14DXCMPillButton : UIButton {
    id customTitleInsets;
    id isHaptic;
    id borderColor;
    id borderWidth;
    id tapMargin;
    id alwaysShowBorder;
}
@property (nonatomic) bool isHaptic;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double tapMargin;
@property (nonatomic) bool alwaysShowBorder;
@property (nonatomic,readonly) struct CGSize intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (void)sendAction:(SEL)v1 to:(id)v2 forEvent:(id)v3;
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE38TransmitterSettingsTableViewController : _TtC10Dexcom_ONE25BaseUITableViewController {
    id pairNewTitle;
    id snTitle;
    id abTitle;
    id activatedOnTitle;
    id firmwareTitle;
    id softwareNumberTitle;
    id pairNewTransmitterCell;
    id snValueLabel;
    id abValueLabel;
    id activatedOnLabel;
    id firmwareValueLabel;
    id softwareNumberValueLabel;
    id transmitterSettingsSubscriber;
    id sensorSessionViewModel;
    id settingsViewModel;
    id accessibilityIDText;
}
@property (nonatomic) UILabel * pairNewTitle;
@property (nonatomic) UILabel * snTitle;
@property (nonatomic) UILabel * abTitle;
@property (nonatomic) UILabel * activatedOnTitle;
@property (nonatomic) UILabel * firmwareTitle;
@property (nonatomic) UILabel * softwareNumberTitle;
@property (nonatomic) UITableViewCell * pairNewTransmitterCell;
@property (nonatomic) UILabel * snValueLabel;
@property (nonatomic) UILabel * abValueLabel;
@property (nonatomic) UILabel * activatedOnLabel;
@property (nonatomic) UILabel * firmwareValueLabel;
@property (nonatomic) UILabel * softwareNumberValueLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30HourMinutePickerViewController : _TtC10Dexcom_ONE20BaseUIViewController {
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
@property (nonatomic) UIButton * saveButton;
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

@interface _TtC10Dexcom_ONE27SensorRemovalViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id step1Title;
    id step1Text;
    id step2Title;
    id step2Text;
    id step3Title;
    id step3Text;
    id backButton;
    id accessibilityIDText;
}
@property (nonatomic) UILabel * step1Title;
@property (nonatomic) UILabel * step1Text;
@property (nonatomic) UILabel * step2Title;
@property (nonatomic) UILabel * step2Text;
@property (nonatomic) UILabel * step3Title;
@property (nonatomic) UILabel * step3Text;
@property (nonatomic,retain) UIBarButtonItem * backButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)backPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30SensorCodeManualViewController : _TtC10Dexcom_ONE20BaseUIViewController<UITextInputTraits> {
    id enterSensorCodeLabel;
    id sensorCodeStackView;
    id successSnackBar;
    id submitButton;
    id submitView;
    id submitViewBottomConstraint;
    id snackBarBottomConstraint;
    id successSnackBarLabel;
    id isKeyBoardShown;
    id sensorCode;
    id maxSensorCodeLength;
    id sensorCodeSpacingConstant;
    id snackBarBottomConstant;
    id delegate;
    id keyboardType;
    id keyboardAppearance;
    id canEdit;
}
@property (nonatomic) UILabel * enterSensorCodeLabel;
@property (nonatomic) UIStackView * sensorCodeStackView;
@property (nonatomic) UIView * successSnackBar;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * submitButton;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * submitView;
@property (nonatomic) NSLayoutConstraint * submitViewBottomConstraint;
@property (nonatomic) NSLayoutConstraint * snackBarBottomConstraint;
@property (nonatomic) UILabel * successSnackBarLabel;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic,readonly) bool canBecomeFirstResponder;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)keyboardActivityWithNotification:(id)v1;
- (void)submitButtonTapped:(id)v1;
- (void)showKeyboard;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31AlertThresholdSettingsViewModel : _TtCs12_SwiftObject {
    id thresholdDataSource;
    id toolTipDescription;
    id currentSetting;
    id tooltipDelegate;
    id showLowGlucoseAlertInfo;
    id showHighGlucoseAlertInfo;
    id subscribers;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17SnackbarToastable : UIView {
    id contentView;
    id stackView;
    id iconImageView;
    id messageLabel;
    id duration;
    id message;
    id icon;
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

@interface _TtC10Dexcom_ONEP33_E929746528AB43759A76DD570BC4F92B20ToasterContainerView : UIView {
    id touchableFrame;
}
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE38OnboardingSensorReadingsViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id magGlassImage;
    id sensorReadingTitleLabel;
    id numAndArrowLabel;
    id magGlassImageDescription1;
    id magGlassImageDescription2;
    id trendArrowsTitleLabel;
    id arrowsDescription1;
    id arrowsDescription2;
    id arrowsDescription3;
    id arrowsDescription4;
    id arrowsDescription5;
    id arrowsDescription6;
    id nextButton;
}
@property (nonatomic) UIImageView * magGlassImage;
@property (nonatomic) UILabel * sensorReadingTitleLabel;
@property (nonatomic) UILabel * numAndArrowLabel;
@property (nonatomic) UILabel * magGlassImageDescription1;
@property (nonatomic) UILabel * magGlassImageDescription2;
@property (nonatomic) UILabel * trendArrowsTitleLabel;
@property (nonatomic) UILabel * arrowsDescription1;
@property (nonatomic) UILabel * arrowsDescription2;
@property (nonatomic) UILabel * arrowsDescription3;
@property (nonatomic) UILabel * arrowsDescription4;
@property (nonatomic) UILabel * arrowsDescription5;
@property (nonatomic) UILabel * arrowsDescription6;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)nextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31ActionSheetPresentationAnimator : NSObject<UIViewControllerAnimatedTransitioning>
- (double)transitionDuration:(id)v1;
- (void)animateTransition:(id)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23CgmStatusViewController : _TtC10Dexcom_ONE20BaseUIViewController {
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

@interface _TtC10Dexcom_ONE27ReplaceSensorViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id startNewSensorButton;
    id titleLabel;
}
@property (nonatomic) UIButton * startNewSensorButton;
@property (nonatomic) UILabel * titleLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)startNewSensor:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE35DiskSpaceVeryLowAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23SensorCodeHintViewModel : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19AccountWebViewModel : _TtCs12_SwiftObject {
    id appCore;
    id localizeURL;
    id webViewAction;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24ACMTimeOutViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id dimmingView;
    id loadingImageView;
    id connectionErrorLabel;
    id retryButton;
    id retryingLabel;
    id retryBlock;
}
@property (nonatomic) UIView * dimmingView;
@property (nonatomic) UIImageView * loadingImageView;
@property (nonatomic) UILabel * connectionErrorLabel;
@property (nonatomic) UIButton * retryButton;
@property (nonatomic) UILabel * retryingLabel;
- (void)viewDidLoad;
- (void)retryButtonPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE16DesignableButton : UIButton {
    id imageColor;
}
@property (nonatomic) double borderWidth;
@property (nonatomic,retain) UIColor * borderColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic,retain) UIColor * imageColor;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28SettingsNavigationController : UINavigationController {
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

@interface _TtC10Dexcom_ONE20ActionSheetContainer : _TtC10Dexcom_ONE20BaseUIViewController {
    id contentView;
    id contentViewHeightConstraint;
    id contentViewController;
    id presentationManager;
    id interactionController;
    id toolTipDescription;
    id isDismissable;
}
@property (nonatomic) UIView * contentView;
@property (nonatomic) NSLayoutConstraint * contentViewHeightConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19AlertsSettingsModel : _TtCs12_SwiftObject {
    id alertThresholdSettingsViewModel;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24DataConsentsWebViewModel : _TtCs12_SwiftObject {
    id appCore;
    id localizeURL;
    id webViewAction;
    id subscribers;
    id isDataSharePermitted;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE38TransmitterPlacementHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id backButtonAccessibilityIDText;
}
@property (nonatomic) UILabel * titleLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33ActionSheetPresentationController : UIPresentationController {
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

@interface _TtC10Dexcom_ONE31PhoneConflictHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id phoneConflictsIcon;
    id tableView;
    id tableViewHeight;
    id mainTitle;
    id mainDescription;
    id howToFixButton;
    id dismissButton;
    id conflictItemIdentifier;
    id viewModel;
    id phoneConflictHelpSubscription;
    id $__lazy_storage_$_dataSource;
    id actionSheetDelegate;
}
@property (nonatomic) UIImageView * phoneConflictsIcon;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) NSLayoutConstraint * tableViewHeight;
@property (nonatomic) UILabel * mainTitle;
@property (nonatomic) UILabel * mainDescription;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * howToFixButton;
@property (nonatomic) UIButton * dismissButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)showHowTo:(id)v1;
- (void)dismiss:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE39TransmitterPairingSuccessViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id sensorCode;
    id shouldJoinExistingSession;
    id titleLabel;
    id descriptionLabel;
    id startSensorButton;
    id startSensorWarmupButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * startSensorButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * startSensorWarmupButton;
- (void)viewDidLoad;
- (id)initWithCoder:(id)v1;
- (void)startSensorWarmupButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23AlertInfoViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id icon;
    id titleLabel;
    id descriptionTextView;
    id acknowledgeButton;
    id onAcknowledge;
}
@property (nonatomic) UIImageView * icon;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UITextView * descriptionTextView;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * acknowledgeButton;
- (void)viewDidLoad;
- (void)onAcknowledge:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31SignalLossAlertOnViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id messageView;
}
@property (nonatomic) UILabel * messageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17MaterialTextField : UIView {
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
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * borderAndBackgroundContainer;
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

@interface _TtC10Dexcom_ONE23TakePhotoViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id cameraView;
    id successSnackBar;
    id snackBarText;
    id cancelButton;
    id topLabel;
    id firstInstructionLabel;
    id secondInstructionLabel;
    id tipLabel;
    id instructionsScrollView;
    id instructionsContentView;
    id scrollViewIndicator;
    id delegate;
    id viewModel;
}
@property (nonatomic,retain) _TtC10Dexcom_ONE10CameraView * cameraView;
@property (nonatomic) UIView * successSnackBar;
@property (nonatomic) UILabel * snackBarText;
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UILabel * topLabel;
@property (nonatomic) UILabel * firstInstructionLabel;
@property (nonatomic) UILabel * secondInstructionLabel;
@property (nonatomic) UILabel * tipLabel;
@property (nonatomic) UIScrollView * instructionsScrollView;
@property (nonatomic) UIView * instructionsContentView;
@property (nonatomic) UIView * scrollViewIndicator;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)cancel;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26SettingsTitleTableViewCell : UITableViewCell {
    id iconImageView;
    id titleLabel;
}
@property (nonatomic) UIImageView * iconImageView;
@property (nonatomic) UILabel * titleLabel;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23AcknowledgableToastable : UIView {
    id stackView;
    id titleLabel;
    id bodyLabel;
    id contentView;
    id acknowledgeButton;
    id title;
    id body;
    id buttonTitle;
    id identifier;
    id timeToDismiss;
    id completion;
    id defaultSpacing;
}
@property (nonatomic) UIStackView * stackView;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * bodyLabel;
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIButton * acknowledgeButton;
- (id)initWithCoder:(id)v1;
- (void)acknowledgeButtonPressed:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32OnboardingOverviewViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id overviewCard;
    id overviewButton;
    id overviewTitleLabel;
    id overviewDescriptionLabel;
    id overviewImage;
    id overviewTopSpacer;
    id appSetupCard;
    id appSetupTopSpacer;
    id appSetupImage;
    id appSetupButton;
    id appSetupTitleLabel;
    id appSetupDescriptionLabel;
    id startSensorCard;
    id startSensorTopSpacer;
    id startSensorImage;
    id startSensorButton;
    id startSensorTitleLabel;
    id startSensorDescriptionLabel;
    id subscribers;
    id showInitialLegalAgreements;
    id showGCSConfirmationModal;
}
@property (nonatomic) _TtC10Dexcom_ONE12DXCMCardView * overviewCard;
@property (nonatomic) UIButton * overviewButton;
@property (nonatomic) UILabel * overviewTitleLabel;
@property (nonatomic) UILabel * overviewDescriptionLabel;
@property (nonatomic) UIImageView * overviewImage;
@property (nonatomic) UIView * overviewTopSpacer;
@property (nonatomic) _TtC10Dexcom_ONE12DXCMCardView * appSetupCard;
@property (nonatomic) UIView * appSetupTopSpacer;
@property (nonatomic) UIImageView * appSetupImage;
@property (nonatomic) UIButton * appSetupButton;
@property (nonatomic) UILabel * appSetupTitleLabel;
@property (nonatomic) UILabel * appSetupDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE12DXCMCardView * startSensorCard;
@property (nonatomic) UIView * startSensorTopSpacer;
@property (nonatomic) UIImageView * startSensorImage;
@property (nonatomic) UIButton * startSensorButton;
@property (nonatomic) UILabel * startSensorTitleLabel;
@property (nonatomic) UILabel * startSensorDescriptionLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)handleOverviewTap:(id)v1;
- (void)handleAppSetupTap:(id)v1;
- (void)handleStartSensorTap:(id)v1;
- (void)overviewTapped:(id)v1;
- (void)appSetupTapped:(id)v1;
- (void)onStartSensor;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30OnboardingAlertsViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id titleLabel;
    id alertsTitleLabel;
    id alertsDescriptionLabel;
    id alertsYellowLineDescription;
    id alertsRedLineDescriptionLabel;
    id alertSettingsTitleLabel;
    id settingsAlertsDescriptionLabel;
    id lowAlertLabel;
    id highAlertLabel;
    id signalLossLabel;
    id bsiLabel;
    id alertGraphImage;
    id defaultLowAlertLabel;
    id defaultHighAlertLabel;
    id defaultSignalLossAlertLabel;
    id defaultBSIAlertLabel;
    id nextButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * alertsTitleLabel;
@property (nonatomic) UILabel * alertsDescriptionLabel;
@property (nonatomic) UILabel * alertsYellowLineDescription;
@property (nonatomic) UILabel * alertsRedLineDescriptionLabel;
@property (nonatomic) UILabel * alertSettingsTitleLabel;
@property (nonatomic) UILabel * settingsAlertsDescriptionLabel;
@property (nonatomic) UILabel * lowAlertLabel;
@property (nonatomic) UILabel * highAlertLabel;
@property (nonatomic) UILabel * signalLossLabel;
@property (nonatomic) UILabel * bsiLabel;
@property (nonatomic) UIImageView * alertGraphImage;
@property (nonatomic) UILabel * defaultLowAlertLabel;
@property (nonatomic) UILabel * defaultHighAlertLabel;
@property (nonatomic) UILabel * defaultSignalLossAlertLabel;
@property (nonatomic) UILabel * defaultBSIAlertLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)nextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19NetworkReachability : _TtCs12_SwiftObject {
    id networkStatus;
    id monitor;
    id queue;
    id currentNetworkPath;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32UnrecoverableErrorViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id subtitleLabel;
    id bodyLabel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * subtitleLabel;
@property (nonatomic) UILabel * bodyLabel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE40TransmitterBatteryLowAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30ActionSheetPresentationManager : NSObject<UIViewControllerTransitioningDelegate> {
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

@interface _TtC10Dexcom_ONE31GlucoseAlertsInfoViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id descriptionLabel;
    id lineDescriptionLabel;
    id imageView;
    id scrollView;
    id contentView;
    id okButton;
    id thresholdType;
    id trendGraphImage;
    id actionSheetDelegate;
    id _glucoseAlertsInfoAction;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * lineDescriptionLabel;
@property (nonatomic) UIImageView * imageView;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIButton * okButton;
- (void)onConfirmButtonTap:(id)v1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE12SoundManager : _TtCs12_SwiftObject {
    id alertProfilesRepositoryMonitor;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE11CalloutView : _TtC10Dexcom_ONE12DXCMCardView {
    id timeLabel;
    id glucoseLabel;
}
- (id)init;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE11RadioButton : UIButton {
    id outerCircleLayer;
    id innerCircleLayer;
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

@interface _TtC10Dexcom_ONE29AppBluetoothOffViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id noAlertsLabel;
    id statusLabel;
    id detailLabel;
    id helpButton;
    id imageHeightConstraint;
    id imageTopConstraint;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UILabel * detailLabel;
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) NSLayoutConstraint * imageHeightConstraint;
@property (nonatomic) NSLayoutConstraint * imageTopConstraint;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)helpButtonClicked:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE26SessionEndedViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id sessionEndedBannerView;
    id alertsIconHeightConstraint;
    id contentView;
    id scrollView;
    id sessionEndedLabel;
    id noAlertsLabel;
    id removeSensorTitleLabel;
    id descriptionLabel;
    id okButton;
    id sensorRemovalButton;
    id contentHeight;
    id actionSheetDelegate;
}
@property (nonatomic) UIView * sessionEndedBannerView;
@property (nonatomic) NSLayoutConstraint * alertsIconHeightConstraint;
@property (nonatomic) UIView * contentView;
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UILabel * sessionEndedLabel;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * removeSensorTitleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * sensorRemovalButton;
- (void)viewDidLoad;
- (void)okButtonTapped:(id)v1;
- (void)removeSensorInstructionsButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17AlertsCoreService : _TtCs12_SwiftObject {
    id alertRepository;
    id bulkDataLogger;
    id timeManager;
    id settingsPublisher;
    id glucoseRepositoryMonitor;
    id blockingAlertsMonitor;
    id timeLossMonitor;
    id settingsRepositoryMonitor;
    id bulkDataAlertStateTracker;
    id alertsEngine;
    id subscribers;
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

@interface _TtC10Dexcom_ONE23AcknowledgeableSnackBar : _TtC10Dexcom_ONE8Snackbar
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32TwoHourSensorAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36OnboardingEnableAlertsViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController {
    id titleLabel;
    id alertsLabel;
    id alertDescriptionLabel;
    id iWouldLikeLabel;
    id alertsOnLabel;
    id alertsOffLabel;
    id alertSettingsDescriptionLabel;
    id technicalAlertsDescriptionLabel;
    id alertsOnButton;
    id alertsOffButton;
    id nextButton;
    id originalNextBackgroundColor;
    id alertsEnabled;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * alertsLabel;
@property (nonatomic) UILabel * alertDescriptionLabel;
@property (nonatomic) UILabel * iWouldLikeLabel;
@property (nonatomic) UILabel * alertsOnLabel;
@property (nonatomic) UILabel * alertsOffLabel;
@property (nonatomic) UILabel * alertSettingsDescriptionLabel;
@property (nonatomic) UILabel * technicalAlertsDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * alertsOnButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * alertsOffButton;
@property (nonatomic) UIButton * nextButton;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)alertsOn;
- (void)alertsOff;
- (void)next;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE18SystemTimeProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17SensorSessionCell : UITableViewCell {
    id sensorSessionTitle;
    id sensorImageView;
    id infoLabel;
    id insertionTimeLabel;
    id expireTimeLabel;
    id sensorCodeLabel;
    id warmupTimeLabel;
    id lifeMeter;
    id topButton;
    id bottomButton;
    id lifeMeterContainer;
    id insertionTimeTitleLabel;
    id expirationTimeTitleLabel;
    id sensorCodeTitleLabel;
    id cardView;
    id sensorInfoRefreshTimer;
    id delegate;
    id viewModel;
}
@property (nonatomic) UILabel * sensorSessionTitle;
@property (nonatomic) UIImageView * sensorImageView;
@property (nonatomic) UILabel * infoLabel;
@property (nonatomic) UILabel * insertionTimeLabel;
@property (nonatomic) UILabel * expireTimeLabel;
@property (nonatomic) UILabel * sensorCodeLabel;
@property (nonatomic) UILabel * warmupTimeLabel;
@property (nonatomic) _TtC10Dexcom_ONE9LifeMeter * lifeMeter;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * topButton;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * bottomButton;
@property (nonatomic) UIView * lifeMeterContainer;
@property (nonatomic) UILabel * insertionTimeTitleLabel;
@property (nonatomic) UILabel * expirationTimeTitleLabel;
@property (nonatomic) UILabel * sensorCodeTitleLabel;
@property (nonatomic) _TtC10Dexcom_ONE12DXCMCardView * cardView;
- (void)onTopButton;
- (void)onBottomButton;
- (void)dealloc;
- (void)updateSessionInfoIfNeeded;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE40BackdoorPairNewTransmitterViewController : _TtC10Dexcom_ONE20BaseUIViewController<UITextFieldDelegate> {
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
- (void)viewDidLoad;
- (void)pairTransmitterButtonPressed:(id)v1;
- (void)startSensorButtonPressed:(id)v1;
- (void)stopSensorButtonPressed:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21GlucoseAlertViewModel : _TtCs12_SwiftObject {
    id glucoseViewDataSource;
    id alertType;
    id glucoseCompassPresenter;
    id viewModelSubscriber;
    id _shouldDismissPublisher;
    id _currentGlucose;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21AlertDetailsViewModel : _TtCs12_SwiftObject {
    id selectedIndex;
    id accessibilityText;
    id accessibilityIDText;
    id alertLevelPickerData;
    id levelPickerData;
    id levelPickerSelectedIndex;
    id thresholdType;
    id defaultLowAlertSound;
    id defaultHighAlertSound;
    id toolTipDescription;
    id currentSetting;
    id tooltipDelegate;
    id alertThresholdSettingsViewModel;
    id thresholdSettings;
    id subscribers;
    id showLowGlucoseAlertInfo;
    id showHighGlucoseAlertInfo;
    id forMoreThanMinuteInterval;
    id minimumSnoozeDurationForHigh;
    id minimumSnoozeDurationForLow;
    id minimumDelayFirstAlertDuration;
    id maximumSnoozeDuration;
    id maximumDelayFirstAlertDuration;
    id delayFirstAlertSection;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24InvalidCORViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id errorTitle;
    id invalidCORTitle;
    id descriptionLabel;
    id step1Description;
    id step2Description;
}
@property (nonatomic) UILabel * errorTitle;
@property (nonatomic) UILabel * invalidCORTitle;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * step1Description;
@property (nonatomic) UILabel * step2Description;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17SettingsViewModel : _TtCs12_SwiftObject {
    id _transmitterSettingsModel;
    id observers;
    id _appleHealthModel;
    id displayStateSubscriber;
    id displayStateSubscription;
    id accessibilityIDText;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE27TimeLossAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE9TactSMach : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36TransmitterFailedAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id bannerTitleLabel;
    id noAlertsLabel;
    id instructionTitleLabel;
    id instructionDescriptionLabel;
    id okButton;
    id sensorRemovalInstructionsButton;
}
@property (nonatomic) UILabel * bannerTitleLabel;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * instructionTitleLabel;
@property (nonatomic) UILabel * instructionDescriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) UIButton * sensorRemovalInstructionsButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (void)sensorRemovalInstructionsButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE21GlucoseViewDataSource : _TtCs12_SwiftObject {
    id _trendGraphDataSource;
    id _cgmStatusViewModel;
    id _trendGraphAvailable;
    id _timeIntervalInHours;
    id cgmStatusSubscriber;
    id trendGraphCombinedSubscriber;
    id trendGraphCGMReadingsSubscriber;
    id trendGraphAvailabilitySubscriber;
    id glucoseRepositoryMonitor;
    id settingsRepositoryMonitor;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE10ColorTheme : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE17BackdoorViewModel : _TtCs12_SwiftObject {
    id thresholdsViewModel;
    id alertProfilesRepositoryMonitor;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE30PhoneConflictRepositoryMonitor : _TtCs12_SwiftObject {
    id _currentConflicts;
    id _currentBlockingConflicts;
    id applicationStatusSubscriber;
    id notificationCenter;
    id phoneConflictListUpdated;
    id phoneConflictDetailsVisible;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28SensorCodeHintViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id hintLabel;
    id viewModel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * hintLabel;
- (void)viewWillAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32SensorExpiredAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id bannerTitleLabel;
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id okButton;
    id sensorRemovalInstructionsButton;
}
@property (nonatomic) UILabel * bannerTitleLabel;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
@property (nonatomic) UIButton * sensorRemovalInstructionsButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (void)sensorRemovalInstructionsButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19OnboardingViewModel : _TtCs12_SwiftObject {
    id glucoseUnits;
    id mode;
    id popToViewController;
    id normalFont;
    id boldFont;
    id blePermission;
    id notificationPermission;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE10BadgeLabel : UILabel
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)prepareForInterfaceBuilder;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36SensorSiteInstructionsViewController : _TtC10Dexcom_ONE36SensorInstructionsBaseViewController {
    id step1Title;
    id step1Text1;
    id step1Text2;
    id step1Text3;
    id step1Text4;
    id step1Text5;
    id step1Text5Bones;
    id step1Text5IrritatedSkin;
    id step1Text5Tatoos;
    id step1Text5bumpedAreas;
    id step2Title;
    id step2Text1;
    id step2Text2;
    id step2Text3;
    id step3Title;
    id step3Text1;
    id step3Text2;
    id nextButton;
}
@property (nonatomic) UILabel * step1Title;
@property (nonatomic) UILabel * step1Text1;
@property (nonatomic) UILabel * step1Text2;
@property (nonatomic) UILabel * step1Text3;
@property (nonatomic) UILabel * step1Text4;
@property (nonatomic) UILabel * step1Text5;
@property (nonatomic) UILabel * step1Text5Bones;
@property (nonatomic) UILabel * step1Text5IrritatedSkin;
@property (nonatomic) UILabel * step1Text5Tatoos;
@property (nonatomic) UILabel * step1Text5bumpedAreas;
@property (nonatomic) UILabel * step2Title;
@property (nonatomic) UILabel * step2Text1;
@property (nonatomic) UILabel * step2Text2;
@property (nonatomic) UILabel * step2Text3;
@property (nonatomic) UILabel * step3Title;
@property (nonatomic) UILabel * step3Text1;
@property (nonatomic) UILabel * step3Text2;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
- (void)viewDidLoad;
- (void)nextButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE37BriefSensorIssueAlertOnViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id messageView;
}
@property (nonatomic) UILabel * messageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE36StopSensorConfirmationViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id cancelButton;
    id barTitleLabel;
    id sensorSessionTitle;
    id descriptionTitleLabel;
    id sensorImageView;
    id timeLeftLabel;
    id descriptionLabel;
    id stopSensorButton;
    id lifeMeterContainer;
    id lifeMeter;
    id warmupTimeLabel;
    id viewModel;
    id delegate;
    id sensorInfoRefreshTimer;
    id barTitleText;
    id descriptionTitleText;
}
@property (nonatomic) UIButton * cancelButton;
@property (nonatomic) UILabel * barTitleLabel;
@property (nonatomic) UILabel * sensorSessionTitle;
@property (nonatomic) UILabel * descriptionTitleLabel;
@property (nonatomic) UIImageView * sensorImageView;
@property (nonatomic) UILabel * timeLeftLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * stopSensorButton;
@property (nonatomic) UIView * lifeMeterContainer;
@property (nonatomic) _TtC10Dexcom_ONE9LifeMeter * lifeMeter;
@property (nonatomic) UILabel * warmupTimeLabel;
- (id)initWithCoder:(id)v1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)cancelTapped:(id)v1;
- (void)stopSensorTapped:(id)v1;
- (void)updateSessionInfoIfNeeded;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE33PhoneConflictDetailViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id conflictTitle;
    id conflictDescription;
    id instructionsTitle;
    id actionButtonView;
    id actionButton;
    id instructionsTable;
    id instructionsViewHeight;
    id conflictType;
    id instructionsList;
    id viewModel;
    id cellSpacing;
    id instructionCellIdentifier;
}
@property (nonatomic) UILabel * conflictTitle;
@property (nonatomic) UILabel * conflictDescription;
@property (nonatomic) UILabel * instructionsTitle;
@property (nonatomic) _TtC10Dexcom_ONE14DesignableView * actionButtonView;
@property (nonatomic) UIButton * actionButton;
@property (nonatomic) UITableView * instructionsTable;
@property (nonatomic) NSLayoutConstraint * instructionsViewHeight;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)openSettings:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE43TransmitterAlreadyPairedAlertViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id scrollView;
    id scrollableContentView;
    id nonScrollableContentView;
    id noAlertsLabel;
    id titleLabel;
    id descriptionLabel;
    id instructionTitleLabel;
    id firstInstructionLabel;
    id secondInstructionLabel;
    id thirdInstructionLabel;
    id okButton;
    id actionSheetDelegate;
}
@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) UIView * scrollableContentView;
@property (nonatomic) UIView * nonScrollableContentView;
@property (nonatomic) UILabel * noAlertsLabel;
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * instructionTitleLabel;
@property (nonatomic) UILabel * firstInstructionLabel;
@property (nonatomic) UILabel * secondInstructionLabel;
@property (nonatomic) UILabel * thirdInstructionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31TransmitterSNHintViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id hintLabel;
    id viewModel;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * hintLabel;
- (void)viewWillAppear:(bool)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE23BaseAlertViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19TransmitterEOLAlert : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE16D1AppCoreAdaptor : _TtCs12_SwiftObject {
    id d1DisplayState;
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

@interface _TtC10Dexcom_ONE30AlertSoundsTableViewController : _TtC10Dexcom_ONE25BaseUITableViewController {
    id vibrateLabel;
    id babyCryLabel;
    id beepLabel;
    id blamoDingLabel;
    id buzerLabel;
    id dingingLabel;
    id doorBellLabel;
    id arcadeBleepsLabel;
    id highAlertLabel;
    id highLabel;
    id ascendLabel;
    id lowAlertLabel;
    id lowLabel;
    id nerdAlertLabel;
    id policeSirenLabel;
    id shortBeepsLabel;
    id signalLossLabel;
    id sonarHornLabel;
    id tacatacaLabel;
    id truckSirenLabel;
    id uhOhLable;
    id vibrateOnlyButton;
    id babyCryButton;
    id beepButton;
    id blamoDingsButton;
    id buzzerAlarmClockButton;
    id dingingButton;
    id doorBellButton;
    id arcadeBleepsButton;
    id highAlertButton;
    id highButton;
    id ascendButton;
    id lowAlertButton;
    id lowButton;
    id nerdAlertButton;
    id policeSirenButton;
    id shortBeepsButton;
    id signalLossAlertButton;
    id sonarHornButton;
    id tacatacaButton;
    id truckSirenButton;
    id uhOhButton;
    id alertSettingsType;
    id buttonArray;
    id accessibilityIDText;
}
@property (nonatomic) UILabel * vibrateLabel;
@property (nonatomic) UILabel * babyCryLabel;
@property (nonatomic) UILabel * beepLabel;
@property (nonatomic) UILabel * blamoDingLabel;
@property (nonatomic) UILabel * buzerLabel;
@property (nonatomic) UILabel * dingingLabel;
@property (nonatomic) UILabel * doorBellLabel;
@property (nonatomic) UILabel * arcadeBleepsLabel;
@property (nonatomic) UILabel * highAlertLabel;
@property (nonatomic) UILabel * highLabel;
@property (nonatomic) UILabel * ascendLabel;
@property (nonatomic) UILabel * lowAlertLabel;
@property (nonatomic) UILabel * lowLabel;
@property (nonatomic) UILabel * nerdAlertLabel;
@property (nonatomic) UILabel * policeSirenLabel;
@property (nonatomic) UILabel * shortBeepsLabel;
@property (nonatomic) UILabel * signalLossLabel;
@property (nonatomic) UILabel * sonarHornLabel;
@property (nonatomic) UILabel * tacatacaLabel;
@property (nonatomic) UILabel * truckSirenLabel;
@property (nonatomic) UILabel * uhOhLable;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * vibrateOnlyButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * babyCryButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * beepButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * blamoDingsButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * buzzerAlarmClockButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * dingingButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * doorBellButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * arcadeBleepsButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * highAlertButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * highButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * ascendButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * lowAlertButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * lowButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * nerdAlertButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * policeSirenButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * shortBeepsButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * signalLossAlertButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * sonarHornButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * tacatacaButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * truckSirenButton;
@property (nonatomic) _TtC10Dexcom_ONE11RadioButton * uhOhButton;
- (void)vibrateOnlySelected:(id)v1;
- (void)babyCrySelected:(id)v1;
- (void)beepSelected:(id)v1;
- (void)blamoDingsSelected:(id)v1;
- (void)buzzerAlarmClockSelected:(id)v1;
- (void)dingigSelected:(id)v1;
- (void)doorBellSelected:(id)v1;
- (void)arcadeBleepsSelected:(id)v1;
- (void)highAlertSelected:(id)v1;
- (void)highSelected:(id)v1;
- (void)ascendBleepsSelected:(id)v1;
- (void)lowAlertSelected:(id)v1;
- (void)lowButtonSelected:(id)v1;
- (void)nerdAlertSelected:(id)v1;
- (void)policeSirenPressed:(id)v1;
- (void)shortBeepsPressed:(id)v1;
- (void)signalLossAlertPressed:(id)v1;
- (void)sonarHornPressed:(id)v1;
- (void)tacatacaPressed:(id)v1;
- (void)truckSirenPressed:(id)v1;
- (void)uhOhPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)initWithStyle:(long long)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32PhonePlacementHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id descriptionLabel;
    id distanceLabel;
    id backButtonAccessibilityIDText;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * distanceLabel;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE28SignalLossHelpViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id actionSheetDelegate;
    id titleLabel;
    id subtitleLabel;
    id textLabel1;
    id textLabel2;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * subtitleLabel;
@property (nonatomic) UILabel * textLabel1;
@property (nonatomic) UILabel * textLabel2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE32SixHourSensorAlertViewController : _TtC10Dexcom_ONE23BaseAlertViewController {
    id titleLabel;
    id descriptionLabel;
    id okButton;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * okButton;
- (void)viewDidLoad;
- (void)OKButtonPressed;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE19CustomCodeLabelView : UIView {
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

@interface _TtC10Dexcom_ONE25ClarityeA1CViewController : UIViewController {
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

@interface _TtC10Dexcom_ONE29DexcomOneBasicsViewController : _TtC10Dexcom_ONE28MVVMOnboardingViewController<UIScrollViewDelegate> {
    id dexcomOneBasicsLabel;
    id inStarterKitLabel;
    id applicatorTitleLabel;
    id applicatorDescription1;
    id applicatorDescription2;
    id transmitterTitleLabel;
    id transmitterDescription;
    id howItWorksTitleLabel;
    id howItWorksDescription;
    id nextButton;
    id scrollToContinueLabel;
    id pleaseScrollViewHeightConstraint;
    id nextButtonSpacer;
    id didDismissPleaseScrollView;
}
@property (nonatomic) UILabel * dexcomOneBasicsLabel;
@property (nonatomic) UILabel * inStarterKitLabel;
@property (nonatomic) UILabel * applicatorTitleLabel;
@property (nonatomic) UILabel * applicatorDescription1;
@property (nonatomic) UILabel * applicatorDescription2;
@property (nonatomic) UILabel * transmitterTitleLabel;
@property (nonatomic) UILabel * transmitterDescription;
@property (nonatomic) UILabel * howItWorksTitleLabel;
@property (nonatomic) UILabel * howItWorksDescription;
@property (nonatomic) _TtC10Dexcom_ONE14DXCMPillButton * nextButton;
@property (nonatomic) UILabel * scrollToContinueLabel;
@property (nonatomic) NSLayoutConstraint * pleaseScrollViewHeightConstraint;
@property (nonatomic) UIView * nextButtonSpacer;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)scrollViewDidScroll:(id)v1;
- (void)nextButtonPressed:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE15TimeLossMonitor : _TtCs12_SwiftObject {
    id alertsTimeLossEventPublisher;
    id timeLossSubscriber;
}
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE24PhoneConflictSummaryCell : UITableViewCell {
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

@interface _TtC10Dexcom_ONE11TimeManager : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE11AudioPlayer : NSObject {
    id player;
    id observers;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC10Dexcom_ONE31AppleHealthPickerViewController : _TtC10Dexcom_ONE20BaseUIViewController {
    id titleLabel;
    id descriptionPart1;
    id subTitleLabel;
    id descriptionPart2;
    id activateButton;
    id actionSheetDelegate;
    id delegate;
}
@property (nonatomic) UILabel * titleLabel;
@property (nonatomic) UILabel * descriptionPart1;
@property (nonatomic) UILabel * subTitleLabel;
@property (nonatomic) UILabel * descriptionPart2;
@property (nonatomic) UIButton * activateButton;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (void)activateButtonTapped:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine13AnyStateEvent : _TtCs12_SwiftObject {
    id timestamp;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine10DataLogger : _TtCs12_SwiftObject {
    id alertsDataLogging;
    id glucoseAlerts;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine24ThresholdAlertAttributes : _TtC18AlertsStateMachine15AlertAttributes {
    id mgdlThreshold;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine35TransmitterNotFoundProjectionHelper : _TtCs12_SwiftObject
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
    id underlyingCurrentInternalState;
    id currentAlertSettings;
    id settingsSubscriber;
    id bluetoothStateSubscriber;
    id txSessionEventSubscriber;
    id databaseStateSubscriber;
    id diskSpaceStateSubscriber;
    id timeLossStateSubscriber;
    id alertingStateQueue;
    id internalStateQueue;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine28RateThresholdAlertAttributes : _TtC18AlertsStateMachine24ThresholdAlertAttributes {
    id trendThreshold;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine15G7AlertSettings : _TtC18AlertsStateMachine13AlertSettings
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

@interface _TtC18AlertsStateMachine34HysteresisThresholdAlertAttributes : _TtC18AlertsStateMachine24ThresholdAlertAttributes {
    id suspendType;
}
@end


/*****************************************************************/

@interface _TtC18AlertsStateMachine13AlertingState : _TtCs12_SwiftObject {
    id alertMap;
    id dictionaryOfAlerts;
}
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

@interface _TtC18AlertsStateMachine15D1AlertSettings : _TtC18AlertsStateMachine13AlertSettings
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

@interface _TtCO9D1AppCore14TxSessionState6Failed : _TtCs12_SwiftObject {
    id txId;
    id txLifetime;
    id warmupLength;
    id sensorSessionDuration;
    id txStartCalculatedTime;
    id timeProvider;
    id txTimeOffsetInfo;
    id txStaticInfo;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore6D1Core : _TtCs12_SwiftObject {
    id persistence;
    id appId;
    id appSoftwareNumber;
    id txService;
    id dexKit;
    id bleEventLogMonitor;
    id transmitterEventLogMonitor;
    id bulkDataMonitor;
    id subscriptions;
    id txSessionStateManager;
    id bleStateMonitor;
    id blePermissionMonitor;
    id timeLossStateManager;
    id persistenceEventMonitor;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore9TxService : _TtCs12_SwiftObject {
    id txServiceRepository;
    id txConfiguration;
    id timeProvider;
    id txTickTimeProvider;
    id appLifeCycleManager;
    id sensorCommandQueue;
    id commandState;
    id bleStatePassthrough;
    id _isCommunicating;
    id _txCommRecord;
    id txDisconnectEventPublisher;
    id txDisconnectEventInfo;
    id txCommRecordAggregator;
    id bleAuthSubscription;
    id txController;
    id startCommandResponse;
    id stopCommandResponse;
    id subscriptions;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore11Persistence : _TtCs12_SwiftObject {
    id databaseManager;
    id txServiceRepository;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore23TxPairingStartRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore21TxSessionStateManager : _TtCs12_SwiftObject {
    id _txSessionState;
    id _isCommunicating;
    id txService;
    id timeProvider;
    id eventLogger;
    id appLifeCycleManager;
    id eventScheduler;
    id txSessionStateQueue;
    id incomingQueue;
    id timeUntilSignalLoss;
    id subscriptions;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore21CommandStateRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore18TxTickTimeProvider : _TtCs12_SwiftObject {
    id txTickTime;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore24TxControllerTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore19TxKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtCO9D1AppCore14TxSessionState7Pairing : _TtCs12_SwiftObject {
    id txId;
    id pairingStartTime;
    id communicationError;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore19TxServiceRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id commandStateRecordDao;
    id txServiceRecordDao;
    id txKeyValueRecordDao;
    id txPairingStartRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore26TransmitterEventLogMonitor : _TtCs12_SwiftObject {
    id lastTxStaticInfoKey;
    id txService;
    id eventLogger;
    id timeProvider;
    id appLifeCycleManager;
    id subscriptions;
    id txSessionStateManager;
    id previousTxSessionState;
    id keyValueStore;
    id incomingQueue;
}
@end


/*****************************************************************/

@interface _TtCO9D1AppCore14TxSessionState10SignalLoss : _TtCO9D1AppCore14TxSessionState18BaseTxSessionState {
    id lastKnownIsBatteryLow;
    id communicationError;
}
@end


/*****************************************************************/

@interface _TtCO9D1AppCore14TxSessionState7Nominal : _TtCO9D1AppCore14TxSessionState18BaseTxSessionState {
    id isBatteryLow;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore19BulkDataCoreMonitor : _TtCs12_SwiftObject {
    id bulkDataManager;
    id timeProvider;
    id txService;
    id appSoftwareNumber;
    id subscriptions;
    id incomingQueue;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore14EventScheduler : _TtCs12_SwiftObject {
    id activeTimers;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore18TxServiceRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore22TxCommRecordAggregator : _TtCs12_SwiftObject {
    id txId;
    id communicationStartTime;
    id isBatteryLow;
    id txTimeOffsetInfo;
    id txStatusError;
    id diagnosticData;
    id batteryInfo;
    id calibrationBounds;
    id sensorReadings;
    id authenticationErrors;
    id communicationErrors;
    id commandResult;
    id startCommandResponse;
    id stopCommandResponse;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore21BaseD1AppCoreProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtCO9D1AppCore14TxSessionState18BaseTxSessionState : _TtCs12_SwiftObject {
    id txId;
    id sensorReadings;
    id pendingCommand;
    id txLifetime;
    id warmupLength;
    id sensorSessionDuration;
    id txStartCalculatedTime;
    id txStaticInfo;
    id txTimeOffsetInfo;
    id eventTime;
    id lastInSessionReading;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore20TimeLossStateManager : _TtCs12_SwiftObject {
    id _timeLossState;
    id timeProvider;
    id txSessionStateManager;
    id subscriptions;
}
@end


/*****************************************************************/

@interface _TtC9D1AppCore22TxControllerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id globalTxId;
    id txServiceRepository;
}
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

@interface _TtC9DexAppKit17AuthManagerReader : _TtCs12_SwiftObject {
    id subscriptions;
    id timeProvider;
    id repo;
    id watchCommunication;
    id _authStatus;
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

@interface _TtC9DexAppKit18NamedValuesManager : _TtCs12_SwiftObject {
    id secureNetworkingManager;
    id subscriptions;
    id queue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18BLEPermissionProxy : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC9DexAppKit20BLEPermissionMonitor : _TtCs12_SwiftObject {
    id permissionProxy;
    id _authorization;
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

@interface _TtC9DexAppKit28SecureNetworkingTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit26SecureNetworkingRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id secureNetworkingKeyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21AuthManagerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id authKeyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit25BulkDataManagerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id bulkDataKeyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20AcmKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit17DiskSpaceProvider : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC9DexAppKit21AlertProfileRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20FeatureFlagRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
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

@interface _TtC9DexAppKit22TimeProviderRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id dao;
    id phoneTimeKey;
    id rtcTimeKey;
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

@interface _TtC9DexAppKit21EventLoggerRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id eventLoggerDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21AuthKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
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

@interface _TtC9DexAppKit16GCSURLRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id gcsUrlRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit19QuietModesRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
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

@interface _TtC9DexAppKit14AlertRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
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

@interface _TtC9DexAppKit18KeyValueRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id keyValueRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21BulkDataPostRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22AlertSettingsRecordDao : _TtCs12_SwiftObject {
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

@interface _TtC9DexAppKit13AcmRepository : _TtCs12_SwiftObject {
    id acmKeyValueRecordDao;
    id persistenceEventPublisher;
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

@interface _TtC9DexAppKit14EventLoggerDao : _TtCs12_SwiftObject {
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

@interface _TtC9DexAppKit26QuietModesRecordRepository : _TtCs12_SwiftObject {
    id updatedQuietModesRecord;
    id persistenceEventPublisher;
    id quietModesRecordDao;
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15AlertRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id alertRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit21DeveloperLogRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15AcmTimeProvider : _TtCs12_SwiftObject {
    id timeProvider;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit23PersistenceEventMonitor : _TtCs12_SwiftObject {
    id persistenceErrorEvent;
    id subscribers;
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

@interface _TtC9DexAppKit22AlertScheduleRecordDao : _TtCs12_SwiftObject {
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

@interface _TtC9DexAppKit15TimeProviderDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit17KeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
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

@interface _TtC9DexAppKit25BulkDataKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit18UserEventRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15GCSURLRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit22DeveloperLogRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id developerLogRecordDao;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15BLEStateMonitor : _TtCs12_SwiftObject {
    id _bleState;
    id subscriber;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit25SyncableKeyValueRecordDao : _TtCs12_SwiftObject {
    id dbWriter;
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

@interface _TtC9DexAppKit33TimeProviderBackgroundTaskManager : _TtCs12_SwiftObject {
    id backgroundTaskManager;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit15DatabaseManager : _TtCs12_SwiftObject {
    id dbPool;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit33SecureNetworkingKeyValueRecordDao : _TtCs12_SwiftObject {
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

@interface _TtC9DexAppKit11EventLogger : _TtCs12_SwiftObject {
    id eventLoggerRepository;
    id timeProvider;
    id eventLoggerConfig;
    id operationQueue;
}
@end


/*****************************************************************/

@interface _TtC9DexAppKit20UserEventsRepository : _TtCs12_SwiftObject {
    id persistenceEventPublisher;
    id userEventRecordDao;
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
- (void)logCoreTelemetryIfEnabled;
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

@interface FIRCoreDiagnosticsConnector : NSObject
+ (void)initialize;
+ (void)logCoreTelemetryWithOptions:(id)v1;
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

@interface FIRDiagnosticsData : NSObject<FIRCoreDiagnosticsData> {
    NSMutableDictionary * _diagnosticObjects;
}
@property (retain,nonatomic) NSDictionary * diagnosticObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)init;
- (void)insertValue:(id)v1 forKey:(id)v2;
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

@interface FIRHeartbeatInfo : NSObject
+ (bool)updateIfNeededHeartbeatDateForTag:(id)v1;
+ (long long)heartbeatCodeForTag:(id)v1;
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
@property (readonly,nonatomic) bool isAnalyticsEnabled;
@property (readonly,nonatomic) bool isSignInEnabled;
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

@interface FIRCoreDiagnosticsLog : NSObject {
    struct _logs_proto_mobilesdk_ios_ICoreConfiguration _config;
}
@property (nonatomic) struct _logs_proto_mobilesdk_ios_ICoreConfiguration config;
- (id)initWithConfig:(struct _logs_proto_mobilesdk_ios_ICoreConfiguration)v1;
- (id)transportBytes;
- (void)dealloc;
@end


/*****************************************************************/

@interface FIRCoreDiagnostics : NSObject<FIRCoreDiagnosticsInterop> {
    NSObject<OS_dispatch_queue> * _diagnosticsQueue;
    GDTCORTransport * _transport;
    GULHeartbeatDateStorage * _heartbeatDateStorage;
}
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * diagnosticsQueue;
@property (readonly,nonatomic) GDTCORTransport * transport;
@property (readonly,nonatomic) GULHeartbeatDateStorage * heartbeatDateStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
+ (void)sendDiagnosticsData:(id)v1;
- (id)init;
- (id)initWithTransport:(id)v1 heartbeatDateStorage:(id)v2;
- (void)sendDiagnosticsData:(id)v1;
- (void)setHeartbeatFlagIfNeededToConfig:(struct _logs_proto_mobilesdk_ios_ICoreConfiguration *)v1;
- (bool)isDate:(id)v1 inSameDayOrBeforeThan:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface PodsDummy_FirebaseCoreDiagnostics : NSObject
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
    struct anonymous_type_11 _builtSDK;
    struct anonymous_type_12 _minimumSDK;
}
@property (copy,nonatomic) NSDictionary * architectureUUIDMap;
@property (copy,nonatomic) NSString * buildInstanceID;
@property (readonly,nonatomic) struct anonymous_type_13 builtSDK;
@property (readonly,nonatomic) struct anonymous_type_14 minimumSDK;
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
- (bool)regenerateInstallIDIfNeeded;
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
    struct anonymous_type_17 _minimumOSVersion;
    struct anonymous_type_18 _linkedSDKVersion;
}
@property (readonly,copy,nonatomic) NSString * uuid;
@property (readonly,copy,nonatomic) NSString * architectureName;
@property (readonly,nonatomic) NSArray * linkedDylibs;
@property (readonly,nonatomic) struct anonymous_type_19 minimumOSVersion;
@property (readonly,nonatomic) struct anonymous_type_20 linkedSDKVersion;
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
    NSString * _folderPath;
    NSString * _googleAppID;
    FIRCLSRecordIdentity * _identity;
    FIRCLSRecordHost * _host;
    FIRCLSRecordApplication * _application;
    struct _google_crashlytics_Report _report;
}
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
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
- (id)initWithPath:(id)v1 googleAppId:(id)v2 installIDModel:(id)v3;
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
    GDTCORTransport * _googleTransport;
    FIRCLSInstallIdentifierModel * _installIDModel;
    NSString * _googleAppID;
}
@property (retain,nonatomic) GDTCORTransport * googleTransport;
@property (retain,nonatomic) FIRCLSInstallIdentifierModel * installIDModel;
@property (readonly,nonatomic) NSString * googleAppID;
@property (readonly,nonatomic) NSOperationQueue * operationQueue;
@property (readonly,nonatomic) FIRCLSFileManager * fileManager;
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
fillInImageDetails:forUUID: (IMP @0x10127ff50);
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
    struct anonymous_type_28 _logStorage;
    const  char * _activeLogPath;
    unsigned int _internalKVCounter;
    struct anonymous_type_29 _internalKVStorage;
    unsigned int _userKVCounter;
    struct anonymous_type_30 _userKVStorage;
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

@interface PodsDummy_PhoenixUIKit : NSObject
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

@interface _TtC14TxControllerG619BatteryInfoResponse : _TtC14TxControllerG610TxResponse {
    id staticVoltage;
    id dynamicVoltage;
    id transmitterRuntime;
    id temperature;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG69G6Reading : _TtCs12_SwiftObject {
    id txTime;
    id egv;
    id algorithmState;
    id predictiveEgv;
    id sessionStartTime;
    id rate;
    id flags;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG624DataStreamResponseRecord : _TtC14TxControllerG610TxResponse {
    id status;
    id streamId;
    id startTime;
    id endTime;
    id length;
    id streamCrc;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG625CalibrationBoundsResponse : _TtC14TxControllerG610TxResponse {
    id weight;
    id error1;
    id error0;
    id min;
    id max;
    id lastBGvalue;
    id lastCalibrationTime;
    id autoCalibration;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG612G6Controller : _TtCs12_SwiftObject {
    id commandQueue;
    id repository;
    id configuration;
    id systemTime;
    id bleManager;
    id connectionManager;
    id streamingService;
    id delegateQueue;
    id controllerDelegate;
    id userCommandDelegate;
    id isActive;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG611EGVResponse : _TtC14TxControllerG610TxResponse {
    id seqNum;
    id timeStamp;
    id value;
    id flags;
    id algorithmState;
    id rate;
    id predictiveValue;
    id egvPayloadSize;
    id predictiveEgvQueryPayloadSize;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG619G6DiagnosticReading : _TtCs12_SwiftObject {
    id type;
    id startTime;
    id endTime;
    id data;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG616StreamingService : _TtCs12_SwiftObject {
    id egvList;
    id config;
    id repo;
    id cacheAccessQueue;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG617ConnectionManager : _TtCs12_SwiftObject {
    id managerQueue;
    id serviceStatus;
    id isProcessing;
    id passedAuth;
    id needToBond;
    id connectionCompleted;
    id timeout;
    id shouldReconnect;
    id controller;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG617TxVersionResponse : _TtC14TxControllerG610TxResponse {
    id versionMajor;
    id versionMinor;
    id versionRevision;
    id versionBuild;
    id swNumber;
    id storageModeDays;
    id apiVersion;
    id maxRuntimeDays;
    id maxStorageTimeDays;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG619StopSessionResponse : _TtC14TxControllerG621SensorSessionResponse {
    id code;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG615ChallengeHelper : _TtCs12_SwiftObject
@end


/*****************************************************************/

@interface _TtC14TxControllerG610TxResponse : _TtCs12_SwiftObject {
    id txStatus;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG621SensorSessionResponse : _TtC14TxControllerG610TxResponse {
    id time;
    id sessionSignature;
    id processedTime;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG614TxTimeResponse : _TtC14TxControllerG610TxResponse {
    id txTime;
    id sessionSignature;
    id txTimeResponsePayloadSize;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG612TxRepository : _TtCs12_SwiftObject {
    id map;
    id serialQueue;
    id transmitterRepository;
    id decoder;
    id encoder;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG620StartSessionResponse : _TtC14TxControllerG621SensorSessionResponse {
    id code;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG612CommandQueue : _TtCs12_SwiftObject {
    id queue;
    id repo;
    id commandDelegate;
    id delegateQueue;
    id processingQueue;
}
@end


/*****************************************************************/

@interface _TtC14TxControllerG625TxExtendedVersionResponse : _TtC14TxControllerG610TxResponse {
    id sessionDays;
    id featureFlags;
    id warmupSeconds;
}
@end


/*****************************************************************/

@interface PodsDummy_nanopb : NSObject
@end


/*****************************************************************/

@interface PodsDummy_Pods_DexcomOne : NSObject
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
