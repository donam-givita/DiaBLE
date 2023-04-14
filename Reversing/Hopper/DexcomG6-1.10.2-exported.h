struct CGContext {
};

struct _NSRange {
    unsigned long long field_1;
    unsigned long long field_2;
};

struct anonymous_type_15 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
};

struct anonymous_type_14 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
};

struct UIEdgeInsets {
    double field_1;
    double field_2;
    double field_3;
    double field_4;
};

struct CGPoint {
    double field_1;
    double field_2;
};

struct anonymous_type_13 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
};

struct DXCMTransmitterCalibrationData {
    unsigned char field_1;
    unsigned char field_2;
    bool field_3;
    unsigned short field_4;
    char field_5;
};

struct anonymous_type_22 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
};

struct __SecKey {
};

struct anonymous_type_12 {
    unsigned char Major;
    unsigned char Minor;
    unsigned char Revision;
    unsigned char Build;
};

struct timeOfDay {
    int field_1;
    int field_2;
};

struct anonymous_type_21 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
};

struct anonymous_type_11 {
    unsigned char Major;
    unsigned char Minor;
    unsigned char Revision;
    unsigned char Build;
};

struct anonymous_type_20 {
    unsigned char Major;
    unsigned char Minor;
    unsigned char Revision;
    unsigned char Build;
};

struct bounds {
    unsigned long long field_1;
    unsigned long long field_2;
};

struct anonymous_type_10 {
    unsigned char Major;
    unsigned char Minor;
    unsigned char Revision;
};

struct _DXCMBackfillRange {
    int field_1;
    int field_2;
};

struct CGSize {
    double field_1;
    double field_2;
};

struct CGPath {
};

struct anonymous_type_18 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
};

struct CGRect {
    struct CGPoint field_1;
    struct CGSize field_2;
};

struct anonymous_type_17 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
};

struct _NSZone {
};

struct anonymous_type_16 {
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
};

struct anonymous_type_25 {
    unsigned int field_1;
    unsigned int field_2;
    unsigned int field_3;
    unsigned int field_4;
    unsigned int field_5;
};



/*****************************************************************/

@protocol _TtP3CGM28CGMAlertSettingsTimeDelegate_
- (void)timeChanged:(id)v1;
@end


/*****************************************************************/

@protocol _TtP3CGM27CGMTimeValueChangedDelegate_
- (void)timeValueChanged:(id)v1;
@end


/*****************************************************************/

@protocol SetupWizardBaseViewControllerDelegate<NSObject>
@property (nonatomic,readonly) UIView * view;
- (id)view;

@optional
- (void)addContentWithDescription:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addContentWithDescription:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addContentWithCustomView:(id)v1 constraints:(id)v2;
- (void)addContentWithCustomView:(id)v1 constraints:(id)v2;
- (void)setupVideoImageView:(id)v1;
- (void)setupVideoImageButton:(id)v1;
- (id)localizedPlayVideoText;
- (void)removePlayVideoText;
- (void)addLayoutConstraintsWithLabel:(id)v1;
- (void)addLayoutConstraintsWithLabel:(id)v1;
@end


/*****************************************************************/

@protocol _TtP3CGM34CGMAlertSettingsAlertLimitDelegate_
- (void)alertLimitChanged:(id)v1;
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

@protocol UIPickerViewDataSource<NSObject>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
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

@protocol UIPickerViewAccessibilityDelegate<UIPickerViewDelegate>

@optional
- (id)pickerView:(id)v1 accessibilityLabelForComponent:(long long)v2;
- (id)pickerView:(id)v1 accessibilityHintForComponent:(long long)v2;
- (id)pickerView:(id)v1 accessibilityUserInputLabelsForComponent:(long long)v2;
- (id)pickerView:(id)v1 accessibilityAttributedLabelForComponent:(long long)v2;
- (id)pickerView:(id)v1 accessibilityAttributedHintForComponent:(long long)v2;
- (id)pickerView:(id)v1 accessibilityAttributedUserInputLabelsForComponent:(long long)v2;
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

@protocol CGMSubscriberDataSource<NSObject>
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
@end


/*****************************************************************/

@protocol _TtP3CGM26DPPublicDataSourceProtocol_
- (id)getGlucoseRecordsFrom:(int)v1 to:(int)v2;
- (id)getMeterDataRecordsFrom:(int)v1 to:(int)v2;
- (id)getSensorSessionRecordsFrom:(int)v1 to:(int)v2;
- (id)getUserEventRecordsFrom:(int)v1 to:(int)v2;
- (id)getAlertScheduleInfo;
- (id)getDeviceInfoRecordFrom:(int)v1 to:(int)v2;
- (id)getNutritionRecordsFrom:(int)v1 to:(int)v2;
- (id)getWorkoutEventRecordsFrom:(int)v1 to:(int)v2;
- (id)getAlertStatusRecordsFrom:(int)v1 to:(int)v2;
@end


/*****************************************************************/

@protocol _TtP16DXCMUAMFramework28UAMWebViewControllerDelegate_

@optional
- (void)errorButtonPressed;
- (unsigned long long)supportedInterfaceOrientationMask;
@end


/*****************************************************************/

@protocol CGMAlertLimitChangedDelegate<NSObject>
- (void)alertLimitChanged:(id)v1;
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

@protocol DXCMEventInfo<NSObject>
@property (nonatomic) unsigned long long eventKind;
@property (nonatomic) unsigned long long eventSubkind;
@property (retain,nonatomic) NSDate * eventStartTime;
@property (nonatomic) double eventDuration;
@property (readonly,nonatomic) NSDate * eventEndTime;
@property (nonatomic) int eventValue;
@property (readonly,nonatomic) NSString * calloutTitle;
@property (readonly,nonatomic) NSString * calloutDetails;
- (id)summaryTitleForEvents:(id)v1;
- (id)summaryDetailForEvents:(id)v1;
- (unsigned long long)eventKind;
- (void)setEventKind:(unsigned long long)v1;
- (unsigned long long)eventSubkind;
- (void)setEventSubkind:(unsigned long long)v1;
- (id)eventStartTime;
- (void)setEventStartTime:(id)v1;
- (double)eventDuration;
- (void)setEventDuration:(double)v1;
- (id)eventEndTime;
- (int)eventValue;
- (void)setEventValue:(int)v1;
- (id)calloutTitle;
- (id)calloutDetails;
@end


/*****************************************************************/

@protocol CGMAlertLimitChangedDelegate<NSObject>
- (void)alertLimitChanged:(id)v1;
@end


/*****************************************************************/

@protocol UIPickerViewDelegate<NSObject>

@optional
- (double)pickerView:(id)v1 widthForComponent:(long long)v2;
- (double)pickerView:(id)v1 rowHeightForComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (id)pickerView:(id)v1 attributedTitleForRow:(long long)v2 forComponent:(long long)v3;
- (id)pickerView:(id)v1 viewForRow:(long long)v2 forComponent:(long long)v3 reusingView:(id)v4;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
@end


/*****************************************************************/

@protocol UIPickerViewDataSource<NSObject>
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
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
- (void)scrollViewWillBeginZooming:(id)v1 withView:(id)v2;
- (void)scrollViewDidEndZooming:(id)v1 withView:(id)v2 atScale:(double)v3;
- (bool)scrollViewShouldScrollToTop:(id)v1;
- (void)scrollViewDidScrollToTop:(id)v1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)v1;
@end


/*****************************************************************/

@protocol UITableViewDelegate<NSObject,UIScrollViewDelegate>

@optional
- (void)tableView:(id)v1 willDisplayCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 willDisplayHeaderView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 willDisplayFooterView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 didEndDisplayingCell:(id)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 didEndDisplayingHeaderView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 didEndDisplayingFooterView:(id)v2 forSection:(long long)v3;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 estimatedHeightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (long long)tableView:(id)v1 accessoryTypeForRowWithIndexPath:(id)v2;
- (void)tableView:(id)v1 accessoryButtonTappedForRowWithIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldHighlightRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didHighlightRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didUnhighlightRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willSelectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willDeselectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didDeselectRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canPerformPrimaryActionForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 performPrimaryActionForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 editingStyleForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 editActionsForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldIndentWhileEditingRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 willBeginEditingRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didEndEditingRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 targetIndexPathForMoveFromRowAtIndexPath:(id)v2 toProposedIndexPath:(id)v3;
- (long long)tableView:(id)v1 indentationLevelForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldShowMenuForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canPerformAction:(SEL)v2 forRowAtIndexPath:(id)v3 withSender:(id)v4;
- (void)tableView:(id)v1 performAction:(SEL)v2 forRowAtIndexPath:(id)v3 withSender:(id)v4;
- (bool)tableView:(id)v1 canFocusRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldUpdateFocusInContext:(id)v2;
- (void)tableView:(id)v1 didUpdateFocusInContext:(id)v2 withAnimationCoordinator:(id)v3;
- (id)indexPathForPreferredFocusedViewInTableView:(id)v1;
- (bool)tableView:(id)v1 selectionFollowsFocusForRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 shouldSpringLoadRowAtIndexPath:(id)v2 withContext:(id)v3;
- (bool)tableView:(id)v1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didBeginMultipleSelectionInteractionAtIndexPath:(id)v2;
- (void)tableViewDidEndMultipleSelectionInteraction:(id)v1;
- (id)tableView:(id)v1 contextMenuConfigurationForRowAtIndexPath:(id)v2 point:(struct CGPoint)v3;
- (id)tableView:(id)v1 previewForHighlightingContextMenuWithConfiguration:(id)v2;
- (id)tableView:(id)v1 previewForDismissingContextMenuWithConfiguration:(id)v2;
- (void)tableView:(id)v1 willPerformPreviewActionForMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willDisplayContextMenuWithConfiguration:(id)v2 animator:(id)v3;
- (void)tableView:(id)v1 willEndContextMenuInteractionWithConfiguration:(id)v2 animator:(id)v3;
@end


/*****************************************************************/

@protocol UITableViewDataSource<NSObject>
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;

@optional
- (long long)numberOfSectionsInTableView:(id)v1;
- (id)tableView:(id)v1 titleForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 titleForFooterInSection:(long long)v2;
- (bool)tableView:(id)v1 canEditRowAtIndexPath:(id)v2;
- (bool)tableView:(id)v1 canMoveRowAtIndexPath:(id)v2;
- (id)sectionIndexTitlesForTableView:(id)v1;
- (long long)tableView:(id)v1 sectionForSectionIndexTitle:(id)v2 atIndex:(long long)v3;
- (void)tableView:(id)v1 commitEditingStyle:(long long)v2 forRowAtIndexPath:(id)v3;
- (void)tableView:(id)v1 moveRowAtIndexPath:(id)v2 toIndexPath:(id)v3;
@end


/*****************************************************************/

@protocol _TtP3CGM34CGMAlertSettingsAlertLimitDelegate_
- (void)alertLimitChanged:(id)v1;
@end


/*****************************************************************/

@protocol _TtP3CGM28CGMAlertSettingsTimeDelegate_
- (void)timeChanged:(id)v1;
@end


/*****************************************************************/

@protocol CGMAlertScheduleNameChangedDelegate<NSObject>
- (void)didChangeAlertScheduleName:(id)v1;
@end


/*****************************************************************/

@protocol UITextViewDelegate<NSObject,UIScrollViewDelegate>

@optional
- (bool)textViewShouldBeginEditing:(id)v1;
- (bool)textViewShouldEndEditing:(id)v1;
- (void)textViewDidBeginEditing:(id)v1;
- (void)textViewDidEndEditing:(id)v1;
- (bool)textView:(id)v1 shouldChangeTextInRange:(struct _NSRange)v2 replacementText:(id)v3;
- (void)textViewDidChange:(id)v1;
- (void)textViewDidChangeSelection:(id)v1;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (bool)textView:(id)v1 shouldInteractWithTextAttachment:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3;
- (bool)textView:(id)v1 shouldInteractWithTextAttachment:(id)v2 inRange:(struct _NSRange)v3;
- (id)textView:(id)v1 editMenuForTextInRange:(struct _NSRange)v2 suggestedActions:(id)v3;
- (void)textView:(id)v1 willPresentEditMenuWithAnimator:(id)v2;
- (void)textView:(id)v1 willDismissEditMenuWithAnimator:(id)v2;
@end


/*****************************************************************/

@protocol CPTPlotDataSource<NSObject>
- (unsigned long long)numberOfRecordsForPlot:(id)v1;

@optional
- (id)numbersForPlot:(id)v1 field:(unsigned long long)v2 recordIndexRange:(struct _NSRange)v3;
- (id)numberForPlot:(id)v1 field:(unsigned long long)v2 recordIndex:(unsigned long long)v3;
- (double *)doublesForPlot:(id)v1 field:(unsigned long long)v2 recordIndexRange:(struct _NSRange)v3;
- (double)doubleForPlot:(id)v1 field:(unsigned long long)v2 recordIndex:(unsigned long long)v3;
- (id)dataForPlot:(id)v1 field:(unsigned long long)v2 recordIndexRange:(struct _NSRange)v3;
- (id)dataForPlot:(id)v1 recordIndexRange:(struct _NSRange)v2;
- (id)dataLabelsForPlot:(id)v1 recordIndexRange:(struct _NSRange)v2;
- (id)dataLabelForPlot:(id)v1 recordIndex:(unsigned long long)v2;
@end


/*****************************************************************/

@protocol CPTScatterPlotDataSource<CPTPlotDataSource>

@optional
- (id)symbolsForScatterPlot:(id)v1 recordIndexRange:(struct _NSRange)v2;
- (id)symbolForScatterPlot:(id)v1 recordIndex:(unsigned long long)v2;
@end


/*****************************************************************/

@protocol CALayerDelegate<NSObject>

@optional
- (void)displayLayer:(id)v1;
- (void)drawLayer:(id)v1 inContext:(struct CGContext *)v2;
- (void)layerWillDraw:(id)v1;
- (void)layoutSublayersOfLayer:(id)v1;
- (id)actionForLayer:(id)v1 forKey:(id)v2;
@end


/*****************************************************************/

@protocol CPTLayerDelegate<CALayerDelegate>
@end


/*****************************************************************/

@protocol CPTPlotDelegate<CPTLayerDelegate>

@optional
- (void)plot:(id)v1 dataLabelWasSelectedAtRecordIndex:(unsigned long long)v2;
- (void)plot:(id)v1 dataLabelWasSelectedAtRecordIndex:(unsigned long long)v2 withEvent:(id)v3;
- (void)plot:(id)v1 dataLabelTouchDownAtRecordIndex:(unsigned long long)v2;
- (void)plot:(id)v1 dataLabelTouchDownAtRecordIndex:(unsigned long long)v2 withEvent:(id)v3;
- (void)plot:(id)v1 dataLabelTouchUpAtRecordIndex:(unsigned long long)v2;
- (void)plot:(id)v1 dataLabelTouchUpAtRecordIndex:(unsigned long long)v2 withEvent:(id)v3;
- (void)didFinishDrawing:(id)v1;
@end


/*****************************************************************/

@protocol CPTScatterPlotDelegate<CPTPlotDelegate>

@optional
- (void)scatterPlot:(id)v1 plotSymbolWasSelectedAtRecordIndex:(unsigned long long)v2;
- (void)scatterPlot:(id)v1 plotSymbolWasSelectedAtRecordIndex:(unsigned long long)v2 withEvent:(id)v3;
- (void)scatterPlot:(id)v1 plotSymbolTouchDownAtRecordIndex:(unsigned long long)v2;
- (void)scatterPlot:(id)v1 plotSymbolTouchDownAtRecordIndex:(unsigned long long)v2 withEvent:(id)v3;
- (void)scatterPlot:(id)v1 plotSymbolTouchUpAtRecordIndex:(unsigned long long)v2;
- (void)scatterPlot:(id)v1 plotSymbolTouchUpAtRecordIndex:(unsigned long long)v2 withEvent:(id)v3;
- (void)scatterPlotDataLineWasSelected:(id)v1;
- (void)scatterPlot:(id)v1 dataLineWasSelectedWithEvent:(id)v2;
- (void)scatterPlotDataLineTouchDown:(id)v1;
- (void)scatterPlot:(id)v1 dataLineTouchDownWithEvent:(id)v2;
- (void)scatterPlotDataLineTouchUp:(id)v1;
- (void)scatterPlot:(id)v1 dataLineTouchUpWithEvent:(id)v2;
- (void)scatterPlot:(id)v1 prepareForDrawingPlotLine:(struct CGPath *)v2 inContext:(struct CGContext *)v3;
@end


/*****************************************************************/

@protocol CPTPlotSpaceDelegate<NSObject>

@optional
- (bool)plotSpace:(id)v1 shouldScaleBy:(double)v2 aboutPoint:(struct CGPoint)v3;
- (struct CGPoint)plotSpace:(id)v1 willDisplaceBy:(struct CGPoint)v2;
- (id)plotSpace:(id)v1 willChangePlotRangeTo:(id)v2 forCoordinate:(long long)v3;
- (void)plotSpace:(id)v1 didChangePlotRangeForCoordinate:(long long)v2;
- (bool)plotSpace:(id)v1 shouldHandlePointingDeviceDownEvent:(id)v2 atPoint:(struct CGPoint)v3;
- (bool)plotSpace:(id)v1 shouldHandlePointingDeviceDraggedEvent:(id)v2 atPoint:(struct CGPoint)v3;
- (bool)plotSpace:(id)v1 shouldHandlePointingDeviceCancelledEvent:(id)v2;
- (bool)plotSpace:(id)v1 shouldHandlePointingDeviceUpEvent:(id)v2 atPoint:(struct CGPoint)v3;
@end


/*****************************************************************/

@protocol UIAccessibilityIdentification<NSObject>
@property (copy,nonatomic) NSString * accessibilityIdentifier;
- (id)accessibilityIdentifier;
- (void)setAccessibilityIdentifier:(id)v1;
@end


/*****************************************************************/

@protocol CGMSubscriberDataSource<NSObject>
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
@end


/*****************************************************************/

@protocol NSCoding
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@protocol UIGestureRecognizerDelegate<NSObject>

@optional
- (bool)gestureRecognizerShouldBegin:(id)v1;
- (bool)gestureRecognizer:(id)v1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldRequireFailureOfGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldBeRequiredToFailByGestureRecognizer:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceiveTouch:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceivePress:(id)v2;
- (bool)gestureRecognizer:(id)v1 shouldReceiveEvent:(id)v2;
@end


/*****************************************************************/

@protocol CGMEventManagerViewDelegate
- (void)anyEventAdded;
@end


/*****************************************************************/

@protocol StatusOfWhatsNewInterfereUnsafeState
- (void)verifyWhatsNewEveryUIUpdate;
@end


/*****************************************************************/

@protocol DXCMLegalAgreementsProtocol<NSObject>

@optional
- (void)applicationPresentLegalURL:(id)v1;
- (void)serverAcceptanceStatusReceived:(unsigned long long)v1;
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

@protocol KSCrashReportFilter<NSObject>
- (void)filterReports:(id)v1 onCompletion:(void (^ /* unknown block signature */)(void))v2;
@end


/*****************************************************************/

@protocol CustomAlertDelegate<NSObject>
- (void)genericActionForFakeUIAlerController:(unsigned long long)v1;
@end


/*****************************************************************/

@protocol DXCMBaseViewControllerDelegate
- (void)baseViewControllerDidFinish:(id)v1;
@end


/*****************************************************************/

@protocol UINavigationControllerDelegate<NSObject>

@optional
- (void)navigationController:(id)v1 willShowViewController:(id)v2 animated:(bool)v3;
- (void)navigationController:(id)v1 didShowViewController:(id)v2 animated:(bool)v3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)v1;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)v1;
- (id)navigationController:(id)v1 interactionControllerForAnimationController:(id)v2;
- (id)navigationController:(id)v1 animationControllerForOperation:(long long)v2 fromViewController:(id)v3 toViewController:(id)v4;
@end


/*****************************************************************/

@protocol DDLogFormatter<NSObject>
- (id)formatLogMessage:(id)v1;

@optional
- (void)didAddToLogger:(id)v1;
- (void)didAddToLogger:(id)v1 inQueue:(id)v2;
- (void)willRemoveFromLogger:(id)v1;
@end


/*****************************************************************/

@protocol CNContactPickerDelegate<NSObject>

@optional
- (void)contactPickerDidCancel:(id)v1;
- (void)contactPicker:(id)v1 didSelectContact:(id)v2;
- (void)contactPicker:(id)v1 didSelectContactProperty:(id)v2;
- (void)contactPicker:(id)v1 didSelectContacts:(id)v2;
- (void)contactPicker:(id)v1 didSelectContactProperties:(id)v2;
@end


/*****************************************************************/

@protocol ABPeoplePickerNavigationControllerDelegate<NSObject>

@optional
- (void)peoplePickerNavigationController:(id)v1 didSelectPerson:(void *)v2;
- (void)peoplePickerNavigationController:(id)v1 didSelectPerson:(void *)v2 property:(int)v3 identifier:(int)v4;
- (void)peoplePickerNavigationControllerDidCancel:(id)v1;
- (bool)peoplePickerNavigationController:(id)v1 shouldContinueAfterSelectingPerson:(void *)v2;
- (bool)peoplePickerNavigationController:(id)v1 shouldContinueAfterSelectingPerson:(void *)v2 property:(int)v3 identifier:(int)v4;
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
- (void)textFieldDidChangeSelection:(id)v1;
- (bool)textFieldShouldClear:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (id)textField:(id)v1 editMenuForCharactersInRange:(struct _NSRange)v2 suggestedActions:(id)v3;
- (void)textField:(id)v1 willPresentEditMenuWithAnimator:(id)v2;
- (void)textField:(id)v1 willDismissEditMenuWithAnimator:(id)v2;
@end


/*****************************************************************/

@protocol DXCMNotificationDelegate<NSObject>

@optional
- (void)processNotificationAppCameToForeground:(unsigned long long)v1;
- (void)processNotificationAcknowledgementFromSwipe:(id)v1 alertType:(unsigned long long)v2;
- (void)processNotificationAppWasAlreadyInForeground:(id)v1 alertType:(unsigned long long)v2;
@end


/*****************************************************************/

@protocol MFMailComposeViewControllerDelegate<NSObject>

@optional
- (void)mailComposeController:(id)v1 didFinishWithResult:(long long)v2 error:(id)v3;
@end


/*****************************************************************/

@protocol _TtP3CGM27CGMTimeValueChangedDelegate_
- (void)timeValueChanged:(id)v1;
@end


/*****************************************************************/

@protocol DDLogger<NSObject>
@property (retain,nonatomic) NSObject<DDLogFormatter> * logFormatter;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * loggerQueue;
@property (readonly,copy,nonatomic) NSString * loggerName;
- (void)logMessage:(id)v1;
- (id)logFormatter;
- (void)setLogFormatter:(id)v1;

@optional
- (void)didAddLogger;
- (void)didAddLoggerInQueue:(id)v1;
- (void)willRemoveLogger;
- (void)flush;
- (id)loggerQueue;
- (id)loggerName;
@end


/*****************************************************************/

@protocol CBCentralManagerDelegate<NSObject>
- (void)centralManagerDidUpdateState:(id)v1;

@optional
- (void)centralManager:(id)v1 willRestoreState:(id)v2;
- (void)centralManager:(id)v1 didDiscoverPeripheral:(id)v2 advertisementData:(id)v3 RSSI:(id)v4;
- (void)centralManager:(id)v1 didConnectPeripheral:(id)v2;
- (void)centralManager:(id)v1 didFailToConnectPeripheral:(id)v2 error:(id)v3;
- (void)centralManager:(id)v1 didDisconnectPeripheral:(id)v2 error:(id)v3;
- (void)centralManager:(id)v1 connectionEventDidOccur:(long long)v2 forPeripheral:(id)v3;
- (void)centralManager:(id)v1 didUpdateANCSAuthorizationForPeripheral:(id)v2;
@end


/*****************************************************************/

@protocol INUIAddVoiceShortcutViewControllerDelegate<NSObject>
- (void)addVoiceShortcutViewController:(id)v1 didFinishWithVoiceShortcut:(id)v2 error:(id)v3;
- (void)addVoiceShortcutViewControllerDidCancel:(id)v1;
@end


/*****************************************************************/

@protocol SetupWizardBaseViewControllerDelegate<NSObject>
@property (readonly) UIView * view;
- (id)view;

@optional
- (void)addContentWithDescription:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addContentWithCustomView:(id)v1 constraints:(id)v2;
- (void)setupVideoImageView:(id)v1;
- (void)setupVideoImageButton:(id)v1;
- (id)localizedPlayVideoText;
- (void)removePlayVideoText;
- (void)addLayoutConstraintsWithLabel:(id)v1;
@end


/*****************************************************************/

@protocol DXCMLegalAgreementsVCDelegate<NSObject>
- (void)userAgreed;
@end


/*****************************************************************/

@protocol CGMAlertScheduleDaysSelectionChangedDelegate<NSObject>
- (void)alertScheduleDaysSelectionChanged:(id)v1;
@end


/*****************************************************************/

@protocol CBPeripheralDelegate<NSObject>

@optional
- (void)peripheralDidUpdateName:(id)v1;
- (void)peripheral:(id)v1 didModifyServices:(id)v2;
- (void)peripheralDidUpdateRSSI:(id)v1 error:(id)v2;
- (void)peripheral:(id)v1 didReadRSSI:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didDiscoverServices:(id)v2;
- (void)peripheral:(id)v1 didDiscoverIncludedServicesForService:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didDiscoverCharacteristicsForService:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didUpdateValueForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didWriteValueForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didUpdateNotificationStateForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didDiscoverDescriptorsForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didUpdateValueForDescriptor:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didWriteValueForDescriptor:(id)v2 error:(id)v3;
- (void)peripheralIsReadyToSendWriteWithoutResponse:(id)v1;
- (void)peripheral:(id)v1 didOpenL2CAPChannel:(id)v2 error:(id)v3;
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

@protocol AVCaptureMetadataOutputObjectsDelegate<NSObject>

@optional
- (void)captureOutput:(id)v1 didOutputMetadataObjects:(id)v2 fromConnection:(id)v3;
@end


/*****************************************************************/

@protocol NSSecureCoding<NSCoding>
+ (bool)supportsSecureCoding;
@end


/*****************************************************************/

@protocol INUIEditVoiceShortcutViewControllerDelegate<NSObject>
- (void)editVoiceShortcutViewController:(id)v1 didUpdateVoiceShortcut:(id)v2 error:(id)v3;
- (void)editVoiceShortcutViewController:(id)v1 didDeleteVoiceShortcutWithIdentifier:(id)v2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)v1;
@end


/*****************************************************************/

@protocol UIPageViewControllerDataSource<NSObject>
- (id)pageViewController:(id)v1 viewControllerBeforeViewController:(id)v2;
- (id)pageViewController:(id)v1 viewControllerAfterViewController:(id)v2;

@optional
- (long long)presentationCountForPageViewController:(id)v1;
- (long long)presentationIndexForPageViewController:(id)v1;
@end


/*****************************************************************/

@protocol UIPageViewControllerDelegate<NSObject>

@optional
- (void)pageViewController:(id)v1 willTransitionToViewControllers:(id)v2;
- (void)pageViewController:(id)v1 didFinishAnimating:(bool)v2 previousViewControllers:(id)v3 transitionCompleted:(bool)v4;
- (long long)pageViewController:(id)v1 spineLocationForInterfaceOrientation:(long long)v2;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(id)v1;
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(id)v1;
@end


/*****************************************************************/

@protocol LearMoreButtonDelegate
- (void)displayLearnMoreModaView;
@end


/*****************************************************************/

@protocol CriticalAlertsFirstExplanationViewDelegate<LearMoreButtonDelegate>
- (void)moveToSoundSettingsFromFirstExplanationView;
- (void)moveToNextState;
@end


/*****************************************************************/

@protocol CriticalAlertsNextExplanationViewDelegate<LearMoreButtonDelegate>
@end


/*****************************************************************/

@protocol CriticalAlertsReadyExplanationViewDelegate
- (void)moveToSoundSettingsFromReadyExplanationView;
@end


/*****************************************************************/

@protocol CGMWebViewDelegate<NSObject>
- (bool)shouldHandleWebNavigation:(id)v1;
- (void)handleWebViewNavigation:(id)v1;
@end


/*****************************************************************/

@protocol UIAdaptivePresentationControllerDelegate<NSObject>

@optional
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1 traitCollection:(id)v2;
- (void)presentationController:(id)v1 prepareAdaptivePresentationController:(id)v2;
- (id)presentationController:(id)v1 viewControllerForAdaptivePresentationStyle:(long long)v2;
- (void)presentationController:(id)v1 willPresentWithAdaptiveStyle:(long long)v2 transitionCoordinator:(id)v3;
- (bool)presentationControllerShouldDismiss:(id)v1;
- (void)presentationControllerWillDismiss:(id)v1;
- (void)presentationControllerDidDismiss:(id)v1;
- (void)presentationControllerDidAttemptToDismiss:(id)v1;
@end


/*****************************************************************/

@protocol UIPopoverPresentationControllerDelegate<UIAdaptivePresentationControllerDelegate>

@optional
- (void)prepareForPopoverPresentation:(id)v1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)v1;
- (void)popoverPresentationControllerDidDismissPopover:(id)v1;
- (void)popoverPresentationController:(id)v1 willRepositionPopoverToRect:(struct CGRect *)v2 inView:(id *)v3;
@end


/*****************************************************************/

@protocol DXCMEventHistoryDelegate
- (void)deleteEvent:(id)v1;
- (void)eventHistoryController:(id)v1 didSelectRowAtIndexPath:(id)v2 forEvent:(id)v3;

@optional
- (id)fetchAllEvents;
- (unsigned long long)supportedInterfaceOrientationMasks;
- (void)launchClarityAppFromEvents;
@end


/*****************************************************************/

@protocol WCSessionDelegate<NSObject>
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
- (void)session:(id)v1 didReceiveUserInfo:(id)v2;
- (void)session:(id)v1 didFinishFileTransfer:(id)v2 error:(id)v3;
- (void)session:(id)v1 didReceiveFile:(id)v2;
@end


/*****************************************************************/

@protocol UNUserNotificationCenterDelegate<NSObject>

@optional
- (void)userNotificationCenter:(id)v1 willPresentNotification:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 didReceiveNotificationResponse:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 openSettingsForNotification:(id)v2;
@end


/*****************************************************************/

@protocol CGMEventDurationPickerTableViewCellDelegate
- (void)didSelectDurationWithMinutes:(int)v1;
@end


/*****************************************************************/

@protocol DXCMTransmitterDelegate<NSObject>

@optional
- (void)dxcmTransmitter:(id)v1 transmitterDidConnect:(id)v2;
- (void)dxcmTransmitter:(id)v1 transmitterDidDisconnect:(id)v2;
- (void)dxcmTransmitter:(id)v1 transmitterDidStartSession:(id)v2 withType:(long long)v3;
- (void)dxcmTransmitter:(id)v1 transmitterDidStopSession:(id)v2 withType:(long long)v3;
- (void)dxcmTransmitter:(id)v1 transmitterDidPair:(id)v2;
@end


/*****************************************************************/

@protocol CGMEGVErrorStateDelegate
- (void)onErrorButton:(unsigned long long)v1;
- (void)onHelpButton:(unsigned long long)v1;
@end


/*****************************************************************/

@protocol _TtP3CGM26DPPublicDataSourceProtocol_
- (id)getGlucoseRecordsFrom:(int)v1 to:(int)v2;
- (id)getMeterDataRecordsFrom:(int)v1 to:(int)v2;
- (id)getSensorSessionRecordsFrom:(int)v1 to:(int)v2;
- (id)getUserEventRecordsFrom:(int)v1 to:(int)v2;
- (id)getAlertScheduleInfo;
- (id)getDeviceInfoRecordFrom:(int)v1 to:(int)v2;
- (id)getNutritionRecordsFrom:(int)v1 to:(int)v2;
- (id)getWorkoutEventRecordsFrom:(int)v1 to:(int)v2;
- (id)getAlertStatusRecordsFrom:(int)v1 to:(int)v2;
@end


/*****************************************************************/

@interface _TtC3CGM25CGMEditTimeViewController (CGM)<UIPickerViewAccessibilityDelegate>
- (id)pickerView:(id)v1 accessibilityLabelForComponent:(long long)v2;
@end


/*****************************************************************/

@interface _TtC3CGM25CGMFeedbackViewController (CGM)
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didFailProvisionalNavigation:(id)v2 withError:(id)v3;
@end


/*****************************************************************/

@interface _TtC3CGM22UAMLoginViewController (CGM)<_TtP16DXCMUAMFramework28UAMWebViewControllerDelegate_>
- (void)errorButtonPressed;
@end


/*****************************************************************/

@interface NSDictionary (DxcmExt)
+ (id)removeObjectsNotOfType:(Class)v1 fromDictionary:(id)v2;
+ (id)dictionaryFromJsonString:(id)v1;
@end


/*****************************************************************/

@interface NSAttributedString (DXCMFormat)
+ (id)getDefaultAttributedString:(id)v1;
+ (id)getWarningAttributedString:(id)v1;
+ (id)getBoldDefaultAttributedString:(id)v1;
+ (id)getBoldTitleAttributedString:(id)v1;
+ (id)getItalicDefaultAttributedString:(id)v1;
+ (id)getHeaderAttributedString:(id)v1;
+ (id)boldSubstringUsingPredefinedTags:(id)v1 boldTextColor:(id)v2;
+ (id)boldString:(id)v1 withAppendedString:(id)v2;
+ (id)warningTextAttributes;
+ (id)warningBoldTextAttributes;
+ (id)boldDefaultTextAttributes;
+ (id)boldHeaderTextAttributes;
+ (id)boldTitleTextAttributes;
+ (id)italicDefaultTextAttributes;
+ (id)format:(id)v1 withBulletPrefix:(id)v2 attributes:(id)v3 spacing:(double)v4 indentation:(double)v5;
+ (id)formatAttributedBulletedList:(id)v1 withBulletPrefix:(id)v2 spacing:(double)v3 indentation:(double)v4;
+ (id)formatAsNumberedList:(id)v1 withBulletPrefix:(id)v2 attributes:(id)v3 spacing:(double)v4 indentation:(double)v5;
@end


/*****************************************************************/

@interface NSDate (DXCMDateTime)
@property (readonly,nonatomic) struct timeOfDay timeOfDay;
+ (id)dateWithTimeOfDay:(struct timeOfDay)v1;
+ (id)dxcm_localizedDateString:(id)v1 withStyle:(unsigned long long)v2;
+ (id)dateComponentsFromDate:(id)v1;
+ (id)dateComponentsFromDate:(id)v1 withTimeZone:(id)v2;
+ (void)accelerateTime:(double)v1;
+ (void)setOffset:(double)v1;
+ (double)getOffset;
+ (id)dxcm_date;
+ (id)dateWithNoDelta;
+ (id)dateFromISO8601String:(id)v1;
+ (id)dxcm_dateAtEndfOfDay;
+ (void)clearFixedTime;
+ (void)setFixedTime:(id)v1;
+ (bool)isTimeFixed;
+ (id)dxcm_dateWithTimeIntervalSinceNow:(double)v1;
+ (bool)dxcm_using24HourClock;
- (struct timeOfDay)timeOfDay;
- (id)dxcm_stringForDateTime;
- (id)dxcm_stringTodayOrDatePlusTime;
- (bool)isSameDayAsDate:(id)v1;
- (id)dxcm_dateWithZeroSeconds;
- (id)ISO8601DateStringUTC;
- (id)ISO8601DateStringNative;
- (double)dxcm_timeIntervalSinceNow;
- (id)initWithDxcm_TimeIntervalSinceNow:(double)v1;
@end


/*****************************************************************/

@interface RNEncryptor (DXCM)
+ (id)encryptData:(id)v1;
+ (id)encryptBase64String:(id)v1;
@end


/*****************************************************************/

@interface MBProgressHUD (MBProgressHUDDXCM)
+ (double)additionalDisplayTime;
+ (void)setAdditionalDisplayTime:(double)v1;
+ (bool)isHUDVisibleForView:(id)v1;
+ (void)showHUDAddedToView:(id)v1 whileExecutingBlock:(void (^ /* unknown block signature */)(void))v2;
+ (void)showHUDAddedToView:(id)v1 withSettingsBlock:(void (^ /* unknown block signature */)(void))v2 whileExecutingBlock:(void (^ /* unknown block signature */)(void))v3 completion:(void (^ /* unknown block signature */)(void))v4;
- (void)setLabelText:(id)v1;
- (void)showCompletionMessage:(id)v1 andImage:(id)v2 andDuration:(double)v3;
- (bool)isVisible;
@end


/*****************************************************************/

@interface NSIndexPath (Accessibility)
- (id)stringValue;
@end


/*****************************************************************/

@interface RNDecryptor (DXCM)
+ (id)decryptData:(id)v1;
+ (id)decryptBase64String:(id)v1;
@end


/*****************************************************************/

@interface UITableViewCell (Accessibility)
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void)addCommonIdWithSuffix:(id)v1;
@end


/*****************************************************************/

@interface UIColor (Additions)
- (id)dxcm_lighterColor;
- (id)dxcm_darkerColor;
@end


/*****************************************************************/

@interface NSString (DxcmExt)
+ (unsigned long long)numOfVisibleCharacters:(id)v1;
+ (id)limitVisibleCharactersOf:(id)v1 withLimit:(unsigned long long)v2;
- (bool)containsString:(id)v1;
- (id)stringWithNoCarriageReturns;
- (bool)isGreaterOrEqualTo:(id)v1 andLessThanOrEqualTo:(id)v2;
- (id)stringByAppendingUrlQueryParams:(id)v1;
@end


/*****************************************************************/

@interface NSMutableAttributedString (LinkString)
- (bool)addLinkWithText:(id)v1 url:(id)v2;
- (void)makeDefaultFontSize;
@end


/*****************************************************************/

@interface MMWormhole (DXCM)
- (id)getAllIdentifiers;
@end


/*****************************************************************/

@interface FMDatabase (CGMDataMgr)
- (void)cgm_executeUpdate:(id)v1 withArgumentsInArray:(id)v2;
- (void)cgm_executeUpdate:(id)v1 withParameterDictionary:(id)v2;
- (void)executeSQL:(id)v1 args:(id)v2 context:(id)v3;
- (id)selectOneValueSQL:(id)v1 args:(id)v2;
- (id)selectManyValuesWithSQL:(id)v1 args:(id)v2;
- (id)selectOneRowWithSQL:(id)v1 args:(id)v2;
- (id)selectManyRowsWithSQL:(id)v1 args:(id)v2;
- (void)updateWithSQL:(id)v1 args:(id)v2;
- (id)selectOneValueSQL:(id)v1;
- (id)selectManyValuesWithSQL:(id)v1;
- (id)selectOneRowWithSQL:(id)v1;
- (id)selectManyRowsWithSQL:(id)v1;
- (void)updateWithSQL:(id)v1;
- (void)installCGMTimestampFunctions;
- (void)installCGMUnixTimestampFunction;
- (void)installCGMISOSystemTimestampFunction;
- (void)installCGMISODisplayTimestampFunction;
@end


/*****************************************************************/

@interface NSData (MD5)
- (id)md5DigestStr;
@end


/*****************************************************************/

@interface UIImage (CGMExtensions)
+ (id)cgmLocalImageNamed:(id)v1;
+ (id)cgmUnitsImageNamed:(id)v1;
+ (id)cgmNameWithLanguageSuffix:(id)v1;
+ (id)cgmFallbackToEnglishImageWithUnitsNamed:(id)v1;
+ (id)cgmFallbacktoEnglishImageNamed:(id)v1;
@end


/*****************************************************************/

@interface UIView (EZFrame)
- (void)setXPos:(double)v1;
- (void)setYPos:(double)v1;
- (void)setWidth:(double)v1;
- (void)setHeight:(double)v1;
@end


/*****************************************************************/

@interface UAMController : NSObject {
    id uamManager;
}
@property (nonatomic,retain) UAMManager * uamManager;
+ (id)sharedInstance;
+ (id)getConfiguration;
+ (id)getAccountId:(id)v1;
+ (long long)getDataConsentStatus:(id)v1;
+ (bool)isInvalidGrantError:(id)v1;
- (id)init;
- (void)setLinkWithAuthorizeUrl:(id)v1 withRefreshTokenUrl:(id)v2;
- (void)renewAccessToken:(void (^ /* unknown block signature */)(void))v1;
- (void)setUAMValuesWithAccessToken:(id)v1 parameters:(id)v2;
- (void)resetUAMValues;
- (void)resetManager;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface AlertStateHistoryEntry : CGMBaseDataObject {
    id record_id;
    id alert_type;
    id name;
    id state;
    id alert_id;
    id recorded_system_time_sec;
}
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned int recordId;
@property (nonatomic,copy) NSString * alertName;
@property (nonatomic) unsigned long long alertState;
@property (nonatomic,copy) NSUUID * alertId;
@property (nonatomic) double recordedTimeSec;
@property (nonatomic,copy) NSString * recorded_time;
@property (nonatomic) unsigned int record_id;
@property (nonatomic) unsigned long long alert_type;
@property (nonatomic,copy) NSString * name;
@property (nonatomic) unsigned long long state;
@property (nonatomic,copy) NSString * alert_id;
@property (nonatomic) double recorded_system_time_sec;
- (id)initWithAlertType:(unsigned long long)v1 state:(unsigned long long)v2 eventId:(id)v3;
- (id)initWithDictionary:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM32LocatingSensorCodeViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    id $__lazy_storage_$_helper;
}
- (void)viewDidLoad;
- (void)close;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM24LocatingSensorCodeHelper : StoryboardWizardHelper {
    id enterCodeButton;
    id noCodeButton;
}
@property (nonatomic,readonly) DXCMBlockButton * enterCodeButton;
@property (nonatomic,readonly) DXCMBlockButton * noCodeButton;
- (void)displaySensorCodeOptionsScreen;
- (id)initWithDelegate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface AlertHistoryDao : CGMBaseDao
- (void)insert:(id)v1;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getEventIdForAlertType:(unsigned long long)v1;
- (id)fetchAlertHistoryDictionaryAfterSystemTime:(double)v1;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (id)initWithDatabase:(id)v1 daoMgr:(id)v2;
- (id)init;
@end


/*****************************************************************/

@interface _TtC3CGM34CGMAlertSettingsTimeViewController : DXCMBaseViewController<_TtP3CGM27CGMTimeValueChangedDelegate_> {
    id navigationTitle;
    id userAlert;
    id timeDelegate;
    id selectedTimeValue;
}
@property (nonatomic,copy) NSString * navigationTitle;
@property (nonatomic) CGMUserAlert * userAlert;
@property (nonatomic) NSObject<_TtP3CGM28CGMAlertSettingsTimeDelegate_> * timeDelegate;
- (void)viewDidLoad;
- (void)timeValueChanged:(id)v1;
- (void)willMoveToParentViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM25CGMEditTimeViewController : DXCMBaseViewController<UIPickerViewDelegate,UIPickerViewDataSource,UITableViewDelegate,UITableViewDataSource> {
    id timePicker;
    id tableView;
    id filteredPickerData;
    id hourComponent;
    id minuteComponent;
    id defaultTimeValue;
    id timeDescription;
    id dataChangedDelegate;
    id minTime;
    id maxTime;
    id stepMinutes;
    id forbiddenTimes;
    id hours;
    id minutes;
    id previousSelectedPickerHoursRow;
    id previousSelectedPickerMinutesRow;
}
@property (nonatomic) UIPickerView * timePicker;
@property (nonatomic) UITableView * tableView;
@property (nonatomic,readonly) long long hourComponent;
@property (nonatomic,readonly) long long minuteComponent;
@property (nonatomic,retain) NSNumber * defaultTimeValue;
@property (nonatomic,copy) NSString * timeDescription;
@property (nonatomic) NSObject<_TtP3CGM27CGMTimeValueChangedDelegate_> * dataChangedDelegate;
@property (nonatomic) long long minTime;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long stepMinutes;
@property (nonatomic,copy) NSArray * forbiddenTimes;
- (void)viewDidLoad;
- (void)setPickerValueWithAnimation:(bool)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (double)pickerView:(id)v1 widthForComponent:(long long)v2;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
- (bool)forbiddenTimeSelected:(long long)v1;
- (void)movePickerToNextValidMinuteValue:(long long)v1 selectedHourRow:(long long)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM14DXCMHelpButton : UIButton
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)showBorder:(bool)v1;
@end


/*****************************************************************/

@interface _TtC3CGM29UAMReAuthNavigationController : DXCMBaseNavigationController {
    id nonEnglishSupport;
}
@property (nonatomic) bool nonEnglishSupport;
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC3CGM18CGMDataPostManager : NSObject<CGMSubscriberDataSource> {
    id backgroundTask;
}
+ (id)sharedInstance;
- (id)init;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)beginBackgroundTask;
- (void)endBackgroundTask;
- (double)backgroundTimeRemaining;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM16DXCMReachability : NSObject {
    id isReachable;
    id reach;
}
@property (nonatomic) bool isReachable;
+ (id)sharedInstance;
- (id)init;
- (void)start;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM18DPAlertEventRecord : DPBaseObject {
    id RecordVersion;
    id Timestamp;
    id AlertId;
    id AlertName;
    id AlertState;
    id RecordedTime;
}
@property (nonatomic,readonly) NSString * RecordVersion;
@property (nonatomic,copy) NSString * Timestamp;
@property (nonatomic,copy) NSString * AlertId;
@property (nonatomic,copy) NSString * AlertName;
@property (nonatomic,copy) NSString * AlertState;
@property (nonatomic,copy) NSString * RecordedTime;
+ (id)convertAlertStateIntoString:(unsigned long long)v1;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM27SensorCodePostSetupWizardVC : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    id $__lazy_storage_$_helper;
}
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM31SensorCodePostSetupWizardHelper : StoryboardWizardHelper {
    id enterCodeButton;
    id noCodeButton;
    id iUnderstandButton;
}
@property (nonatomic,readonly) DXCMBlockButton * enterCodeButton;
@property (nonatomic,readonly) DXCMBlockButton * noCodeButton;
@property (nonatomic,readonly) DXCMBlockButton * iUnderstandButton;
- (void)displaySensorCodePostSetupWizardScreen:(bool)v1;
- (id)initWithDelegate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM24SensorCodeViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    id customView;
    id scanCodeButton;
    id enterManuallyButton;
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM15QualtricsHelper : NSObject
+ (void)initQualtricsWithInterceptId:(id)v1 projectId:(id)v2 brandId:(id)v3;
- (id)init;
@end


/*****************************************************************/

@interface _TtC3CGM32TreatmentDecisionsViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    id $__lazy_storage_$_helper;
    id index;
}
@property (nonatomic,retain) _TtC3CGM30TreatmentDecisionsWizardHelper * helper;
@property (nonatomic) long long index;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)next;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)moviePlaybackDidFinish;
- (void)videoImageTappedWithRecognizer:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM30TreatmentDecisionsWizardHelper : StoryboardWizardHelper {
    id iUnderstand;
    id fullSafety;
    id nextButton;
}
@property (nonatomic,readonly) DXCMBlockButton * iUnderstand;
@property (nonatomic,readonly) DXCMBlockButton * fullSafety;
@property (nonatomic,readonly) DXCMBlockButton * nextButton;
- (void)displayTreatmentDecisionsScreenWithIndex:(long long)v1 videoImageView:(id)v2;
- (id)getDecisionInfoScreenText;
- (id)getVideoScreenText;
- (id)topButtonForTreatmentDecisionsScreen:(long long)v1;
- (id)bottomButtonForTreatmentDecisionsScreen:(long long)v1;
- (id)initWithDelegate:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface StoryboardWizardHelper : NSObject {
    id delegate;
    id defaultBulletIndentation;
}
@property (nonatomic) NSObject<SetupWizardBaseViewControllerDelegate> * delegate;
@property (nonatomic,readonly) double defaultBulletIndentation;
- (id)initWithDelegate:(id)v1;
- (void)setupWizardStoryboard:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4;
- (void)setupWizardStoryboard:(id)v1 constraints:(id)v2;
- (id)getDefaultAttributedString:(id)v1;
- (id)getItalicDefaultAttributedString:(id)v1;
- (id)localizedPlayVideoText;
- (void)removePlayVideoText;
- (void)setupVideoImageView:(id)v1;
- (void)setupVideoImageButton:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM21DPAlertScheduleRecord : DPBaseRecord {
    id RecordVersion;
    id AlertScheduleList;
    id RecordedTime;
}
@property (nonatomic,readonly) NSString * RecordVersion;
@property (nonatomic,copy) NSArray * AlertScheduleList;
@property (nonatomic,copy) NSString * RecordedTime;
- (id)dictionary;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM19DPAlertScheduleList : DPBaseRecord {
    id AlertScheduleSettings;
    id AlertSettings;
}
@property (nonatomic,retain) _TtC3CGM23DPAlertScheduleSettings * AlertScheduleSettings;
@property (nonatomic,copy) NSArray * AlertSettings;
- (id)dictionary;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM23DPAlertScheduleSettings : DPBaseRecord {
    id AlertScheduleName;
    id IsAlertScheduleEnabled;
    id AlwaysSound;
    id StartTime;
    id EndTime;
    id DaysOfWeek;
    id IsDefaultSchedule;
}
@property (nonatomic,copy) NSString * AlertScheduleName;
@property (nonatomic) bool IsAlertScheduleEnabled;
@property (nonatomic) bool AlwaysSound;
@property (nonatomic,copy) NSString * StartTime;
@property (nonatomic,copy) NSString * EndTime;
@property (nonatomic,copy) NSArray * DaysOfWeek;
@property (nonatomic) bool IsDefaultSchedule;
- (id)initWithAlertSchedule:(id)v1;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM23DPRealTimeGlucoseRecord : DPBaseRecord {
    id RecordVersion;
    id RecordedTime;
    id Value;
    id TrendRate;
    id TrendArrow;
    id AlgState;
    id IsBackfilled;
    id Timestamp;
    id TXId;
    id TXTime;
    id TXSessionStartTime;
    id PredictedValue;
    id Source;
    id EventType;
}
@property (nonatomic,copy) NSString * RecordVersion;
@property (nonatomic,copy) NSString * RecordedTime;
@property (nonatomic,copy) NSString * TrendArrow;
@property (nonatomic,copy) NSString * AlgState;
@property (nonatomic,copy) NSString * Timestamp;
@property (nonatomic,copy) NSString * TXId;
@property (nonatomic,copy) NSString * Source;
@property (nonatomic,copy) NSString * EventType;
- (id)initWithEgv:(id)v1;
- (id)dictionary;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM29DefaultSettingsViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    id nextButton;
}
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM21CGMSnapshotDataHelper : _TtCs12_SwiftObject {
    id subscriptionId;
    id currentEGV;
    id egvValues;
    id alertsDictionary;
    id maxGraphYAxisValue;
    id isAppValid;
    id timeDelta;
    id criticalAlertsEnable;
    id isOnUnsafeState;
}
@end


/*****************************************************************/

@interface _TtC3CGM21AlertScheduleSnapshot : NSObject {
    id defaultSchedule;
    id defaultAlertSettings;
    id customSchedule;
    id customAlertSettings;
    id lastUpdateTime;
}
@property (nonatomic,retain) CGMAlertSchedule * defaultSchedule;
@property (nonatomic,copy) NSArray * defaultAlertSettings;
@property (nonatomic,retain) CGMAlertSchedule * customSchedule;
@property (nonatomic,copy) NSArray * customAlertSettings;
@property (nonatomic) int lastUpdateTime;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SafetyStoryboardWizardHelper : StoryboardWizardHelper {
    id separatorHeight;
}
@property (nonatomic,readonly) double separatorHeight;
- (void)displaySafetyScreenWithIndex:(long long)v1;
- (void)displaySafetyFilmReel;
- (id)initWithDelegate:(id)v1;
@end


/*****************************************************************/

@interface _TtC3CGM25CGMFeedbackViewController : CGMWebViewController {
    id qualtricsInitialURL;
}
- (void)viewDidLoad;
- (void)updateErrorHTML;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM13UAMConfigFile : NSObject
+ (id)getValueFromConfigFileForKey:(long long)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM36CGMTimeSensitiveNavigationController : DXCMBaseNavigationController
- (id)initWithNavigationBarClass:(Class)v1 toolbarClass:(Class)v2;
- (id)initWithRootViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC3CGM12WidgetHelper : NSObject {
    id currentSnapshotData;
}
+ (id)shared;
+ (void)updateWidget;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM40CGMNotificationsAreDelayedViewController : DXCMBaseViewController {
    id descriptionLabel;
    id openSettingsButton;
    id backgroudView;
}
- (void)viewDidLoad;
- (void)didBecomeActive;
- (void)handleCloseAction;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM22UAMLoginViewController : DXCMBaseViewController
- (void)viewDidLoad;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
@end


/*****************************************************************/

@interface _TtC3CGM15DXCMTimeManager : NSObject
+ (void)resetTimeOffset;
+ (void)setOffset:(double)v1;
+ (void)accelerateTime:(double)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC3CGM28ImportSettingsViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    id $__lazy_storage_$_helper;
    id actionTimer;
    id actionTimerValue;
    id killActionTime;
    id kActionTimerInterval;
    id importButton;
    id importLabel;
    id baseIndex;
    id $__lazy_storage_$_ringView;
}
@property (nonatomic,retain) _TtC3CGM26ImportSettingsWizardHelper * helper;
@property (nonatomic,retain) NSTimer * actionTimer;
@property (nonatomic) float actionTimerValue;
@property (nonatomic,readonly) float killActionTime;
@property (nonatomic,readonly) float kActionTimerInterval;
@property (nonatomic,retain) DXCMBlockButton * importButton;
@property (nonatomic,retain) UILabel * importLabel;
@property (nonatomic) long long baseIndex;
@property (nonatomic,retain) DXCMRingView * ringView;
- (void)viewDidLoad;
- (void)next;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)setStateFor:(id)v1 enabled:(bool)v2;
- (void)startActionTimer;
- (void)actionTimerFired:(id)v1;
- (void)endActionTimer;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM26ImportSettingsWizardHelper : StoryboardWizardHelper
- (void)displayImportSettingsScreenWithIndex:(long long)v1;
- (id)buttonForImportSettingsScreen:(long long)v1;
- (id)initWithDelegate:(id)v1;
@end


/*****************************************************************/

@interface _TtC3CGM20DPWorkoutEventRecord : DPBaseRecord {
    id Duration;
    id EnergyBurned;
    id EventId;
    id StartTime;
    id EndTime;
    id Name;
    id SourceId;
    id SourceName;
    id DataSource;
    id SourceVersion;
    id RecordVersion;
    id RecordStatus;
    id RecordedTime;
}
@property (nonatomic) long long Duration;
@property (nonatomic) long long EnergyBurned;
@property (nonatomic,copy) NSString * EventId;
@property (nonatomic,copy) NSString * StartTime;
@property (nonatomic,copy) NSString * EndTime;
@property (nonatomic,copy) NSString * Name;
@property (nonatomic,copy) NSString * SourceId;
@property (nonatomic,copy) NSString * SourceName;
@property (nonatomic,copy) NSString * DataSource;
@property (nonatomic,copy) NSString * SourceVersion;
@property (nonatomic,copy) NSString * RecordVersion;
@property (nonatomic,copy) NSString * RecordStatus;
@property (nonatomic,copy) NSString * RecordedTime;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM32CGMAlertSettingsMenuItemsManager : NSObject<CGMSubscriberDataSource> {
    id minUserDefinedAlertScheduleRowCount;
    id maxUserDefinedAlertScheduleRowCount;
    id resetAlertSettingsRowCount;
    id alwaysSoundSettingsRowCount;
    id emptyString;
    id onString;
    id offString;
    id alertSettingsRowTitleList;
    id alertSettingsRowAlertName;
    id alertSettingsNotSchedulable;
    id coreDbMgr;
    id defaultAlertSchedule;
    id defaultAlertSettingsArray;
    id userDefinedAlertSchedule;
    id alertScheduleAlertSettingsArray;
}
+ (id)sharedInstance;
- (id)init;
- (void)fetchAlertSettings;
- (bool)userDefinedAlertScheduleExists;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)v1;
- (id)headerTitleOfItemsInSection:(long long)v1;
- (id)headerAccessibilityIdInSection:(long long)v1;
- (double)heightForHeaderInSection:(long long)v1;
- (double)heightForFooterInSection:(long long)v1;
- (id)footerTitleOfItemsInSection:(long long)v1;
- (id)footerAccessibilityIdInSection:(long long)v1;
- (id)menuItemAtIndexPath:(id)v1;
- (bool)isResetAlertSettingsAtIndexPath:(id)v1;
- (bool)isAlertScheduleSelectedDaysAtIndexPath:(id)v1;
- (bool)isAlertScheduleSelectedDaysError;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM22DPNutritionEventRecord : DPBaseRecord {
    id StartTime;
    id EndTime;
    id EventId;
    id MealName;
    id FoodItem;
    id Fiber;
    id Carbs;
    id FatTotal;
    id Protein;
    id Calories;
    id Sugar;
    id SourceId;
    id SourceName;
    id DataSource;
    id SourceVersion;
    id RecordVersion;
    id RecordStatus;
    id RecordedTime;
}
@property (nonatomic,copy) NSString * StartTime;
@property (nonatomic,copy) NSString * EndTime;
@property (nonatomic,copy) NSString * EventId;
@property (nonatomic,copy) NSString * MealName;
@property (nonatomic,copy) NSString * FoodItem;
@property (nonatomic) double Fiber;
@property (nonatomic) double Carbs;
@property (nonatomic) double FatTotal;
@property (nonatomic) double Protein;
@property (nonatomic) double Calories;
@property (nonatomic) double Sugar;
@property (nonatomic,copy) NSString * SourceId;
@property (nonatomic,copy) NSString * SourceName;
@property (nonatomic,copy) NSString * DataSource;
@property (nonatomic,copy) NSString * SourceVersion;
@property (nonatomic,copy) NSString * RecordVersion;
@property (nonatomic,copy) NSString * RecordStatus;
@property (nonatomic,copy) NSString * RecordedTime;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM20UAMWebAPIAccountInfo : NSObject {
    id id;
    id loginId;
    id firstName;
    id lastName;
    id displayName;
    id dateOfBirth;
    id gender;
    id email;
    id countryCode;
    id postalCode;
    id cultureCode;
    id dateCreated;
    id dateModified;
    id dateVerified;
    id isActive;
}
@property (nonatomic,copy) NSString * id;
@property (nonatomic,copy) NSString * loginId;
@property (nonatomic,copy) NSString * firstName;
@property (nonatomic,copy) NSString * lastName;
@property (nonatomic,copy) NSString * displayName;
@property (nonatomic,copy) NSString * dateOfBirth;
@property (nonatomic,copy) NSString * gender;
@property (nonatomic,copy) NSString * email;
@property (nonatomic,copy) NSString * countryCode;
@property (nonatomic,copy) NSString * postalCode;
@property (nonatomic,copy) NSString * cultureCode;
@property (nonatomic,copy) NSString * dateCreated;
@property (nonatomic,copy) NSString * dateModified;
@property (nonatomic,copy) NSString * dateVerified;
@property (nonatomic) bool isActive;
- (id)initWithDictionary:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM10DeviceInfo : NSObject {
    id language;
    id isMmolDisplayMode;
    id is24HourMode;
    id isBlindedMode;
    id transmitterId;
    id softwareNumber;
    id softwareVersion;
}
@property (nonatomic,copy) NSString * language;
@property (nonatomic) bool isMmolDisplayMode;
@property (nonatomic) bool is24HourMode;
@property (nonatomic) bool isBlindedMode;
@property (nonatomic,copy) NSString * transmitterId;
@property (nonatomic,copy) NSString * softwareNumber;
@property (nonatomic,copy) NSString * softwareVersion;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM21DataConsentUAMManager : NSObject {
    id entrypoint;
    id viewController;
    id currentOptInStatus;
    id navigationBarHidden;
}
+ (id)sharedInstance;
- (id)init;
- (void)setupWithEntrypoint:(unsigned long long)v1 viewController:(id)v2 navigationBarHidden:(bool)v3;
- (void)showWebViewWithAnimation:(bool)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM23UAMReAuthViewController : DXCMBaseViewController {
    id minimumSpacing;
    id maximumSpacing;
    id buttonSpacing;
    id loginButtonsSpacing;
    id nonEnglishSupport;
    id accessErrorDescriptionLabel;
    id reLogin;
    id loginLater;
    id callTechSupport;
}
- (void)viewDidLoad;
- (void)cancelButtonPressed;
- (void)callTechSupportAlertHandler;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM40CGMAlertSettingsAlertLimitViewController : DXCMBaseViewController<CGMAlertLimitChangedDelegate> {
    id navigationTitle;
    id userAlert;
    id alertLimitDelegate;
    id selectedAlertLimit;
}
@property (nonatomic,copy) NSString * navigationTitle;
@property (nonatomic,retain) CGMUserAlert * userAlert;
@property (nonatomic) NSObject<_TtP3CGM34CGMAlertSettingsAlertLimitDelegate_> * alertLimitDelegate;
- (void)viewDidLoad;
- (void)alertLimitChanged:(id)v1;
- (void)willMoveToParentViewController:(id)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM27NonAdjunctiveViewController : DXCMBaseViewController {
    id watchVideo;
    id skipVideo;
    id descriptionLabel;
}
- (void)viewDidLoad;
- (void)moviePlaybackDidFinish;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM28DPPartnerInsulinDeviceRecord : DPBaseRecord {
    id RecordVersion;
    id Timestamp;
    id AppVersion;
    id DeviceVersion;
    id DeviceModel;
    id DeviceId;
    id UDI;
    id UnregisterDate;
}
@property (nonatomic,readonly) NSString * RecordVersion;
@property (nonatomic,copy) NSString * Timestamp;
@property (nonatomic,copy) NSString * AppVersion;
@property (nonatomic,copy) NSString * DeviceVersion;
@property (nonatomic,copy) NSString * DeviceModel;
@property (nonatomic,copy) NSString * DeviceId;
@property (nonatomic,copy) NSString * UDI;
@property (nonatomic,copy) NSString * UnregisterDate;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM18WidgetSnapshotData : NSObject {
    id egvData;
    id md5Digest;
    id isEncrypted;
    id isAppValid;
    id criticalAlertsEnable;
    id isOnUnsafeState;
    id date;
    id alertsDictionary;
    id settingsDataSource;
    id egvsArray;
    id egv;
    id maxGraphYAxisValue;
    id timeDelta;
    id timeStamp;
}
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface _TtC3CGM21DPBundleBuilderHelper : NSObject
+ (id)createMeterRecordFromMeter:(id)v1;
+ (id)createNutritionEventRecordFromMeal:(id)v1;
+ (id)createWorkoutEventRecordFromWorkout:(id)v1;
+ (id)createUserEventRecordFromEvent:(id)v1;
+ (id)createAlertEntryRecordFromAlertStateHistory:(id)v1;
+ (id)createAlertScheduleRecordFromSnapshot:(id)v1;
+ (id)unitsTypeStringFromEvent:(id)v1;
- (id)init;
@end


/*****************************************************************/

@interface _TtC3CGM17HomeWidgetPlotter : NSObject {
    id hoursToPlot;
    id plottingSnapshot;
    id plotForPreview;
    id alertsDataSource;
    id egvDataSource;
    id baseRect;
    id plotSize;
    id highAlertEnabled;
    id lowAlertEnabled;
    id fixedlowAlertEnabled;
    id urgentLowSoonAlertEnabled;
    id highAlertValue;
    id lowAlertValue;
    id fixedLowAlertValue;
    id yIncrement;
    id xIncrement;
    id maxYAxisValue;
    id kPointsPerHour;
    id kPointsPerHourInt;
    id kLowerPlotRange;
    id kYAxisInset;
    id kAlertLineThickness;
    id kAxisLineThickness;
}
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMBaseHeaderFooterView : UITableViewHeaderFooterView {
    UILabel * _label;
}
@property (retain,nonatomic) UILabel * label;
- (id)initWithReuseIdentifier:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTransmitterConnectionLog : NSObject {
    double _connectTime;
    double _disconnectTime;
    long long _rssi;
    long long _backfillCount;
    unsigned long long _logRowCount;
    long long _advertiseDurationMs;
    unsigned int _connectDurationMs;
    long long _disconnectStatus;
    NSDate * _egvSystemTime;
    unsigned int _egvTxTime;
    unsigned int _sessionStartTime;
    NSString * _txId;
    NSString * _appState;
    unsigned long long _txStatusCode;
    bool _connectionSuccess;
    NSMutableArray * _warnings;
}
- (id)init;
- (id)getConnectionSuccessLog;
- (id)getConnectionFailureLog;
- (void)markConnectionSuccess;
- (bool)IsConnectionSuccess;
- (void)markConnectTime;
- (void)markDisconnectTime;
- (void)setDisconnectStatus:(long long)v1;
- (void)setRSSI:(long long)v1;
- (void)setAdvertisementDuration:(unsigned long long)v1;
- (void)setBackfillCount:(long long)v1;
- (void)setLoggerRowCount:(unsigned long long)v1;
- (void)addWarning:(id)v1;
- (void)setEgvData:(id)v1 egvTxTime:(unsigned int)v2 sessionStartTime:(unsigned int)v3;
- (void)setTransmitterId:(id)v1;
- (void)setAppState:(id)v1;
- (void)setTxStatusCode:(unsigned long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTransmitterEGVBackFill : NSObject {
    unsigned int _transmitterSessionStartTime;
    NSString * _transmitterId;
}
@property (retain,nonatomic) NSString * transmitterId;
- (id)initWithParameters:(id)v1 transmitterSessionStartTime:(unsigned int)v2;
- (struct _DXCMBackfillRange)getGapInfo:(id)v1 transmitterTimeOffset:(unsigned int)v2 minStartTime:(unsigned int)v3;
- (struct _DXCMBackfillRange)algorithmGapDetector:(id)v1 minStartTime:(unsigned int)v2;
- (int)getStartTimeIfOtherTransmitter:(int)v1 startTxTime:(int)v2 records:(id)v3;
- (int)getTransmitterTimeOffset:(id)v1;
- (int)getStartTime:(id)v1 minimumTime:(int)v2;
- (bool)isSequenceNumberGap:(id)v1 current:(id)v2;
- (id)createCGMEGVRecordFromServiceEGVRecord:(id)v1 transmitterTimeOffset:(unsigned int)v2;
- (id)parseResponseStreamIntoEGVRecords:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceDataStreamRecord : NSObject {
    unsigned char _streamStatus;
    unsigned char _streamID;
    unsigned short _streamCRC;
    unsigned int _startTime;
    unsigned int _endTime;
    unsigned int _streamLength;
}
@property (readonly) unsigned char streamStatus;
@property (readonly) unsigned char streamID;
@property (readonly) unsigned int startTime;
@property (readonly) unsigned int endTime;
@property (readonly) unsigned int streamLength;
@property (readonly) unsigned short streamCRC;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1 streamID:(unsigned char)v2 startTime:(unsigned int)v3 endTime:(unsigned int)v4 streamLength:(unsigned int)v5 streamCRC:(unsigned short)v6;
- (id)initWithDictionary:(id)v1;
@end


/*****************************************************************/

@interface DCGMServiceTypesInternal : NSObject
@end


/*****************************************************************/

@interface DCGMServiceTransmitterExtendedVersionRecord : NSObject {
    unsigned char _sessionDays;
    bool _dataStreamingAvailable;
    bool _predictiveEgvSupported;
    bool _backfillSupported;
    bool _separateIntervals;
    bool _motionDataSupported;
    unsigned short _warmupLength;
}
@property (readonly) unsigned char sessionDays;
@property (readonly) unsigned short warmupLength;
@property (readonly) bool dataStreamingAvailable;
@property (readonly) bool predictiveEgvSupported;
@property (readonly) bool backfillSupported;
@property (readonly) bool separateIntervals;
@property (readonly) bool motionDataSupported;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1 streamingAvailable:(bool)v2 predictiveEgvSupported:(bool)v3 backfillSupported:(bool)v4;
- (id)initWithValues:(unsigned char)v1 warmupLength:(unsigned short)v2 streamingAvailable:(bool)v3 predictiveEgvSupported:(bool)v4 backfillSupported:(bool)v5 separateIntervals:(bool)v6 motionDataSupported:(bool)v7;
- (id)initWithDictionary:(id)v1;
@end


/*****************************************************************/

@interface DCGMServiceTypes : NSObject
+ (id)prefixForTransmitterType:(unsigned char)v1;
+ (id)invalidCharsForTransmitterType:(unsigned char)v1;
+ (id)localizedInvalidCharsListForTransmitterType:(unsigned char)v1;
+ (id)algStateString:(unsigned char)v1;
+ (unsigned char)stringToAlgState:(id)v1;
+ (id)calStateString:(unsigned char)v1;
+ (long long)trendArrow:(char)v1;
+ (id)trendArrowString:(char)v1;
+ (id)trendArrowStringFromArrow:(long long)v1;
+ (long long)trendArrowFromString:(id)v1;
+ (id)unicodeArrowForTrend:(long long)v1;
+ (id)txErrorString:(long long)v1;
+ (id)batteryStatusString:(long long)v1;
+ (id)calibrationModeAsString:(unsigned char)v1;
+ (id)sessionLogAsString:(long long)v1;
@end


/*****************************************************************/

@interface CGMKeyValueTables : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)setupDataModelIfNeededWithName:(id)v1;
- (void)setInt:(int)v1 forKey:(id)v2 tableName:(id)v3;
- (void)setString:(id)v1 forKey:(id)v2 inTable:(id)v3;
- (id)getStringForKey:(id)v1 inTable:(id)v2;
- (bool)valueExistsForKey:(id)v1 inTable:(id)v2;
- (void)deleteItemForKey:(id)v1 inTable:(id)v2;
- (id)queryAllValuesFromTable:(id)v1;
- (void)eraseDataFromTable:(id)v1;
@end


/*****************************************************************/

@interface CGMSupportLogger : NSObject {
    CGMDataMgr * _dataMgr;
}
@property (retain,nonatomic) CGMDataMgr * dataMgr;
+ (id)instance;
- (id)initWithDataMgr:(id)v1;
- (void)processEvent:(SEL)v1 from:(id)v2;
- (void)logUpdatingScreenActivityOn:(id)v1 state:(id)v2 text:(id)v3;
- (void)logUpdatingScreenEGV:(id)v1 state:(id)v2 egvValue:(id)v3 trendArrow:(id)v4;
- (unsigned int)numberOfRowsInTable;
- (void)logDataEntryActivityOn:(id)v1 dataType:(id)v2 dataSubtype:(id)v3 dataValue:(id)v4;
- (void)logUserActivity:(unsigned long long)v1 data:(id)v2 view:(id)v3;
- (void)logUserActivity:(unsigned long long)v1 data:(id)v2 view:(id)v3 duration:(double)v4;
- (void)logUserActivity:(unsigned long long)v1 subtype:(id)v2 data:(id)v3 date:(long long)v4;
- (void)logUserActivity:(unsigned long long)v1 subtype:(id)v2 data:(id)v3;
- (void)save:(unsigned long long)v1 subtype:(id)v2 data:(id)v3 date:(long long)v4;
- (id)controlViewControllerClassName:(id)v1;
- (id)displayNameFromClassName:(id)v1;
- (id)methodName:(SEL)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEventsDao : CGMBaseDao {
    NSString * _logName;
}
@property (retain,nonatomic) NSString * logName;
- (int)getMinRecordId;
- (int)getMaxRecordId;
- (id)getUserEventsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (int)insertEvent:(id)v1;
- (int)insertCarbsEvent:(id)v1;
- (int)insertInsulinEvent:(id)v1;
- (int)insertExerciseEvent:(id)v1;
- (int)insertHealthEvent:(id)v1;
- (int)actuallyInsertEventWithType:(int)v1 subType:(unsigned long long)v2 time:(int)v3 value:(int)v4;
- (void)deleteBaseEvent:(id)v1;
- (id)fetchWithID:(id)v1;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (id)fetchEventsSinceDate:(id)v1 withRecordStatus:(id)v2;
- (id)fetchEventsAfterEventTime:(double)v1;
- (id)fetchEventsDictionaryAfterEventTime:(double)v1;
- (id)fetchLastEventRecordedTimeWithType:(int)v1 subType:(int)v2 withRecordStatus:(id)v3;
- (id)fetchEventsWithType:(long long)v1 subType:(long long)v2 SinceDate:(id)v3 withRecordStatus:(id)v4;
- (id)convertDBResultToCGMEventBaseArray:(id)v1;
- (id)fetchLastEventWithType:(long long)v1 subType:(long long)v2 SinceDate:(id)v3 withRecordStatus:(id)v4;
- (id)fetchEventsWithType:(long long)v1 SinceDate:(id)v2 withRecordStatus:(id)v3;
- (id)fetchExerciseSinceDate:(id)v1 withRecordStatus:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAPIRealTimeEvent : DSAPIBaseAPI {
    NSString * serverURL;
}
+ (id)instance;
- (id)init;
- (void)setServerToDefault;
- (void)setServer:(id)v1;
- (id)getServer;
- (bool)PostEvents:(id)v1;
- (void)logShareEventWithPostSize:(unsigned long long)v1 withException:(id)v2;
- (id)ReadEvents:(long long)v1 sinceDate:(id)v2;
- (id)ReadLastEventPosted:(long long)v1;
- (void)StartRemoteMonitoringSession2:(id)v1;
- (void)PauseSubscription2:(id)v1;
- (id)ReadPublisherLatestGlucoseValues2;
- (id)CreateFollowerInvitation2:(id)v1 emailAddress:(id)v2 languageCode:(id)v3 countryCode:(id)v4 patientName:(id)v5 contactSettings:(id)v6;
- (void)DeleteContact2:(id)v1;
- (void)UpdateSubscriptionPermissions2:(id)v1 permission:(id)v2;
- (void)UpdateContact:(id)v1 emailAddress:(id)v2 contactName:(id)v3;
- (void)ResumeSubscription2:(id)v1;
- (void)UpdatePublisherAccountRuntimeInfo2;
- (id)ListPublisherAccountSubscriptionsEx2;
- (void)deleteDeviceKey;
- (id)getStringOfEventTypes:(long long)v1;
- (id)getStringForEventType:(long long)v1;
- (long long)eventTypeFromName:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertSettingsViewController : DXCMBaseViewController {
    bool _needsReload;
    UITableView * _tableView;
}
@property (nonatomic) bool needsReload;
@property (retain,nonatomic) UITableView * tableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (void)tableView:(id)v1 willDisplayHeaderView:(id)v2 forSection:(long long)v3;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (bool)isDisabledForPro:(id)v1;
- (void)alertScheduleEnabled:(bool)v1;
- (void)alwaysSoundEnabled:(bool)v1 isDefault:(bool)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)actionSheetForResetAlertSettings;
- (void)pushViewControllerNamed:(id)v1 StoryBoardNamed:(id)v2 viewControllerTitleNamed:(id)v3 dataDict:(id)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMWebViewController : DXCMBaseViewController<WKNavigationDelegate> {
    bool _autoUpdateTitle;
    bool _addSession;
    bool _navigationCancelled;
    bool _needsDismissButton;
    bool _webViewBackNavigationAllowed;
    NSObject<CGMWebViewDelegate> * _webViewDelegate;
    NSString * _mTitle;
    NSString * _mUrl;
    NSDictionary * _mHeaders;
    WKWebView * _mWebView;
    NSTimer * _pageTimeoutTimer;
}
@property (retain,nonatomic) WKWebView * mWebView;
@property (retain,nonatomic) NSTimer * pageTimeoutTimer;
@property (nonatomic) bool autoUpdateTitle;
@property (nonatomic) bool addSession;
@property (nonatomic) bool navigationCancelled;
@property (nonatomic) bool needsDismissButton;
@property (nonatomic) bool webViewBackNavigationAllowed;
@property (retain,nonatomic) NSObject<CGMWebViewDelegate> * webViewDelegate;
@property (retain,nonatomic) NSString * mTitle;
@property (retain,nonatomic) NSString * mUrl;
@property (retain,nonatomic) NSDictionary * mHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (bool)internetAvailable;
- (id)init;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void)commonInit;
- (void)startPageTimeoutTimer;
- (void)cancelPageTimeoutTimer;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)v1;
- (void)addCustomBackButtonIfNeeded;
- (void)goBack:(id)v1;
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)webView:(id)v1 didFinishNavigation:(id)v2;
- (void)webView:(id)v1 didFailProvisionalNavigation:(id)v2 withError:(id)v3;
- (void)webView:(id)v1 didStartProvisionalNavigation:(id)v2;
- (void)updateErrorHTML;
- (void)loadHTMLString:(id)v1;
- (void)goToURL:(id)v1;
- (void)dismissTapped;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDatePickerTableViewCell : UITableViewCell {
    UIDatePicker * _picker;
}
@property (retain,nonatomic) UIDatePicker * picker;
+ (id)reuseIdentifier;
- (id)init;
- (void)awakeFromNib;
- (void)_init;
- (void)layoutSubviews;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface TransmitterInfoViewController : DXCMBaseViewController {
    UITableView * _tableView;
    DXCMBlockButton * _pairButton;
}
@property (retain) DXCMBlockButton * pairButton;
@property (nonatomic) UITableView * tableView;
- (void)viewDidLoad;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)segueToNewTransmitterScreen;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPHeader : DPBaseObject {
    NSString * _PatientId;
    NSString * _SourceStream;
    unsigned long long _SequenceNumber;
    NSString * _TransmitterNumber;
    NSString * _ReceiverNumber;
    NSString * _Tag;
}
@property (retain,nonatomic) NSString * PatientId;
@property (retain,nonatomic) NSString * SourceStream;
@property (nonatomic) unsigned long long SequenceNumber;
@property (retain,nonatomic) NSString * TransmitterNumber;
@property (retain,nonatomic) NSString * ReceiverNumber;
@property (retain,nonatomic) NSString * Tag;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEventBase : CGMBaseDataObject<DXCMEventInfo> {
    int eventValue;
    int _recorded_system_time_sec;
    int _record_id;
    int _event_time;
    unsigned long long eventKind;
    unsigned long long eventSubkind;
    NSDate * eventStartTime;
    double eventDuration;
    NSDate * eventEndTime;
    NSString * calloutTitle;
    NSString * calloutDetails;
    unsigned long long _event_sub_type;
    NSString * _event_record_status;
    NSString * _event_id;
}
@property (readonly,nonatomic) long long event_type;
@property unsigned long long event_sub_type;
@property (readonly,nonatomic) int recorded_system_time_sec;
@property (readonly,nonatomic) int record_id;
@property int event_time;
@property (readonly,nonatomic) NSDate * event_date;
@property (readonly,nonatomic) NSString * event_record_status;
@property (readonly,nonatomic) NSString * event_id;
@property (nonatomic) unsigned long long eventKind;
@property (nonatomic) unsigned long long eventSubkind;
@property (retain,nonatomic) NSDate * eventStartTime;
@property (nonatomic) double eventDuration;
@property (readonly,nonatomic) NSDate * eventEndTime;
@property (nonatomic) int eventValue;
@property (readonly,nonatomic) NSString * calloutTitle;
@property (readonly,nonatomic) NSString * calloutDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)eventWithType:(long long)v1;
- (int)eventType;
- (id)eventDescription;
- (id)eventDate;
- (id)eventDetailText;
- (bool)isEditable;
- (bool)isHealthKitEvent;
- (id)initWithDictionary:(id)v1;
- (unsigned long long)getSubtype;
- (int)getValue;
- (id)humanReadableType;
- (id)humanReadableTypeEnglish;
- (id)humanReadableSubType;
- (id)humanReadableSubTypeEnglish;
- (id)humanReadableValueWithUnits;
- (id)dataPostSubType;
- (id)isoDisplayDateString;
- (void)setValue:(id)v1 forKey:(id)v2;
- (int)unixTimeForGraphing;
- (void)setUnixTimeForGraphing:(int)v1;
- (bool)isShortActingInsulinEvent;
- (id)summaryTitleForEvents:(id)v1;
- (id)summaryDetailForEvents:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMWorkOutDao : CGMBaseDao
@property (readonly) NSDictionary * dictHKWorkoutActivityTypeTitles;
- (id)init;
- (void)setupDataModelIfNeeded;
- (bool)hasWorkoutWithUUID:(id)v1;
- (void)resetDataModel;
- (void)deleteWorkoutWithUUID:(id)v1;
- (id)fetchWorkoutEventsSinceDate:(id)v1;
- (id)fetchWorkoutEventsDictionarySinceDate:(id)v1 isDeleted:(bool)v2;
- (id)fetchWorkoutWithID:(id)v1;
- (id)fetchWorkoutEventsAfterStartTimeStamp:(double)v1;
- (id)getRecordsBetweenStartTime:(long long)v1 andEndTime:(long long)v2;
- (long long)insertWorkoutData:(id)v1;
- (id)displayNameForWorkoutType:(id)v1;
@end


/*****************************************************************/

@interface CGMHealthKitDao : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)eraseData;
- (unsigned long long)insertEGV:(id)v1;
- (bool)isDuplicateEGVRecordwithTxTimeStamp:(unsigned int)v1 withGlucoseValue:(unsigned int)v2;
- (id)unsavedEgvsOlderThanDelay;
- (void)updateEgvsAsSavedToHealthKit:(id)v1;
- (unsigned int)getLastSavedTransmitterTime;
- (double)systemTime;
- (id)getLastNumEGVs:(unsigned long long)v1;
- (unsigned int)getRecordCount;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (id)getCGMHealthKitRecordDictsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
@end


/*****************************************************************/

@interface CGMReflectionViewDataSource : NSObject
- (id)nonInsulinGraphGroupType:(long long)v1 fromDate:(id)v2;
- (id)eventsFromDate:(id)v1 eventType:(long long)v2;
- (id)nonInsulinGraphIcon:(long long)v1;
- (id)nonInsulinCalloutIcon:(long long)v1;
- (id)fetchNonInsulinEventsSinceDate:(id)v1;
- (id)insulinGraphGroupType:(long long)v1 fromDate:(id)v2;
- (id)insulinGraphFillColor:(long long)v1;
- (id)insulinGraphFillPattern:(long long)v1;
- (double)insulinGraphBarWidth:(long long)v1;
- (double)insulinGraphBarBorderWidth:(long long)v1;
- (id)insulinGraphBarBorderColor:(long long)v1;
- (double)insulinGraphBarCornerRadius:(long long)v1;
- (id)insulinEventsFromDate:(id)v1 eventType:(long long)v2;
- (id)fetchInsulinEventsSinceDate:(id)v1;
@end


/*****************************************************************/

@interface DPAlertSettingsLogRecord : DPBaseRecord {
    NSNumber * _Enabled;
    NSString * _Name;
    long long _Value;
    long long _Delay;
    long long _Snooze;
    NSString * _Sound;
}
@property (retain) NSNumber * Enabled;
@property (retain) NSString * Name;
@property long long Value;
@property long long Delay;
@property long long Snooze;
@property (retain) NSString * Sound;
- (id)initWithUserAlert:(id)v1;
- (id)initWithUserAlertDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMTheme : NSObject
+ (void)customizeAppearance;
+ (void)initTheme;
@end


/*****************************************************************/

@interface SetupLowAlertViewController : SetupWizardBaseViewController<CGMAlertLimitChangedDelegate> {
    NSNumber * _selectedAlertLimit;
    CGMEditAlertLimitViewController * _childViewController;
    DXCMBlockButton * _saveButton;
}
@property (retain,nonatomic) NSNumber * selectedAlertLimit;
@property (retain,nonatomic) CGMEditAlertLimitViewController * childViewController;
@property (retain,nonatomic) DXCMBlockButton * saveButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)alertLimitChanged:(id)v1;
- (void)encodeRestorableStateWithCoder:(id)v1;
- (void)decodeRestorableStateWithCoder:(id)v1;
- (void)segueToHighAlert;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)userDefaultLimitForLowAlert;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPContent : DPBaseObject {
    NSArray * _Entries;
}
@property (retain) NSArray * Entries;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEditAlertLimitViewController : DXCMBaseViewController<UIPickerViewDelegate,UIPickerViewDataSource> {
    NSString * _descriptionText;
    NSString * _alertName;
    NSNumber * _defaultLimitValue;
    NSString * _descriptionTextAccessibilityId;
    NSObject<CGMAlertLimitChangedDelegate> * _dataChangedDelegate;
    UILabel * _descriptionLabel;
    UIPickerView * _alertLimitPicker;
    NSArray * _pickerData;
    NSString * _pickerUnit;
}
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIPickerView * alertLimitPicker;
@property (retain,nonatomic) NSArray * pickerData;
@property (retain,nonatomic) NSString * pickerUnit;
@property (retain,nonatomic) NSString * descriptionText;
@property (retain,nonatomic) NSString * alertName;
@property (nonatomic) NSNumber * defaultLimitValue;
@property (retain,nonatomic) NSString * descriptionTextAccessibilityId;
@property (nonatomic) NSObject<CGMAlertLimitChangedDelegate> * dataChangedDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)setAlertNameWithZeroValue:(id)v1;
- (id)getDefaultConfigLimitValue:(id)v1;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (double)pickerView:(id)v1 widthForComponent:(long long)v2;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
- (id)selectedAlertLimit;
- (void)updateMarginConstraintsForDescription:(double)v1 topMargin:(double)v2 rightMargin:(double)v3 bottomMargin:(double)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEGVWidget : NSObject {
    char _trendRate;
    unsigned int _value;
    unsigned int _predictedValue;
    unsigned int _transmitterSystemTime;
}
@property (nonatomic) unsigned int value;
@property (nonatomic) unsigned int predictedValue;
@property (nonatomic) unsigned int transmitterSystemTime;
@property (nonatomic) char trendRate;
@property (readonly,nonatomic) bool isValid;
@property (readonly,nonatomic) bool isCurrent;
@property (readonly,nonatomic) long long trendArrow;
- (bool)isUrgentLowSoon;
@end


/*****************************************************************/

@interface ShareFollowerCell : DXCMCGMBaseTableViewCell {
    DSAPIContact * _contact;
    UILabel * _displayNameLabel;
    UILabel * _statusLabel;
    UIImageView * _trendIconImageView;
    UIImageView * _alertsIconImageView;
    NSLayoutConstraint * _trendIconImageViewWidthConstraint;
    NSLayoutConstraint * _alertsIconImageViewWidthConstraint;
    NSLayoutConstraint * _statusLabelMinWidthConstraint;
}
@property (nonatomic) UILabel * displayNameLabel;
@property (nonatomic) UILabel * statusLabel;
@property (nonatomic) UIImageView * trendIconImageView;
@property (nonatomic) UIImageView * alertsIconImageView;
@property (nonatomic) NSLayoutConstraint * trendIconImageViewWidthConstraint;
@property (nonatomic) NSLayoutConstraint * alertsIconImageViewWidthConstraint;
@property (nonatomic) NSLayoutConstraint * statusLabelMinWidthConstraint;
@property (retain,nonatomic) DSAPIContact * contact;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)addCommonIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMConfigFile : NSObject
+ (id)getLegalUrlsFromConfigFile;
+ (int)getDebugLogLevel;
+ (int)getDebugUploadLevel;
+ (id)getShareUrlFromConfigFile;
+ (id)getDataPostUrlFromConfigFile;
+ (id)getCompatibilityUrlFromConfigFile;
+ (id)getBaseServicesUrlFromConfigFile;
+ (id)getBaseWebUrlFromConfigFile;
+ (id)getTechSupportFormUrlFromConfigFile;
+ (id)getLegalClientIdFromConfigFile;
+ (id)getLegalURLForKey:(id)v1;
+ (id)getClarityAppStoreUrlFromConfigFile;
+ (id)getAccountUrlFromConfigFile;
+ (id)getSettingsUrlFromConfigFile;
+ (id)getContactURLForKey:(id)v1;
+ (id)getAccountURLForKey:(id)v1;
+ (id)getHelpURLForKey:(id)v1;
+ (id)getHelpTitleForKey:(id)v1;
+ (id)getShareAppGuid;
+ (id)getDataPostAppGuid;
+ (id)getAppCompatibilityAppGuid;
+ (id)getOnduoAppGuid;
+ (id)getClarityAppStoreGuid;
+ (bool)areAppAnalyticsEnabled;
+ (id)getQualtricsInterceptId;
+ (id)getQualtricsProjectId;
+ (id)getQualtricsBrandId;
+ (id)getLimitOptionsArrayForAlertType:(id)v1;
+ (id)getRepeatOptions;
+ (id)getLimitOptionsGlucoseUnitsForAlertType:(id)v1;
+ (id)getDefaultAlertDict:(id)v1 daytime:(bool)v2;
+ (id)getDefaultAlertSchedule;
+ (id)getDefaultRecommendedFollowerSettingForAlert:(id)v1;
+ (id)getDefaultNightModeSettings;
+ (bool)getDefaultNightModeEnabled;
+ (id)getDefaultNightModeStartTime;
+ (id)getDefaultNightModeEndTime;
+ (id)getValueFromConfigFileForKey:(id)v1;
+ (id)pathToOriginalConfigFile:(id)v1;
+ (id)pathToCustomConfigFile:(id)v1;
+ (bool)testServiceDefault;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardAlwaysSoundViewController : DXCMBaseAlertScheduleSetupViewController<UITableViewDelegate,UITableViewDataSource> {
    bool _alwaysSoundEnabled;
    UITableView * _tableView;
    UILabel * _descriptionTxtLbl;
}
@property (nonatomic) UITableView * tableView;
@property (nonatomic) UILabel * descriptionTxtLbl;
@property (nonatomic) bool alwaysSoundEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)setUpTableView;
- (long long)numberOfSectionsInTableView:(id)v1;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)didReceiveMemoryWarning;
- (void)getDefaultAlwaysSoundOptionValue;
- (void)getStoredAlwaysSoundOptionValue;
- (void)updateAlertScheduleData;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardStartTimeViewController : DXCMBaseAlertScheduleSetupViewController {
    UILabel * _descriptionLabel;
    UIDatePicker * _startTimePicker;
}
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIDatePicker * startTimePicker;
- (void)viewDidLoad;
- (void)updateAlertScheduleData;
- (void)startTimePickerValueChanged:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPIHelper : NSObject
+ (id)methodName:(SEL)v1;
+ (long long)dateFromJSONString:(id)v1;
+ (unsigned long long)convertTimeSpanStringToInt:(id)v1;
+ (id)convertIntToTimeSpanString:(unsigned long long)v1;
+ (id)SubscriptionStateString:(unsigned long long)v1;
+ (unsigned long long)getAlertType:(id)v1;
+ (id)dequoteString:(id)v1;
@end


/*****************************************************************/

@interface DEXSoundPlayers : NSObject {
    NSMutableDictionary * playersRepository;
}
- (id)init;
- (void)addPlayerForSoundInCategory:(id)v1 forSound:(id)v2 inCategory:(id)v3;
- (id)getPlayerForSoundInCategory:(id)v1 inCategory:(id)v2;
- (id)getPlayerForSoundFile:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBluetoothTypes : NSObject
+ (unsigned short)crc16:(char *)v1 start:(unsigned long long)v2 end:(unsigned long long)v3;
+ (long long)convertToDXCMResult:(id)v1;
+ (id)dxcmResultString:(long long)v1;
@end


/*****************************************************************/

@interface CGMAlertSettingsDetailViewController : DXCMBaseViewController<_TtP3CGM34CGMAlertSettingsAlertLimitDelegate_,_TtP3CGM28CGMAlertSettingsTimeDelegate_> {
    bool daytimeSelected;
    bool _hasDetailChanged;
    UITableView * _tableView;
    CGMUserAlert * _userAlert;
}
@property (nonatomic) bool hasDetailChanged;
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) CGMUserAlert * userAlert;
+ (void)saveSingleAlertToAppAnalytics:(id)v1 daytime:(bool)v2;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (bool)isRepeatOptionDisabledForPro;
- (void)updateSwitchCellAccessibilityId:(id)v1;
- (void)showSoundPicker;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)flipEnabled:(id)v1;
- (void)alertLimitChanged:(id)v1;
- (void)timeChanged:(id)v1;
- (void)willMoveToParentViewController:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardNameViewController : DXCMBaseAlertScheduleSetupViewController<CGMAlertScheduleNameChangedDelegate> {
    UILabel * _descriptionLabel;
    UILabel * _bottomDescriptionLabel;
    NSString * _alertScheduleName;
}
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UILabel * bottomDescriptionLabel;
@property (retain,nonatomic) NSString * alertScheduleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)didChangeAlertScheduleName:(id)v1;
- (void)updateAlertScheduleData;
- (id)childAlertScheduleNameEditViewController;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSystemState : CGMBaseDataObject {
    unsigned int _cgm_alert_count;
    int _cgm_state;
    long long _system_time_sec;
    NSString * _app_version;
    NSString * _cgm_icon_path;
}
@property (nonatomic) long long system_time_sec;
@property (copy,nonatomic) NSString * app_version;
@property (copy,nonatomic) NSString * cgm_icon_path;
@property (nonatomic) unsigned int cgm_alert_count;
@property (nonatomic) int cgm_state;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCriticalPermissionRevokedModalViewController : DXCMBaseViewController<UITextViewDelegate> {
    bool _didSetupCriticalAlerts;
    UIView * _topBarView;
    UIView * _barContent;
    UIImageView * _bannerIconImageView;
    UILabel * _barTitleLabel;
    UIView * _contentView;
    UILabel * _errorTitleLabel;
    UILabel * _descriptionLabel;
    UILabel * _instructionsLabel;
    DXCMBlockButton * _actionButton;
    DXCMBlockButton * _linkButton;
}
@property (retain,nonatomic) UIView * topBarView;
@property (retain,nonatomic) UIView * barContent;
@property (retain,nonatomic) UIImageView * bannerIconImageView;
@property (retain,nonatomic) UILabel * barTitleLabel;
@property (retain,nonatomic) UIView * contentView;
@property (retain,nonatomic) UILabel * errorTitleLabel;
@property (retain,nonatomic) UILabel * descriptionLabel;
@property (retain,nonatomic) UILabel * instructionsLabel;
@property (retain,nonatomic) DXCMBlockButton * actionButton;
@property (retain,nonatomic) DXCMBlockButton * linkButton;
@property (nonatomic) bool didSetupCriticalAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (bool)didAskForCriticalAlertsPermission;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)layoutConstraintsWithContentView:(id)v1;
- (void)setCommonAttributesForLabel:(id)v1;
- (void)addContentWithBarTitle:(id)v1 errorTitle:(id)v2 description:(id)v3;
- (void)setUpTopBar:(id)v1;
- (void)setUpErrorTitle:(id)v1;
- (void)setUpDescription:(id)v1;
- (void)setUpLinkButton:(id)v1;
- (void)setUpInstruction;
- (void)setUpActionButton;
- (void)updateUserInterface;
- (void)displayFirstTimeRequestWithTitle:(id)v1 andSubtitle:(id)v2;
- (void)displayNextTimeRequestWithTitle:(id)v1 andSubtitle:(id)v2;
- (void)displayModal;
- (void)didBecomeActive:(id)v1;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (void)textViewDidChangeSelection:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DexPlotView : CPTGraphHostingView<CPTPlotDataSource,CPTScatterPlotDataSource,CPTScatterPlotDelegate,CPTPlotSpaceDelegate,UIAccessibilityIdentification> {
    bool _allowsUserScroll;
    bool _urgentlowSoonAlertEnabled;
    bool _lowAlertThresholdEnabled;
    bool _highAlertThresholdEnabled;
    bool _needsUpdate;
    bool _showXAxisLabels;
    bool _showYAxisLabels;
    NSString * accessibilityIdentifier;
    CGMEGV * _lastKnownEGV;
    NSArray * _egvArray;
    long long _lowAlertThresholdValue;
    long long _highAlertThresholdValue;
    long long _maxGraphYaxisValue;
    CPTColor * _shadedRegionColor;
    NSDate * _latestVisibleDate;
    unsigned long long _plotMode;
    CPTScatterPlot * _egvPlot;
    CPTScatterPlot * _highLinePlot;
    CPTScatterPlot * _lowLinePlot;
    CPTGraphHostingView * _hostView;
    unsigned long long _leftBorderPosition;
    double _cornerRadius;
    NSDate * _earliestVisibleDate;
}
@property (nonatomic) bool needsUpdate;
@property (retain,nonatomic) CPTScatterPlot * egvPlot;
@property (retain,nonatomic) CPTScatterPlot * highLinePlot;
@property (retain,nonatomic) CPTScatterPlot * lowLinePlot;
@property (retain,nonatomic) CPTGraphHostingView * hostView;
@property (nonatomic) unsigned long long leftBorderPosition;
@property (nonatomic) bool showXAxisLabels;
@property (nonatomic) bool showYAxisLabels;
@property (nonatomic) double cornerRadius;
@property (retain,nonatomic) NSDate * earliestVisibleDate;
@property (nonatomic) bool allowsUserScroll;
@property (retain,nonatomic) CGMEGV * lastKnownEGV;
@property (copy,nonatomic) NSArray * egvArray;
@property (nonatomic) bool urgentlowSoonAlertEnabled;
@property (nonatomic) long long lowAlertThresholdValue;
@property (nonatomic) bool lowAlertThresholdEnabled;
@property (nonatomic) long long highAlertThresholdValue;
@property (nonatomic) bool highAlertThresholdEnabled;
@property (nonatomic) long long maxGraphYaxisValue;
@property (retain,nonatomic) CPTColor * shadedRegionColor;
@property (retain,nonatomic) NSDate * latestVisibleDate;
@property (nonatomic) unsigned long long plotMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (copy,nonatomic) NSString * accessibilityIdentifier;
- (id)initWithFrame:(struct CGRect)v1 showXAxisLabels:(bool)v2 showYAxisLabels:(bool)v3 cornerRadius:(double)v4;
- (id)initWithFrame:(struct CGRect)v1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)updateIfNeeded;
- (void)refreshEGVPlot;
- (void)setupPlotSpace;
- (void)addTimeLabelsForXAxis;
- (double)offsetForX;
- (id)majorXTickIntervalDateFormatterWithDate:(id)v1 includeAMPM:(bool)v2;
- (id)dateComponentsForXAxisIncrement;
- (bool)isMajorTickForXAxis:(id)v1 calendar:(id)v2;
- (id)xAxisLowerBoundDate:(id)v1 calendar:(id)v2;
- (id)xRangeForVisibleDates;
- (void)addLabelsForYAxis;
- (void)refreshShadedRegions;
- (void)configureGraph;
- (void)configurePlots;
- (void)configureAxes;
- (void)configureXAxis:(id)v1 withAxisLineStyle:(id)v2 axisTitleStyle:(id)v3 axisTextStyle:(id)v4 tickLineStyle:(id)v5;
- (void)configureYAxis:(id)v1 withAxisLineStyle:(id)v2 axisTitleStyle:(id)v3 axisTextStyle:(id)v4 tickLineStyle:(id)v5;
- (unsigned long long)numberOfRecordsForPlot:(id)v1;
- (unsigned long long)numberOfRecordsForHiLinePlot:(id)v1;
- (unsigned long long)numberOfRecordsForLoLinePlot:(id)v1;
- (unsigned long long)numberOfRecordsForEgvPlot:(id)v1;
- (id)numberForPlot:(id)v1 field:(unsigned long long)v2 recordIndex:(unsigned long long)v3;
- (id)numberForHiLinePlot:(id)v1 field:(unsigned long long)v2 recordIndex:(unsigned long long)v3;
- (id)numberForLoLinePlot:(id)v1 field:(unsigned long long)v2 recordIndex:(unsigned long long)v3;
- (id)numberForEgvPlot:(id)v1 field:(unsigned long long)v2 recordIndex:(unsigned long long)v3;
- (void)correctCoordinatesforEGV:(id)v1 x:(double *)v2 y:(double *)v3;
- (void)correctCoordinatesForX:(double *)v1 y:(double *)v2;
- (id)symbolForScatterPlot:(id)v1 recordIndex:(unsigned long long)v2;
- (id)symbolForEGVScatterPlot:(id)v1 recordIndex:(unsigned long long)v2;
- (bool)shouldHighlightPlotPointForEGV:(id)v1;
- (id)xAxisUpperBoundDate:(id)v1 calendar:(id)v2;
- (id)dateForPointWithXCoordinate:(double)v1;
- (id)closestEGVToDate:(id)v1 maximumDistance:(double)v2;
- (unsigned long long)indexOfEGVClosestToTime:(double)v1 withData:(id)v2 maximumDistance:(double)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPErrorLogRecord : DPBaseRecord {
    int _RowID;
    NSString * _Location;
    NSString * _Message;
}
@property int RowID;
@property (retain) NSString * Location;
@property (retain) NSString * Message;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SignedRequestEncryptionKey : NSObject {
    long long _keyId;
    NSString * _stringKey;
    NSString * _stringIV;
}
- (id)initWithKeyId:(long long)v1 withStringKey:(id)v2 withStringIV:(id)v3;
- (id)toDictionary;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEGVErrorStateView : CGMBaseEGVView {
    NSArray * errorDictsArray;
    unsigned long long currentState;
    NSObject<CGMEGVErrorStateDelegate> * _delegate;
    UIButton * _error_button;
    UIButton * _error_secondaryButton;
    UILabel * _error_title;
    UILabel * _error_instruction;
    UILabel * _error_description;
    UIImageView * _error_imageView;
    UIStackView * _errorStackView;
}
@property (retain,nonatomic) UIButton * error_button;
@property (retain,nonatomic) UIButton * error_secondaryButton;
@property (retain,nonatomic) UILabel * error_title;
@property (retain,nonatomic) UILabel * error_instruction;
@property (retain,nonatomic) UILabel * error_description;
@property (retain,nonatomic) UIImageView * error_imageView;
@property (retain,nonatomic) UIStackView * errorStackView;
@property (nonatomic) NSObject<CGMEGVErrorStateDelegate> * delegate;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)initErrorUI;
- (id)createStackView:(id)v1;
- (void)initEGVErrorStateView;
- (void)layoutSubviews;
- (void)setCGMCircleError:(unsigned long long)v1;
- (void)resetCGMCircleError;
- (void)setErrorTitle:(id)v1;
- (void)updateErrorUI:(id)v1;
- (void)updateErrorImageView:(id)v1;
- (void)updateErrorTitle:(id)v1;
- (void)updateErrorInstruction:(id)v1;
- (void)updateErrorDescription:(id)v1;
- (void)updateErrorButton:(id)v1;
- (void)updateErrorSecondaryButton:(id)v1;
- (id)getErrorTitle;
- (unsigned long long)getCGMCircleError;
- (void)startSensorTap;
- (void)newSensorTap;
- (void)errorButtonTap:(id)v1;
- (void)helpButtonTap:(id)v1;
- (id)errorText;
- (void)initErrorDictArray;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SignedRequestHeader : NSObject {
    NSString * _accId;
    NSString * _appId;
    bool _isZip;
    NSString * _timestamp;
    SignedRequestEncryptionKey * _encKey;
}
- (id)initWithAccId:(id)v1 withAppId:(id)v2 withIsPayloadZip:(bool)v3 withPublicKeyIndex:(long long)v4 withEncryptedEncryptionKey:(id)v5 withEncryptedIV:(id)v6;
- (id)toJSON:(bool)v1;
- (id)getAccountId;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertStateDao : CGMBaseDao
- (void)insertIfNotExistsAlertState:(unsigned long long)v1;
- (void)insertAlertState:(id)v1;
- (id)readAlertStateForType:(unsigned long long)v1;
- (void)updateAlertState:(id)v1;
- (void)setAllAlertsInactive;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (id)getAlertStatesInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)getActiveAlertTypes;
- (id)getActiveAlarmingAlertTypes;
@end


/*****************************************************************/

@interface CGMVeilViewController : DXCMBaseViewController
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
@end


/*****************************************************************/

@interface CGMEGVAnimatedStateView : CGMBaseEGVView {
    long long totalTimeInSec;
    long long timeUsedInSec;
    long long timeLeftInSec;
    UILabel * _textLabel;
    UILabel * _timeLabel;
    DXCMRingView * _progressView;
}
@property (retain,nonatomic) UILabel * textLabel;
@property (retain,nonatomic) UILabel * timeLabel;
@property (retain,nonatomic) DXCMRingView * progressView;
- (id)initWithFrame:(struct CGRect)v1;
- (void)initTime;
- (void)updateTimeLeft:(long long)v1;
- (long long)getTimeLeft;
- (void)initAnimatedCircleStuff;
- (void)updateLabels;
- (id)getTimeLeftInString;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMVoiceShortcutDataManager : NSObject {
    NSArray * _voiceShortcuts;
}
@property (retain) NSArray * voiceShortcuts;
+ (id)sharedInstance;
- (id)init;
- (void)updateVoiceShortcut;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMReflectionViewController : DXCMBaseViewController<CGMSubscriberDataSource> {
    bool _hasBeenDismissed;
    bool _showInsulin;
    DXCMCalloutSliderControl * _calloutView;
    UIView * _safeAreaView;
    UIView * _toolAreaView;
    UISegmentedControl * _timeScaleControl;
    UIButton * _exitButton;
    UIButton * _clarityButton;
    DexPlotView * _graphView;
    DXCMEventPlotView * _eventPlotView;
    DXCMInsulinPlotView * _insulinPlotView;
    DXCMTimeAxisPlotView * _timeAxisPlotView;
    UILabel * _eventLabel;
    UILabel * _insulinLabel;
    UILabel * _noEventsMessageLabel;
    UILabel * _noInsulinEventsMessageLabel;
    NSDate * _plotStartTime;
    NSDate * _plotEndTime;
    CGMReflectionViewDataSource * _dataSource;
    NSArray * _nonInsulinEvents;
    NSArray * _insulinEvents;
    NSTimer * _graphRefreshTimer;
    double _touchToleranceInTime;
}
@property (retain,nonatomic) UIView * safeAreaView;
@property (retain,nonatomic) UIView * toolAreaView;
@property (retain,nonatomic) UISegmentedControl * timeScaleControl;
@property (retain,nonatomic) UIButton * exitButton;
@property (retain,nonatomic) UIButton * clarityButton;
@property (retain,nonatomic) DexPlotView * graphView;
@property (retain,nonatomic) DXCMEventPlotView * eventPlotView;
@property (retain,nonatomic) DXCMInsulinPlotView * insulinPlotView;
@property (retain,nonatomic) DXCMTimeAxisPlotView * timeAxisPlotView;
@property (retain,nonatomic) UILabel * eventLabel;
@property (retain,nonatomic) UILabel * insulinLabel;
@property (retain,nonatomic) UILabel * noEventsMessageLabel;
@property (retain,nonatomic) UILabel * noInsulinEventsMessageLabel;
@property (nonatomic) bool showInsulin;
@property (retain,nonatomic) NSDate * plotStartTime;
@property (retain,nonatomic) NSDate * plotEndTime;
@property (retain,nonatomic) CGMReflectionViewDataSource * dataSource;
@property (retain,nonatomic) NSArray * nonInsulinEvents;
@property (retain,nonatomic) NSArray * insulinEvents;
@property (retain,nonatomic) NSTimer * graphRefreshTimer;
@property (nonatomic) double touchToleranceInTime;
@property (nonatomic) bool hasBeenDismissed;
@property (retain,nonatomic) DXCMCalloutSliderControl * calloutView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (bool)shouldAutorotate;
- (bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewWillLayoutSubviews;
- (void)dismissViewControllerAnimated:(bool)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)calculateTouchTolerance;
- (void)showFirstTimeHelpHUD;
- (void)deviceOrientationDidChange:(id)v1;
- (void)exitReflectionView;
- (void)startGraphUpdateTimer;
- (void)updateGraphs;
- (void)updateNonInsulinEventGraph;
- (void)updateInsulinEventGraph;
- (void)updateTimeAxisGraph;
- (void)timeScaleControlChanged:(id)v1;
- (void)touchDownInCallout:(id)v1;
- (void)touchUpInCallout:(id)v1;
- (unsigned long long)findEventsNearDate:(id)v1;
- (void)updateBannerInCallout:(id)v1;
- (void)updateDetailsInCallout:(id)v1;
- (void)updateViewAtIndex:(unsigned long long *)v1 column:(unsigned long long *)v2 width:(double *)v3 height:(double *)v4 fromSwimlanes:(id)v5 eventClass:(Class)v6 eventSubkind:(int)v7;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)launchClarityAppIfInstalled;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPILanguage : NSObject<NSCoding> {
    NSString * _englishName;
    NSString * _name;
    NSString * _nativeName;
}
@property (copy,nonatomic) NSString * englishName;
@property (copy,nonatomic) NSString * name;
@property (copy,nonatomic) NSString * nativeName;
- (id)initWithDictionary:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ShareExplanationViewController : DXCMBaseShareViewController {
    UIImageView * _magGlassIcon;
    UIImageView * _shareStatusImageView;
}
@property (nonatomic) UIImageView * magGlassIcon;
@property (nonatomic) UIImageView * shareStatusImageView;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCoachMarkViewController : DXCMBaseViewController {
    UILabel * _messageLabel;
    NSString * _message;
}
@property (retain,nonatomic) UILabel * messageLabel;
@property (retain,nonatomic) NSString * message;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)popupTapped;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMBaseDataObject : NSObject
- (id)initWithDictionary:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (int)age;
- (id)description;
- (id)dictionary;
- (bool)isEqual:(id)v1;
- (void)doSomethingToAllProperties:(void (^ /* unknown block signature */)(void))v1;
- (bool)isPropertyNameInvalid:(id)v1;
- (int)unixTimeForGraphing;
- (void)setUnixTimeForGraphing:(int)v1;
@end


/*****************************************************************/

@interface CGMKeyValueTable : NSObject {
    bool _useCache;
    NSString * _tableName;
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    CGMDataMgr * _dataMgr;
}
@property (retain,nonatomic) NSString * tableName;
@property (retain) NSMutableDictionary * cache;
@property (retain) NSObject<OS_dispatch_queue> * cacheQueue;
@property (retain) CGMDataMgr * dataMgr;
@property bool useCache;
+ (id)settings;
+ (id)datapost;
+ (id)transmitter;
+ (id)crashlogs;
+ (id)share;
+ (id)tableWithName:(id)v1;
- (id)initWithName:(id)v1 withCache:(bool)v2;
- (void)deleteValueForKey:(id)v1;
- (id)queryAllValues;
- (void)eraseData;
- (void)setString:(id)v1 forKey:(id)v2;
- (id)getStringForKey:(id)v1;
- (id)getStringForKey:(id)v1 defaultValue:(id)v2;
- (void)setData:(id)v1 forKey:(id)v2;
- (id)getDataForKey:(id)v1;
- (id)getArrayForKey:(id)v1;
- (void)setArray:(id)v1 forKey:(id)v2;
- (void)setDictionary:(id)v1 forKey:(id)v2;
- (id)getDictionaryForKey:(id)v1;
- (void)setBool:(bool)v1 forKey:(id)v2;
- (bool)getBoolForKey:(id)v1;
- (bool)getBoolForKey:(id)v1 defaultValue:(bool)v2;
- (void)setInt:(int)v1 forKey:(id)v2;
- (int)getIntForKey:(id)v1;
- (int)getIntForKey:(id)v1 defaultValue:(int)v2;
- (void)setUInt:(unsigned int)v1 forKey:(id)v2;
- (unsigned int)getUIntForKey:(id)v1;
- (unsigned int)getUIntForKey:(id)v1 defaultValue:(unsigned int)v2;
- (void)setDouble:(double)v1 forKey:(id)v2;
- (double)getDoubleForKey:(id)v1;
- (double)getDoubleForKey:(id)v1 defaultValue:(double)v2;
- (void)reloadCache;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCPTheme : NSObject
+ (void)initTheme;
@end


/*****************************************************************/

@interface DCGMControlPointCharacteristicResponse : NSObject {
    unsigned long long _responseCode;
    NSData * _payload;
}
@property (nonatomic) unsigned long long responseCode;
@property (retain) NSData * payload;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMTrendViewController : DXCMBaseViewController<UIGestureRecognizerDelegate,CGMEventManagerViewDelegate,StatusOfWhatsNewInterfereUnsafeState> {
    bool _isOnUnsafeStateTheUser;
    UIStackView * _trendStackView;
    CGMGraphStackSubview * _graphView;
    CGMEGVStackSubview * _egvView;
    DXCMBadgeBarItem * _calibrationBadgeButton;
    DXCMBadgeBarItem * _shareBadgeButton;
    DXCMSettingsStackSubview * _eventHistoryView;
    DXCMSettingsStackSubview * _settingsView;
    DXCMNotificationStackSubview * _notificationView;
    CGMTrendViewManager * _trendViewManager;
}
@property (retain) CGMTrendViewManager * trendViewManager;
@property (nonatomic) bool isOnUnsafeStateTheUser;
@property (nonatomic) UIStackView * trendStackView;
@property (retain,nonatomic) CGMGraphStackSubview * graphView;
@property (retain,nonatomic) CGMEGVStackSubview * egvView;
@property (retain,nonatomic) DXCMBadgeBarItem * calibrationBadgeButton;
@property (retain,nonatomic) DXCMBadgeBarItem * shareBadgeButton;
@property (retain,nonatomic) DXCMSettingsStackSubview * eventHistoryView;
@property (retain,nonatomic) DXCMSettingsStackSubview * settingsView;
@property (retain,nonatomic) DXCMNotificationStackSubview * notificationView;
@property (readonly,nonatomic) bool isInWarmup;
@property (readonly,nonatomic) bool isAnotherViewBeingShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)dealloc;
- (bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
- (void)loadViews;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)didCompleteAuthorization;
- (void)didCancelAuthorization;
- (void)viewDidDisappear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (bool)isBlockingViewBeingShown;
- (bool)shouldShowNoAlarmsOrAlertsBanner;
- (bool)shouldSkipWhatsNewForThisVersion:(id)v1 :(id)v2;
- (void)showWhatsNewIfNecessary;
- (void)didBecomeActive:(id)v1;
- (void)appDidEnterBackground:(id)v1;
- (void)deviceOrientationDidChange:(id)v1;
- (void)enterReflectionView;
- (bool)gestureRecognizer:(id)v1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)v2;
- (void)onNotificationTouch:(id)v1;
- (void)onEventsButton:(id)v1;
- (void)onSettingsButton:(id)v1;
- (void)onCalibrationButton:(id)v1;
- (void)onShareButton:(id)v1;
- (void)onSoundButton:(id)v1;
- (void)onEventEntry;
- (void)onFastActingInsulinEventEntry:(id)v1;
- (void)onLongActingInsulinEventEntry:(id)v1;
- (void)showEventEntry:(id)v1;
- (void)addDebugMenuGestures;
- (void)showCalibrateButton;
- (void)hideShareButtonIfNeeded;
- (void)anyEventAdded;
- (bool)shouldShowUrgentLowBanner;
- (bool)shouldShowUrgentLowSoonBanner;
- (void)shouldShowNotificationsDisabledBanner:(void (^ /* unknown block signature */)(void))v1;
- (void)refreshNotificationCardVisibility;
- (void)verifyWhatsNewEveryUIUpdate;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCSAPIBaseAPI : NSObject {
    bool _networkError;
    bool _serverDown;
    NSDictionary * _mDataDictionary;
    NSObject<OS_dispatch_semaphore> * _mSynchronousSemaphore;
}
@property (retain) NSDictionary * mDataDictionary;
@property (retain) NSObject<OS_dispatch_semaphore> * mSynchronousSemaphore;
@property (readonly) bool networkError;
@property (readonly) bool serverDown;
- (id)init;
- (id)sendRequest:(id)v1 urlString:(id)v2 bodyData:(id)v3;
- (id)toJSON:(id)v1;
- (id)stringFromJSON:(id)v1;
- (id)dictionaryFromJSON:(id)v1;
- (id)arrayFromJSON:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCSAPICompatibilityAPI : DCSAPIBaseAPI {
    NSString * serverURL;
    NSString * _appID;
}
@property (retain,nonatomic) NSString * appID;
+ (id)instance;
- (id)init;
- (void)setServerToDefault;
- (void)setServer:(id)v1 withPhpAttached:(bool)v2;
- (id)getServer;
- (void)makeCallWithVoidReply:(void (^ /* unknown block signature */)(void))v1;
- (id)makeCallWithObjectReply:(void (^ /* unknown block signature */)(void))v1;
- (bool)hasInternet;
- (id)CheckValidity:(id)v1 appNumber:(id)v2 appVersion:(id)v3 deviceManufacturer:(id)v4 deviceModel:(id)v5 deviceOsName:(id)v6 deviceOsVersion:(id)v7;
- (id)GetMessage:(id)v1 culture:(id)v2;
- (id)Ping;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMFileUtils : NSObject
+ (id)libraryDirectory;
+ (id)documentsDirectory;
+ (id)sharedDirectory;
+ (id)getPathForDirectory:(long long)v1;
+ (id)makePathForFile:(id)v1 ext:(id)v2 inDirectory:(long long)v3;
+ (bool)doesFileExist:(id)v1 ext:(id)v2 inDirectory:(long long)v3;
+ (id)readFile:(id)v1 ext:(id)v2 inDirectory:(long long)v3;
+ (bool)writeFile:(id)v1 file:(id)v2 ext:(id)v3 inDirectory:(long long)v4;
+ (bool)deleteFile:(id)v1 ext:(id)v2 inDirectory:(long long)v3;
+ (void)doSomethingToAllFilesWithExtension:(id)v1 inDirectory:(long long)v2 something:(void (^ /* unknown block signature */)(void))v3;
+ (bool)deleteAllFilesWithExtension:(id)v1 inDirectory:(long long)v2;
+ (id)listFilesInDirectory:(long long)v1 withExtension:(id)v2;
+ (id)readPlist:(id)v1;
+ (bool)writePlist:(id)v1 fileName:(id)v2;
+ (id)plistPath:(id)v1;
+ (void)setRemainingDiskSpaceInMegaBytes:(int)v1;
+ (long long)totalDiskSpace;
+ (long long)freeDiskSpaceInSizeUnit:(unsigned long long)v1;
+ (id)freeDiskSpaceFormatted;
+ (id)memoryFormatter:(long long)v1;
@end


/*****************************************************************/

@interface CGMAppDelegate : UIResponder<DXCMLegalAgreementsProtocol,UIApplicationDelegate> {
    NSString * _logName;
    UIWindow * _window;
    UIView * _previousAccessibilityView;
    UIWindow * _veilWindow;
    CGMShortcutsMenu * _shortcutsMenu;
    DXCMFMDBLogger * _sqliteLogger;
}
@property (retain,nonatomic) UIWindow * veilWindow;
@property (retain,nonatomic) CGMShortcutsMenu * shortcutsMenu;
@property (retain,nonatomic) DXCMFMDBLogger * sqliteLogger;
@property (retain,nonatomic) NSString * logName;
@property (retain,nonatomic) UIWindow * window;
@property (retain,nonatomic) UIView * previousAccessibilityView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)application:(id)v1 didLaunchForFirstTimeWithOptions:(id)v2;
- (bool)application:(id)v1 didFinishLaunchingWithOptions:(id)v2;
- (void)startupComplete;
- (void)startCheckingCriticalAlerts;
- (bool)application:(id)v1 continueUserActivity:(id)v2 restorationHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)applicationWillResignActive:(id)v1;
- (void)applicationDidEnterBackground:(id)v1;
- (void)applicationWillEnterForeground:(id)v1;
- (void)applicationDidBecomeActive:(id)v1;
- (void)applicationWillTerminate:(id)v1;
- (void)application:(id)v1 performFetchWithCompletionHandler:(void (^ /* unknown block signature */)(void))v2;
- (bool)application:(id)v1 openURL:(id)v2 options:(id)v3;
- (unsigned long long)application:(id)v1 supportedInterfaceOrientationsForWindow:(id)v2;
- (bool)application:(id)v1 shouldAllowExtensionPointIdentifier:(id)v2;
- (void)serverAcceptanceStatusReceived:(unsigned long long)v1;
- (void)configureLogger;
- (void)configureFirebase;
- (void)checkSetDatabaseKey;
- (void)installCrashHandler;
- (id)parseQueryString:(id)v1;
- (void)applicationDidReceiveMemoryWarning:(id)v1;
- (void)application:(id)v1 didRegisterForRemoteNotificationsWithDeviceToken:(id)v2;
- (void)application:(id)v1 didFailToRegisterForRemoteNotificationsWithError:(id)v2;
- (void)application:(id)v1 didReceiveRemoteNotification:(id)v2 fetchCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDataPostServices : NSObject {
    unsigned long long _backgroundTask;
}
@property unsigned long long backgroundTask;
@property bool wasLastPostSuccessful;
@property int lastCheckTime;
@property int lastPostTime;
@property int lastPostSequenceNumber;
@property int lastRefreshTokenCheckTime;
+ (id)sharedInstance;
- (id)init;
- (void)applicationDidLaunchForFirstTime;
- (void)userDidLogout;
- (void)applicationWillEnterForeground;
- (void)handlePotentialPostEvent;
- (int)timeNow;
- (int)FindLastSequenceNumber;
- (void)handleTokenReset;
- (void)logDataPostEventWithException:(id)v1;
- (void)forcePost;
- (void)doPostLogic;
- (void)createAndQueuePost;
- (void)postFromQueue;
- (void)post;
- (void)doSomethingOnBackgroundTask:(void (^ /* unknown block signature */)(void))v1;
- (void)beginBackgroundTask;
- (void)endBackgroundTask;
@end


/*****************************************************************/

@interface DCGMServiceStartResponseRecord : NSObject {
    unsigned char _responseStatus;
    unsigned int _ackSessionStartTime;
    DCGMServiceTransmitterTimeRecord * _timeRecord;
}
@property (readonly) unsigned char responseStatus;
@property (readonly) unsigned int ackSessionStartTime;
@property (readonly) DCGMServiceTransmitterTimeRecord * timeRecord;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1 transmitterTime:(unsigned int)v2 sessionSignature:(unsigned int)v3 sessionStartTime:(unsigned int)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DataConsentDeclineModalAlert : DXCMBaseModalViewController {
    void (^ /* unknown block signature */)(void) _declinePressedBlock;
    void (^ /* unknown block signature */)(void) _cancelPressedBlock;
    DXCMBlockButton * _declineButton;
    DXCMBlockButton * _cancelButton;
    UIImageView * _notConnectedImageView;
}
@property (retain,nonatomic) DXCMBlockButton * declineButton;
@property (retain,nonatomic) DXCMBlockButton * cancelButton;
@property (retain,nonatomic) UIImageView * notConnectedImageView;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) declinePressedBlock;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) cancelPressedBlock;
- (id)init;
- (void)viewDidLoad;
- (void)layoutButtons:(id)v1 bottomButton:(id)v2;
- (void)processDeclineRequest;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertTypes : NSObject
+ (id)getStringforAlertType:(unsigned long long)v1;
+ (id)getReportableNameForAlertType:(unsigned long long)v1;
+ (id)getNameForAlertString:(id)v1;
+ (id)notificationTextForGlucoseAlertType:(unsigned long long)v1 egv:(id)v2 userAlert:(id)v3;
+ (id)englishAlertName:(unsigned long long)v1;
+ (unsigned long long)alertTypeFromAlertName:(id)v1;
+ (bool)isTransmitterAlertType:(unsigned long long)v1;
+ (bool)isGlucoseAlertType:(unsigned long long)v1;
+ (unsigned long long)priorityForGlucoseAlertType:(unsigned long long)v1;
+ (bool)isDexcomCriticalAlert:(unsigned long long)v1;
@end


/*****************************************************************/

@interface DXCMCrashReportFilterDatabase : NSObject<KSCrashReportFilter>
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)filterReports:(id)v1 onCompletion:(void (^ /* unknown block signature */)(void))v2;
- (double)unixTimestampFromCrashLog:(id)v1;
- (id)base64CrashLog:(id)v1;
@end


/*****************************************************************/

@interface DXCMCrashInstallation : KSCrashInstallation
+ (id)sharedInstance;
- (id)init;
- (id)sink;
@end


/*****************************************************************/

@interface CriticalAlertsFirstExplanationViewController : SetupWizardBaseViewController<CustomAlertDelegate> {
    NSObject<CriticalAlertsFirstExplanationViewDelegate> * _pagerFirstViewdelegate;
    DXCMBlockButton * _turnOnButton;
    DXCMBlockButton * _learnMore;
    UIImageView * _notificationsImageView;
    UIImage * _notificationsImage;
    CGMCustomAlert * _alertView;
    UIView * _backgroundView;
}
@property (retain,nonatomic) DXCMBlockButton * turnOnButton;
@property (retain,nonatomic) DXCMBlockButton * learnMore;
@property (retain,nonatomic) UIImageView * notificationsImageView;
@property (retain,nonatomic) UIImage * notificationsImage;
@property (retain,nonatomic) CGMCustomAlert * alertView;
@property (retain,nonatomic) UIView * backgroundView;
@property (retain,nonatomic) NSObject<CriticalAlertsFirstExplanationViewDelegate> * pagerFirstViewdelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)setUpImage;
- (void)setUpLearnMoreButton;
- (void)setUpNormalCriticalAlertsFlow;
- (void)setUpHumanFactorEnvironment;
- (void)setupDescription;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (void)textViewDidChangeSelection:(id)v1;
- (void)genericActionForFakeUIAlerController:(unsigned long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDaoMgr : NSObject {
    FMDatabase * _db;
    NSMutableDictionary * _daos;
}
@property (readonly,nonatomic) CGMShareEGVDao * shareEGVDao;
@property (readonly,nonatomic) CGMContactsDao * contactsDao;
@property (readonly,nonatomic) CGMShareRTEventsDao * shareRTEventsDao;
@property (readonly,nonatomic) CGMShareDataModel * shareDataModel;
@property (readonly,nonatomic) CGMCoreDataModel * coreDataModel;
@property (readonly,nonatomic) CGMEventsDao * eventsDao;
@property (readonly,nonatomic) CGMAlertStateDao * alertStateDao;
@property (readonly,nonatomic) CGMUserAlertsDao * userAlertsDao;
@property (readonly,nonatomic) CGMMeterDao * meterDao;
@property (readonly,nonatomic) CGMSupportLoggerDao * supportLoggerDao;
@property (readonly,nonatomic) CGMEGVDao * egvDao;
@property (readonly,nonatomic) CGMDiagnosticDataDao * diagnosticDataDao;
@property (readonly,nonatomic) CGMTransmitterCmdQueueDao * cmdDao;
@property (readonly,nonatomic) CGMKeyValueTables * keyValueTables;
@property (readonly,nonatomic) CGMSessionDao * sessionDao;
@property (readonly,nonatomic) CGMHealthKitDao * healthKitDao;
@property (readonly,nonatomic) CGMBondedDevicesDao * bondedDevicesDao;
@property (readonly,nonatomic) CGMWorkOutDao * workOutDao;
@property (readonly,nonatomic) CGMSampleMealDao * mealDao;
@property (readonly,nonatomic) CGMAlertScheduleDao * alertScheduleDao;
@property (readonly,nonatomic) AlertHistoryDao * alertHistoryDao;
@property (retain,nonatomic) NSMutableDictionary * daos;
@property (retain,nonatomic) FMDatabase * db;
+ (bool)resolveInstanceMethod:(SEL)v1;
- (id)init;
- (id)daoWithType:(Class)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMHealthKitSettingsViewController : DXCMBaseViewController {
    int _numRows;
    UIButton * _helpButton;
    UITableView * _tableView;
    double _headerHeight;
    double _estimatedFooterHeight;
    UIView * _sectionHeaderSharingAuthorized;
    UIView * _sectionHeaderSharingDenied;
    long long _authorizationStatus;
}
@property (nonatomic) UIButton * helpButton;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) int numRows;
@property (nonatomic) double headerHeight;
@property (nonatomic) double estimatedFooterHeight;
@property (retain,nonatomic) UIView * sectionHeaderSharingAuthorized;
@property (retain,nonatomic) UIView * sectionHeaderSharingDenied;
@property (nonatomic) long long authorizationStatus;
- (void)onHelpButton:(id)v1;
- (void)onAllowHealthClick;
- (void)updateUI;
- (void)viewDidLoad;
- (void)setupAccessibilityIds;
- (void)viewWillAppear:(bool)v1;
- (void)dealloc;
- (void)didBecomeActive:(id)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (double)tableView:(id)v1 estimatedHeightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)createSectionHeader:(id)v1;
- (void)setButtonAttributes:(bool)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface TrendGraphAccessViewController : DXCMBaseShareViewController<UITableViewDelegate,UITableViewDataSource> {
    bool _trendGraphEnabled;
    UITableView * _tableView;
    UIView * _headerView;
    UIView * _footerView;
}
@property (retain,nonatomic) UITableView * tableView;
@property (nonatomic) bool trendGraphEnabled;
@property (retain,nonatomic) UIView * headerView;
@property (retain,nonatomic) UIView * footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)configureTableView;
- (id)createViewWithTitle:(id)v1 titleOffsetTop:(double)v2 withAccessibilityId:(id)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMMeterDao : CGMBaseDao
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)removeKey:(id)v1 fromEveryDictionaryInArray:(id)v2;
- (void)insertUserEnteredMeter:(id)v1 meterValue:(unsigned long long)v2 transmitterId:(id)v3;
- (void)insertTransmitterEnteredMeter:(id)v1 meterValue:(unsigned long long)v2 meterSystemTimeSec:(int)v3 transmitterId:(id)v4 transmitterTime:(int)v5 meterEntryType:(id)v6;
- (void)eraseData;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (id)getCGMMeterRecordWithRecordId:(unsigned long long)v1;
- (id)getCGMMeterRecordsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)getCGMMeterRecordDictsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)getCGMMeterRecordLastValid;
- (id)fetchCGMMeterDictionaryAfterSystemTime:(double)v1;
@end


/*****************************************************************/

@interface DPQueue : NSObject
+ (id)readPostQueue;
+ (bool)writePostQueue:(id)v1;
+ (bool)isQueueEmpty;
+ (int)countPostsInQueue;
+ (void)queuePost:(id)v1;
+ (void)deQueuePost;
+ (id)peekPostQueueRear;
+ (id)peekPostQueueFront;
+ (id)keyOfFirstPost:(id)v1;
+ (id)keyOfLastPost:(id)v1;
@end


/*****************************************************************/

@interface DSAPIEgv : NSObject {
    long long _display_time;
    long long _system_time;
    long long _world_time;
    long long _value;
    long long _trend;
}
@property long long display_time;
@property long long system_time;
@property long long world_time;
@property long long value;
@property long long trend;
- (id)description;
@end


/*****************************************************************/

@interface DXCMBaseTableViewCell : UITableViewCell
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)setup;
- (void)cellTapped:(id)v1;
- (id)myController;
@end


/*****************************************************************/

@interface LetsGetStartedViewController : SetupWizardBaseViewController
- (void)viewDidLoad;
- (void)next;
@end


/*****************************************************************/

@interface CGMBaseDao : NSObject {
    FMDatabase * _db;
    CGMDaoMgr * _daoMgr;
}
@property (nonatomic) FMDatabase * db;
@property (nonatomic) CGMDaoMgr * daoMgr;
- (id)initWithDatabase:(id)v1 daoMgr:(id)v2;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (int)latestRecordedUpdateTimeSeconds;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDataModel : NSObject {
    CGMDataMgr * _coreDbMgr;
    CGMDataMgr * _shareDbMgr;
}
@property (readonly,nonatomic) CGMDataMgr * coreDbMgr;
@property (readonly,nonatomic) CGMDataMgr * shareDbMgr;
+ (id)sharedDataModel;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMIntentManager : NSObject
+ (id)getViewGlucoseIntent;
+ (void)donateShortcut;
@end


/*****************************************************************/

@interface CGMCoreDataModel : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
@end


/*****************************************************************/

@interface CGMExerciseEvent : CGMEventBase {
    int _minutes;
}
@property int minutes;
+ (id)localNameForExerciseEvent:(long long)v1;
+ (id)localNameForExerciseEventEnglish:(long long)v1;
- (long long)event_type;
- (id)dataPostSubType;
- (id)humanReadableValueWithUnits;
- (double)eventDuration;
- (id)calloutTitle;
- (id)calloutDetails;
- (id)summaryTitleForEvents:(id)v1;
@end


/*****************************************************************/

@interface DSAPIWSExceptionTypeNamesArray : NSObject
+ (void)init;
+ (int)toExceptionType:(id)v1;
+ (id)desc:(id)v1;
@end


/*****************************************************************/

@interface DSAPIWebServiceException : NSException {
    int _codeEnum;
    long long _httpResponseCode;
}
@property int codeEnum;
@property long long httpResponseCode;
+ (id)exception:(id)v1 httpResponseCode:(long long)v2 message:(id)v3;
- (id)initWithReason:(id)v1 reason:(id)v2 httpResponse:(long long)v3 userInfo:(id)v4;
- (id)description;
@end


/*****************************************************************/

@interface DXCMSettingsStackSubview : UIControl {
    bool _showDisclosureIndicator;
    bool _showPartialBottomSeparator;
    bool _showBottomSeparator;
    bool _showTopSeparator;
    UIImage * _icon;
    NSString * _title;
    UIImageView * _iconView;
    UILabel * _titleLabel;
    UIImageView * _disclosureView;
    UIView * _topSeparatorView;
    UIView * _bottomSeparatorView;
    NSLayoutConstraint * _rightMarginConstraint;
}
@property (retain,nonatomic) UIImageView * iconView;
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) UIImageView * disclosureView;
@property (retain,nonatomic) UIView * topSeparatorView;
@property (retain,nonatomic) UIView * bottomSeparatorView;
@property (retain,nonatomic) NSLayoutConstraint * rightMarginConstraint;
@property (retain,nonatomic) UIImage * icon;
@property (retain,nonatomic) NSString * title;
@property (nonatomic) bool showDisclosureIndicator;
@property (nonatomic) bool showPartialBottomSeparator;
@property (nonatomic) bool showBottomSeparator;
@property (nonatomic) bool showTopSeparator;
- (id)initWithFrame:(struct CGRect)v1;
- (void)setHighlighted:(bool)v1;
- (void)setSelected:(bool)v1;
- (void)setTitleAccessibilityId:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMViewManager : NSObject<DXCMBaseViewControllerDelegate,UINavigationControllerDelegate> {
    CGMTrendViewController * _trendScreen;
    UIWindow * _mainAppWindow;
    UIWindow * _alertsWindow;
    double backgroundedTimestamp;
    bool _needLogin;
    UIViewController * _splashViewController;
    UINavigationController * _mainNavigationController;
}
@property (retain,nonatomic) UINavigationController * mainNavigationController;
@property (nonatomic) UIViewController * splashViewController;
@property bool needLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedManager;
+ (id)topMostControllerForWindow:(id)v1;
- (void)showMainTrendView;
- (void)showMainScreen;
- (void)updateHomeWidget;
- (void)showCalibrationWindow;
- (void)showViewController:(id)v1;
- (id)reflectionViewIsVisible;
- (void)showAccessErrorAlert;
- (void)showDebugMenuForTap:(id)v1;
- (void)showSimplePairingWizard;
- (void)showSettingsPairTransmitterFlow;
- (void)showNewSensorWizard;
- (void)showTransmitterNotFoundWizard;
- (void)showSetupWizard;
- (void)showNotificationAreDelayed;
- (bool)isShowingInitialSetupWizard;
- (void)showLogin;
- (void)showContactViewController;
- (void)showShareWithViewController:(id)v1;
- (void)productTourFinished;
- (void)applicationWillEnterForeground;
- (bool)shouldWarpToMainScreen;
- (bool)isUserOnSetupWizard;
- (void)applicationDidEnterBackground;
- (void)silentEnableUpgradeAlarmsInDaoForNewUserUpgrade;
- (id)getTrendViewController;
- (id)getAlertsViewController;
- (void)showAlertWindow;
- (void)hideAlertWindow;
- (void)baseViewControllerDidFinish:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDataMgr : NSObject {
    NSString * _databasePath;
    FMDatabaseQueue * _queue;
    CGMDaoMgr * _mgr;
    NSString * _databaseKey;
}
@property (retain,nonatomic) FMDatabaseQueue * queue;
@property (retain,nonatomic) CGMDaoMgr * mgr;
@property (retain,nonatomic) NSString * databaseKey;
@property (readonly,nonatomic) NSString * databasePath;
+ (id)sharedDatabaseWithFullPathname:(id)v1 usingKey:(id)v2;
+ (void)setupDatabase:(id)v1 usingKey:(id)v2 andLogErrors:(bool)v3;
- (id)initAndOpenDatabaseWithFullPathname:(id)v1 usingKey:(id)v2;
- (void)dealloc;
- (id)doInDatabase:(void (^ /* unknown block signature */)(void))v1;
- (void)doInReturnlessDatabase:(void (^ /* unknown block signature */)(void))v1;
- (id)doInTransaction:(void (^ /* unknown block signature */)(void))v1;
- (void)doInReturnlessTransaction:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface BluetoothCheckViewController : SetupWizardBaseViewController {
    bool _requiresBluetoothAuthorization;
    UIImageView * _notificationsImageView;
    UIImage * _notificationsImage;
}
@property (retain,nonatomic) UIImageView * notificationsImageView;
@property (retain,nonatomic) UIImage * notificationsImage;
@property (nonatomic) bool requiresBluetoothAuthorization;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)segueToNewTransmitterScreen;
- (void)checkBluetoothStatus;
- (void)bluetoothCentralDidUpdateState:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSplashViewController : UIViewController {
    bool _isAnimationComplete;
    bool _isStartupComplete;
    bool _hasPostedStartupNotification;
    UILabel * _versionLabel;
    UILabel * _copyrightLabel;
    UILabel * _welcomeLabel;
    UIImageView * _dexcomLogoImgView;
    UIImageView * _waveImageView;
    NSLayoutConstraint * _dexcomLogoImgViewYConstraint;
    NSLayoutConstraint * _waveImgViewYConstraint;
    UIImageView * _ceMarkImageView;
    UIImageView * _blueManImageView;
}
@property (nonatomic) UILabel * versionLabel;
@property (nonatomic) UILabel * copyrightLabel;
@property (nonatomic) UILabel * welcomeLabel;
@property (retain,nonatomic) UIImageView * dexcomLogoImgView;
@property (nonatomic) UIImageView * waveImageView;
@property (retain,nonatomic) NSLayoutConstraint * dexcomLogoImgViewYConstraint;
@property (nonatomic) NSLayoutConstraint * waveImgViewYConstraint;
@property (nonatomic) UIImageView * ceMarkImageView;
@property (nonatomic) UIImageView * blueManImageView;
@property bool isAnimationComplete;
@property bool isStartupComplete;
@property (nonatomic) bool hasPostedStartupNotification;
- (void)viewDidLoad;
- (void)setAccessibilityIdentifiers;
- (bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)animateWithUserLoggedIn:(bool)v1;
- (bool)isInTestEnvironment;
- (double)animationDurationForLoggedIn:(bool)v1;
- (double)delayDurationForLoggedIn:(bool)v1;
- (void)startupComplete;
- (void)animationComplete;
- (void)moveOn;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEGVDao : CGMBaseDao
- (void)populateWithMockDataBeginning:(id)v1 ending:(id)v2;
- (void)deleteAllEgvValues;
- (id)getLastNumEGVs:(unsigned long long)v1;
- (id)getEgvRecordsAfterTime:(unsigned int)v1;
- (id)getLastEgvBeforeTime:(unsigned int)v1 transmitterId:(id)v2;
- (id)getEgvRecordsForSharing:(unsigned int)v1 lastSuccessfulShareTime:(unsigned int)v2;
- (id)getEgvDictsForSharing:(unsigned int)v1 lastSuccessfulShareTime:(unsigned int)v2;
- (bool)isAdjacentCalibrationGlucose:(id)v1 lastRecord:(id)v2;
- (unsigned long long)insertEGV:(id)v1;
- (unsigned long long)insertEGV:(id)v1 glucoseSystemTime:(id)v2 txId:(id)v3 txTimeStamp:(unsigned int)v4 txSessionStartTimeTicks:(unsigned int)v5 txSessionOffsetTicks:(unsigned int)v6 seqNum:(unsigned int)v7 glucoseValue:(unsigned int)v8 glucoseValueFlags:(unsigned int)v9 glucoseValuePrediction:(unsigned int)v10 trendArrow:(id)v11 trendRate:(char)v12 algState:(id)v13 isImmediateMatch:(bool)v14 isDisplayOnly:(bool)v15 wasBackFilled:(bool)v16;
- (bool)isDuplicateEGVRecordWithTxID:(id)v1 withTxTimeStamp:(unsigned int)v2 withGlucoseValue:(unsigned int)v3;
- (id)getCurrentEGV;
- (id)getLastEGVFromSequenceNumber:(unsigned int)v1;
- (id)queryCurrentEGVDictionary;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getRecordsToPlotBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (void)setupDataModelIfNeeded;
- (id)getEGVWithRecordId:(unsigned long long)v1;
- (void)resetDataModel;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (id)getCGMEGVRecordWithRecordId:(unsigned long long)v1;
- (id)getCGMEGVRecordsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)getCGMEGVRecordDictsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)fetchCGMEGVDictionaryAfterSystemTime:(double)v1;
@end


/*****************************************************************/

@interface CGMMeter : CGMBaseDataObject {
    unsigned int _recorded_system_time_sec;
    unsigned int _transmitter_system_time_sec;
    unsigned int _meter_system_time_sec;
    unsigned long long _record_id;
    NSString * _recorded_system_time;
    NSString * _recorded_display_time;
    NSString * _transmitter_id;
    long long _meter_value;
    NSString * _meter_system_time;
    NSString * _meter_display_time;
    NSString * _meter_entry_type;
}
@property (nonatomic) unsigned long long record_id;
@property (nonatomic) unsigned int recorded_system_time_sec;
@property (copy,nonatomic) NSString * recorded_system_time;
@property (copy,nonatomic) NSString * recorded_display_time;
@property (copy,nonatomic) NSString * transmitter_id;
@property (nonatomic) unsigned int transmitter_system_time_sec;
@property long long meter_value;
@property (nonatomic) unsigned int meter_system_time_sec;
@property (copy,nonatomic) NSString * meter_system_time;
@property (copy,nonatomic) NSString * meter_display_time;
@property (copy,nonatomic) NSString * meter_entry_type;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMLogFormatter : NSObject<DDLogFormatter> {
    NSDateFormatter * _dateFormatter;
}
@property (retain,nonatomic) NSDateFormatter * dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)init;
- (id)formatLogMessage:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface NameAndEmailViewController : DXCMBaseShareViewController<CNContactPickerDelegate,ABPeoplePickerNavigationControllerDelegate> {
    DXCMBaseTextField * _nameField;
    DXCMBaseTextField * _emailField;
    DXCMBaseTextField * _confirmEmailField;
    UILabel * _enterFollowerLabel;
    UILabel * _invitaionLabel;
    UIScrollView * _scrollview;
    UITextField * _activeField;
}
@property (nonatomic) UITextField * activeField;
@property (retain,nonatomic) DXCMBaseTextField * nameField;
@property (retain,nonatomic) DXCMBaseTextField * emailField;
@property (retain,nonatomic) DXCMBaseTextField * confirmEmailField;
@property (nonatomic) UILabel * enterFollowerLabel;
@property (nonatomic) UILabel * invitaionLabel;
@property (nonatomic) UIScrollView * scrollview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNameCell;
- (void)setupEmail1Cell;
- (void)setupEmail2Cell;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onNextButton;
- (bool)addContactWithStatusHUD:(id)v1 withName:(id)v2 andEmail:(id)v3;
- (void)onInsertFromContactsButton:(id)v1;
- (void)contactPicker:(id)v1 didSelectContact:(id)v2;
- (void)contactPicker:(id)v1 didSelectContactProperty:(id)v2;
- (void)checkAndSetName:(id)v1;
- (void)checkAndSetEmail:(id)v1;
- (void)keyboardWasShown:(id)v1;
- (void)keyboardWillBeHidden:(id)v1;
- (void)textFieldDidBeginEditing:(id)v1;
- (void)textFieldDidEndEditing:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBaseTextField : UITextField<UITextFieldDelegate> {
    UILabel * border;
    UILabel * background;
    bool enabled;
    struct CGRect realFrame;
    bool _showBorder;
    bool _allowSQLCharacters;
    bool _resignKeyboardOnReturn;
    int _maxLength;
    int _maxEntries;
    NSString * _allowedChars;
    UITextField * _nextTextField;
    void (^ /* unknown block signature */)(void) _onReturn;
    NSObject<UITextFieldDelegate> * _realDelegate;
}
@property (nonatomic) NSObject<UITextFieldDelegate> * realDelegate;
@property bool showBorder;
@property (retain) NSString * allowedChars;
@property int maxLength;
@property int maxEntries;
@property (nonatomic) bool allowSQLCharacters;
@property (retain,nonatomic) UITextField * nextTextField;
@property (nonatomic) bool resignKeyboardOnReturn;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) onReturn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)setup;
- (void)drawRect:(struct CGRect)v1;
- (void)setHeight:(double)v1;
- (void)selectAllText;
- (void)makeBorders;
- (void)onLabelButton;
- (void)enableEditing:(bool)v1;
- (void)setDelegate:(id)v1;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (void)textFieldDidBeginEditing:(id)v1;
- (void)textFieldDidEndEditing:(id)v1;
- (bool)textFieldShouldBeginEditing:(id)v1;
- (bool)textFieldShouldClear:(id)v1;
- (bool)textFieldShouldEndEditing:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (SEL)unMonkeyTalkCMD:(SEL)v1;
- (bool)respondsToSelector:(SEL)v1;
- (void)applyAttributesToPlaceholder;
- (bool)isGreaterThanMaxEntries:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceCalibrationResponseRecord : NSObject {
    unsigned char _responseStatus;
    unsigned short _crc;
}
@property (readonly) unsigned char responseStatus;
@property (readonly) unsigned short crc;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1;
@end


/*****************************************************************/

@interface CGMDayNightToggleCell : UITableViewCell {
    UISegmentedControl * _segmentedDayNight;
}
@property (nonatomic) UISegmentedControl * segmentedDayNight;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMMenuItem : NSObject {
    unsigned int _menuId;
    NSString * _menuTitle;
    NSString * _detail;
    long long _switchStatus;
    NSString * _destinationStoryBoardName;
    NSString * _vc_identifier;
    NSDictionary * _onSelectDataDictionary;
}
@property (readonly,nonatomic) unsigned int menuId;
@property (readonly,nonatomic) NSString * menuTitle;
@property (readonly,nonatomic) NSString * detail;
@property (readonly,nonatomic) long long switchStatus;
@property (readonly,nonatomic) NSString * destinationStoryBoardName;
@property (readonly,nonatomic) NSString * vc_identifier;
@property (readonly,nonatomic) NSDictionary * onSelectDataDictionary;
- (id)initWithId:(unsigned int)v1 title:(id)v2 detail:(id)v3 switchStatus:(long long)v4 destinationStoryBoardName:(id)v5 viewControllerIdentifier:(id)v6 dataDictionary:(id)v7;
- (id)initWithId:(unsigned int)v1 title:(id)v2 destinationStoryBoardName:(id)v3 viewControllerIdentifier:(id)v4;
- (id)initWithId:(unsigned int)v1 title:(id)v2 detail:(id)v3;
- (id)initWithId:(unsigned int)v1 switchStatus:(long long)v2 title:(id)v3;
- (id)initWithId:(unsigned int)v1 title:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface BluetoothExplanationViewController : SetupWizardBaseViewController {
    UIImageView * _bluetoothExplanationImageView;
}
@property (retain,nonatomic) UIImageView * bluetoothExplanationImageView;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertsManager : DXCMAlertsManager
- (id)initAlertWithType:(unsigned long long)v1 title:(id)v2 message:(id)v3;
@end


/*****************************************************************/

@interface DXCMPlayerViewController : AVPlayerViewController
- (void)viewDidAppear:(bool)v1;
- (void)videoDidFinishPlaying:(id)v1;
- (void)viewDidDisappear:(bool)v1;
- (long long)modalPresentationStyle;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
@end


/*****************************************************************/

@interface CGMAlertStateEntry : CGMBaseDataObject {
    bool _dirty;
    unsigned int _lastAckTime;
    unsigned long long _alertType;
    NSString * _name;
    unsigned long long _alertState;
    unsigned long long _nextEscalation;
    long long _alertCount;
    long long _lifetimeAlertCount;
}
@property (nonatomic) bool dirty;
@property (readonly,nonatomic) unsigned long long alertType;
@property (readonly,nonatomic) NSString * name;
@property (readonly,nonatomic) unsigned int lastAckTime;
@property (nonatomic) unsigned long long alertState;
@property (nonatomic) unsigned long long nextEscalation;
@property (nonatomic) long long alertCount;
@property (nonatomic) long long lifetimeAlertCount;
+ (id)alertStateEntry:(unsigned long long)v1 name:(id)v2 alertState:(unsigned long long)v3 nextEscalation:(unsigned long long)v4 lastAckTime:(unsigned int)v5 alertCount:(long long)v6 lifetimeAlertCount:(long long)v7;
+ (id)stringForState:(unsigned long long)v1;
- (id)initWithAlertType:(unsigned long long)v1 name:(id)v2 alertState:(unsigned long long)v3 nextEscalation:(unsigned long long)v4 lastAckTime:(unsigned int)v5 alertCount:(long long)v6 lifetimeAlertCount:(long long)v7;
- (id)initWithAlertType:(unsigned long long)v1;
- (void)updateDatabaseIfNeeded:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMShareDataModel : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
@end


/*****************************************************************/

@interface DCGMService : DXCMBluetoothService {
    DCGMServiceSyncTime * _DCGMSyncTime;
    DCGMServiceAuthentication * _DCGMAuthentication;
    DCGMServiceControlPoint * _DCGMControlPoint;
    DCGMServiceExchangeVariable * _DCGMExchangeVariable;
}
@property (retain,nonatomic) DCGMServiceSyncTime * DCGMSyncTime;
@property (retain,nonatomic) DCGMServiceAuthentication * DCGMAuthentication;
@property (retain,nonatomic) DCGMServiceControlPoint * DCGMControlPoint;
@property (retain,nonatomic) DCGMServiceExchangeVariable * DCGMExchangeVariable;
- (id)initWithName:(id)v1 pPeripheral:(id)v2;
- (void)serviceReady;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceExchangeVariable : DXCMBluetoothCharacteristic {
    NSMutableArray * _backfilledEGVs;
    NSMutableData * _dataStreamBuffer;
}
@property (retain,nonatomic) NSMutableArray * backfilledEGVs;
@property (retain,nonatomic) NSMutableData * dataStreamBuffer;
- (id)initWithName:(id)v1 pPeripheral:(id)v2;
- (void)doUpdateValue:(id)v1;
- (void)clearDataStreamBuffer;
- (id)getDataStreamBuffer:(id)v1;
- (bool)verifyStreamCRC:(unsigned short)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceSyncTime : DXCMBluetoothCharacteristic
- (id)initWithName:(id)v1 pPeripheral:(id)v2;
- (id)read;
@end


/*****************************************************************/

@interface DCGMServiceAuthentication : DCGMControlPointCharacteristic
- (id)initWithName:(id)v1 pPeripheral:(id)v2;
- (id)readChallengeUsingTxId:(id)v1;
- (id)readChallengeUsingAppKey:(id)v1;
- (id)writeDisplayHash:(id)v1;
- (bool)writeConnectionKeepAlive:(unsigned char)v1;
- (bool)writeRequestBond:(bool)v1 delay:(double)v2;
@end


/*****************************************************************/

@interface DCGMServiceControlPoint : DCGMControlPointCharacteristic
- (id)initWithName:(id)v1 pPeripheral:(id)v2;
- (void)logError:(unsigned long long)v1 operation:(id)v2;
- (id)readFirmwareVersion;
- (id)readTransmitterVersion;
- (id)readTransmitterExtVersion;
- (id)readTransmitterExtVersionWithWarmup;
- (id)readTransmitterTime;
- (id)readPredictiveEGV;
- (id)readStreamEGV:(unsigned int)v1 endTime:(unsigned int)v2;
- (id)readPrivateData:(unsigned int)v1 endTime:(unsigned int)v2;
- (id)readManifest;
- (id)readEncryptionInfo;
- (id)streamRecordFromResponse:(id)v1 sender:(id)v2;
- (id)readCalBounds;
- (id)readRawSensorCounts;
- (id)readTransmitterBattery;
- (id)startSensor:(unsigned int)v1 utcStartTime:(unsigned int)v2;
- (id)startSensor:(unsigned int)v1 utcStartTime:(unsigned int)v2 m0:(unsigned short)v3 mf:(unsigned short)v4;
- (id)startSensorWithCommand:(id)v1;
- (id)stopSensor:(unsigned int)v1;
- (id)calibrate:(unsigned short)v1 calTime:(unsigned int)v2;
- (void)disconnect;
- (bool)changeAppLevelKey:(id)v1;
- (bool)eraseDatabase;
- (void)accelerateTimeBy:(unsigned int)v1;
- (unsigned char)getCommunicationInterval;
- (void)changeCommunicationIntervalTo:(unsigned char)v1;
- (bool)setAdvertisementParameters:(unsigned short)v1 advertDuration:(unsigned short)v2;
@end


/*****************************************************************/

@interface DCGMServiceFirmwareVersionRecord : NSObject {
    unsigned char _HWVersion;
    unsigned short _NordicASICHWID;
    struct anonymous_type_10 _NordicSoftDeviceVersion;
    struct anonymous_type_11 _MSPVersion;
    struct anonymous_type_12 _NordicVersion;
}
@property (readonly) struct anonymous_type_13 MSPVersion;
@property (readonly) struct anonymous_type_14 NordicVersion;
@property (readonly) unsigned char HWVersion;
@property (readonly) struct anonymous_type_15 NordicSoftDeviceVersion;
@property (readonly) unsigned short NordicASICHWID;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(struct anonymous_type_16)v1 NordicVersion:(struct anonymous_type_17)v2 HWVersion:(unsigned char)v3 NordicSoftDeviceVersion:(struct anonymous_type_18)v4 NordicASICHWID:(unsigned short)v5;
@end


/*****************************************************************/

@interface DXCMWormholeReader : NSObject<CGMSubscriberDataSource> {
    MMWormhole * _wormhole;
}
@property (retain,nonatomic) MMWormhole * wormhole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
+ (void)addLogStatement:(id)v1 logLevel:(unsigned long long)v2 location:(id)v3 time:(long long)v4;
- (id)init;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)processCommands;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMHKWorkOutEvent : CGMHealthkitEventBase {
    int _workout_duration;
    double _workout_energy_burned;
    NSString * _workout_type;
}
@property double workout_energy_burned;
@property (retain) NSString * workout_type;
@property int workout_duration;
- (id)initWithDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSQLiteErrorManager : NSObject<DXCMNotificationDelegate> {
    bool _canSendSqlErrorNotifications;
    unsigned long long _currentErrorLevel;
}
@property (nonatomic) bool canSendSqlErrorNotifications;
@property (nonatomic) unsigned long long currentErrorLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (void)processNotificationAppCameToForeground:(unsigned long long)v1;
- (void)processNotificationAppWasAlreadyInForeground:(id)v1 alertType:(unsigned long long)v2;
- (id)init;
- (void)startPostingSQLiteErrorNotifications;
- (void)registerSQLError:(id)v1 SQLString:(id)v2;
- (bool)isSqlError;
- (void)sendAlertOrNotificationIfNeeded;
- (bool)isErrorCode:(int)v1;
- (bool)updateCurrentErrorLevelWithErrorString:(id)v1 SQLString:(id)v2;
- (void)handleNotification;
- (bool)isRecoverableError:(id)v1;
- (id)getErrorStringFromError:(id)v1;
- (void)logErrorToBusinessAnalyticsWithErrorString:(id)v1 withSqlString:(id)v2;
@end


/*****************************************************************/

@interface CGMAlertScheduleEditDaysViewController : DXCMBaseViewController<UITableViewDelegate,UITableViewDataSource> {
    CGMAlertSchedule * _alertSchedule;
    NSMutableDictionary * _daysSelectionStatus;
    NSObject<CGMAlertScheduleDaysSelectionChangedDelegate> * _alertScheduleDelgate;
    UITableView * _tableView;
    UILabel * _descriptionLabel;
    NSArray * _cellTitles;
    NSDictionary * _daysDictionary;
}
@property (nonatomic) UITableView * tableView;
@property (nonatomic) UILabel * descriptionLabel;
@property (retain,nonatomic) NSArray * cellTitles;
@property (retain,nonatomic) NSDictionary * daysDictionary;
@property (retain,nonatomic) CGMAlertSchedule * alertSchedule;
@property (retain,nonatomic) NSMutableDictionary * daysSelectionStatus;
@property (nonatomic) NSObject<CGMAlertScheduleDaysSelectionChangedDelegate> * alertScheduleDelgate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)setupTableView;
- (void)setupDataSource;
- (bool)selectionStatusForDay:(long long)v1;
- (void)saveAlertScheduleDays;
- (void)willMoveToParentViewController:(id)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface EnterBGViewController : DXCMBaseViewController<UITextFieldDelegate> {
    double _animDuration;
    unsigned long long _animCurve;
    DXCMBaseTextField * _calValueTextField;
    UILabel * _labelUnits;
    UILabel * _calHelpInstructions;
    UIScrollView * _contentScrollView;
    UIView * _contentView;
    DXCMBlockButton * _learnMoreButton;
    UIView * _keyboardSpacerView;
    NSLayoutConstraint * _keyboardHeight;
    UIBarButtonItem * _cancelBarBtn;
    UIBarButtonItem * _saveBarBtn;
}
@property (retain,nonatomic) DXCMBaseTextField * calValueTextField;
@property (retain,nonatomic) UILabel * labelUnits;
@property (retain,nonatomic) UILabel * calHelpInstructions;
@property (retain,nonatomic) UIScrollView * contentScrollView;
@property (retain,nonatomic) UIView * contentView;
@property (retain,nonatomic) DXCMBlockButton * learnMoreButton;
@property (retain,nonatomic) UIView * keyboardSpacerView;
@property (retain,nonatomic) NSLayoutConstraint * keyboardHeight;
@property (retain,nonatomic) UIBarButtonItem * cancelBarBtn;
@property (retain,nonatomic) UIBarButtonItem * saveBarBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)setupUIElements;
- (id)getCalibrationHelpText;
- (void)closeView;
- (void)showAlert:(id)v1 message:(id)v2;
- (void)onSave;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (void)keyboardWillShow:(id)v1;
- (void)keyboardWillHide:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceManifestRecord : NSObject {
    unsigned char _revision;
    NSData * _manifestData;
}
@property (nonatomic) unsigned char revision;
@property (retain,nonatomic) NSData * manifestData;
+ (id)recordWithData:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface TransmitterExplanationViewController : SetupWizardBaseViewController
- (void)viewDidLoad;
@end


/*****************************************************************/

@interface DCGMServiceSyncTimeRecord : NSObject {
    unsigned short _absSyncTime;
    unsigned short _relSyncTime;
    unsigned short _advertInterval;
    unsigned short _advertDuration;
    unsigned int _communicationInterval;
}
@property (readonly) unsigned short absSyncTime;
@property (readonly) unsigned short relSyncTime;
@property (readonly) unsigned int communicationInterval;
@property (readonly) unsigned short advertInterval;
@property (readonly) unsigned short advertDuration;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned short)v1 relSyncTime:(unsigned short)v2 communicationInterval:(unsigned int)v3 advertInterval:(unsigned short)v4 advertDuration:(unsigned short)v5;
- (unsigned long long)absSyncTimeMs;
@end


/*****************************************************************/

@interface CGMDiskSpaceManager : NSObject<CGMSubscriberDataSource> {
    unsigned long long _lastAlertType;
}
@property (readonly,nonatomic) unsigned long long lastAlertType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (id)init;
- (void)startCheckingDiskSpace;
- (void)checkDiskSpace;
- (unsigned long long)getAlertTypeFromDiskSpace:(long long)v1;
- (void)logDiskLowWithDiskSpace:(long long)v1 withAlertType:(unsigned long long)v2;
- (id)getActivitySubtypeFromAlertType:(unsigned long long)v1;
@end


/*****************************************************************/

@interface DXCMTransmitterAuthentication : NSObject
- (unsigned char)hashTransmitterDiscovery:(id)v1;
- (bool)IsTransmitterHashValid:(id)v1 displayChallengeValue:(id)v2 transmitterHash:(id)v3;
- (id)hashDisplayChallengeRequest:(id)v1 transmitterChallengeValue:(id)v2;
- (id)calculateHash:(id)v1 clearText:(id)v2;
- (id)calculateHash:(id)v1 clearData:(id)v2;
@end


/*****************************************************************/

@interface TrendViewBinning : NSObject
+ (int)binForLatestEGV:(id)v1;
+ (id)populateLocalEGVList:(id)v1;
@end


/*****************************************************************/

@interface CGMAccessibilityHelper : NSObject
+ (id)phraseForEGV:(id)v1 andTrend:(long long)v2;
+ (id)phraseForRate:(long long)v1;
@end


/*****************************************************************/

@interface DPRealTimeEvent : DPBaseObject {
    long long _RecordId;
    double _RecordedTime;
    unsigned long long _RecordType;
    unsigned long long _RecordSubType;
    NSArray * _Records;
}
@property (nonatomic) long long RecordId;
@property (nonatomic) double RecordedTime;
@property (nonatomic) unsigned long long RecordType;
@property (nonatomic) unsigned long long RecordSubType;
@property (retain,nonatomic) NSArray * Records;
- (id)initRealTimeEvent:(unsigned long long)v1 withRecordSubType:(unsigned long long)v2 withRecords:(id)v3 withRecordedTime:(double)v4 withRecordId:(long long)v5;
- (id)getPayloadRecordAtIndex:(unsigned long long)v1;
- (id)removeTimestampFromDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMApplication : UIApplication
- (bool)sendAction:(SEL)v1 to:(id)v2 from:(id)v3 forEvent:(id)v4;
@end


/*****************************************************************/

@interface DXCMBluetoothCharacteristic : NSObject {
    bool _setNotifyPending;
    bool _writePending;
    bool _readPending;
    NSString * _name;
    CBUUID * _uuid;
    CBCharacteristic * _cbCharacteristic;
    DXCMBluetoothPeripheral * _dxcmPeripheral;
    NSError * _bleError;
    NSObject<OS_dispatch_semaphore> * _setNotifyResponseSem;
    NSObject<OS_dispatch_semaphore> * _writeResponseSem;
    NSObject<OS_dispatch_semaphore> * _readResponseSem;
}
@property bool setNotifyPending;
@property (retain) NSObject<OS_dispatch_semaphore> * setNotifyResponseSem;
@property bool writePending;
@property (retain) NSObject<OS_dispatch_semaphore> * writeResponseSem;
@property bool readPending;
@property (retain) NSObject<OS_dispatch_semaphore> * readResponseSem;
@property (retain) NSString * name;
@property (retain) CBUUID * uuid;
@property (retain) CBCharacteristic * cbCharacteristic;
@property (nonatomic) DXCMBluetoothPeripheral * dxcmPeripheral;
@property (nonatomic) NSError * bleError;
@property (readonly,nonatomic) bool isDiscovered;
- (id)initWithName:(id)v1 pUUID:(id)v2 pPeripheral:(id)v3;
- (void)characteristicDiscovered:(id)v1 error:(id)v2;
- (bool)setNotify:(bool)v1;
- (void)didUpdateNotificationState:(id)v1;
- (bool)writeValueAck:(id)v1;
- (bool)writeValueAck:(id)v1 withCustomTimeout:(unsigned long long)v2;
- (void)writeValueNoAck:(id)v1;
- (void)didWriteValue:(id)v1;
- (id)readValue;
- (void)didUpdateValue:(id)v1 withValue:(id)v2;
- (void)doUpdateValue:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTransmitterEGVBackFillGapFinder : NSObject {
    NSArray * _records;
    CGMEGV * _latest;
    CGMEGV * _previous;
    CGMEGV * _previousSequence;
    unsigned int _minStartTime;
    long long _currentStartIndex;
    long long _maxIndex;
    unsigned int _gapStart;
    unsigned int _gapEnd;
}
@property (readonly) unsigned int gapStart;
@property (readonly) unsigned int gapEnd;
- (id)initWithGlucoseRecords:(id)v1 minStartTime:(unsigned int)v2;
- (bool)hasGap;
- (void)setPreviousGlucose:(id)v1;
- (bool)isZeroSequenceNumberExpected:(id)v1;
- (bool)isSessionStopped:(unsigned char)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTitleSubtitleTableViewCell : DXCMBaseTableViewCell
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
@end


/*****************************************************************/

@interface CGMFixedAlerts : NSObject {
    NSDictionary * _fixedAlerts;
}
+ (id)sharedInstance;
+ (id)fixedAlertForAlertType:(unsigned long long)v1;
- (id)init;
- (id)alertForType:(unsigned long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface TechSupportHelper : NSObject<MFMailComposeViewControllerDelegate> {
    bool _blockCalls;
    bool _blockEmails;
    NSString * _logName;
    double _duration;
}
@property (nonatomic) double duration;
@property (retain,nonatomic) NSString * logName;
@property bool blockCalls;
@property bool blockEmails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
+ (id)phoneNumberForSupportType:(long long)v1;
- (bool)canCallTechSupport;
- (void)callTechSupportWithSupportType:(long long)v1;
- (void)cannotMakeCallsTechSupportHandlerWithSupportType:(long long)v1;
- (void)contactSupportEmail:(id)v1 subject:(id)v2 params:(id)v3 supportType:(long long)v4;
- (void)mailComposeController:(id)v1 didFinishWithResult:(long long)v2 error:(id)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTimeSync : NSObject {
    bool _timeSyncEnabled;
    NSString * _logName;
}
@property (retain,nonatomic) NSString * logName;
@property (nonatomic) bool timeSyncEnabled;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)updateTransmitterTime:(unsigned int)v1;
- (void)significantTimeChange;
- (void)userChangedSystemClock;
- (bool)updateServerTime;
- (long long)getCurrentPhoneTimeDelta;
- (bool)isTimeLossEvent;
- (void)resetTimeSync;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DataConsentRequiredModalViewController : DXCMBaseModalViewController {
    unsigned long long _entrypoint;
    DXCMBlockButton * _iUnderstandButton;
    UIImageView * _connectedImageView;
}
@property (retain,nonatomic) DXCMBlockButton * iUnderstandButton;
@property (retain,nonatomic) UIImageView * connectedImageView;
@property (nonatomic) unsigned long long entrypoint;
- (id)init;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)onCancel;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ShareInternetExplanationViewController : DXCMBaseShareViewController {
    UILabel * _internetExplainationLabel;
}
@property (nonatomic) UILabel * internetExplainationLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ShareThingsHappenViewController : DXCMBaseShareViewController {
    UIImageView * _hikerNoServiceImageView;
}
@property (nonatomic) UIImageView * hikerNoServiceImageView;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface RealtimeEventResponseContainer : NSObject {
    NSString * _content;
    NSString * _hmac;
    bool _isZip;
}
- (id)initWithData:(id)v1;
- (id)getContent:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMGraphHeightViewController : DXCMBaseViewController {
    UITableView * _tableView;
}
@property (nonatomic) UITableView * tableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FollowersSettingsViewController : DXCMBaseShareViewController<CGMAlertLimitChangedDelegate,_TtP3CGM27CGMTimeValueChangedDelegate_> {
    DXCMCGMBaseSwitchTableViewCell * urgentLowEnabledCell;
    DXCMCGMBaseTableViewCell * urgentLowThresholdCell;
    DXCMCGMBaseSwitchTableViewCell * lowEnabledCell;
    DXCMCGMBaseTableViewCell * lowThresholdCell;
    DXCMCGMBaseTableViewCell * lowDelayCell;
    DXCMCGMBaseSwitchTableViewCell * highEnabledCell;
    DXCMCGMBaseTableViewCell * highThresholdCell;
    DXCMCGMBaseTableViewCell * highDelayCell;
    DXCMCGMBaseSwitchTableViewCell * noDataEnabledCell;
    DXCMCGMBaseTableViewCell * noDataDelayCell;
    UITableView * _tableView;
    UILabel * _headerLabel;
    NSString * _selectedAlertType;
    CGMEditAlertLimitViewController * _childViewController;
    _TtC3CGM25CGMEditTimeViewController * _childTimeViewController;
}
@property (retain,nonatomic) NSString * selectedAlertType;
@property (nonatomic) CGMEditAlertLimitViewController * childViewController;
@property (nonatomic) _TtC3CGM25CGMEditTimeViewController * childTimeViewController;
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) UILabel * headerLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (id)enableBaseSwitchCellForAlert:(int)v1;
- (id)pickerBaseCellForAlert;
- (unsigned long long)supportedInterfaceOrientations;
- (id)alertNameFromSection:(int)v1;
- (void)viewWillAppear:(bool)v1;
- (void)onCellSwitchClick:(id)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 willSelectRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (void)alertLimitChanged:(id)v1;
- (void)timeValueChanged:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMFMDBLogEntry : NSObject {
    NSNumber * _context;
    NSNumber * _level;
    NSString * _message;
    NSString * _location;
    NSDate * _timestamp;
}
@property (retain,nonatomic) NSNumber * context;
@property (retain,nonatomic) NSNumber * level;
@property (retain,nonatomic) NSString * message;
@property (retain,nonatomic) NSString * location;
@property (retain,nonatomic) NSDate * timestamp;
- (id)initWithLogMessage:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMFMDBLogger : DDAbstractDatabaseLogger<DDLogger> {
    NSString * _logDirectory;
    NSMutableArray * _pendingLogEntries;
    FMDatabase * _database;
}
@property (retain,nonatomic) NSString * logDirectory;
@property (retain,nonatomic) NSMutableArray * pendingLogEntries;
@property (retain,nonatomic) FMDatabase * database;
@property (retain,nonatomic) NSObject<DDLogFormatter> * logFormatter;
@property (readonly,nonatomic) NSObject<OS_dispatch_queue> * loggerQueue;
@property (readonly,copy,nonatomic) NSString * loggerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithLogDirectory:(id)v1;
- (void)validateLogDirectory;
- (void)openDatabase;
- (bool)db_log:(id)v1;
- (void)db_save;
- (void)db_delete;
- (void)db_saveAndDelete;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBluetoothCentral : NSObject<CBCentralManagerDelegate> {
    NSMutableArray * _peripherals;
    NSNumber * _bluetoothEnabledOverride;
    CBCentralManager * _centralManager;
    NSObject<OS_dispatch_queue> * _centralManagerQueue;
    NSMutableArray * _scanningUUIDArray;
}
@property (retain) CBCentralManager * centralManager;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * centralManagerQueue;
@property (retain,nonatomic) NSMutableArray * scanningUUIDArray;
@property (retain) NSMutableArray * peripherals;
@property (retain,nonatomic) NSNumber * bluetoothEnabledOverride;
@property (readonly,nonatomic) bool isBLEOn;
@property (readonly,nonatomic) bool isAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedCentral;
+ (bool)isPeripheralBonded:(id)v1;
+ (id)getBondedDevices;
- (id)init;
- (id)getListOfConnectedDevices;
- (id)findPeripheralByName:(id)v1;
- (id)findPeripheral:(id)v1;
- (bool)registerPeripheral:(id)v1;
- (bool)unregisterPeripheral:(id)v1;
- (void)startScan:(id)v1;
- (void)stopScan:(id)v1;
- (void)scanForPeripherals:(id)v1;
- (void)stopScanForPeripherals;
- (void)connectWithOptions:(id)v1 options:(id)v2;
- (void)reconnectWithOptions:(id)v1 options:(id)v2;
- (void)disconnect:(id)v1;
- (void)centralManagerDidUpdateState:(id)v1;
- (void)centralManager:(id)v1 willRestoreState:(id)v2;
- (void)centralManager:(id)v1 didDiscoverPeripheral:(id)v2 advertisementData:(id)v3 RSSI:(id)v4;
- (void)centralManager:(id)v1 didConnectPeripheral:(id)v2;
- (void)centralManager:(id)v1 didFailToConnectPeripheral:(id)v2 error:(id)v3;
- (void)centralManager:(id)v1 didDisconnectPeripheral:(id)v2 error:(id)v3;
- (void)markPeripheralBonded:(id)v1;
- (void)markPeripheralUnbonded:(id)v1;
- (id)bondedPeripheralIdentifier:(id)v1;
- (id)getBondedDeviceFromDxcmPeripheral:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSiriExplainViewController : SetupWizardBaseViewController<INUIAddVoiceShortcutViewControllerDelegate,SetupWizardBaseViewControllerDelegate> {
    NSArray * _voiceShortcuts;
}
@property (retain,nonatomic) NSArray * voiceShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
@property (readonly) UIView * view;
- (void)viewDidLoad;
- (void)addVoiceShortcutViewController:(id)v1 didFinishWithVoiceShortcut:(id)v2 error:(id)v3;
- (void)addVoiceShortcutViewControllerDidCancel:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTransmitterCalibration : NSObject {
    unsigned int _weight;
    unsigned int _err0;
    unsigned int _err1;
    unsigned int _min;
    unsigned int _max;
}
@property (readonly) unsigned int weight;
@property (readonly) unsigned int err0;
@property (readonly) unsigned int err1;
@property (readonly) unsigned int min;
@property (readonly) unsigned int max;
- (id)initWithBounds:(unsigned int)v1 err0:(unsigned int)v2 err1:(unsigned int)v3 min:(unsigned int)v4 max:(unsigned int)v5;
- (unsigned char)bgErr0Err1Check:(unsigned short)v1;
- (bool)bgMinMaxCheck:(unsigned short)v1;
- (unsigned short)bgWeightedAverage:(unsigned short)v1 currentEGV:(unsigned int)v2;
- (struct DXCMTransmitterCalibrationData)processCalibration:(id)v1 lastBG:(id)v2 currentCalState:(unsigned char)v3 currentEGV:(id)v4;
- (unsigned char)processFirstOfTwoBGsRequired:(unsigned short)v1;
- (unsigned char)processSecondOfTwoBGsRequired:(unsigned short)v1;
- (unsigned char)processInCalTransmitter:(unsigned short)v1;
- (unsigned char)processInCalDisplay:(unsigned short)v1;
- (unsigned char)processHighWedgeTransmitter:(unsigned short)v1;
- (unsigned char)processLowWedgeTransmitter:(unsigned short)v1;
- (unsigned char)processHighWedgeDisplay:(unsigned short)v1;
- (unsigned char)processLowWedgeDisplay:(unsigned short)v1;
- (unsigned char)processLinearityFitTransmitter:(unsigned short)v1;
- (unsigned char)processOutOfCalDueToOutlierTransmitter:(unsigned short)v1;
- (unsigned char)processLinearityFitDisplay:(unsigned short)v1;
- (unsigned char)processHighWedgeDisplayFirstOfTwoBGs:(unsigned short)v1;
- (unsigned char)processLowWedgeDisplayFirstOfTwoBGs:(unsigned short)v1;
@end


/*****************************************************************/

@interface DSAPIContact : CGMBaseDataObject {
    bool _trend_permission;
    bool _urgentlow_enabled;
    bool _low_enabled;
    bool _high_enabled;
    bool _nodata_enabled;
    NSString * _contact_id;
    NSString * _name;
    NSString * _email;
    NSString * _subscription_id;
    unsigned long long _state;
    unsigned long long _urgentlow_threshold;
    unsigned long long _low_threshold;
    unsigned long long _high_threshold;
    unsigned long long _low_delay;
    unsigned long long _high_delay;
    unsigned long long _nodata_delay;
}
@property (retain,nonatomic) NSString * contact_id;
@property (retain,nonatomic) NSString * name;
@property (retain,nonatomic) NSString * email;
@property (retain,nonatomic) NSString * subscription_id;
@property unsigned long long state;
@property bool trend_permission;
@property bool urgentlow_enabled;
@property bool low_enabled;
@property bool high_enabled;
@property bool nodata_enabled;
@property unsigned long long urgentlow_threshold;
@property unsigned long long low_threshold;
@property unsigned long long high_threshold;
@property unsigned long long low_delay;
@property unsigned long long high_delay;
@property unsigned long long nodata_delay;
- (id)initWithDictionary:(id)v1;
- (id)description;
- (void)doSomethingToAllProperties:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCGMBaseSwitchTableViewCell : UITableViewCell {
    bool _switchedOn;
    NSString * _title;
    NSString * _titleAccessibilityId;
    NSString * _switchAccessibilityId;
    void (^ /* unknown block signature */)(void) _switchValueChangeBlock;
    UILabel * _titleLabel;
    UISwitch * _onOffSwitch;
}
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) UISwitch * onOffSwitch;
@property (retain,nonatomic) NSString * title;
@property (retain,nonatomic) NSString * titleAccessibilityId;
@property (retain,nonatomic) NSString * switchAccessibilityId;
@property (nonatomic) bool switchedOn;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) switchValueChangeBlock;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)initCommon;
- (void)updateConstraints;
- (void)switchValueChanged:(id)v1;
- (id)myController;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void)addCommonIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPBaseObject : NSObject
+ (unsigned long long)getDataStreamType;
- (id)initWithDictionary:(id)v1;
- (id)initWithData:(id)v1;
- (id)initWithBase64String:(id)v1;
- (id)dictionary;
- (id)jsonData;
- (id)jsonString;
- (id)base64String;
- (id)description;
- (bool)isEqual:(id)v1;
- (void)doSomethingToAllProperties:(void (^ /* unknown block signature */)(void))v1;
@end


/*****************************************************************/

@interface SetupWizardLegalAgreementsVC : DXCMLegalAgreementsVC<DXCMLegalAgreementsVCDelegate>
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (void)showIfNeeded:(id)v1;
+ (bool)isSetupWizardDebug;
+ (void)processShowIfNeeded:(id)v1 skipLegal:(bool)v2;
+ (void)userAgreed:(id)v1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)userAgreed;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardDaysViewController : DXCMBaseAlertScheduleSetupViewController<CGMAlertScheduleDaysSelectionChangedDelegate> {
    NSMutableDictionary * _daysSelectionStatus;
}
@property (retain,nonatomic) NSMutableDictionary * daysSelectionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)alertScheduleDaysSelectionChanged:(id)v1;
- (bool)hasDaySelection;
- (void)updateAlertScheduleData;
- (id)childAlertScheduleEditDaysViewController;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DataConsentHelper : NSObject {
    bool _didShowAlertInAppFromLockscreen;
}
@property (nonatomic) bool didShowAlertInAppFromLockscreen;
+ (id)sharedManager;
+ (void)setOptedIn:(bool)v1;
+ (bool)isOptedIn;
+ (void)setInGDPRJurisdiction:(bool)v1;
+ (bool)isInGDPRJurisdiction;
+ (bool)isDataOptInFeatureSupported;
+ (bool)canAccessServer;
+ (id)bulletedList;
+ (id)optOutMessage;
+ (void)setOptInWithAccessToken:(id)v1;
+ (id)getScopeFromUAMConfigFile;
+ (void)registerDeviceKeyAndSynchronizeDataWithBulkPost:(bool)v1;
+ (void)renewAccessTokenWithViewController:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
+ (void)checkAccessTokenWithViewController:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
+ (void)showConsentRequiredModalAlertWithViewController:(id)v1 entrypoint:(unsigned long long)v2 isModal:(bool)v3;
+ (void)showWebViewWithEntrypoint:(unsigned long long)v1 viewController:(id)v2;
+ (void)showShareDisabledAlertWithViewController:(id)v1 userAcknowledged:(void (^ /* unknown block signature */)(void))v2;
+ (void)showDeclineModalAlert:(id)v1 declinePressed:(void (^ /* unknown block signature */)(void))v2 cancelPressed:(void (^ /* unknown block signature */)(void))v3;
- (id)init;
- (void)testingSetOptInStatusRemotely:(bool)v1;
- (void)checkRemoteStatusChange:(bool)v1 remoteOptInStatus:(bool)v2;
- (void)processOptedOutDataSharingDisabledAlertFromSwipe;
- (long long)getConsentStatusChange:(bool)v1 remoteOptInStatus:(bool)v2;
- (void)processConsentStatusChange:(long long)v1;
@end


/*****************************************************************/

@interface DXCMBaseModalViewController : DXCMBaseViewController {
    NSString * _navigationBarTitle;
    NSString * _rightNavigationBarButtonTitle;
    NSString * _descriptionLabelAccessibilityId;
    DXCMBlockButton * _topButton;
    DXCMBlockButton * _bottomButton;
    void (^ /* unknown block signature */)(void) _okPressedBlock;
    UIScrollView * _scrollView;
    UIView * _contentView;
    UILabel * _descriptionLabel;
    UILabel * _captionLabel;
    UITextView * _descriptionTextView;
    UIBarButtonItem * _okBarButtonItem;
    NSArray * _contentConstraints;
    NSDictionary * _metricsDictionary;
    UILabel * _bannerLabel;
}
@property (retain,nonatomic) UIScrollView * scrollView;
@property (retain,nonatomic) UIView * contentView;
@property (retain,nonatomic) UILabel * descriptionLabel;
@property (retain,nonatomic) UILabel * captionLabel;
@property (retain,nonatomic) UITextView * descriptionTextView;
@property (retain,nonatomic) UIBarButtonItem * okBarButtonItem;
@property (retain,nonatomic) NSArray * contentConstraints;
@property (retain,nonatomic) NSDictionary * metricsDictionary;
@property (retain,nonatomic) UILabel * bannerLabel;
@property (retain,nonatomic) NSString * navigationBarTitle;
@property (retain,nonatomic) NSString * rightNavigationBarButtonTitle;
@property (retain,nonatomic) NSString * descriptionLabelAccessibilityId;
@property (retain,nonatomic) DXCMBlockButton * topButton;
@property (retain,nonatomic) DXCMBlockButton * bottomButton;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) okPressedBlock;
- (id)init;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (void)setupOkButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)addContentWithDescription:(id)v1 redLabel:(id)v2;
- (void)addContentWithDescription:(id)v1;
- (void)addContentWithHyperlinkDescription:(id)v1 withHypelinksDictionary:(id)v2 andDelegate:(id)v3;
- (void)addContentWithDescription:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addContentWithCustomView:(id)v1;
- (void)okBarButtonItemPressed;
- (void)layoutConstraintsWithScrollView:(id)v1 contentView:(id)v2;
- (void)layoutConstraintsWithDescriptionLabel:(id)v1 bannerLabel:(id)v2;
- (void)layoutConstraintsWithDescriptionLabel:(id)v1;
- (void)layoutConstraintsWithDescriptionTextView:(id)v1;
- (void)layoutConstraintsWithDescriptionLabel:(id)v1 imageView:(id)v2 captionLabel:(id)v3;
- (void)setCommonAttributesForLabel:(id)v1;
- (void)setCommonAttributesForTextViewWithHyperlinks:(id)v1;
- (void)layoutButtons:(id)v1 bottomButton:(id)v2;
- (void)layoutTopButtonOnly:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMHealthKitEngine : NSObject<CGMSubscriberDataSource> {
    bool _isSavingToHK;
    NSString * _logName;
    CGMDataMgr * _dataMgr;
    NSObject<OS_dispatch_queue> * _hkQueue;
}
@property (retain,nonatomic) CGMDataMgr * dataMgr;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * hkQueue;
@property bool isSavingToHK;
@property (retain,nonatomic) NSString * logName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)save;
- (void)saveEgvToDatabase;
- (void)saveEgvsToHealthKit;
- (void)logEGVQuantitySample:(id)v1;
- (void)saveCarbsToHealthKit;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FixedAlert : NSObject {
    bool _postNotification;
    bool _presentAlertPopUpInApp;
    bool _shouldOverrideMute;
    NSString * _soundName;
    unsigned long long _alertType;
    long long _totalNumOfReAlerts;
    unsigned long long _priority;
    long long _reAlertTimeInSec;
    unsigned long long _ackType;
    unsigned long long _actionButton;
    NSString * _alertPopUpTitle;
    NSString * _alertText;
    NSString * _notificationFormat;
}
@property (retain,nonatomic) NSString * notificationFormat;
@property (readonly,nonatomic) NSString * name;
@property (retain,nonatomic) NSString * soundName;
@property unsigned long long alertType;
@property long long totalNumOfReAlerts;
@property unsigned long long priority;
@property long long reAlertTimeInSec;
@property unsigned long long ackType;
@property bool postNotification;
@property bool presentAlertPopUpInApp;
@property bool shouldOverrideMute;
@property (readonly,nonatomic) unsigned long long actionButton;
@property (retain,nonatomic) NSString * alertPopUpTitle;
@property (retain,nonatomic) NSString * alertText;
@property (readonly,nonatomic) NSString * notificationBody;
- (id)init;
- (id)initWithBodyFormat:(id)v1 button:(unsigned long long)v2;
- (id)stringWithTimeFormat:(id)v1 forTime:(id)v2;
- (bool)obeysMuteOverrideSetting;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBatteryMonitorEngine : NSObject<CGMSubscriberDataSource> {
    NSString * _logName;
    double _lastNotificationTime;
    CGMDataMgr * _dataMgr;
}
@property (nonatomic) double lastNotificationTime;
@property (retain,nonatomic) CGMDataMgr * dataMgr;
@property (retain,nonatomic) NSString * logName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)logBatteryState;
- (void)didChangePowerMode:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPCrashLogRecord : DPBaseRecord {
    NSString * _crashFile;
}
@property (retain) NSString * crashFile;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBluetoothPeripheral : NSObject<CBPeripheralDelegate> {
    CBPeripheral * _cbPeripheral;
    NSString * _primaryServiceUUID;
    NSString * _advName;
    NSString * _deviceId;
    NSMutableDictionary * _serviceDict;
    NSObject<OS_dispatch_queue> * _peripheralQueue;
    NSObject<OS_dispatch_queue> * _peripheralRespQueue;
}
@property (retain) NSObject<OS_dispatch_queue> * peripheralQueue;
@property (retain) NSObject<OS_dispatch_queue> * peripheralRespQueue;
@property (retain) CBPeripheral * cbPeripheral;
@property (readonly,copy) NSString * primaryServiceUUID;
@property (readonly,copy) NSString * advName;
@property (retain) NSString * deviceId;
@property (retain) NSMutableDictionary * serviceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithPeripheral:(id)v1 primaryServiceUUID:(id)v2;
- (void)addService:(id)v1;
- (id)services;
- (id)findService:(id)v1;
- (void)connect;
- (void)reconnect;
- (id)getPeripheralIdentifier;
- (id)getPeripheralName;
- (void)disconnect;
- (void)discoverServicesForUUIDs:(id)v1;
- (void)peripheralStateUpdate:(long long)v1;
- (bool)peripheralFound:(id)v1 advData:(id)v2 rssi:(id)v3;
- (void)peripheralConnected:(long long)v1;
- (void)peripheralDisconnected:(long long)v1;
- (void)discoveredServiceReady:(id)v1;
- (void)peripheralRSSI:(long long)v1;
- (void)peripheral:(id)v1 didDiscoverServices:(id)v2;
- (void)peripheral:(id)v1 didDiscoverCharacteristicsForService:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didUpdateNotificationStateForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didUpdateValueForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didWriteValueForCharacteristic:(id)v2 error:(id)v3;
- (void)peripheral:(id)v1 didReadRSSI:(id)v2 error:(id)v3;
- (void)peripheralDidUpdateName:(id)v1;
- (void)peripheralDidInvalidateServices:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMNotificationStackSubview : UIControl {
    long long _notificationStyle;
    NSString * _messageText;
    UILabel * _notificationText;
    UIImageView * _notificationIcon;
    UIImageView * _actionIcon;
    UITapGestureRecognizer * _gestureRecognizer;
}
@property (retain,nonatomic) UILabel * notificationText;
@property (retain,nonatomic) UIImageView * notificationIcon;
@property (retain,nonatomic) UIImageView * actionIcon;
@property (retain,nonatomic) UITapGestureRecognizer * gestureRecognizer;
@property (nonatomic) long long notificationStyle;
@property (retain,nonatomic) NSString * messageText;
- (id)init;
- (void)updateConstraints;
- (void)setHidden:(bool)v1;
- (void)applyStyling;
- (void)handleAction;
- (void)enableAction:(bool)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceTransmitterTimeRecord : NSObject {
    bool _inSession;
    unsigned int _transmitterTime;
    unsigned int _sessionStartTime;
    unsigned int _sessionDuration;
    unsigned int _aesKeyHash;
}
@property (readonly) unsigned int transmitterTime;
@property (readonly) unsigned int sessionStartTime;
@property (readonly) unsigned int sessionDuration;
@property (readonly) bool inSession;
@property (readonly) unsigned int aesKeyHash;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned int)v1 sessionStartTime:(unsigned int)v2 aesKeyHash:(unsigned int)v3;
- (id)initWithValues:(unsigned int)v1 sessionStartTime:(unsigned int)v2;
@end


/*****************************************************************/

@interface DXCMAlertsManager : NSObject {
    bool _alertVisible;
    bool _shouldPopToHomeScreen;
    bool _isHidden;
    void (^ /* unknown block signature */)(void) _userAcknowledgedAlert;
    UIViewController * _alert;
    long long _alertStyleType;
    NSString * _alertLogName;
    NSString * _alertLogData;
    double _alertLogDuration;
    DXCMAlertsGlobal * _global;
}
@property (retain,nonatomic) UIViewController * alert;
@property (nonatomic) long long alertStyleType;
@property (retain,nonatomic) NSString * alertLogName;
@property (retain,nonatomic) NSString * alertLogData;
@property (nonatomic) double alertLogDuration;
@property (retain,nonatomic) DXCMAlertsGlobal * global;
@property bool isHidden;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) userAcknowledgedAlert;
@property (nonatomic,getter=isAlertVisible) bool alertVisible;
@property (nonatomic) bool shouldPopToHomeScreen;
+ (id)alertShowing;
- (void)initCommon:(id)v1 message:(id)v2;
- (id)initAlertWithTitle:(id)v1 message:(id)v2 cancelButtonTitle:(id)v3;
- (id)initAlertModalWithTitle:(id)v1 message:(id)v2 cancelButtonTitle:(id)v3;
- (id)initAlertModalWithTitle:(id)v1 customView:(id)v2 cancelButtonTitle:(id)v3;
- (id)initErrorAlertModalWithBannerTitleAndGlobalSupportText:(id)v1 errorTitle:(id)v2 descriptionText:(id)v3;
- (id)initErrorAlertModalWithBannerTitle:(id)v1 errorTitle:(id)v2 descriptionText:(id)v3;
- (id)initTransmiterAndSensorExpiredWithTitle:(id)v1 errorTitle:(id)v2 descriptionText:(id)v3;
- (id)initCriticalPermisionAlertModalWithBannerTitle:(id)v1 errorTitle:(id)v2 descriptionText:(id)v3;
- (id)initErrorAlertModalWithBannerForPro;
- (void)addAlertActionWithButtonTitle:(id)v1 buttonPressed:(void (^ /* unknown block signature */)(void))v2;
- (void)showAlert;
- (void)hideAlert;
- (void)reshowAlert;
- (void)dismissAlert;
- (void)modalAlertHelper:(id)v1 cancelButtonTitle:(id)v2;
- (void)errorModalAlertHelper:(id)v1;
- (void)dismissIfNeeded:(void (^ /* unknown block signature */)(void))v1;
- (void)displayAlert;
- (void)dismissAlertHelper;
- (void)processUserAcknowledgement;
- (void)logAlertDisplaying;
- (void)logAlertLeaving;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardHighAlertLimitViewController : DXCMBaseAlertScheduleSetupViewController<CGMAlertLimitChangedDelegate> {
    NSNumber * _selectedAlertLimit;
}
@property (retain,nonatomic) NSNumber * selectedAlertLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (id)defaultHighAlertLimit;
- (id)childAlertScheduleLimitEditViewController;
- (void)updateAlertScheduleData;
- (void)alertLimitChanged:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCarbsEvent : CGMEventBase {
    int _grams;
}
@property int grams;
- (long long)event_type;
- (id)humanReadableValueWithUnits;
- (id)calloutTitle;
- (id)calloutDetails;
- (id)summaryDetailForEvents:(id)v1;
@end


/*****************************************************************/

@interface DPContentEntry : DPBaseObject {
    NSString * _RecordType;
    NSString * _Records;
}
@property (retain) NSString * RecordType;
@property (retain) NSString * Records;
- (void)setRecordsFromArray:(id)v1;
- (id)getArrayFromRecords;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBasePrefs : NSObject
+ (bool)eulaAccepted;
+ (id)sharedDefaults;
+ (void)setCountry:(id)v1;
+ (id)country;
+ (void)setLanguage:(id)v1;
+ (id)language;
+ (void)setShowWarmupCompleted:(bool)v1;
+ (bool)showWarmupCompleted;
+ (void)setShowTransmitterPaired:(bool)v1;
+ (bool)showTransmitterPaired;
+ (void)setDataConsentStatus:(bool)v1;
+ (bool)dataConsentStatus;
+ (void)setInGDPRJurisdiction:(bool)v1;
+ (bool)inGDPRJurisdiction;
+ (void)setSensorCode:(id)v1;
+ (id)sensorCode;
+ (void)setSensorCodeEntryCompleted:(bool)v1;
+ (bool)sensorCodeEntryCompleted;
+ (void)setSensorCodePostSetupWizardPopupDisplayed:(bool)v1;
+ (bool)sensorCodePostSetupWizardPopupDisplayed;
+ (void)setServerNeedsUserAgreedUpdate:(bool)v1;
+ (bool)serverNeedsUserAgreedUpdate;
+ (void)setAppWasTerminated:(id)v1;
+ (id)appWasTerminated;
+ (void)setTransmitterUtcTimeDelta:(long long)v1;
+ (long long)transmitterUtcTimeDelta;
+ (void)setServerUtcTimeDelta:(long long)v1;
+ (long long)serverUtcTimeDelta;
+ (void)setCurrentTxMode:(long long)v1;
+ (long long)currentTxMode;
+ (void)setProductTransitionOccured:(bool)v1;
+ (bool)productTransitionOccured;
+ (void)setProductTourCompleted:(bool)v1;
+ (bool)productTourCompleted;
+ (void)setHasSeenBLEAuthorizationPrompt:(bool)v1;
+ (bool)hasSeenBLEAuthorizationPrompt;
+ (void)setTimeStartedScanning:(long long)v1;
+ (long long)timeStartedScanning;
+ (void)setFirstTimeSensorCompleted:(bool)v1;
+ (bool)firstTimeSensorCompleted;
+ (void)setNeverShowStartSensorHelpPopUp:(bool)v1;
+ (bool)neverShowStartSensorHelpPopUp;
+ (void)setFirstTimeTransmitterCompleted:(bool)v1;
+ (bool)firstTimeTransmitterCompleted;
+ (void)setShareTutorialCompleted:(bool)v1;
+ (bool)shareTutorialCompleted;
+ (void)setShareEnabled:(bool)v1;
+ (bool)shareEnabled;
+ (void)setAlwaysShareEnabled:(bool)v1;
+ (bool)alwaysShareEnabled;
+ (void)setLastShareStatus:(id)v1;
+ (id)lastShareStatus;
+ (void)setLastBleTime:(id)v1;
+ (id)lastBleTime;
+ (void)setOnduoAuthorizationComplete:(bool)v1;
+ (bool)onduoAuthorizationComplete;
+ (id)standardDefaults;
+ (void)setTrendMaxRange:(long long)v1;
+ (long long)trendMaxRange;
+ (void)setResetPasswordId:(id)v1;
+ (id)resetPasswordId;
+ (void)doSomethingToAllPrefKeys:(void (^ /* unknown block signature */)(void))v1 onCompletion:(void (^ /* unknown block signature */)(void))v2;
+ (void)setSplashScreenHasBeenSeen:(bool)v1;
+ (bool)splashScreenHasBeenSeen;
+ (void)setCriticalAlertPermissionEnable:(bool)v1;
+ (bool)hasCriticalAlertPermissionEnable;
+ (id)lastSeenVersionBundleVersionString;
+ (void)setWhatsNewHasBeenSeenForThisVersion;
+ (bool)whatsNewHasBeenSeenForThisVersion;
+ (void)setCalibrationCoachmarkDismissed:(bool)v1;
+ (bool)calibrationCoachmarkDismissed;
+ (void)setHealthkitPermissionsHasBeenSetForThisVersion;
+ (bool)healthkitPermissionsHasBeenSetForThisVersion;
+ (bool)blindedModeEnabled;
+ (void)setBlindedModeEnabled:(bool)v1;
+ (void)setHasWatchedNonAdjunctiveVideo:(bool)v1;
+ (bool)hasWatchedNonAdjunctiveVideo;
+ (void)setHasWatchedSensorInsertionVideo:(bool)v1;
+ (bool)hasWatchedSensorInsertionVideo;
+ (void)setTransmitterIdRegisteredWithServer:(bool)v1;
+ (bool)transmitterIdRegisteredWithServer;
+ (void)setReadSiriExplainView:(bool)v1;
+ (bool)readSiriExplainView;
+ (void)wipeAllPrefs;
@end


/*****************************************************************/

@interface ContactsDetailViewController : DXCMBaseViewController {
    DSAPIContact * contact;
    NSString * oldNameText;
    bool oldTrendSetting;
    NSArray * summaryCells;
    NSMutableArray * urgentLowCells;
    NSMutableArray * lowCells;
    NSMutableArray * highCells;
    NSMutableArray * noDataCells;
    DXCMCGMBaseTextFieldOnlyTableViewCell * nameCell;
    DXCMCGMBaseSwitchTableViewCell * trendEnabledCell;
    DXCMCGMBaseTableViewCell * pauseCell;
    bool shouldShowPauseCell;
    DXCMCGMBaseTableViewCell * deleteCell;
    UIBarButtonItem * backButton;
    UIBarButtonItem * cancelButton;
    UIBarButtonItem * editButton;
    UIBarButtonItem * saveButton;
    bool _isOnlyOneFollower;
    NSString * _contactId;
    UITableView * _tableView;
    UIView * _headerView;
}
@property (nonatomic) bool isOnlyOneFollower;
@property (retain,nonatomic) UIView * headerView;
@property (retain,nonatomic) NSString * contactId;
@property (retain,nonatomic) UITableView * tableView;
- (void)viewDidLoad;
- (void)setupSettingsCells;
- (void)setupUrgentLowCells;
- (void)setupLowCells;
- (void)setupHighCells;
- (void)setupNoDataCells;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setupTitleLabelWithName:(id)v1;
- (id)createViewWithTitle:(id)v1 titleOffsetTop:(double)v2 withAccessibilityId:(id)v3;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)summaryCellWithTitle:(id)v1 andDetailText:(id)v2;
- (void)serverSaveChangesWithStatusHUD:(id)v1 withName:(id)v2 andTrendPermission:(id)v3;
- (void)serverPauseSubscriptionWithStatusHUD:(id)v1;
- (void)serverResumeSubscriptionWithStatusHUD:(id)v1;
- (bool)serverDeleteFollowerWithStatusHUD:(id)v1;
- (void)onEditButton:(id)v1;
- (void)onCancelButton:(id)v1;
- (void)onAllowTrendGraphSwitch:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMErrorHelpViewController : DXCMBaseViewController<DXCMBaseViewControllerDelegate>
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)didReceiveMemoryWarning;
- (void)handleButtonEventsInView;
- (void)baseViewControllerDidFinish:(id)v1;
@end


/*****************************************************************/

@interface DXCMBarcodeParser : NSObject
+ (id)getTransmitterIdFromInput:(id)v1 metadataObjectType:(id)v2;
+ (id)getSensorComponentsFromInput:(id)v1;
@end


/*****************************************************************/

@interface CGMAPIDeviceKeyAPI : DSAPIBaseAPI {
    double _deviceKeyExpirationTime;
    NSString * _serverURL;
}
@property double deviceKeyExpirationTime;
@property (retain) NSString * serverURL;
+ (id)instanceWithAppId:(id)v1;
+ (bool)hasAccessBeenRevoked;
- (id)init;
- (void)setServerToDefault;
- (void)setServer:(id)v1;
- (id)getServer;
- (bool)registerKey;
- (id)getAppSettingsKeyForSignRequestDeviceDictionary;
- (id)getDeviceKey;
- (void)deleteDeviceKey;
- (void)setDeviceKey:(id)v1;
- (double)getDeviceKeyExpirationDate;
- (void)setDeviceKeyExpirationDate;
- (bool)preCheckKeyWithError:(id *)v1;
- (void)preCheckUAMAccess;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCGMBaseTextFieldOnlyTableViewCell : DXCMCGMBaseTableViewCell<UITextFieldDelegate> {
    id _uniqueIdentfier;
    NSObject<DXCMCGMBaseTextFieldOnlyTableViewCellDelegate> * _delegate;
    DXCMBaseTextField * _textField;
}
@property (retain,nonatomic) DXCMBaseTextField * textField;
@property (retain,nonatomic) id uniqueIdentfier;
@property (nonatomic) NSObject<DXCMCGMBaseTextFieldOnlyTableViewCellDelegate> * delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)initCommon:(id)v1 maxLength:(int)v2;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithPlaceholder:(id)v1 maxLength:(int)v2;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (void)textFieldDidChange:(id)v1;
- (void)textFieldDidBeginEditing:(id)v1;
- (void)textFieldDidEndEditing:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ChooserTableViewController : DXCMBaseViewController<UITableViewDataSource,UITableViewDelegate> {
    bool _popVCAfterSelecting;
    void (^ /* unknown block signature */)(void) _onDoneButton;
    NSString * _navBarTitle;
    UITableView * _tableView;
    NSArray * _theItems;
    NSString * _selectedItem;
    void (^ /* unknown block signature */)(void) _onSelect;
}
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSArray * theItems;
@property (retain,nonatomic) NSString * selectedItem;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) onSelect;
@property (nonatomic) bool popVCAfterSelecting;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) onDoneButton;
@property (retain) NSString * navBarTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (id)initWithItems:(id)v1 selectedItem:(id)v2 onSelect:(void (^ /* unknown block signature */)(void))v3;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)done;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCustomAlert : UIView {
    UIView * _contentView;
    UIButton * _allowButton;
    UIButton * _dontAllowButton;
    UIImageView * _crticalAlertsImage;
    UILabel * _titlePermissionLabel;
    UILabel * _descriptionPermissionLabel;
    NSObject<CustomAlertDelegate> * _customAlertDelegate;
}
@property (retain,nonatomic) UIView * contentView;
@property (nonatomic) UIButton * allowButton;
@property (nonatomic) UIButton * dontAllowButton;
@property (nonatomic) UIImageView * crticalAlertsImage;
@property (nonatomic) UILabel * titlePermissionLabel;
@property (nonatomic) UILabel * descriptionPermissionLabel;
@property (retain,nonatomic) NSObject<CustomAlertDelegate> * customAlertDelegate;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)commonInit;
- (void)allowPermissionAction:(id)v1;
- (void)dontAllowPermissionAction:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface Scheduler : NSObject<CGMSubscriberDataSource>
@property bool needsToUploadAlertSettings;
@property bool needsToUploadShareSetting;
@property bool needsToUploadMainSettings;
@property bool needsToUploadDisplayInsulinInfo;
@property bool needsToUploadAlertSchedule;
@property bool needsToUploadProductTxMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (void)doServerStuffIfNeeded;
- (void)uploadSetting:(id)v1;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)onLogout;
- (void)setBool:(bool)v1 originalBool:(bool)v2 key:(id)v3;
@end


/*****************************************************************/

@interface DXCMUtils : NSObject
+ (unsigned int)freeMemory;
+ (unsigned long long)memorySize;
+ (id)appVersion;
+ (id)appBuild;
+ (id)SimpleAlertWithTitle:(id)v1 andMessage:(id)v2 andCloseText:(id)v3;
+ (id)actionSheetWithTitle:(id)v1 message:(id)v2 actions:(id)v3 acknowledgement:(void (^ /* unknown block signature */)(void))v4;
+ (id)alertTextFieldWithTitle:(id)v1 message:(id)v2 placeholder:(id)v3 keyboardType:(long long)v4 delegate:(id)v5 okPressed:(void (^ /* unknown block signature */)(void))v6;
+ (bool)IsValidEmail:(id)v1;
+ (bool)IsValidNumber:(id)v1 betweenMinValue:(double)v2 andMaxValue:(double)v3 decimalPlaces:(long long)v4;
+ (bool)IsSafeFromSQLString:(id)v1;
+ (bool)IsValidUsername:(id)v1;
+ (bool)IsValidPassword:(id)v1;
+ (bool)IsStringEmpty:(id)v1;
+ (void)DXCMAssert:(bool)v1 logMessage:(id)v2 sender:(id)v3;
+ (bool)dxcm_isOperatingSystemAtLeastVersion:(long long)v1 minor:(long long)v2 patch:(long long)v3;
+ (void)dispatchToMainThread:(void (^ /* unknown block signature */)(void))v1;
+ (void)dispatchToNotMainThread:(void (^ /* unknown block signature */)(void))v1;
+ (void)dispatchAfter:(float)v1 block:(void (^ /* unknown block signature */)(void))v2;
+ (void)dispatchAfter:(long long)v1 toNotMainThread:(void (^ /* unknown block signature */)(void))v2;
+ (void)dispatchWithBGTaskNamed:(id)v1 after:(float)v2 block:(void (^ /* unknown block signature */)(void))v3;
+ (id)lighterColorForColor:(id)v1;
+ (id)darkerColorForColor:(id)v1;
+ (bool)isDeviceIn24HourMode;
+ (void)doStuffToSubviewsOfClass:(id)v1 startView:(id)v2 stuff:(void (^ /* unknown block signature */)(void))v3;
+ (void)presentVideoPlayerWithURL:(id)v1 onVC:(id)v2;
+ (int)randomNumberFrom:(int)v1 to:(int)v2;
+ (id)getDeviceName;
+ (bool)doesThisDeviceSupportVibration;
+ (id)findBestViewController:(id)v1;
+ (id)currentViewController;
+ (id)getViewFromXIB:(id)v1 withIdentifier:(id)v2;
+ (void)prepLabelForLocalization:(id)v1;
+ (char)glucoseSineWaveFunction:(int)v1;
+ (char)trendRateSineWaveFunction:(int)v1;
+ (id)shortFormatTimeStringFromMinutes:(int)v1;
+ (id)mediumFormatTimeStringFromMinutes:(int)v1;
+ (id)longFormatTimeStringFromMinutes:(int)v1;
+ (double)getLabelHeight:(id)v1;
+ (id)languageCode;
+ (id)addSeparatorToView:(id)v1 position:(long long)v2 withLeftMargin:(double)v3;
+ (void)displayModalViewWithDescription:(id)v1 navigationTitle:(id)v2 okPressedBlock:(void (^ /* unknown block signature */)(void))v3 viewControllerToPresent:(id)v4;
+ (void)displayModalViewWithDescription:(id)v1 descriptionLabelAccessibilityId:(id)v2 topButton:(id)v3 navigationTitle:(id)v4 okPressedBlock:(void (^ /* unknown block signature */)(void))v5 viewControllerToPresent:(id)v6;
+ (void)displayModalViewWithHyperlinkDescription:(id)v1 withHypelinksDictionary:(id)v2 topButton:(id)v3 navigationTitle:(id)v4 okPressedBlock:(void (^ /* unknown block signature */)(void))v5 viewControllerToPresent:(id)v6 delegate:(id)v7 andDescriptionTextViewAccessibilityId:(id)v8;
+ (void)displayStopSensorModalAlertWithInitialText:(id)v1 stopSensorPressed:(void (^ /* unknown block signature */)(void))v2;
+ (void)displayModalViewWithDescription:(id)v1 descriptionLabelAccessibilityId:(id)v2 navigationTitle:(id)v3 okPressedBlock:(void (^ /* unknown block signature */)(void))v4 viewControllerToPresent:(id)v5;
+ (void)displayStopSensorModalAlert:(id)v1 initialText:(id)v2 stopSensorPressed:(void (^ /* unknown block signature */)(void))v3;
+ (void)presentSensorRemovalWithBanner;
+ (void)presentSensorRemoval;
+ (void)presentAlertSettings;
+ (void)displayServerErrorWithCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (void)displayNoInternetErrorWithCompletion:(void (^ /* unknown block signature */)(void))v1;
+ (void)prepActionSheetForLocalization;
+ (long long)checkTransmitterId:(id)v1;
+ (long long)checkTransmitterId:(id)v1 andTxType:(unsigned char)v2;
+ (unsigned char)txTypeForProduct;
+ (id)productName;
+ (id)productMode;
+ (bool)isWarmUpSessionComplete;
+ (void)setupSafeAreaView:(id)v1;
+ (id)readCurrentEGV;
+ (id)createFaqUrlWithDeviceInfo:(id)v1;
@end


/*****************************************************************/

@interface DEXSoundManager : NSObject<AVAudioPlayerDelegate> {
    bool _monitorMuteSwitch;
    bool _isVolumeOverridden;
    float _masterVolume;
    float _restoreVolume;
    long long _muteSwitchState;
    DEXAlertSound * _currentAlertSound;
    MPVolumeView * _volumeView;
}
@property (retain) DEXAlertSound * currentAlertSound;
@property (nonatomic) float masterVolume;
@property (nonatomic) long long muteSwitchState;
@property (retain,nonatomic) MPVolumeView * volumeView;
@property (nonatomic) bool isVolumeOverridden;
@property (nonatomic) float restoreVolume;
@property (nonatomic) bool monitorMuteSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)resetInstance;
- (void)setupVolumeCapture;
- (void)startVolumeCapture;
- (void)endVolumeCapture;
- (void)observeValueForKeyPath:(id)v1 ofObject:(id)v2 change:(id)v3 context:(void *)v4;
- (void)didBecomeActive;
- (void)setMasterVolume:(float)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (bool)setAudioSessionActive:(bool)v1 withOptions:(unsigned long long)v2;
- (bool)shouldRerouteToSpeakerForPort:(id)v1;
- (id)startAudioSessionOverridingMute:(bool)v1;
- (void)playSoundName:(id)v1 alertName:(id)v2 inCategory:(id)v3 priority:(unsigned long long)v4 overrideMode:(unsigned long long)v5;
- (void)playAlertSound:(id)v1;
- (float)deviceVolume;
- (bool)areHeadphonesConnected;
- (id)portName;
- (void)vibrate;
- (void)undoVolumeOverrideWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)stopPlaySoundWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)audioSessionInterruption:(id)v1;
- (void)audioSessionMediaServicesLostOrReset:(id)v1;
- (void)audioPlayerDidFinishPlaying:(id)v1 successfully:(bool)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardLowAlertLimitViewController : DXCMBaseAlertScheduleSetupViewController<CGMAlertLimitChangedDelegate> {
    NSNumber * _selectedAlertLimit;
}
@property (retain,nonatomic) NSNumber * selectedAlertLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (id)defaultLowAlertLimit;
- (id)childAlertScheduleLimitEditViewController;
- (void)updateAlertScheduleData;
- (void)alertLimitChanged:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMMenuTableViewCell : DXCMBaseTableViewCell {
    UILabel * _titleLabel;
    UIImageView * _menuIcon;
}
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) UIImageView * menuIcon;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface QRCodeTransmitterIDViewController : SetupWizardBaseViewController<AVCaptureMetadataOutputObjectsDelegate> {
    bool _isScanningSensorCode;
    bool _scanning;
    UIView * _livePreviewContainer;
    AVCaptureSession * _captureSession;
    AVCaptureVideoPreviewLayer * _videoPreviewLayer;
    NSTimer * _barcodeScanningTimeout;
    UILabel * _descriptionOne;
    UILabel * _descriptionTwo;
    UIImageView * _barcodeImage;
    UILabel * _titleLabel;
    UIView * _centerContainer;
    UIStackView * _scannerStack;
    UILabel * _instructions;
    unsigned long long _sensorCodeInvalidAttempts;
    DXCMBaseModalViewController * _barcodePhotoErrorModalAlert;
}
@property (retain,nonatomic) UIView * livePreviewContainer;
@property (retain,nonatomic) AVCaptureSession * captureSession;
@property (retain,nonatomic) AVCaptureVideoPreviewLayer * videoPreviewLayer;
@property (retain,nonatomic) NSTimer * barcodeScanningTimeout;
@property bool scanning;
@property (retain,nonatomic) UILabel * descriptionOne;
@property (retain,nonatomic) UILabel * descriptionTwo;
@property (retain,nonatomic) UIImageView * barcodeImage;
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) UIView * centerContainer;
@property (retain,nonatomic) UIStackView * scannerStack;
@property (retain,nonatomic) UILabel * instructions;
@property (readonly,nonatomic) NSArray * supportedMetadataObjectTypes;
@property (nonatomic) unsigned long long sensorCodeInvalidAttempts;
@property (retain,nonatomic) DXCMBaseModalViewController * barcodePhotoErrorModalAlert;
@property (nonatomic) bool isScanningSensorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateContraintsForSize:(struct CGSize)v1;
- (void)viewWillTransitionToSize:(struct CGSize)v1 withTransitionCoordinator:(id)v2;
- (long long)interfaceOrientationToVideoOrientation;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)showUnauthorized;
- (void)viewWillDisappear:(bool)v1;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)startReading;
- (void)stopReading;
- (bool)startReadingHelper;
- (void)focus:(struct CGPoint)v1;
- (void)touchesBegan:(id)v1 withEvent:(id)v2;
- (void)barcodeScanningTimeoutStart;
- (void)barcodeScanningTimeoutStop;
- (void)barcodeScanningTimeoutFired;
- (void)captureOutput:(id)v1 didOutputMetadataObjects:(id)v2 fromConnection:(id)v3;
- (void)processTransmitterId:(id)v1;
- (void)processSensorCodeID:(id)v1;
- (void)showManualEntryScreen;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)displayInvalidBarcodeModalView:(id)v1;
- (void)displayInvalidBarcodeAlert;
- (void)displayBarcodeScanningTimeoutAlert;
- (void)displayBarcodePhotoErrorModalAlert:(unsigned long long)v1;
- (void)setUpDefaultView;
- (void)layoutConstraintsWith:(id)v1 description:(id)v2 barcodeImage:(id)v3 bracketsImageView:(id)v4 patchImageView:(id)v5 noSensorCode:(id)v6;
- (unsigned long long)supportedInterfaceOrientations;
- (void)finishedNoSensorCode;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertSchedule : CGMBaseDataObject<NSSecureCoding> {
    bool _is_default;
    bool _enabled;
    bool _always_sound;
    bool _every_sunday;
    bool _every_monday;
    bool _every_tuesday;
    bool _every_wednesday;
    bool _every_thursday;
    bool _every_friday;
    bool _every_saturday;
    NSString * _name;
    struct timeOfDay _starttime;
    struct timeOfDay _endtime;
    long long _recorded_system_time_sec;
    NSString * _recorded_system_time;
    NSString * _recorded_display_time;
}
@property (nonatomic) long long recorded_system_time_sec;
@property (retain,nonatomic) NSString * recorded_system_time;
@property (retain,nonatomic) NSString * recorded_display_time;
@property (retain,nonatomic) NSString * name;
@property (nonatomic) bool is_default;
@property (nonatomic) bool enabled;
@property (nonatomic) bool always_sound;
@property (nonatomic) bool every_sunday;
@property (nonatomic) bool every_monday;
@property (nonatomic) bool every_tuesday;
@property (nonatomic) bool every_wednesday;
@property (nonatomic) bool every_thursday;
@property (nonatomic) bool every_friday;
@property (nonatomic) bool every_saturday;
@property (nonatomic) struct timeOfDay starttime;
@property (nonatomic) struct timeOfDay endtime;
@property (readonly,nonatomic) int startTimestamp;
@property (readonly,nonatomic) int endTimestamp;
+ (bool)supportsSecureCoding;
- (id)initWithDictionary:(id)v1;
- (id)dictionary;
- (struct timeOfDay)timeOfDay:(int)v1;
- (int)timeStamp:(struct timeOfDay)v1;
- (bool)enabledOnDay:(long long)v1;
- (bool)enabledAtTime:(struct timeOfDay)v1;
- (bool)enabledOnDay:(long long)v1 atTime:(struct timeOfDay)v2;
- (bool)selectedOnDay:(long long)v1;
- (id)scheduledDays;
- (bool)appliesOnAllWeekdays;
- (bool)appliesOnSomeWeekdays;
- (bool)appliesOnWeekends;
- (bool)appliesOnSaturdayOrSunday;
- (bool)appliesOnAllWeekdaysOnly;
- (bool)noDaysSelected;
- (bool)appliesOnAllWeekendsOnly;
- (bool)appliesOnEveryday;
- (id)detailedScheduledDays;
- (id)arrayOfScheduledDays;
- (id)scheduledTime;
- (id)timeString:(struct timeOfDay)v1;
- (void)setSelectedDaysWithDictionary:(id)v1;
- (bool)isAlertScheduleModeNow;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (bool)isEqual:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CriticalAlertsNextExplanationViewController : SetupWizardBaseViewController {
    NSObject<CriticalAlertsNextExplanationViewDelegate> * _pagerNextViewdelegate;
    DXCMBlockButton * _openPhoneSettingsButton;
    DXCMBlockButton * _learnMore;
    UILabel * _contentLabel;
}
@property (retain,nonatomic) DXCMBlockButton * openPhoneSettingsButton;
@property (retain,nonatomic) DXCMBlockButton * learnMore;
@property (retain,nonatomic) UILabel * contentLabel;
@property (retain,nonatomic) NSObject<CriticalAlertsNextExplanationViewDelegate> * pagerNextViewdelegate;
- (void)viewWillAppear:(bool)v1;
- (void)setUpLearnMoreButton;
- (void)setUpNormalNotificationPermissionFlow;
- (void)setupDescription;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBaseShareViewController : DXCMBaseViewController
+ (void)updateNavigationStack:(id)v1 withDestinationViewController:(id)v2;
- (void)viewDidLoad;
- (void)addLayoutConstraintsWithOkButton:(id)v1;
@end


/*****************************************************************/

@interface CGMEGV : CGMBaseDataObject {
    char _trend_rate;
    unsigned int _recorded_system_time_sec;
    unsigned int _transmitter_time_stamp;
    unsigned int _transmitter_system_time_sec;
    unsigned int _transmitter_sessionstarttime;
    unsigned int _transmitter_sessionoffset;
    unsigned int _seq_num;
    unsigned int _glucose_value;
    unsigned int _glucose_value_flags;
    unsigned int _glucose_value_prediction;
    unsigned long long _record_id;
    NSString * _guid;
    NSString * _recorded_system_time;
    NSString * _recorded_display_time;
    NSString * _transmitter_system_time;
    NSString * _transmitter_display_time;
    NSString * _transmitter_id;
    NSString * _trend_arrow;
    NSString * _alg_state;
    NSString * _noise_mode;
    NSString * _is_immediate_match;
    NSString * _is_display_only;
    NSString * _was_backfilled;
}
@property (nonatomic) unsigned long long record_id;
@property (retain,nonatomic) NSString * guid;
@property (nonatomic) unsigned int recorded_system_time_sec;
@property (copy,nonatomic) NSString * recorded_system_time;
@property (copy,nonatomic) NSString * recorded_display_time;
@property (nonatomic) unsigned int transmitter_time_stamp;
@property (nonatomic) unsigned int transmitter_system_time_sec;
@property (copy,nonatomic) NSString * transmitter_system_time;
@property (copy,nonatomic) NSString * transmitter_display_time;
@property (copy,nonatomic) NSString * transmitter_id;
@property (nonatomic) unsigned int transmitter_sessionstarttime;
@property (nonatomic) unsigned int transmitter_sessionoffset;
@property (nonatomic) unsigned int seq_num;
@property (nonatomic) unsigned int glucose_value;
@property (nonatomic) unsigned int glucose_value_flags;
@property (nonatomic) unsigned int glucose_value_prediction;
@property (copy,nonatomic) NSString * trend_arrow;
@property (nonatomic) char trend_rate;
@property (copy,nonatomic) NSString * alg_state;
@property (copy,nonatomic) NSString * noise_mode;
@property (copy,nonatomic) NSString * is_immediate_match;
@property (copy,nonatomic) NSString * is_display_only;
@property (copy,nonatomic) NSString * was_backfilled;
@property (readonly,nonatomic) bool isValid;
@property (readonly,nonatomic) bool isCurrent;
@property (readonly,nonatomic) bool isPredictionValid;
@property (readonly,nonatomic) bool isUrgentLow;
@property (readonly,nonatomic) bool isHigh;
@property (readonly,nonatomic) bool isLow;
@property (readonly,nonatomic) bool isUrgentLowSoon;
@property (readonly,nonatomic) bool inCalBounds;
@property (readonly,nonatomic) long long trendArrow;
@property (readonly,nonatomic) bool isNoReadings;
- (id)description;
- (int)unixTimeForGraphing;
- (void)setUnixTimeForGraphing:(int)v1;
- (bool)isBGGenerated;
- (bool)isDisplayOnly;
- (bool)isPropertyNameInvalid:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMHealthEvent : CGMEventBase
+ (id)localNameForHealthEvent:(long long)v1;
+ (id)localNameForHealthEventEnglish:(long long)v1;
- (long long)event_type;
- (id)dataPostSubType;
- (id)calloutTitle;
- (id)calloutDetails;
- (id)summaryTitleForEvents:(id)v1;
@end


/*****************************************************************/

@interface ContactWizardData : NSObject {
    bool _urgentLowNotificationEnabled;
    bool _lowNotificationEnabled;
    bool _highNotificationEnabled;
    bool _noDataNotificationEnabled;
    bool _trendGraphEnabled;
    int _urgentLowThresholdValue;
    int _lowThresholdValue;
    int _lowDelayValue;
    int _highThresholdValue;
    int _highDelayValue;
    int _noDataDelayValue;
    NSString * _nickname;
    NSString * _email;
}
@property bool urgentLowNotificationEnabled;
@property int urgentLowThresholdValue;
@property bool lowNotificationEnabled;
@property int lowThresholdValue;
@property int lowDelayValue;
@property bool highNotificationEnabled;
@property int highThresholdValue;
@property int highDelayValue;
@property bool noDataNotificationEnabled;
@property int noDataDelayValue;
@property bool trendGraphEnabled;
@property (retain) NSString * nickname;
@property (retain) NSString * email;
+ (id)sharedData;
+ (id)sharedInstance;
- (id)init;
- (void)reset;
- (bool)getEnabledForAlertType:(id)v1;
- (void)setEnabled:(bool)v1 forAlertType:(id)v2;
- (void)setThreshold:(int)v1 forAlertType:(id)v2;
- (void)setDelay:(int)v1 forAlertType:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ReplaceSensorAlertView : UIView {
    void (^ /* unknown block signature */)(void) _sensorRemovalPressed;
    void (^ /* unknown block signature */)(void) _sensorInsertionPressed;
}
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) sensorRemovalPressed;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) sensorInsertionPressed;
- (void)initCommon:(id)v1;
- (id)initWithDescription:(id)v1;
- (id)createButtonWithTitle:(id)v1 accessibilityIdentifier:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface UrgentLowAlarm : SetupWizardBaseViewController {
    UIImageView * _lowAlertImageView;
}
@property (retain,nonatomic) UIImageView * lowAlertImageView;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMAlertScheduleTimeTableViewCell : UITableViewCell {
    NSString * _title;
    NSString * _titleAccessibilityId;
    NSString * _detail;
    NSString * _detailAccessibilityId;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) UILabel * valueLabel;
@property (retain,nonatomic) NSString * title;
@property (retain,nonatomic) NSString * titleAccessibilityId;
@property (retain,nonatomic) NSString * detail;
@property (retain,nonatomic) NSString * detailAccessibilityId;
- (id)init;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)initCommon;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPIExceptionTypeNamesArray : NSObject
+ (void)init;
+ (int)toExceptionType:(id)v1;
+ (id)desc:(id)v1;
@end


/*****************************************************************/

@interface DSAPIException : NSException {
    int _codeEnum;
    long long _httpResponseCode;
}
@property int codeEnum;
@property long long httpResponseCode;
+ (id)exception:(id)v1 httpResponseCode:(long long)v2 message:(id)v3;
+ (id)exception:(id)v1 message:(id)v2;
- (id)initWithReason:(id)v1 reason:(id)v2 httpResponse:(long long)v3 userInfo:(id)v4;
- (id)description;
@end


/*****************************************************************/

@interface DCGMControlPointCharacteristic : DXCMBluetoothCharacteristic {
    unsigned char _genericReplyOpCode;
    unsigned char _transmitterStatusCode;
    bool _pendingResponse;
    NSCondition * _responseCondition;
}
@property bool pendingResponse;
@property (retain) NSCondition * responseCondition;
@property (readonly) unsigned char genericReplyOpCode;
@property (readonly) unsigned char transmitterStatusCode;
- (id)initWithName:(id)v1 pUUID:(id)v2 pPeripheral:(id)v3 pGenericReplyOpCode:(unsigned char)v4;
- (id)writeCmdWithReply:(unsigned char)v1 data:(id)v2;
- (id)writeCmdWithReplyWithTimeout:(unsigned char)v1 data:(id)v2 timeout:(double)v3;
- (id)writeCmdWithReply:(unsigned char)v1 replyOpCode:(unsigned char)v2 data:(id)v3 timeout:(double)v4;
- (id)writeCmdWithReply:(unsigned char)v1 replyOpCode:(unsigned char)v2 data:(id)v3 timeout:(double)v4 ignoreFailures:(bool)v5;
- (bool)writeCmd:(unsigned char)v1 replyOpCode:(unsigned char)v2 data:(id)v3;
- (bool)writeCmd:(unsigned char)v1 replyOpCode:(unsigned char)v2 data:(id)v3 timeout:(double)v4;
- (bool)writeCmdWithDelay:(unsigned char)v1 data:(id)v2 delay:(double)v3;
- (void)doUpdateValue:(id)v1;
- (bool)processGenericResponse:(unsigned char)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMBondedDevicesDao : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)eraseData;
- (id)getBondedDevices;
- (void)addBondedDevice:(id)v1;
- (void)updateBondedDevice:(id)v1;
- (void)deleteBondedDevice:(id)v1;
- (void)addBondedDeviceWithName:(id)v1 withID:(id)v2 withBondedUuid:(id)v3 withBonded:(bool)v4;
- (void)updateBondedDeviceWithName:(id)v1 withID:(id)v2 withBondedUuid:(id)v3 withBonded:(bool)v4 withRecordID:(unsigned long long)v5;
@end


/*****************************************************************/

@interface CGMSoundButton : UIButton {
    long long _soundState;
}
@property (nonatomic) long long soundState;
@property (readonly,nonatomic) NSString * helperText;
+ (id)buttonWithType:(long long)v1;
@end


/*****************************************************************/

@interface DSAPISubscription : NSObject {
    NSString * _ContactId;
    NSString * _ContactName;
    NSString * _DisplayName;
    NSNumber * _IsEnabled;
    NSNumber * _Permission;
    NSString * _PublisherAccountId;
    NSNumber * _State;
    NSString * _SubscriberId;
    NSString * _SubscriptionId;
    NSDictionary * _contactInfo;
    DSAPIAlerts * _alertSettings;
    NSNumber * _IsMonitoringSessionActive;
}
@property (retain,nonatomic) NSString * ContactId;
@property (retain,nonatomic) NSString * ContactName;
@property (retain,nonatomic) NSString * DisplayName;
@property (retain,nonatomic) NSNumber * IsEnabled;
@property (retain,nonatomic) NSNumber * IsMonitoringSessionActive;
@property (retain,nonatomic) NSNumber * Permission;
@property (retain,nonatomic) NSString * PublisherAccountId;
@property (retain,nonatomic) NSNumber * State;
@property (retain,nonatomic) NSString * SubscriberId;
@property (retain,nonatomic) NSString * SubscriptionId;
@property (retain,nonatomic) NSDictionary * contactInfo;
@property (retain,nonatomic) DSAPIAlerts * alertSettings;
- (id)initWithDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMTransmitterCmdQueueDao : CGMBaseDao
- (void)queueCmd:(id)v1 params:(id)v2;
- (bool)queueIsStartStopPending;
- (bool)queueIsStartPending;
- (bool)queueIsCalibrationPending;
- (id)queueGetPendingStartStopList;
- (id)queueGetPendingCalibrationList;
- (id)getLatestPendingCalibration;
- (void)queueMarkCommandProcessed:(id)v1 result:(id)v2;
- (bool)queueCmdsPending;
- (id)queueUnprocessedCmdsList;
- (id)dictionaryFromJSON:(id)v1;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (id)getCmdQueueRecordDictsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)eraseData;
@end


/*****************************************************************/

@interface CGMCalibrationHelpTexts : UIView {
    UITextView * _calibrationHelpTextView;
}
@property (retain,nonatomic) UITextView * calibrationHelpTextView;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCGMBaseCheckmarkTableViewCell : UITableViewCell {
    NSString * _title;
    UILabel * _titleLabel;
}
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) NSString * title;
@property (nonatomic) bool cellChecked;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)initCommon;
- (void)toggleCheckmark;
- (id)myController;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void)addCommonIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPIBaseAPI : NSObject {
    bool _disableServerComms;
    bool _disableInternet;
    NSDictionary * _mDataDictionary;
    NSString * _appId;
}
@property (retain,nonatomic) NSDictionary * mDataDictionary;
@property (retain,nonatomic) NSString * appId;
@property bool disableServerComms;
@property bool disableInternet;
- (id)sendRequest:(id)v1 urlString:(id)v2 bodyData:(id)v3;
- (void)checkInternet;
- (id)encodeParamURL:(id)v1;
- (void)postServerCall:(id)v1 withPayload:(id)v2 withCompletionBlock:(void (^ /* unknown block signature */)(void))v3;
- (void)postServerCall:(id)v1 withPayload:(id)v2 withCompletionBlock:(void (^ /* unknown block signature */)(void))v3 withExceptionBlock:(void (^ /* unknown block signature */)(void))v4;
- (id)signRequest:(id)v1 withKey:(id)v2 withEncryption:(bool)v3;
- (id)generateSignedRequest:(id)v1 withPayload:(id)v2 withDeviceKey:(id)v3 withEncryption:(bool)v4;
- (id)generateSecret:(id)v1 withDeviceKey:(id)v2;
- (id)randomlyGenerate16Bytes;
- (bool)patientIdExists;
- (id)toJSONString:(id)v1;
- (id)toJSON:(id)v1;
- (id)stringFromJSON:(id)v1;
- (id)patchedStringFromJSON:(id)v1;
- (id)dictionaryFromJSON:(id)v1;
- (id)dictionaryFromJSONString:(id)v1;
- (id)arrayFromJSON:(id)v1;
- (id)arrayFromJSONString:(id)v1;
- (void)checkBackdoorFlags;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCSAlertViewController : DXCMBaseViewController {
    NSDictionary * _alertDict;
    UILabel * _titleLabel;
    UIView * _titleLabelSuperview;
    UIView * _safeAreaView;
    UITextView * _userMessageTextView;
    NSArray * _buttonsToShow;
}
@property (nonatomic) UIView * titleLabelSuperview;
@property (nonatomic) UIView * safeAreaView;
@property (retain,nonatomic) UITextView * userMessageTextView;
@property (retain,nonatomic) NSArray * buttonsToShow;
@property (retain,nonatomic) NSDictionary * alertDict;
@property (retain,nonatomic) UILabel * titleLabel;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)updateViewFromDict;
- (bool)shouldAutorotate;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPBundleBuilder : NSObject {
    bool _shouldGzip;
    NSObject<DPPublicDataSourceProtocol> * _publicDataDataSource;
}
@property (nonatomic) bool shouldGzip;
@property (retain,nonatomic) NSObject<DPPublicDataSourceProtocol> * publicDataDataSource;
+ (id)sharedInstance;
+ (id)removeUniqueKeysFromArrayOfDictionaries:(id)v1;
- (id)init;
- (id)getDataPostsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getDataPostBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getPostHeader:(id)v1 sequenceNumber:(int)v2;
- (id)getDataManifestFromDataContent:(id)v1;
- (id)getPublicDataContentForDataBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getManifestEntryFromContentEntry:(id)v1;
- (id)getContentEntryForGlucoseDataBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)CreateGlucoseRecordFromCGMEGV:(id)v1;
- (id)getTrendRateStatusFromEGV:(id)v1;
- (bool)wasEGVDuringWarmup:(id)v1;
- (bool)wasEGVOutOfCal:(id)v1;
- (bool)wasEGVInSensorNoise:(id)v1;
- (id)getContentEntryForMeterDataBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getContentEntryForSensorSessionsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)transformLogType:(id)v1;
- (id)getContentEntryForUserEventsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)unitsTypeStringFromEvent:(id)v1;
- (id)systemTimeFromDisplayTime:(id)v1;
- (id)getContentEntryForWorkoutEventsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getContentEntryForAlertSchedule;
- (id)createAlertScheduleInfo;
- (id)getContentEntryForDeviceInfo;
- (id)createDeviceInfo;
- (id)getContentEntryForInventoryLog;
- (id)getContentEntryForNutritionInfoBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)generateUniqueIdForEvent:(id)v1;
- (id)getContentEntryForAlertStatusInfoBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getPrivateDataContentForDataBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getContentEntryForCrashLogsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getContentEntryForErrorLogsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getErrorLogsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getContentEntryForUserActivitiesBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getContentEntryForDiagnosticDataBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (void)deleteDataBeforeTime:(int)v1;
- (void)deletePrivateDataBeforeTime:(int)v1;
- (void)deleteCrashLogsBeforeTime:(int)v1;
- (void)deleteUserActivityLogsBeforeTime:(int)v1;
- (void)deleteDebugLogsBeforeTime:(int)v1;
- (bool)doWeNeedToCreateNewBundle;
- (bool)doWeNeedToUploadRecords:(id)v1;
- (bool)hasEnoughTimePassedForRecordsEntry:(id)v1;
- (bool)hasRecordsEntryChanged:(id)v1;
- (id)removeTimestampFromArrayOfDictionaries:(id)v1;
- (int)bundleIntervalForRecordType:(id)v1;
- (id)UTCTimeFromUnixTime:(int)v1;
- (id)LocalTimeFromUnixTime:(int)v1;
- (int)UnixTimeFromUTCDateTime:(id)v1;
- (id)CreateContainerForObject:(id)v1 patientId:(id)v2 shouldGZip:(bool)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEventManagerViewController : DXCMBaseViewController {
    CGMEventBase * _event;
    UIBarButtonItem * _addButton;
    UIBarButtonItem * _cancelButton;
    NSObject<CGMEventManagerViewDelegate> * _eventDelegate;
}
@property (retain,nonatomic) CGMEventBase * event;
@property (nonatomic) UIBarButtonItem * addButton;
@property (nonatomic) UIBarButtonItem * cancelButton;
@property (nonatomic) NSObject<CGMEventManagerViewDelegate> * eventDelegate;
- (void)viewDidLoad;
- (bool)isValidData;
- (id)titleForAddEventConfirmation;
- (id)messageForAddEventConfirmation;
- (void)willCancelAction;
- (void)onAdd:(id)v1;
- (void)onCancel:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPIAlerts : NSObject {
    DSAPIAlert * _urgentLowAlert;
    DSAPIAlert * _lowAlert;
    DSAPIAlert * _highAlert;
    DSAPIAlert * _nodataAlert;
}
@property (retain,nonatomic) DSAPIAlert * urgentLowAlert;
@property (retain,nonatomic) DSAPIAlert * lowAlert;
@property (retain,nonatomic) DSAPIAlert * highAlert;
@property (retain,nonatomic) DSAPIAlert * nodataAlert;
- (id)initWithDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface AlertPopupModel : NSObject<NSCoding> {
    unsigned long long _alertType;
    NSString * _alertDescriptionString;
    NSString * _alertTitleString;
}
@property (nonatomic) unsigned long long alertType;
@property (retain,nonatomic) NSString * alertDescriptionString;
@property (retain,nonatomic) NSString * alertTitleString;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardEndTimeViewController : DXCMBaseAlertScheduleSetupViewController {
    UILabel * _descriptionLabel;
    UIDatePicker * _endTimePicker;
}
@property (nonatomic) UILabel * descriptionLabel;
@property (nonatomic) UIDatePicker * endTimePicker;
- (void)viewDidLoad;
- (void)updateAlertScheduleData;
- (void)endTimePickerValueChanged:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMShareEGVDao : CGMBaseDao {
    CGMEGV * _current;
}
@property (readonly,copy,nonatomic,getter=getCurrentEgvRecord) CGMEGV * current;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)eraseData;
- (void)insertEGV:(id)v1;
- (int)countUnuploadedEGVs;
- (id)getUnuploadedEGVs;
- (void)deleteEGVsBeforeTime:(int)v1;
- (void)deleteEGVsAfterTime:(int)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPIAlert : CGMBaseDataObject {
    NSString * _AlarmDelay;
    NSString * _AlertId;
    NSNumber * _AlertType;
    NSNumber * _IsEnabled;
    NSNumber * _MaxValue;
    NSNumber * _MinValue;
    NSString * _RealarmDelay;
    NSString * _Sound;
}
@property (retain,nonatomic) NSString * AlarmDelay;
@property (retain,nonatomic) NSString * AlertId;
@property (retain,nonatomic) NSNumber * AlertType;
@property (retain,nonatomic) NSNumber * IsEnabled;
@property (retain,nonatomic) NSNumber * MaxValue;
@property (retain,nonatomic) NSNumber * MinValue;
@property (retain,nonatomic) NSString * RealarmDelay;
@property (retain,nonatomic) NSString * Sound;
- (id)initWithDictionary:(id)v1;
- (unsigned long long)alarmDelay;
- (void)setAlarmDelayString:(id)v1;
- (unsigned long long)realarmDelay;
- (id)realarmDelayString;
- (void)setRealarmDelayString:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMContactsDao : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)eraseData;
- (id)getAllContactIds;
- (id)getAllContactIdsForState:(unsigned long long)v1;
- (void)addContact:(id)v1;
- (void)updateContact:(id)v1 contact:(id)v2;
- (void)deleteContact:(id)v1;
- (id)getContact:(id)v1;
- (id)getAllContacts;
- (void)updateContactName:(id)v1 name:(id)v2;
- (void)updateContactEmail:(id)v1 email:(id)v2;
- (id)getEnableColumnName:(id)v1;
- (bool)getContactNotificationPermission:(id)v1 type:(id)v2;
- (id)getContactName:(id)v1;
- (id)getContactSubscriptionId:(id)v1;
- (id)getContactIDFromName:(id)v1;
- (id)getContactIDFromSubscriptionID:(id)v1;
- (void)updateContactsWithSubscriptions:(id)v1;
- (id)getLocalContactFromServerContact:(id)v1;
@end


/*****************************************************************/

@interface DPUserActivityRecord : DPBaseRecord {
    NSString * _UserActivityType;
    NSString * _UserActivitySubType;
    NSString * _Data;
}
@property (retain) NSString * UserActivityType;
@property (retain) NSString * UserActivitySubType;
@property (retain) NSString * Data;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSiriActiveActionsViewController : DXCMBaseViewController<INUIAddVoiceShortcutViewControllerDelegate,INUIEditVoiceShortcutViewControllerDelegate,UITableViewDelegate,UITableViewDataSource> {
    bool _needsReload;
    bool _hasActivePhrase;
    UITableView * _tableView;
    NSArray * _voiceShortcuts;
}
@property (nonatomic) UITableView * tableView;
@property (nonatomic) bool needsReload;
@property (nonatomic) bool hasActivePhrase;
@property (retain,nonatomic) NSArray * voiceShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)initDataSource;
- (void)setupTableView;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)updateTable;
- (void)updateData;
- (void)addVoiceShortcutViewController:(id)v1 didFinishWithVoiceShortcut:(id)v2 error:(id)v3;
- (void)addVoiceShortcutViewControllerDidCancel:(id)v1;
- (void)editVoiceShortcutViewController:(id)v1 didUpdateVoiceShortcut:(id)v2 error:(id)v3;
- (void)editVoiceShortcutViewController:(id)v1 didDeleteVoiceShortcutWithIdentifier:(id)v2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMDDTTYLogger : DDTTYLogger
- (void)logMessage:(id)v1;
@end


/*****************************************************************/

@interface DEXSounds : NSObject
+ (void)initialize;
+ (id)sharedInstance;
- (id)getLocalizedStringFromSound:(id)v1;
- (id)getAccessibilityIdForSound:(id)v1;
- (id)getAllSoundCategoryNames;
- (id)getAllSoundDisplayNamesForCategory:(id)v1;
- (id)getAllSoundFileNamesForCategory:(id)v1;
- (id)getFileNameForSoundDisplayName:(id)v1 category:(id)v2;
- (id)getSoundDisplayNameForFileName:(id)v1 category:(id)v2;
- (bool)checkIfSoundNameExists:(id)v1 category:(id)v2;
@end


/*****************************************************************/

@interface CGMSampleMealDao : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (bool)hasMealWithMealEvent:(id)v1;
- (void)resetDataModel;
- (void)deleteMealWithUUID:(id)v1;
- (id)fetchMealWithID:(id)v1;
- (id)fetchCarbsEventAfterStartTimeStamp:(double)v1;
- (id)fetchMealsDictionaryAfterStartTimeStamp:(double)v1 isDeleted:(bool)v2;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (long long)insertMealData:(id)v1;
@end


/*****************************************************************/

@interface CGMHKMealEvent : CGMHealthkitEventBase {
    NSString * _sample_meal_type;
    NSString * _sample_food_type;
    NSString * _event_carbs_uuid;
    double _event_carbs_value;
    NSString * _event_fat_uuid;
    double _event_fat_value;
    NSString * _event_sugar_uuid;
    double _event_sugar_value;
    NSString * _event_protein_uuid;
    double _event_protein_value;
    NSString * _event_calories_uuid;
    double _event_calories_value;
    NSString * _event_fiber_uuid;
    double _event_fiber_value;
}
@property (retain,nonatomic) NSString * sample_meal_type;
@property (retain,nonatomic) NSString * sample_food_type;
@property (retain,nonatomic) NSString * event_carbs_uuid;
@property double event_carbs_value;
@property (retain,nonatomic) NSString * event_fat_uuid;
@property double event_fat_value;
@property (retain,nonatomic) NSString * event_sugar_uuid;
@property double event_sugar_value;
@property (retain,nonatomic) NSString * event_protein_uuid;
@property double event_protein_value;
@property (retain,nonatomic) NSString * event_calories_uuid;
@property double event_calories_value;
@property (retain,nonatomic) NSString * event_fiber_uuid;
@property double event_fiber_value;
- (id)initWithDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEventDurationPickerTableViewCell : DXCMBaseTableViewCell<UIPickerViewDataSource,UIPickerViewDelegate> {
    NSObject<CGMEventDurationPickerTableViewCellDelegate> * _delegate;
    unsigned long long _hours;
    unsigned long long _minutes;
    UIPickerView * _durationPicker;
}
@property (nonatomic) unsigned long long hours;
@property (nonatomic) unsigned long long minutes;
@property (nonatomic) NSObject<CGMEventDurationPickerTableViewCellDelegate> * delegate;
@property (retain,nonatomic) UIPickerView * durationPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)reuseIdentifier;
- (void)awakeFromNib;
- (void)setSelected:(bool)v1 animated:(bool)v2;
- (void)setDurationWithHours:(unsigned long long)v1 minutes:(unsigned long long)v2 animated:(bool)v3;
- (long long)numberOfComponentsInPickerView:(id)v1;
- (long long)pickerView:(id)v1 numberOfRowsInComponent:(long long)v2;
- (id)pickerView:(id)v1 titleForRow:(long long)v2 forComponent:(long long)v3;
- (double)pickerView:(id)v1 widthForComponent:(long long)v2;
- (void)pickerView:(id)v1 didSelectRow:(long long)v2 inComponent:(long long)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPInventoryRecord : DPBaseRecord {
    NSString * _RecordVersion;
    NSString * _RecordId;
    NSString * _RecordedTime;
    NSString * _TransmitterId;
    NSString * _TransmitterVersion;
    NSString * _TransmitterSW;
    NSNumber * _TransmitterTicks;
    NSString * _HostSW;
    NSString * _HostVersion;
    NSString * _HostDeviceModel;
    NSString * _HostOSVersion;
    NSArray * _Accessories;
}
@property (retain,nonatomic) NSString * RecordVersion;
@property (retain,nonatomic) NSString * RecordId;
@property (retain,nonatomic) NSString * RecordedTime;
@property (retain,nonatomic) NSString * TransmitterId;
@property (retain,nonatomic) NSString * TransmitterVersion;
@property (retain,nonatomic) NSString * TransmitterSW;
@property (retain,nonatomic) NSNumber * TransmitterTicks;
@property (retain,nonatomic) NSString * HostSW;
@property (retain,nonatomic) NSString * HostVersion;
@property (retain,nonatomic) NSString * HostDeviceModel;
@property (retain,nonatomic) NSString * HostOSVersion;
@property (retain,nonatomic) NSArray * Accessories;
- (id)init;
- (id)getAccessoryArray;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMProgressHUD : MBProgressHUD {
    double _dismissDelay;
}
@property (nonatomic) double dismissDelay;
@end


/*****************************************************************/

@interface ShareLetsGetStartedViewController : DXCMBaseShareViewController {
    UILabel * _shareWelcomeLabel;
}
@property (nonatomic) UILabel * shareWelcomeLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)showDataConsentScreensIfNeeded:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBaseAlertScheduleSetupViewController : DXCMBaseViewController {
    bool _isFirstWizardStep;
    bool _isLastWizardStep;
    bool _isDataValid;
    NSString * _screenTitle;
    NSString * _shortTitle;
    NSMutableDictionary * _alertScheduleData;
}
@property (retain,nonatomic) NSString * screenTitle;
@property (retain,nonatomic) NSString * shortTitle;
@property (retain,nonatomic) NSMutableDictionary * alertScheduleData;
@property (nonatomic) bool isFirstWizardStep;
@property (nonatomic) bool isLastWizardStep;
@property (nonatomic) bool isDataValid;
- (void)viewDidLoad;
- (void)showNextStep;
- (void)cancelSetupWizard;
- (void)completeSetupWizard;
- (void)createAlertSchedule;
- (void)backButtonClicked;
- (void)updateAlertScheduleData;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)setupAlertScheduleDataDictionary:(id)v1;
- (id)alertSchedule;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface OnduoHelper : NSObject
+ (bool)isCompanionAppInstalled;
+ (id)authorizeUrl;
@end


/*****************************************************************/

@interface ShareStatusCell : DXCMCGMBaseTableViewCell {
    bool _phoneStatus;
    bool _internetStatus;
    bool _cloudStatus;
    UIImageView * _phoneCircle;
    UIImageView * _cloudCircle;
    UIImageView * _internetBar;
    DXCMBlockButton * _helpButton;
}
@property (retain,nonatomic) UIImageView * phoneCircle;
@property (retain,nonatomic) UIImageView * cloudCircle;
@property (retain,nonatomic) UIImageView * internetBar;
@property (retain,nonatomic) DXCMBlockButton * helpButton;
@property (nonatomic) bool phoneStatus;
@property (nonatomic) bool internetStatus;
@property (nonatomic) bool cloudStatus;
- (void)updateHelpButtonVisibilty;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMModeofContactViewController : DXCMBaseViewController<UITableViewDataSource,UITableViewDelegate> {
    NSMutableArray * section1Cells;
    UITableView * _tableView;
    long long _supportType;
}
@property (retain,nonatomic) UITableView * tableView;
@property (nonatomic) long long supportType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)close:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDiagnosticData : CGMBaseDataObject {
    unsigned char _type_id;
    unsigned int _recorded_system_time_sec;
    unsigned int _start_time;
    unsigned int _end_time;
    unsigned long long _record_id;
    NSString * _transmitter_id;
    NSData * _data;
}
@property (readonly,nonatomic) unsigned long long record_id;
@property (nonatomic) unsigned char type_id;
@property (readonly,nonatomic) NSString * type_string;
@property (retain,nonatomic) NSString * transmitter_id;
@property (nonatomic) unsigned int recorded_system_time_sec;
@property (readonly,nonatomic) NSString * recorded_system_time;
@property (readonly,nonatomic) NSString * recorded_system_time_native;
@property (nonatomic) unsigned int start_time;
@property (nonatomic) unsigned int end_time;
@property (retain,nonatomic) NSData * data;
- (id)description;
- (bool)isPropertyNameInvalid:(id)v1;
- (id)dictionary;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDiagnosticDataDao : CGMBaseDao
- (unsigned long long)insertDiagnosticData:(id)v1;
- (id)getRecordsWithTransmitterId:(id)v1;
- (id)getRecordsWithType:(unsigned char)v1;
- (id)getRecordsWithType:(unsigned char)v1 betweenStartTime:(unsigned int)v2 andEndTime:(unsigned int)v3;
- (id)getAllRecords;
- (bool)hasRecordsWithType:(unsigned char)v1 andTransmitterId:(id)v2;
- (void)deleteRecordsWithIds:(id)v1;
- (void)purgeDataWithType:(unsigned char)v1 olderThan:(unsigned int)v2;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)wipeAllData;
@end


/*****************************************************************/

@interface CGMAboutViewController : DXCMBaseViewController<UITableViewDataSource,UITableViewDelegate> {
    NSMutableArray * section1Cells;
    UITableView * _tableView;
}
@property (retain,nonatomic) UITableView * tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCGMBaseTableViewCell : UITableViewCell {
    bool _showDisclosureIndicator;
    bool _showLeftImageView;
    long long _dxcmCellStyle;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
    UIImageView * _iconView;
}
@property (retain,nonatomic) UIImageView * iconView;
@property (retain,nonatomic) UILabel * titleLabel;
@property (retain,nonatomic) UILabel * valueLabel;
@property (retain,nonatomic) UIImage * icon;
@property (retain,nonatomic) NSString * title;
@property (retain,nonatomic) NSString * value;
@property (nonatomic) bool showDisclosureIndicator;
@property (nonatomic) bool showLeftImageView;
@property (nonatomic) long long dxcmCellStyle;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)initCommon;
- (void)updateConstraints;
- (void)cellTapped:(id)v1;
- (id)myController;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void)addCommonIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMHelpText : NSObject
+ (id)transmitterPairingText;
+ (id)oobeTransmitterPairingText;
+ (id)noReadingsHelpText;
+ (id)transmitterPairingRangeHelpText;
@end


/*****************************************************************/

@interface CGMAlertScheduleDao : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)insertAlertSchedule:(id)v1;
- (void)modifyAlertSchedule:(id)v1;
- (id)defaultAlertSchedule;
- (id)customAlertSchedule;
- (id)getAllAlertSchedules;
- (void)alertScheduleEnabled:(bool)v1 isDefault:(bool)v2;
- (void)alertScheduleAlwaysSoundEnabled:(bool)v1 isDefault:(bool)v2;
- (void)deleteCustomAlertSchedule;
- (int)latestRecordedUpdateTimeSeconds;
@end


/*****************************************************************/

@interface DXCMKeychain : NSObject {
    NSObject<OS_dispatch_queue> * _keychainDispatchQueue;
    FXKeychain * _appKeychain;
    FXKeychain * _sharedKeychain;
    NSString * _cachedDbKey;
}
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * keychainDispatchQueue;
@property (retain,nonatomic) FXKeychain * appKeychain;
@property (retain,nonatomic) FXKeychain * sharedKeychain;
@property (retain,nonatomic) NSString * cachedDbKey;
+ (id)shared;
+ (id)username;
+ (void)setUsername:(id)v1;
+ (id)databaseKey;
+ (void)setDatabaseKey:(id)v1;
+ (id)refreshToken;
+ (void)setRefreshToken:(id)v1;
+ (void)onResetToOOBE;
- (bool)isUnitTest;
- (id)init;
- (id)bundleIdentifier;
- (id)getItemFromAppKeychainForKey:(id)v1;
- (id)getItemFromSharedKeychainForKey:(id)v1;
- (id)getItemFromKeychain:(id)v1 forKey:(id)v2;
- (bool)setItemInAppKeychainForItem:(id)v1 forKey:(id)v2;
- (bool)setItemInSharedKeychainForItem:(id)v1 forKey:(id)v2;
- (bool)setItem:(id)v1 forKeychain:(id)v2 forKey:(id)v3;
- (bool)deleteItemFromAppKeychainForKey:(id)v1;
- (bool)deleteItemFromSharedKeychainForKey:(id)v1;
- (bool)deleteItemFromKeychain:(id)v1 forKey:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMLog : DDLog
+ (void)verbose:(id)v1;
+ (void)error:(id)v1;
+ (void)warning:(id)v1;
+ (void)info:(id)v1;
@end


/*****************************************************************/

@interface smartButton : UIBarButtonItem {
    void (^ /* unknown block signature */)(void) block;
}
- (void)setClickBlock:(void (^ /* unknown block signature */)(void))v1;
- (void)doBlock;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMUIObjects : NSObject
+ (id)DXCMOKButtonWithTitle:(id)v1;
+ (void)DXCMApplyOKThemeToButton:(id)v1 withTitle:(id)v2;
+ (id)DXCMCancelButtonWithTitle:(id)v1;
+ (void)DXCMApplyCancelThemeToButton:(id)v1 withTitle:(id)v2;
+ (id)smartBarButtonItemWithBarButtonSystemItem:(long long)v1 andBlock:(void (^ /* unknown block signature */)(void))v2;
+ (id)DXCMLogo;
@end


/*****************************************************************/

@interface CGMHealthkitEventBase : CGMBaseDataObject<DXCMEventInfo> {
    int eventValue;
    unsigned long long eventKind;
    unsigned long long eventSubkind;
    NSDate * eventStartTime;
    double eventDuration;
    NSDate * eventEndTime;
    NSString * calloutTitle;
    NSString * calloutDetails;
    NSString * _event_source_app;
    NSString * _event_source_bundle_id;
    NSString * _event_data_source;
    long long _recorded_system_time_sec;
    long long _event_start_time;
    long long _event_end_time;
    NSString * _event_uuid;
    NSString * _event_source_version;
    NSString * _event_record_status;
}
@property (retain,nonatomic) NSString * event_source_app;
@property (retain,nonatomic) NSString * event_source_bundle_id;
@property (retain,nonatomic) NSString * event_data_source;
@property long long recorded_system_time_sec;
@property long long event_start_time;
@property long long event_end_time;
@property (retain,nonatomic) NSString * event_uuid;
@property (retain,nonatomic) NSString * event_source_version;
@property (retain,nonatomic) NSString * event_record_status;
@property (nonatomic) unsigned long long eventKind;
@property (nonatomic) unsigned long long eventSubkind;
@property (retain,nonatomic) NSDate * eventStartTime;
@property (nonatomic) double eventDuration;
@property (readonly,nonatomic) NSDate * eventEndTime;
@property (nonatomic) int eventValue;
@property (readonly,nonatomic) NSString * calloutTitle;
@property (readonly,nonatomic) NSString * calloutDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (int)eventType;
- (id)eventDescription;
- (id)eventDate;
- (id)eventDetailText;
- (bool)isEditable;
- (bool)isHealthKitEvent;
- (id)summaryTitleForEvents:(id)v1;
- (id)summaryDetailForEvents:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDataSnapshot : NSObject
+ (id)cgmDataSnapshot;
+ (id)alertSettingsSnapshot;
+ (id)alertSettingsDictionary;
+ (id)snapshotDictionaryFromUserAlert:(id)v1;
+ (unsigned long long)getAlgoState;
+ (id)getActiveAlerts;
@end


/*****************************************************************/

@interface CGMSensorRemovalViewController : DXCMBaseViewController<UIScrollViewDelegate> {
    UIBarButtonItem * _rightBarButtonItem;
    NSString * _redBannerTitle;
    void (^ /* unknown block signature */)(void) _nextConfirmPressedBlock;
    UIScrollView * _scrollView;
    UIView * _redWarningView;
    UIStackView * _stackView;
    DXCMBlockButton * _nextButton;
}
@property (retain,nonatomic) UIScrollView * scrollView;
@property (retain,nonatomic) UIView * redWarningView;
@property (retain,nonatomic) UIStackView * stackView;
@property (retain,nonatomic) DXCMBlockButton * nextButton;
@property (retain,nonatomic) UIBarButtonItem * rightBarButtonItem;
@property (retain,nonatomic) NSString * redBannerTitle;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) nextConfirmPressedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)layoutSensorRemovalInstructionView;
- (id)configureStackView;
- (id)linkedStringFromFullString:(id)v1 withLinkString:(id)v2 andUrlString:(id)v3;
- (id)createViewWithLinkText:(id)v1 linkString:(id)v2 urlString:(id)v3 accessibilityId:(id)v4;
- (id)createViewWithMessage:(id)v1 accessibilityId:(id)v2;
- (id)createViewWithImageName:(id)v1;
- (id)loadAndConfigureStackView;
- (id)configureProStackView;
- (id)redBannerViewWithMessage:(id)v1;
- (id)createViewWithHeadline:(id)v1 accessibilityID:(id)v2;
- (id)createViewWithImageName:(id)v1 instText:(id)v2 andMessage:(id)v3 withAccessibility:(id)v4;
- (id)createViewWithImageName:(id)v1 andMessage:(id)v2 withAccessibility:(id)v3;
- (void)showUserConfirmationDialog;
- (void)showMarketingWebview;
- (id)createStackView:(id)v1 withAlignment:(long long)v2;
- (void)scrollViewDidScroll:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMResourceManager : NSObject<DXCMNotificationDelegate> {
    NSString * _logName;
    NSDate * _lastTimeTransmitterUpdated;
    NSTimer * _rangeTimer;
    NSObject<OS_dispatch_queue> * _subscribedQueue;
    NSMutableArray * _subscribedEngines;
}
@property (retain) NSDate * lastTimeTransmitterUpdated;
@property (retain,nonatomic) NSTimer * rangeTimer;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * subscribedQueue;
@property (retain,nonatomic) NSMutableArray * subscribedEngines;
@property (readonly) NSString * logName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)didBecomeActive:(id)v1;
- (void)willResignActive:(id)v1;
- (void)gotAlertSettingsChangedNofification:(id)v1;
- (void)gotGraphHeightSettingChanged:(id)v1;
- (void)gotXmitDataUpdateNotification:(id)v1;
- (bool)gotNewEGV;
- (void)setRangeTimer;
- (bool)isTransmitterNotFound;
- (long long)timeLeftInSession;
- (bool)isOutOfRange;
- (bool)isTimeLossEvent;
- (void)notifySubscribersForEvent:(unsigned long long)v1;
- (bool)subscribeForDataSourceUpdates:(id)v1 withEvents:(unsigned long long)v2;
- (bool)unsubscribeForDataSourceUpdates:(id)v1;
- (void)rangeTimerHandler;
- (void)processNotificationAppWasAlreadyInForeground:(id)v1 alertType:(unsigned long long)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMUserAlertsDao : CGMBaseDao
- (bool)alertExists:(id)v1 andDaytime:(bool)v2;
- (void)insertAlert:(id)v1;
- (void)modifyAlert:(id)v1;
- (void)insertAlertScheduleUserAlert:(id)v1;
- (id)readAlert:(id)v1 daytime:(bool)v2;
- (id)readAlertDictionary:(id)v1 daytime:(bool)v2;
- (bool)hasNightTimeAlert:(id)v1;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (id)getAlertSettingsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (id)fetchDefaultUserAlerts;
- (id)fetchAlertScheduleUserAlerts;
- (void)copyDefaultAlertsAsAlertScheduleSettings;
- (void)deleteAlertScheduleUserAlerts;
- (int)latestRecordedUpdateTimeSeconds;
@end


/*****************************************************************/

@interface DPSensorSessionRecord : DPBaseRecord {
    NSString * _TransmitterId;
    long long _TransmitterTime;
    NSString * _SessionState;
    long long _SensorSessionLength;
    NSString * _RecordVersion;
    long long _SensorWarmupLength;
    NSString * _SessionId;
    NSString * _SessionCalibrationType;
}
@property (retain) NSString * TransmitterId;
@property long long TransmitterTime;
@property (retain) NSString * SessionState;
@property long long SensorSessionLength;
@property (retain,nonatomic) NSString * RecordVersion;
@property long long SensorWarmupLength;
@property (retain,nonatomic) NSString * SessionId;
@property (retain,nonatomic) NSString * SessionCalibrationType;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SensorCodeManualEntryViewController : SetupWizardBaseViewController<UITextFieldDelegate> {
    DXCMBaseTextField * _sensorCodeTextField;
    DXCMBlockButton * _noSensorCodeButton;
    UILabel * _instructionLabel;
    UIView * _keyboardSpacerView;
    double _animationDuration;
    unsigned long long _animationCurve;
    NSLayoutConstraint * _keyboardHeight;
    UIBarButtonItem * _rightBarButtonItem;
    UIBarButtonItem * _leftBarButtonItem;
    unsigned long long _sensorCodeInvalidAttempts;
}
@property (retain,nonatomic) DXCMBaseTextField * sensorCodeTextField;
@property (retain,nonatomic) DXCMBlockButton * noSensorCodeButton;
@property (retain,nonatomic) UILabel * instructionLabel;
@property (retain,nonatomic) UIView * keyboardSpacerView;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long animationCurve;
@property (retain,nonatomic) NSLayoutConstraint * keyboardHeight;
@property (retain,nonatomic) UIBarButtonItem * rightBarButtonItem;
@property (retain,nonatomic) UIBarButtonItem * leftBarButtonItem;
@property (nonatomic) unsigned long long sensorCodeInvalidAttempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)layoutConstraintsWith:(id)v1 instructionLabel:(id)v2 noCodeButtion:(id)v3 keyboardSpacerView:(id)v4;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidLayoutSubviews;
- (void)cancelBarButtonItemPressed;
- (void)saveBarButtonItemPressed;
- (void)confirmSensorCodeEntryPopUp;
- (void)isSensorCodeValid;
- (void)showScanCodeView;
- (void)textFieldDidChange:(id)v1;
- (void)keyboardWillShow:(id)v1;
- (void)updateBarBtnItemState;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ManualEntryTransmitterIDViewController : SetupWizardBaseViewController<UITextFieldDelegate> {
    DXCMBaseTextField * _transmitterTextField;
    UILabel * _informationLabel;
    UIView * _keyboardSpacerView;
    NSString * _restoredTransmitterId;
    double _animationDuration;
    unsigned long long _animationCurve;
    NSLayoutConstraint * _keyboardHeight;
    UIBarButtonItem * _rightBarButtonItem;
    UIBarButtonItem * _leftBarButtonItem;
}
@property (retain,nonatomic) DXCMBaseTextField * transmitterTextField;
@property (retain,nonatomic) UILabel * informationLabel;
@property (retain,nonatomic) UIView * keyboardSpacerView;
@property (retain,nonatomic) NSString * restoredTransmitterId;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long animationCurve;
@property (retain,nonatomic) NSLayoutConstraint * keyboardHeight;
@property (retain,nonatomic) UIBarButtonItem * rightBarButtonItem;
@property (retain,nonatomic) UIBarButtonItem * leftBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)viewDidLayoutSubviews;
- (void)saveBarButtonItemPressed;
- (void)confirmSNEntryPopUp;
- (void)processTransmitterId;
- (bool)isTransmitterIdValid:(long long)v1 allowAnyTransmitterId:(bool)v2;
- (void)cancelBarButtonItemPressed;
- (void)encodeRestorableStateWithCoder:(id)v1;
- (void)decodeRestorableStateWithCoder:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (void)textFieldDidChange:(id)v1;
- (void)layoutConstraintsWith:(id)v1 informationLabel:(id)v2 keyboardSpacerView:(id)v3;
- (void)keyboardWillShow:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)updateSaveBarBtnItemState;
- (id)getInformationText;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMLegalViewController : DXCMBaseViewController<UITableViewDataSource,UITableViewDelegate> {
    NSMutableArray * section1Cells;
    UITableView * _tableView;
}
@property (retain,nonatomic) UITableView * tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface AlertsExplanationViewController : SetupWizardBaseViewController {
    UIImageView * _lowAlertImageView;
}
@property (retain,nonatomic) UIImageView * lowAlertImageView;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBluetoothService : NSObject {
    NSString * _name;
    CBService * _cbService;
    DXCMBluetoothPeripheral * _dxcmPeripheral;
    CBUUID * _uuid;
    NSMutableDictionary * _characteristicDict;
}
@property (retain) NSString * name;
@property (retain) CBService * cbService;
@property (nonatomic) DXCMBluetoothPeripheral * dxcmPeripheral;
@property (retain) CBUUID * uuid;
@property (retain) NSMutableDictionary * characteristicDict;
@property (readonly,nonatomic) bool isReady;
- (id)initWithName:(id)v1 pUUID:(id)v2 pPeripheral:(id)v3;
- (void)serviceReady;
- (void)addCharacteristic:(id)v1;
- (id)characteristics;
- (void)discoverCharacteristics;
- (id)findCharacteristicByName:(id)v1;
- (id)findCharacteristic:(id)v1;
- (void)serviceDiscovered:(id)v1 error:(id)v2;
- (void)characteristicsDiscovered;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPAccessoryEntry : DPBaseObject {
    NSString * _AccessoryModel;
    NSString * _AccessoryOSVersion;
    NSString * _AccessoryType;
}
@property (retain,nonatomic) NSString * AccessoryModel;
@property (retain,nonatomic) NSString * AccessoryOSVersion;
@property (retain,nonatomic) NSString * AccessoryType;
- (id)initWithType:(id)v1 model:(id)v2 version:(id)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SetupWizardWebViewController : CGMWebViewController {
    UIBarButtonItem * _okBarButtonItem;
}
@property (retain,nonatomic) UIBarButtonItem * okBarButtonItem;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)okBarButtonItemPressed;
- (bool *)checkIfAutoUpdatePropertyIsNil;
- (bool *)checkIfAutoUpdatePropertyIsNotNil;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CriticalAlertsExplanationViewController : SetupWizardBaseViewController<UIPageViewControllerDataSource,UIPageViewControllerDelegate,CriticalAlertsFirstExplanationViewDelegate,CriticalAlertsNextExplanationViewDelegate,CriticalAlertsReadyExplanationViewDelegate,UITextViewDelegate> {
    int _criticalAlertsState;
    NSMutableArray * viewControllerArray;
    DXCMBlockButton * _actionButton;
    DXCMBlockButton * _learnMoreButton;
    UILabel * _contentLabel;
    UIPageViewController * _pageViewController;
    CriticalAlertsExplanationReadyViewController * _readyExplanationView;
    CriticalAlertsNextExplanationViewController * _nextExplanationView;
    CriticalAlertsFirstExplanationViewController * _firstExplanationView;
}
@property (retain,nonatomic) DXCMBlockButton * actionButton;
@property (retain,nonatomic) DXCMBlockButton * learnMoreButton;
@property (retain,nonatomic) UILabel * contentLabel;
@property (retain,nonatomic) UIPageViewController * pageViewController;
@property (retain) CriticalAlertsExplanationReadyViewController * readyExplanationView;
@property (retain) CriticalAlertsNextExplanationViewController * nextExplanationView;
@property (retain) CriticalAlertsFirstExplanationViewController * firstExplanationView;
@property int criticalAlertsState;
@property (retain,nonatomic) NSMutableArray * viewControllerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)toDeviceSoundSettings;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)determineViewByState;
- (void)moveCriticalAlertsViewControllerByState:(int)v1;
- (void)moveToSoundSettingsFromFirstExplanationView;
- (void)moveToSoundSettingsFromReadyExplanationView;
- (void)displayLearnMoreModaView;
- (void)moveToNextState;
- (void)appDidBecomeActive;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface AlertsExplanation2ViewController : SetupWizardBaseViewController {
    DXCMBlockButton * _iUnderstand;
    DXCMBlockButton * _learnMore;
    UIImageView * _notificationsImageView;
    UIImage * _notificationsImage;
    CriticalAlertsExplanationViewController * _criticalAlertsView;
}
@property (retain,nonatomic) DXCMBlockButton * iUnderstand;
@property (retain,nonatomic) DXCMBlockButton * learnMore;
@property (retain,nonatomic) UIImageView * notificationsImageView;
@property (retain,nonatomic) UIImage * notificationsImage;
@property (retain) CriticalAlertsExplanationViewController * criticalAlertsView;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)toCriticalAlertsSettings;
- (void)checkForNotificationsEnabled;
- (void)displayNotificationsOffModalView:(void (^ /* unknown block signature */)(void))v1;
- (void)setUpNormalNotificationPermissionFlow;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceTransmitterVersionRecord : NSObject {
    unsigned char _apiVersion;
    unsigned short _storageModeDays;
    unsigned short _maxRuntimeDays;
    unsigned short _maxStorageTimeDays;
    struct anonymous_type_20 _version;
    unsigned int _swNumber;
    unsigned int _storageModeSeconds;
    unsigned int _maxRuntimeSeconds;
    unsigned int _maxStorageTimeSeconds;
}
@property (readonly) struct anonymous_type_21 version;
@property (readonly) unsigned int swNumber;
@property (readonly) unsigned short storageModeDays;
@property (readonly) unsigned int storageModeSeconds;
@property (readonly) unsigned char apiVersion;
@property (readonly) unsigned short maxRuntimeDays;
@property (readonly) unsigned int maxRuntimeSeconds;
@property (readonly) unsigned short maxStorageTimeDays;
@property (readonly) unsigned int maxStorageTimeSeconds;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(struct anonymous_type_22)v1 swNumber:(unsigned int)v2 storageModeDays:(unsigned short)v3 apiVersion:(unsigned char)v4 maxRuntimeDays:(unsigned short)v5 maxStorageDays:(unsigned short)v6;
- (id)initWithDictionary:(id)v1;
@end


/*****************************************************************/

@interface DXCMHealthKit : NSObject {
    HKHealthStore * _healthStore;
}
@property (retain,nonatomic) HKHealthStore * healthStore;
@property (readonly,nonatomic) long long isAuthorizedToSaveEgvs;
@property (readonly,nonatomic) long long isAuthorizedToSaveCarbs;
@property (readonly,nonatomic) long long healthKitAuthorizationStatus;
+ (bool)isHealthKitAvailable;
+ (id)sharedInstance;
- (id)init;
- (void)requestAuthorizationWithCompletion:(void (^ /* unknown block signature */)(void))v1;
- (void)saveEgvsToHealthKit:(id)v1 withCompletion:(void (^ /* unknown block signature */)(void))v2;
- (void)startListeningAuthorizedReadTypes;
- (id)egvToQuantitySample:(long long)v1 systemTime:(double)v2 transmitterTime:(double)v3 trendArrow:(id)v4 trendRate:(double)v5 status:(id)v6 timeZone:(id)v7;
- (id)carbsToQuantitySample:(long long)v1 systemTime:(double)v2;
- (void)startListeningForSampleType:(id)v1;
- (void)fetchSampleType:(id)v1 withCompletion:(void (^ /* unknown block signature */)(void))v2;
- (id)predicateForSampleType:(id)v1;
- (id)dataTypesToWrite;
- (id)dataTypesToRead;
- (id)glucoseQuantityType;
- (id)carbsQuantityType;
- (id)proteinQuantityType;
- (id)fiberQuantityType;
- (id)sugarQuantityType;
- (id)totalFatQuantityType;
- (id)caloriesQuantityType;
- (id)workoutQuantityType;
- (id)mgPerdL;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMGraphStackSubview : DXCMBaseView {
    DexPlotView * _plotView;
    UILabel * _warmupHelpTextLabel;
    UILabel * _pairingHelpTextLabel;
    DXCMOffsetTitledButton * _addEventButton;
}
@property (retain,nonatomic) DexPlotView * plotView;
@property (retain,nonatomic) DXCMOffsetTitledButton * addEventButton;
@property (retain,nonatomic) UILabel * warmupHelpTextLabel;
@property (retain,nonatomic) UILabel * pairingHelpTextLabel;
- (id)init;
- (void)initCommon;
- (void)setHiddenForState:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMContactWebViewController : CGMWebViewController
- (void)webView:(id)v1 decidePolicyForNavigationAction:(id)v2 decisionHandler:(void (^ /* unknown block signature */)(void))v3;
@end


/*****************************************************************/

@interface SwitchTableCell : DXCMBaseTableViewCell {
    NSMutableArray * sectionSeparators;
    UISwitch * _switch_ctrl;
}
@property (retain,nonatomic) UISwitch * switch_ctrl;
- (void)enable:(bool)v1;
- (struct UIEdgeInsets)layoutMargins;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSiriTitleSubtitleTableViewCell : UITableViewCell
- (id)init;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)initCommon;
@end


/*****************************************************************/

@interface AlertsEngine : NSObject<CGMSubscriberDataSource,DXCMNotificationDelegate> {
    bool _activeRemoteNotificationPopUp;
    bool _cameFromBackground;
    NSString * _logName;
    CGMDataMgr * _coreDbMgr;
    NSMutableDictionary * _verificationAlertViews;
    NSDate * _outOfGlucoseRangeStartTime;
    NSObject<OS_dispatch_queue> * _alertViewQueue;
}
@property (retain,nonatomic) CGMDataMgr * coreDbMgr;
@property bool activeRemoteNotificationPopUp;
@property (retain,nonatomic) NSMutableDictionary * verificationAlertViews;
@property (retain,nonatomic) NSDate * outOfGlucoseRangeStartTime;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * alertViewQueue;
@property bool cameFromBackground;
@property (readonly,nonatomic) CGMAlertSchedule * currentAlertSchedule;
@property (readonly) bool isAnyAlertActiveAlarming;
@property (readonly) bool isGlucoseAlertActive;
@property (retain,nonatomic) NSString * logName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)resetInstance;
- (long long)applicationState;
- (bool)isAlertScheduleModeNow;
- (bool)isAlwaysSoundOnNow;
- (id)fetchAlertSchedule;
- (id)fetchAlertScheduleDefault;
- (void)resetAlertSettingsWithAlwaysSoundAndULSAlert:(bool)v1;
- (void)processUserGlucoseAlerts:(id)v1;
- (void)onSignalLoss;
- (void)processFixedAlert:(unsigned long long)v1 isAlerting:(bool)v2;
- (void)notificationSoundLoggingWithAlertName:(id)v1 soundFileName:(id)v2 volumeMode:(unsigned long long)v3 alertVolume:(float)v4 portTypeName:(id)v5;
- (float)getNotificationSoundLevel:(unsigned long long)v1 areHeadPhoneConnected:(bool)v2;
- (id)getNotificationSoundWithAlertName:(id)v1 volumeMode:(unsigned long long)v2 soundFileName:(id)v3 soundName:(id)v4;
- (void)postFixedAlertForAlertEntry:(id)v1;
- (bool)shouldWePostAlertForType:(unsigned long long)v1;
- (void)processFixedAlerts;
- (unsigned int)lowSuspendSeconds;
- (void)processUserGlucoseAlert:(id)v1 alertType:(unsigned long long)v2 userAlert:(id)v3;
- (void)showPairingRequestAlert;
- (void)clearPairingRequestAlert;
- (void)scheduleOptedOutDataSharingDisabledAlert;
- (void)scheduleAlertsResetAlert;
- (void)clearOptedOutDataSharingDisabledAlert;
- (void)showOptedOutDataSharingDisabledAlertOnScreen;
- (void)clearAppTerminatedAlert;
- (void)showAppTerminatedAlert;
- (void)scheduleNoBluetoothAlert;
- (void)clearNoBluetoothAlert;
- (void)checkAndUpdateSignalLossAlert;
- (void)clearSignalLossAlertNotifications;
- (void)setSignalLossAlertStateToInactive;
- (void)scheduleTransmitterNotFoundAlert;
- (void)clearTransmitterNotFoundAlert;
- (void)scheduleTestAlert;
- (void)showRecoverableSQLErrorAlert;
- (void)showNonrecoverableSQLErrorAlert;
- (void)showCatastrophicErrorAlert:(unsigned long long)v1;
- (void)scheduleAlert:(unsigned long long)v1 withDelay:(int)v2;
- (void)alertUserGlucoseAlert:(id)v1 egv:(id)v2 soundName:(id)v3 cameFromBackground:(bool)v4 userAlert:(id)v5;
- (void)logUserGlucoseAlertWithEgv:(id)v1 alertEntry:(id)v2 overrideMode:(unsigned long long)v3 soundName:(id)v4;
- (id)getSoundCategoryForAlertType:(unsigned long long)v1;
- (unsigned long long)getNextVolumeModeForUserGlucoseAlert:(id)v1;
- (void)displayPopUpAlertOnScreen:(unsigned long long)v1 userAlert:(id)v2 remoteNotification:(id)v3;
- (void)displayRemoteNotificationPopUp;
- (id)getAlertPopupModelWithAlertType:(unsigned long long)v1 userAlert:(id)v2;
- (void)storeRemoteNotificationWithAlertType:(unsigned long long)v1 title:(id)v2 description:(id)v3;
- (void)completeDisplayPopupWithPopupModel:(id)v1;
- (void)displayPopUpNotPreviouslyInAppIfNeeded;
- (void)acknowledgeAlert:(unsigned long long)v1;
- (void)gotXmitterDataUpdate;
- (void)clearUserGlucoseAlerts;
- (void)clearAlert:(unsigned long long)v1;
- (void)clearAlert:(unsigned long long)v1 withForceDismissComplete:(bool)v2;
- (void)clearDeliveredTransmitterNotFoundAlert;
- (void)clearAlerts;
- (bool)areCriticalAlertsOnActiveState;
- (id)getActiveAlerts;
- (id)getActiveAlarmingAlerts;
- (id)getActiveGlucoseAlerts;
- (void)verifyCriticalAlertsPermision:(bool)v1;
- (void)showCriticalAlertsPermissionRevokedAlertBackground;
- (void)showCriticalAlertsPermissionRevokedAlertUI;
- (void)cancelCriticalAlertsPermissionRevokedAlert;
- (void)dismissOtherAlertsForCliticalAlertsPermissionRevoked;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)ackNotificationFromSwipeForAlertType:(unsigned long long)v1;
- (void)processNotificationAcknowledgementFromSwipe:(id)v1 alertType:(unsigned long long)v2;
- (void)processNotificationAppWasAlreadyInForeground:(id)v1 alertType:(unsigned long long)v2;
- (void)alertStateDidChange:(unsigned long long)v1 withAlertState:(unsigned long long)v2 withOldAlertState:(unsigned long long)v3;
- (void)compabilityDidChangeNotification:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTransmitterCmdQueue : NSObject {
    NSDateFormatter * _dateFormatter;
    NSString * _dbPath;
}
@property (retain,nonatomic) NSDateFormatter * dateFormatter;
@property (retain,nonatomic) NSString * dbPath;
- (id)init;
- (void)markCommandProcessed:(id)v1 result:(id)v2;
- (void)markPendingCommands:(id)v1;
- (void)queueStartSessionWithDate:(id)v1;
- (id)queueCommandFromDictionary:(id)v1;
- (void)queueStopSession;
- (void)queueCalibration:(unsigned short)v1 calTime:(unsigned int)v2 sessionId:(unsigned int)v3 transmitterId:(id)v4;
- (void)cancelAllPendingCalibrations;
- (id)getLatestPendingCalibration;
- (bool)areCommandsPending;
- (bool)areStartStopCommandsPending;
- (bool)areStartCommandsPending;
- (bool)areCalibrationCommandsPending;
- (id)pendingStartStopCommandList;
- (id)pendingCommandsList;
- (id)toJSON:(id)v1;
- (id)stringFromJSON:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface TransmitterIDViewController : SetupWizardBaseViewController {
    DXCMBlockButton * _scan;
    DXCMBlockButton * _enterByHand;
}
@property (retain,nonatomic) DXCMBlockButton * scan;
@property (retain,nonatomic) DXCMBlockButton * enterByHand;
- (void)viewDidLoad;
- (void)close;
- (void)onScanButton;
- (void)onEnterByHandButton;
- (void)logPairingProcessStart;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPManifestEntry : DPBaseObject {
    NSString * _RecordType;
    unsigned long long _Count;
    NSString * _FirstDateTime;
    NSString * _LastDateTime;
    NSString * _FirstKey;
    NSString * _LastKey;
    NSString * _Tag;
}
@property (retain) NSString * RecordType;
@property unsigned long long Count;
@property (retain) NSString * FirstDateTime;
@property (retain) NSString * LastDateTime;
@property (retain) NSString * FirstKey;
@property (retain) NSString * LastKey;
@property (retain) NSString * Tag;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBaseView : UIView
- (void)dealloc;
@end


/*****************************************************************/

@interface DXCMWhatsNewVC : DXCMBaseViewController
+ (bool)shouldShowWhatsNew;
+ (bool)hasNotSeenWhatsNew;
+ (void)markHasSeenWhatsNew;
+ (void)verifyCriticalPermission;
- (void)viewDidLoad;
- (id)createWhatsNewItemWithTitle:(id)v1 message:(id)v2 imageName:(id)v3;
- (void)exitViewTapped;
@end


/*****************************************************************/

@interface CGMUserAlert : CGMBaseDataObject<NSSecureCoding> {
    bool _daytime;
    bool _enabled;
    int _limit;
    unsigned int _repeat;
    NSString * _name;
    NSString * _soundName;
}
@property (retain,nonatomic) NSString * name;
@property (nonatomic) bool daytime;
@property (nonatomic) bool enabled;
@property (nonatomic) int limit;
@property (nonatomic) unsigned int repeat;
@property (retain,nonatomic) NSString * soundName;
+ (bool)supportsSecureCoding;
+ (id)dictionaryFromAlert:(id)v1;
+ (id)alertFromDictionary:(id)v1;
+ (id)createAlertObject:(id)v1 daytime:(bool)v2 enabled:(bool)v3 limit:(int)v4 repeat:(unsigned int)v5 soundName:(id)v6;
+ (void)doSomethingToAllStandardUserSettableAlerts:(void (^ /* unknown block signature */)(void))v1;
+ (void)doSomethingToAllAlertScheduleSettings:(void (^ /* unknown block signature */)(void))v1;
- (bool)isEqualToAlert:(id)v1;
- (id)alertSettingDescription;
- (unsigned int)getRepeatValue;
- (void)encodeWithCoder:(id)v1;
- (id)initWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DEXAlertSound : NSObject {
    AVAudioPlayer * _audioPlayer;
    NSString * _soundName;
    NSString * _alertName;
    unsigned long long _overrideMode;
    unsigned long long _priority;
    unsigned long long _taskId;
}
@property (readonly,nonatomic) AVAudioPlayer * audioPlayer;
@property (readonly,nonatomic) NSString * soundName;
@property (readonly,nonatomic) NSString * alertName;
@property (readonly,nonatomic) unsigned long long overrideMode;
@property (readonly,nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long taskId;
+ (void)initialize;
+ (id)stringForMode:(unsigned long long)v1;
+ (unsigned long long)nextOverrideMode:(unsigned long long)v1;
+ (id)newPlayerForSound:(id)v1 inCategory:(id)v2;
- (id)initWithSoundName:(id)v1 alertName:(id)v2 category:(id)v3 priority:(unsigned long long)v4 overrideMode:(unsigned long long)v5 taskId:(unsigned long long)v6;
- (float)volumeWithCurrentSystemVolume:(float)v1 onHeadphones:(bool)v2;
- (void)play;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCM_CompatibilityService : NSObject {
    bool _validityChanged;
    bool _compatibilityServiceEnabled;
    int _envValidity;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _storedData;
    NSString * _storedDataPath;
    DCSAlertViewController * _compatibilityMsgView;
}
@property (retain) NSObject<OS_dispatch_queue> * queue;
@property (retain) NSMutableDictionary * storedData;
@property (retain) NSString * storedDataPath;
@property bool validityChanged;
@property (retain) DCSAlertViewController * compatibilityMsgView;
@property int envValidity;
@property bool compatibilityServiceEnabled;
+ (id)sharedInstance;
+ (void)forceCompatibleEnvironment;
+ (void)setEnvironmentValidity:(int)v1;
+ (id)getValidityString;
+ (bool)isValidEnvironment;
+ (void)checkCompatibilityandDisplayMessageIfNeededForSwNum:(id)v1 appName:(id)v2;
+ (void)updateLastSavedDisplay;
+ (bool)isAppInvalid;
+ (id)getDCSView;
+ (void)onResetToOOBE;
+ (bool)isCompatibilityScreenVisible;
- (id)init;
- (void)loadStoredDataFromFile;
- (bool)didValidityChange;
- (void)updatelastServerContactTimestamp;
- (void)updateLastDisplayTimestamp;
- (bool)itsBeenADaySinceLastContact;
- (void)removeDataForKey:(id)v1;
- (id)getStoredDataForKey:(id)v1;
- (void)storeData:(id)v1 forKey:(id)v2;
- (bool)localConfigurationHasChanged:(id)v1 swNum:(id)v2 appName:(id)v3;
- (void)writeStoredDataToFile;
- (bool)isValidityResponseDifferentFromBefore:(id)v1;
- (bool)isMessageResponseDifferentFromBefore:(id)v1;
- (bool)checkAndUpdateParam:(id)v1 newDict:(id)v2 key:(id)v3;
- (void)checkValidity;
- (bool)timeToDisplayUserMessage;
- (void)initCompatibilityDictionaryWithDefaults;
- (id)updateCompatibilityAndDisplayMessageIfNeeded;
- (bool)doesLastStoredDataShowInvalid;
- (id)getMyView;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMServerUrlHelper : NSObject
+ (id)authorizeUrlForAppGuid:(id)v1;
+ (id)appPermissionsUrl;
+ (bool)isAcceptedUrl:(id)v1;
+ (bool)isDeclinedUrl:(id)v1;
@end


/*****************************************************************/

@interface CGMContactItem : NSObject {
    NSString * _title;
    NSString * _subtitle;
    NSString * _url;
    NSString * _phone;
}
@property (retain,nonatomic) NSString * title;
@property (retain,nonatomic) NSString * subtitle;
@property (retain,nonatomic) NSString * url;
@property (retain,nonatomic) NSString * phone;
- (id)initWithTitle:(id)v1 subtitle:(id)v2;
- (id)initWithTitle:(id)v1 subtitle:(id)v2 url:(id)v3;
- (id)initWithType:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceExceptionTypeNamesArray : NSObject
+ (void)init;
+ (unsigned long long)toExceptionType:(id)v1;
@end


/*****************************************************************/

@interface DCGMServiceException : NSException {
    unsigned long long _codeEnum;
}
@property unsigned long long codeEnum;
+ (id)exception:(id)v1 message:(id)v2;
- (id)initWithReason:(id)v1 reason:(id)v2 userInfo:(id)v3;
@end


/*****************************************************************/

@interface DXCMAlertsGlobal : NSObject {
    NSMutableArray * _alertQueue;
    UIViewController * _alertCurrentlyShowing;
}
@property (retain,nonatomic) NSMutableArray * alertQueue;
@property (retain,nonatomic) UIViewController * alertCurrentlyShowing;
+ (id)sharedInstance;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceChallengeValueRecord : NSObject {
    unsigned char _opCode;
    NSData * _hashData;
    NSData * _challenge;
}
@property (readonly,nonatomic) unsigned char opCode;
@property (readonly,nonatomic) NSData * hashData;
@property (readonly,nonatomic) NSData * challenge;
- (id)initWithData:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMInternalFeedbackControllerViewController : DXCMBaseViewController<UITextViewDelegate> {
    UITextView * _feedbackForm;
    UILabel * _characterCounter;
    UIScrollView * _scroller;
}
@property (retain,nonatomic) UITextView * feedbackForm;
@property (retain,nonatomic) UILabel * characterCounter;
@property (retain,nonatomic) UIScrollView * scroller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)dealloc;
- (void)send;
- (void)updateCharacterCount;
- (bool)textView:(id)v1 shouldChangeTextInRange:(struct _NSRange)v2 replacementText:(id)v3;
- (void)textViewDidChange:(id)v1;
- (void)keyboardWasShown:(id)v1;
- (void)keyboardWillBeHidden:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMContactViewController : DXCMBaseViewController<UITableViewDataSource,UITableViewDelegate,CGMWebViewDelegate> {
    UITableView * _tableView;
    NSMutableArray * _sectionTitles;
    NSMutableArray * _section1Cells;
    NSMutableArray * _section2Cells;
}
@property (retain,nonatomic) NSMutableArray * sectionTitles;
@property (retain,nonatomic) NSMutableArray * section1Cells;
@property (retain,nonatomic) NSMutableArray * section2Cells;
@property (retain,nonatomic) UITableView * tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)setUpViewController;
- (void)setupTableView;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (bool)shouldHandleWebNavigation:(id)v1;
- (void)handleWebViewNavigation:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCSEngine : NSObject {
    NSString * _logName;
}
@property (retain,nonatomic) NSString * logName;
+ (id)sharedInstance;
- (id)init;
- (void)runCompatibilityCheck;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMRawSensorCountRecord : NSObject {
    unsigned short _autoZero;
    unsigned int _txTime;
    float _calibratedSample;
    float _filteredSample;
}
@property (readonly,nonatomic) unsigned int txTime;
@property (readonly,nonatomic) float calibratedSample;
@property (readonly,nonatomic) float filteredSample;
@property (readonly,nonatomic) unsigned short autoZero;
+ (id)recordWithData:(id)v1;
- (id)initWithTxTime:(unsigned int)v1 andCalibratedSample:(float)v2 andFilteredSample:(float)v3 andAutoZero:(unsigned short)v4;
@end


/*****************************************************************/

@interface DXCMAppState : NSObject {
    long long _currentAppState;
}
@property (readonly) long long currentAppState;
+ (id)shared;
- (id)init;
- (void)dealloc;
- (void)updateApplicationState;
- (void)inactive;
- (void)active;
- (void)start;
@end


/*****************************************************************/

@interface CGMExtensionEngineConstants : NSObject
+ (id)appPrefix;
+ (id)groupName;
+ (id)dataPath;
+ (id)alertPath;
+ (id)dateOffsetPath;
@end


/*****************************************************************/

@interface DPTxDiagnosticRecord : DPBaseRecord {
    NSString * _RecordVersion;
    NSString * _Version;
    NSString * _RecordedTime;
    NSString * _Timestamp;
    NSString * _TxId;
    unsigned long long _ReferenceTicks;
    NSString * _ReferenceTimestamp;
    NSDictionary * _Manifest;
    NSDictionary * _EncryptionInfo;
    NSArray * _DataSets;
}
@property (retain,nonatomic) NSString * RecordVersion;
@property (retain,nonatomic) NSString * Version;
@property (retain,nonatomic) NSString * RecordedTime;
@property (retain,nonatomic) NSString * Timestamp;
@property (retain,nonatomic) NSString * TxId;
@property (nonatomic) unsigned long long ReferenceTicks;
@property (retain,nonatomic) NSString * ReferenceTimestamp;
@property (retain,nonatomic) NSDictionary * Manifest;
@property (retain,nonatomic) NSDictionary * EncryptionInfo;
@property (retain,nonatomic) NSArray * DataSets;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMHelpViewController : DXCMBaseViewController<MFMailComposeViewControllerDelegate,CGMWebViewDelegate> {
    NSMutableArray * section1Cells;
    UITableView * _tableView;
}
@property (retain,nonatomic) UITableView * tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)loadMeuItems;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)pushAboutViewControllerWithIdentifier:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)unwindToHelp:(id)v1;
- (bool)shouldHandleWebNavigation:(id)v1;
- (void)handleWebViewNavigation:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMEncryptionHelper : NSObject
+ (id)encryptDataWithAES128:(id)v1 key:(id)v2 iv:(id)v3 error:(id *)v4;
+ (id)decryptAES128Data:(id)v1 key:(id)v2 iv:(id)v3 error:(id *)v4;
+ (id)encryptDataWithRSA:(id)v1 certificate:(id)v2 error:(id *)v3;
+ (id)hashDataWithSha1:(id)v1;
+ (struct __SecKey *)convertNSDataCertToSecKeyRef:(id)v1;
@end


/*****************************************************************/

@interface DXCMBaseViewController : UIViewController {
    double duration;
    bool hasAppeared;
    bool isPopping;
    bool _VCIsPresented;
    bool _okToSegue;
    NSObject<DXCMBaseViewControllerDelegate> * _delegate;
    NSString * _logName;
}
@property (nonatomic) bool okToSegue;
@property (nonatomic) NSObject<DXCMBaseViewControllerDelegate> * delegate;
@property (retain,nonatomic) NSString * logName;
@property (nonatomic) bool VCIsPresented;
+ (id)methodName:(SEL)v1;
- (id)initWithNibName:(id)v1 bundle:(id)v2;
- (id)initWithCoder:(id)v1;
- (void)viewDidLoad;
- (bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (void)performSegueWithIdentifier:(id)v1 sender:(id)v2;
- (void)dealloc;
- (void)logWillAppear;
- (void)logWillDisappear;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissViewControllerAnimated:(bool)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)popFromNavigationControllerToRootViewController;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMTrendViewManager : NSObject<UIPopoverPresentationControllerDelegate,CGMSubscriberDataSource,DXCMEventHistoryDelegate> {
    bool _isTrendViewVisible;
    bool _isUrgentLowSoonEnabled;
    bool _isCalibrationRequested;
    bool _wasInAlertScheduleDuringLastUpdate;
    NSObject<StatusOfWhatsNewInterfereUnsafeState> * _trendViewDelegate;
    CGMEGV * _latestEGV;
    NSTimer * _updatesTimer;
    CGMDataMgr * _coreDbMgr;
    NSMutableDictionary * _coachMarkQueue;
    unsigned long long _visibleCoachmark;
}
@property (retain,nonatomic) NSTimer * updatesTimer;
@property (retain,nonatomic) CGMDataMgr * coreDbMgr;
@property (retain,nonatomic) NSMutableDictionary * coachMarkQueue;
@property (nonatomic) unsigned long long visibleCoachmark;
@property (nonatomic) bool isCalibrationRequested;
@property (nonatomic) bool wasInAlertScheduleDuringLastUpdate;
@property (retain,nonatomic) NSObject<StatusOfWhatsNewInterfereUnsafeState> * trendViewDelegate;
@property (retain,nonatomic) CGMEGV * latestEGV;
@property (nonatomic) bool isTrendViewVisible;
@property (nonatomic) bool isUrgentLowSoonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedManager;
+ (void)updateAlertSettingsOnGraph:(id)v1;
- (id)init;
- (void)dealloc;
- (void)updateLatestEgvFromTransmitter;
- (void)handleRefresh;
- (void)startUpdatesTimer;
- (void)stopUpdatesTimer;
- (void)updateUI;
- (void)verifyCriticalAlertsPermision;
- (void)updateFocus;
- (void)updateAlwaysSound;
- (void)refreshEGVCard;
- (void)updateShareButtonBadgeValue;
- (void)dataConsentStatusChangedRemotely;
- (void)updateEGVsOnGraph:(id)v1 latestVisibleDate:(id)v2;
- (bool)updateUIWithCalibrationState:(id)v1;
- (void)pairSuccessfulHUD;
- (void)startedWarmupHud;
- (void)showHUDWithMessage:(id)v1 withDuration:(float)v2;
- (void)updateUIWithAlgorithmState:(id)v1;
- (void)logDisplay;
- (void)openCalibrationView;
- (bool)processBarButtonAction:(unsigned long long)v1;
- (void)showCalibrationCoachmark;
- (void)showCoachMark:(unsigned long long)v1 withMessage:(id)v2;
- (void)removeVisibleCoachmarkIfNeeded;
- (void)removeCoachMark:(unsigned long long)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)showNextQueuedCoachMark;
- (void)showCoachMark:(unsigned long long)v1 withViewController:(id)v2;
- (void)openHelpView:(id)v1;
- (id)fetchAllCGMEvents;
- (void)pushEventHistoryViewController;
- (void)deleteEvent:(id)v1;
- (void)eventHistoryController:(id)v1 didSelectRowAtIndexPath:(id)v2 forEvent:(id)v3;
- (id)fetchAllEvents;
- (void)launchClarityAppFromEvents;
- (long long)adaptivePresentationStyleForPresentationController:(id)v1;
- (void)popoverPresentationControllerDidDismissPopover:(id)v1;
- (void)processCoachmarkDismissal;
- (void)updateCalibrationBadge;
- (int)getCalibrationBadgeValueFromAlgorithmState;
- (void)dismiss:(id)v1;
- (void)openSensorInsertionVideo;
- (void)sensorSessionStarted:(id)v1;
- (void)sensorSessionStopped:(id)v1;
- (void)presentSensorCodeController;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)egvCardShowEGV:(id)v1;
- (void)egvCardShowSensorState;
- (void)egvCardShowError:(unsigned long long)v1;
- (void)egvCardShowWarmUpstate;
- (void)showWarmupHelp;
- (void)egvCardShowPairingCircle;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSupportLoggerDao : CGMBaseDao
- (unsigned long long)logUserActivity:(unsigned long long)v1 subtype:(id)v2 data:(id)v3 date:(long long)v4;
- (id)systemTimeIso8601;
- (id)displayTime;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (id)getLastNumEntries:(unsigned long long)v1;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (void)deleteRecordsBeforeTime:(int)v1;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (unsigned int)getRecordCount;
- (id)getCGMUserActivityRecordDictsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
@end


/*****************************************************************/

@interface LoginUtilities : NSObject
+ (void)setSetupWizardUpgradeStateForValues:(id)v1;
+ (bool)isSetupWizardUpgradeState;
+ (void)resetSetupWizardUpgradeState;
+ (void)processDSAPIWebServiceException:(id)v1 viewController:(id)v2 completion:(void (^ /* unknown block signature */)(void))v3;
+ (void)processDSAPIException:(id)v1 viewController:(id)v2 completion:(void (^ /* unknown block signature */)(void))v3;
+ (bool)loginWithAuthCode:(id)v1 withParameters:(id)v2 withCompletion:(void (^ /* unknown block signature */)(void))v3 withFailure:(void (^ /* unknown block signature */)(void))v4;
+ (void)importUserSettingsAndSetUpgradeState;
+ (void)setupUserAccountInfo;
+ (void)displayIncorrectPassword:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
+ (void)displayUsernameError:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
+ (void)displayEmailAddressInvalid:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
+ (void)displayAlertWithTitle:(id)v1 message:(id)v2 viewController:(id)v3 completion:(void (^ /* unknown block signature */)(void))v4;
+ (void)updateUserAccountInfo;
+ (id)retrievePublisherData;
+ (void)persistPublisherStoredData:(id)v1;
+ (void)deleteAndroidNamedValues;
+ (void)readAndStoreAlert:(id)v1 existsOnServer:(bool)v2;
+ (id)manuallyDisableAlert:(id)v1;
+ (void)readShareSettingFromServer:(bool)v1;
+ (void)readPreviousTxModeFromServer:(bool)v1;
+ (void)readMainSettingsFromServer:(bool)v1;
+ (void)restoreFromServerAlertScheduleSettings;
+ (id)getUserAlertFromDictionary:(id)v1;
+ (id)readAlert:(id)v1 daytime:(bool)v2;
+ (void)logUserDeviceInfo;
+ (void)updateUserDeviceInfo;
@end


/*****************************************************************/

@interface CGMHealthEventViewController : CGMEventManagerViewController<UITableViewDelegate,UITableViewDataSource> {
    UITableView * _tableView;
    NSArray * _healthRowCells;
    DXCMCGMBaseTableViewCell * _healthTimeCell;
    CGMDatePickerTableViewCell * _datePickerCell;
    NSIndexPath * _selected;
}
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSArray * healthRowCells;
@property (retain,nonatomic) DXCMCGMBaseTableViewCell * healthTimeCell;
@property (retain,nonatomic) CGMDatePickerTableViewCell * datePickerCell;
@property (copy,nonatomic) NSIndexPath * selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)setupTableView;
- (void)setupCells;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)healthCellForRowAtIndexPath:(id)v1;
- (void)refreshTableSectionHealth;
- (void)showDatePickerCell:(bool)v1;
- (void)datePickerDidChange;
- (bool)isValidData;
- (id)messageForAddEventConfirmation;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleWizardSummaryViewController : DXCMBaseAlertScheduleSetupViewController<UITableViewDelegate,UITableViewDataSource> {
    UITableView * _tableView;
    NSMutableArray * _menuItemsArray;
    UILabel * _descriptionLabel;
}
@property (nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSMutableArray * menuItemsArray;
@property (nonatomic) UILabel * descriptionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)setupTableView;
- (long long)numberOfSectionsInTableView:(id)v1;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (void)updateAlertScheduleData;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMShortcutsMenu : NSObject
- (id)init;
- (bool)handleShortCutItem:(id)v1;
@end


/*****************************************************************/

@interface WarmUpCircleView : CGMEGVAnimatedStateView {
    _TtC3CGM14DXCMHelpButton * _helpButton;
}
@property (retain,nonatomic) _TtC3CGM14DXCMHelpButton * helpButton;
- (id)initWithFrame:(struct CGRect)v1;
- (void)initTime;
- (void)initWarmupCircleStuff;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMOffsetTitledButton : UIButton {
    double _leadingMargin;
    double _trailingMargin;
    double _bottomMargin;
    UILabel * _offsetTitleLabel;
    NSLayoutConstraint * _titleXMarginConstraint;
    NSLayoutConstraint * _titleYMarginConstraint;
    UIColor * _textColor;
}
@property (retain,nonatomic) UILabel * offsetTitleLabel;
@property (retain,nonatomic) NSLayoutConstraint * titleXMarginConstraint;
@property (retain,nonatomic) NSLayoutConstraint * titleYMarginConstraint;
@property (retain,nonatomic) UIColor * textColor;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (nonatomic) double bottomMargin;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (void)initCommon;
- (id)titleLabel;
- (void)setMargin:(double)v1 forAttribute:(long long)v2;
- (void)setTitle:(id)v1 forState:(unsigned long long)v2;
- (void)setTitleColor:(id)v1 forState:(unsigned long long)v2;
- (void)touchDown;
- (void)touchUp;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMRingView : UIView {
    float _fractionRemaining;
    UIColor * _ringBackgroundColor;
    double _ringStrokeWidth;
    UIColor * _ringStartColor;
    UIColor * _ringEndColor;
    CAGradientLayer * _gradientLeft;
    CAGradientLayer * _gradientRight;
    CAShapeLayer * _ringMask;
    CAShapeLayer * _maskingRing;
}
@property (retain,nonatomic) CAGradientLayer * gradientLeft;
@property (retain,nonatomic) CAGradientLayer * gradientRight;
@property (retain,nonatomic) CAShapeLayer * ringMask;
@property (retain,nonatomic) CAShapeLayer * maskingRing;
@property (retain,nonatomic) UIColor * ringBackgroundColor;
@property (nonatomic) double ringStrokeWidth;
@property (retain,nonatomic) UIColor * ringStartColor;
@property (retain,nonatomic) UIColor * ringEndColor;
@property (readonly,nonatomic) float fractionRemaining;
- (id)initWithCoder:(id)v1;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (void)setupRing;
- (void)layoutSubviews;
- (void)setRingStartColor:(id)v1 endColor:(id)v2;
- (void)setFractionRemaining:(float)v1 animated:(bool)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMExtensionEngine : NSObject<CGMSubscriberDataSource,WCSessionDelegate> {
    NSString * _logName;
    WCSession * _session;
    NSDate * _lastComplicationUpdate;
    NSDate * _lastAppContextTransfer;
}
@property (retain) NSString * logName;
@property (retain) WCSession * session;
@property (retain) NSDate * lastComplicationUpdate;
@property (retain) NSDate * lastAppContextTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (void)sendWatchAlertSettingsUserInfo;
- (id)encryptedAlertSettings;
- (void)transferUserInfo:(id)v1 messageDataName:(id)v2;
- (id)encryptExtensionData:(id)v1 messageDataName:(id)v2;
- (void)sessionDidDeactivate:(id)v1;
- (void)session:(id)v1 activationDidCompleteWithState:(long long)v2 error:(id)v3;
- (void)sessionDidBecomeInactive:(id)v1;
- (id)init;
- (void)didEnterNewBGCalibration:(id)v1;
- (void)bluetoothCentralDidUpdateState:(id)v1;
- (void)notifySubscriberOfNewCGMDataUpdate:(unsigned long long)v1;
- (void)updateTodayWidgetAndWatchSnapshot:(bool)v1;
- (void)session:(id)v1 didReceiveMessage:(id)v2;
- (void)session:(id)v1 didReceiveMessage:(id)v2 replyHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)session:(id)v1 didFinishUserInfoTransfer:(id)v2 error:(id)v3;
- (void)updateDataOnWatch:(id)v1 calibrated:(bool)v2;
- (id)createSnapshotDictionary:(id)v1;
- (id)createAlertScheduleDictionary;
- (void)updateWidgetExtensionsUserDefaultsAndNotify;
- (void)wipeData;
- (void)notifyTodayExtensionUserDefaultsUpdated;
- (void)notifyHomeWidgetExtensionUserDefaultsUpdated;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMNotificationManager : NSObject<UNUserNotificationCenterDelegate> {
    bool _notificationPosted;
    long long _currentAlertIntervalCount;
    NSPointerArray * _subscribedDelegates;
    NSMutableDictionary * _currentNotifications;
    NSObject<OS_dispatch_queue> * _currentNotificationQueue;
    NSObject<OS_dispatch_queue> * _subscribersQueue;
}
@property (retain,nonatomic) NSMutableDictionary * currentNotifications;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * currentNotificationQueue;
@property (retain,nonatomic) NSObject<OS_dispatch_queue> * subscribersQueue;
@property (nonatomic) long long currentAlertIntervalCount;
@property (nonatomic) bool notificationPosted;
@property (readonly) NSPointerArray * subscribedDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedInstance;
- (id)init;
- (void)resetNotifications;
- (void)synchronizeLocalNotifications;
- (void)addLocalNotification:(id)v1;
- (void)cancelAllNotifications;
- (void)cancelNotificationForAlert:(unsigned long long)v1;
- (void)areNotificationsEnabled:(void (^ /* unknown block signature */)(void))v1;
- (void)registerNotifications:(void (^ /* unknown block signature */)(void))v1;
- (void)registerForPushNotifications;
- (void)getNotificationSettings;
- (bool)isActiveNotification:(unsigned long long)v1;
- (void)showAndUpdateAlertNow:(id)v1 alertType:(unsigned long long)v2 soundFileName:(id)v3 actionButton:(unsigned long long)v4 notificationSound:(void (^ /* unknown block signature */)(void))v5;
- (void)showAndUpdateAlertAtFutureTime:(id)v1 alertType:(unsigned long long)v2 soundFileName:(id)v3 fireDate:(id)v4 actionButton:(unsigned long long)v5 notificationSound:(void (^ /* unknown block signature */)(void))v6;
- (void)scheduleNotificationInFuture:(id)v1 alertType:(unsigned long long)v2 fireDate:(id)v3 completion:(void (^ /* unknown block signature */)(void))v4;
- (void)scheduleNotificationNow:(id)v1 alertType:(unsigned long long)v2 soundFileName:(id)v3 completion:(void (^ /* unknown block signature */)(void))v4;
- (void)scheduleLocalNotification:(id)v1 completion:(void (^ /* unknown block signature */)(void))v2;
- (void)registerCriticalNotifications:(void (^ /* unknown block signature */)(void))v1;
- (void)areTimeSensitiveNotificationsEnabled:(void (^ /* unknown block signature */)(void))v1;
- (void)areCriticalNotificationsEnabled:(void (^ /* unknown block signature */)(void))v1;
- (void)activeAppWithNotificationUpdate:(id)v1;
- (void)launchedIntoAppWithNotification:(id)v1;
- (void)notifySubscribersOfActive:(id)v1;
- (void)notifySubscribersOfAck:(id)v1;
- (void)appDidBecomeActive:(id)v1;
- (id)stringForNotificationTriggerDate:(id)v1;
- (void)subscribeForNotificationUpdates:(id)v1;
- (void)userNotificationCenter:(id)v1 willPresentNotification:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void)userNotificationCenter:(id)v1 didReceiveNotificationResponse:(id)v2 withCompletionHandler:(void (^ /* unknown block signature */)(void))v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceBatteryRecord : NSObject {
    bool _resistanceAvailable;
    unsigned char _runtime;
    char _temperature;
    unsigned short _staticVoltage;
    unsigned short _dynamicVoltage;
    unsigned short _resistance;
}
@property (nonatomic) bool resistanceAvailable;
@property (readonly,nonatomic) unsigned short staticVoltage;
@property (readonly,nonatomic) unsigned short dynamicVoltage;
@property (readonly,nonatomic) unsigned short resistance;
@property (readonly,nonatomic) unsigned char runtime;
@property (readonly,nonatomic) char temperature;
@property (readonly,nonatomic) NSDictionary * supportLoggerInfo;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned short)v1 dynamicVoltage:(unsigned short)v2 resistance:(unsigned short)v3 runtime:(unsigned char)v4 temperature:(char)v5;
- (id)initWithDictionary:(id)v1;
@end


/*****************************************************************/

@interface DCGMServiceCalBoundsRecord : NSObject {
    unsigned char _weight;
    unsigned char _autoCal;
    unsigned short _bgErr0;
    unsigned short _bgErr1;
    unsigned short _bgBoundMin;
    unsigned short _bgBoundMax;
    unsigned short _lastBG;
    unsigned int _lastBGTime;
}
@property (readonly) unsigned char weight;
@property (readonly) unsigned short bgErr0;
@property (readonly) unsigned short bgErr1;
@property (readonly) unsigned short bgBoundMin;
@property (readonly) unsigned short bgBoundMax;
@property (readonly) unsigned short lastBG;
@property (readonly) unsigned int lastBGTime;
@property (readonly) unsigned char autoCal;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1 bgErr0:(unsigned short)v2 bgErr1:(unsigned short)v3 bgBoundMin:(unsigned short)v4 bgBoundMax:(unsigned short)v5 lastBG:(unsigned short)v6 lastBGTime:(unsigned int)v7 autoCal:(unsigned char)v8;
- (id)initWithDictionary:(id)v1;
@end


/*****************************************************************/

@interface SafetyViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    int _index;
    DXCMBlockButton * _iUnderstand;
    DXCMBlockButton * _safetyStatement;
    UILabel * _scrolltoContinueLabel;
}
@property (retain,nonatomic) DXCMBlockButton * iUnderstand;
@property (retain,nonatomic) DXCMBlockButton * safetyStatement;
@property (retain,nonatomic) UILabel * scrolltoContinueLabel;
@property int index;
@property (readonly) UIView * view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)next;
- (void)scrollViewDidScroll:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBaseNavigationController : UINavigationController {
    bool _allowsRotation;
}
@property (nonatomic) bool allowsRotation;
- (void)viewDidLoad;
- (long long)modalPresentationStyle;
- (bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
@end


/*****************************************************************/

@interface PairingCircleView : CGMBaseEGVView {
    UILabel * _textLabel;
    DXCMCircularSpinnerView * _searchingTransmitterCircleView;
}
@property (retain,nonatomic) UILabel * textLabel;
@property (retain,nonatomic) DXCMCircularSpinnerView * searchingTransmitterCircleView;
- (id)initWithFrame:(struct CGRect)v1;
- (void)initPairingCircleStuff;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMServerCommHelper : NSObject
+ (bool)saveAlertScheduleOnServer;
+ (bool)saveAlertSettingsOnServer;
+ (bool)saveShareStateOnServer;
+ (bool)saveGraphHeightOnServer;
+ (bool)saveProductModeOnServer;
+ (id)getAlertDict:(id)v1;
+ (void)saveSingleAlert:(id)v1 existsOnServer:(bool)v2;
+ (bool)handleException:(id)v1 EventName:(id)v2;
@end


/*****************************************************************/

@interface CGMShareViewController : DXCMBaseViewController {
    bool _isUpdatingContacts;
    bool _isRefreshing;
    UITableView * _tableView;
    UIView * _headerView;
    NSMutableArray * _contactIds;
    NSMutableArray * _contactCells;
    DXCMCGMBaseSwitchTableViewCell * _shareToggleCell;
    UIRefreshControl * _refreshControl;
    NSString * _selectedContactID;
}
@property (retain,nonatomic) UIView * headerView;
@property (retain) NSMutableArray * contactIds;
@property (retain) NSMutableArray * contactCells;
@property bool isUpdatingContacts;
@property (retain,nonatomic) DXCMCGMBaseSwitchTableViewCell * shareToggleCell;
@property (retain,nonatomic) UIRefreshControl * refreshControl;
@property bool isRefreshing;
@property (retain,nonatomic) NSString * selectedContactID;
@property (retain,nonatomic) UITableView * tableView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)applicationWillEnterForeground:(id)v1;
- (void)viewWillDisappear:(bool)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)populateContactCells;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)onSharingSwitch:(id)v1;
- (void)refreshFollowers;
- (void)listFollowersFromServerWithStatusHUD:(id)v1;
- (void)updateTable;
- (void)unwindToFollowersScreen:(id)v1;
- (void)displayModalViewWithDescription:(id)v1 navigationTitle:(id)v2;
- (void)processModalForHelp;
- (void)helpButtonTapped;
- (id)createViewWithTitle:(id)v1 titleOffsetTop:(double)v2 withAccessibilityId:(id)v3;
- (void)dataConsentStatusChangedRemotely;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceEGVRecord : NSObject {
    unsigned char _algState;
    char _rate;
    unsigned short _value;
    unsigned short _flags;
    unsigned short _predictedValue;
    unsigned int _seqNum;
    unsigned int _timeStamp;
}
@property (readonly) unsigned int seqNum;
@property (readonly) unsigned int timeStamp;
@property (readonly) unsigned short value;
@property (readonly) unsigned short flags;
@property (readonly) unsigned char algState;
@property (readonly) char rate;
@property (readonly) unsigned short predictedValue;
@property (readonly) bool isUrgentLowSoon;
@property (readonly) bool isNoReadingState;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned int)v1 timeStamp:(unsigned int)v2 value:(unsigned short)v3 flags:(unsigned short)v4 algState:(unsigned char)v5 rate:(char)v6;
- (id)initWithValues:(unsigned int)v1 timeStamp:(unsigned int)v2 value:(unsigned short)v3 flags:(unsigned short)v4 algState:(unsigned char)v5 rate:(char)v6 predictedValue:(unsigned short)v7;
- (id)initWithDictionary:(id)v1;
- (id)initWithCGMEGV:(id)v1;
@end


/*****************************************************************/

@interface DataPost : DPBaseObject {
    NSString * _PostId;
    NSString * _PostedTimestamp;
    NSString * _PostHeader;
    NSString * _PublicDataManifest;
    NSString * _PublicDataContent;
    NSString * _PrivateDataManifest;
    NSString * _PrivateDataContent;
    long long _Version;
}
@property (retain) NSString * PostId;
@property (retain) NSString * PostedTimestamp;
@property (retain) NSString * PostHeader;
@property (retain) NSString * PublicDataManifest;
@property (retain) NSString * PublicDataContent;
@property (retain) NSString * PrivateDataManifest;
@property (retain) NSString * PrivateDataContent;
@property long long Version;
- (int)getSequenceNumber;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface EGVCircleView : CGMBaseEGVView {
    UIView * _outsideTrendMagContainer;
    UIView * _trendMagnifyingGlass;
    UIImageView * _imageMagnifyingGlass;
    UIImageView * _imageNoTrendMagnifyingGlass;
    UIImageView * _doubleTriangle;
    UIImageView * _singleTriangle;
    UILabel * _egvLabel;
    UILabel * _unitsLabel;
    UIImageView * _trendArrowDiamond;
    CGMDataMgr * _coreDbMgr;
    double _scaledEgvFontSize;
}
@property (retain,nonatomic) CGMDataMgr * coreDbMgr;
@property (nonatomic) double scaledEgvFontSize;
@property (retain,nonatomic) UIView * outsideTrendMagContainer;
@property (retain,nonatomic) UIView * trendMagnifyingGlass;
@property (retain,nonatomic) UIImageView * imageMagnifyingGlass;
@property (retain,nonatomic) UIImageView * imageNoTrendMagnifyingGlass;
@property (retain,nonatomic) UIImageView * doubleTriangle;
@property (retain,nonatomic) UIImageView * singleTriangle;
@property (retain,nonatomic) UILabel * egvLabel;
@property (retain,nonatomic) UILabel * unitsLabel;
@property (retain,nonatomic) UIImageView * trendArrowDiamond;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)updateEgvCircleView:(id)v1 withAnimation:(bool)v2;
- (void)setTrendArrow:(long long)v1 withAnimation:(bool)v2;
- (void)internalSetTrendRotation:(long long)v1;
- (void)initCircle;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMTransmitterCmdQueueItem : NSObject {
    NSString * _guid;
    NSString * _cmdType;
    NSDictionary * _params;
}
@property (readonly) NSString * guid;
@property (readonly) NSString * cmdType;
@property (readonly) NSDictionary * params;
- (id)initWithValues:(id)v1 pCmd:(id)v2 pParams:(id)v3;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPICountry : NSObject<NSCoding> {
    NSString * _code;
    NSString * _displayName;
}
@property (copy,nonatomic) NSString * code;
@property (copy,nonatomic) NSString * displayName;
- (id)initWithDictionary:(id)v1;
- (id)initWithCoder:(id)v1;
- (void)encodeWithCoder:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPGlucoseRecord : DPBaseRecord {
    NSString * _GlucoseSystemTime;
    NSString * _GlucoseDisplayTime;
    NSString * _TransmitterId;
    long long _TransmitterTime;
    long long _Value;
    NSString * _Status;
    NSString * _TrendArrow;
    double _TrendRate;
    NSString * _InternalStatus;
    NSNumber * _IsBackfilled;
    unsigned long long _SessionStartTime;
    NSNumber * _PredictedValue;
    NSString * _RecordVersion;
}
@property (retain) NSString * GlucoseSystemTime;
@property (retain) NSString * GlucoseDisplayTime;
@property (retain) NSString * TransmitterId;
@property long long TransmitterTime;
@property long long Value;
@property (retain) NSString * Status;
@property (retain) NSString * TrendArrow;
@property double TrendRate;
@property (retain) NSString * InternalStatus;
@property (retain) NSNumber * IsBackfilled;
@property unsigned long long SessionStartTime;
@property (retain) NSNumber * PredictedValue;
@property (retain) NSString * RecordVersion;
- (id)dictionary;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface Base64StringConverter : NSObject
+ (id)compressedBase64StringFromData:(id)v1;
+ (id)dataFromCompressedBase64String:(id)v1;
+ (id)gzipString:(id)v1;
+ (id)gzip:(id)v1;
+ (id)ungzip:(id)v1;
+ (id)base64StringFromObject:(id)v1;
+ (id)objectFromBase64String:(id)v1;
+ (id)base64StringFromData:(id)v1;
+ (id)base64URLStringFromData:(id)v1;
+ (id)base64URLStringFromString:(id)v1;
+ (id)HMAC_SHA_256_128:(id)v1 secret:(id)v2;
+ (id)dataFromBase64String:(id)v1;
+ (id)paddedBase64String:(id)v1;
+ (id)unpaddedBase64String:(id)v1;
+ (id)base64UrlHmacFromString:(id)v1 secret:(id)v2;
@end


/*****************************************************************/

@interface DXCMBadgeBarItem : UIBarButtonItem {
    long long _badgeValue;
    UIImage * _buttonImage;
    UIButton * _button;
    UILabel * _badgeLabel;
    NSDictionary * _textAttributes;
}
@property (retain,nonatomic) UILabel * badgeLabel;
@property (retain,nonatomic) UIButton * button;
@property (retain,nonatomic) NSDictionary * textAttributes;
@property (nonatomic) long long badgeValue;
@property (retain,nonatomic) UIImage * buttonImage;
- (id)initWithButton:(id)v1;
- (struct CGSize)getSizeForText:(id)v1 attributes:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SetupHighAlertViewController : SetupWizardBaseViewController<CGMAlertLimitChangedDelegate> {
    NSNumber * _selectedAlertLimit;
    CGMEditAlertLimitViewController * _childViewController;
    DXCMBlockButton * _saveButton;
}
@property (retain,nonatomic) NSNumber * selectedAlertLimit;
@property (retain,nonatomic) CGMEditAlertLimitViewController * childViewController;
@property (retain,nonatomic) DXCMBlockButton * saveButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)alertLimitChanged:(id)v1;
- (void)encodeRestorableStateWithCoder:(id)v1;
- (void)decodeRestorableStateWithCoder:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (id)userDefaultLimitForHighAlert;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAlertScheduleNameViewController : DXCMBaseViewController<UITextFieldDelegate> {
    CGMAlertSchedule * _alertSchedule;
    NSObject<CGMAlertScheduleNameChangedDelegate> * _alertScheduleDelegate;
    DXCMBaseTextField * _nameTextField;
    NSString * _placeHolderText;
}
@property (nonatomic) DXCMBaseTextField * nameTextField;
@property (nonatomic) NSString * placeHolderText;
@property (retain,nonatomic) CGMAlertSchedule * alertSchedule;
@property (nonatomic) NSObject<CGMAlertScheduleNameChangedDelegate> * alertScheduleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)updateAlertScheduleName:(id)v1;
- (void)willMoveToParentViewController:(id)v1;
- (void)saveAlertScheduleName;
- (void)saveAlertScheduleNameAndExit;
- (void)alertScheduleNameTextDidChanged:(id)v1;
- (bool)textFieldShouldReturn:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPBaseRecord : DPBaseObject {
    NSString * _RecordedSystemTime;
    NSString * _RecordedDisplayTime;
}
@property (retain) NSString * RecordedSystemTime;
@property (retain) NSString * RecordedDisplayTime;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMTransmitter : DXCMBluetoothPeripheral<DXCMNotificationDelegate> {
    unsigned char _transmitterBondStatus;
    unsigned char _transmitterAlgState;
    unsigned char _displayCalibrationState;
    bool _transmitterSessionExpiry;
    unsigned char _transmitterType;
    bool _privateDataContinueDownload;
    bool _reconnectEnabled;
    bool _readBatteryStatusEnable;
    bool _serviceReady;
    bool _primaryAppKeyDead;
    bool _isBluetoothStarted;
    bool _wakeFromSleep;
    unsigned short _transmitterWarmupTime;
    unsigned int _transmitterAppKeyTimeSeconds;
    unsigned int _transmitterBatteryReadTimeSeconds;
    unsigned int _transmitterCurrentTimeTicks;
    unsigned int _transmitterSessionDurationTicks;
    unsigned int _transmitterSessionStartTicks;
    int _transmitterTimeOffset;
    unsigned int _lastConnectionTime;
    unsigned int _failedConnectionCount;
    unsigned int _transmitterSWNumber;
    unsigned int _transmitterAPIVersion;
    unsigned int _transmitterSessionDays;
    unsigned int _transmitterStorageTime;
    unsigned int _transmitterMaxStorageTime;
    unsigned int _transmitterMaxRuntime;
    unsigned int _privateDataLastUpdateTicks;
    unsigned int _minBackfillTime;
    unsigned int _transmitterScanStartTime;
    unsigned int _transmitterPredictiveStateStartTime;
    unsigned int _transmitterNoReadingsStartTime;
    unsigned int _bgWeight;
    unsigned int _bgErr0;
    unsigned int _bgErr1;
    unsigned int _bgBoundMin;
    unsigned int _bgBoundMax;
    unsigned int _calBoundsLastBG;
    unsigned int _calBoundsLastBGTime;
    unsigned int _autoCal;
    NSObject<DXCMTransmitterDelegate> * _delegate;
    NSString * _transmitterAppLevelKey;
    NSString * _transmitterAppLevelKeyBackup;
    NSString * _transmitterId;
    NSDate * _displaySessionStartTimeUTC;
    NSString * _transmitterVersion;
    NSString * _transmitterVersionExt;
    long long _transmitterError;
    long long _transmitterBatteryStatus;
    double _privateDataLastUpdateTime;
    long long _transmitterPredictiveState;
    double _calBoundsTimeStamp;
    DXCMTransmitterCmdQueue * _cmdQueue;
    DCGMService * _service;
    DXCMTransmitterAuthentication * _authenticationHelper;
    double _disconnectSleepTime;
    DXCMTransmitterConnectionLog * _connectionLog;
    double _disconnectWaitTime;
    unsigned long long _txComTask;
    unsigned long long _txStartupWaitTask;
}
@property (retain,nonatomic) DXCMTransmitterCmdQueue * cmdQueue;
@property (retain,nonatomic) DCGMService * service;
@property (nonatomic) bool serviceReady;
@property (retain,nonatomic) DXCMTransmitterAuthentication * authenticationHelper;
@property (nonatomic) bool primaryAppKeyDead;
@property (nonatomic) double disconnectSleepTime;
@property (retain,nonatomic) DXCMTransmitterConnectionLog * connectionLog;
@property (retain,nonatomic) NSString * transmitterAppLevelKey;
@property (retain,nonatomic) NSString * transmitterAppLevelKeyBackup;
@property (retain,nonatomic) NSString * transmitterId;
@property (retain,nonatomic) NSDate * displaySessionStartTimeUTC;
@property (retain,nonatomic) NSString * transmitterVersion;
@property (retain,nonatomic) NSString * transmitterVersionExt;
@property (readonly,nonatomic) double disconnectWaitTime;
@property (nonatomic) bool isBluetoothStarted;
@property (nonatomic) bool wakeFromSleep;
@property unsigned long long txComTask;
@property unsigned long long txStartupWaitTask;
@property (nonatomic) NSObject<DXCMTransmitterDelegate> * delegate;
@property (readonly,nonatomic) bool startPending;
@property (readonly,nonatomic) bool stopPending;
@property (readonly,nonatomic) unsigned int transmitterAppKeyTimeSeconds;
@property (readonly,nonatomic) unsigned int transmitterBatteryReadTimeSeconds;
@property (readonly,nonatomic) unsigned int transmitterCurrentTimeTicks;
@property (readonly,nonatomic) unsigned int transmitterSessionDurationTicks;
@property (readonly,nonatomic) unsigned int transmitterSessionStartTicks;
@property (readonly,nonatomic) int transmitterTimeOffset;
@property (readonly,nonatomic) unsigned int lastConnectionTime;
@property (readonly,nonatomic) unsigned int failedConnectionCount;
@property (readonly,nonatomic) unsigned int transmitterSWNumber;
@property (readonly,nonatomic) unsigned int transmitterAPIVersion;
@property (readonly,nonatomic) unsigned int transmitterSessionDays;
@property (readonly,nonatomic) long long transmitterError;
@property (readonly,nonatomic) long long transmitterBatteryStatus;
@property (readonly,nonatomic) unsigned int transmitterStorageTime;
@property (readonly,nonatomic) unsigned int transmitterMaxStorageTime;
@property (readonly,nonatomic) unsigned int transmitterMaxRuntime;
@property (readonly,nonatomic) unsigned char transmitterBondStatus;
@property (readonly,nonatomic) unsigned char transmitterAlgState;
@property (readonly,nonatomic) unsigned char displayCalibrationState;
@property (readonly,nonatomic) bool transmitterSessionExpiry;
@property (readonly,nonatomic) unsigned char transmitterType;
@property (readonly,nonatomic) bool hasTransmitterManifest;
@property (readonly,nonatomic) bool hasTransmitterEncryptionInfo;
@property (readonly,nonatomic) unsigned int privateDataLastUpdateTicks;
@property (readonly,nonatomic) double privateDataLastUpdateTime;
@property (readonly,nonatomic) bool privateDataContinueDownload;
@property (readonly,nonatomic) unsigned int minBackfillTime;
@property (readonly,nonatomic) unsigned int transmitterScanStartTime;
@property (readonly,nonatomic) long long transmitterPredictiveState;
@property (readonly,nonatomic) unsigned int transmitterPredictiveStateStartTime;
@property (readonly,nonatomic) unsigned int transmitterNoReadingsStartTime;
@property (readonly,nonatomic) unsigned short transmitterWarmupTime;
@property (readonly,nonatomic) double calBoundsTimeStamp;
@property (readonly,nonatomic) unsigned int bgWeight;
@property (readonly,nonatomic) unsigned int bgErr0;
@property (readonly,nonatomic) unsigned int bgErr1;
@property (readonly,nonatomic) unsigned int bgBoundMin;
@property (readonly,nonatomic) unsigned int bgBoundMax;
@property (readonly,nonatomic) unsigned int calBoundsLastBG;
@property (readonly,nonatomic) unsigned int calBoundsLastBGTime;
@property (readonly,nonatomic) unsigned int autoCal;
@property (readonly,nonatomic) unsigned char calibrationMode;
@property (nonatomic) bool reconnectEnabled;
@property (readonly,nonatomic) bool readBatteryStatusEnable;
@property (readonly,nonatomic) bool bonded;
@property (readonly,nonatomic) bool isTransmitterSetup;
@property (readonly,nonatomic) unsigned char algorithmState;
@property (readonly,nonatomic) bool calibrationPending;
@property (readonly,nonatomic) unsigned short pendingCalibrationValue;
@property (readonly,nonatomic) double pendingCalibrationRecordedTime;
@property (readonly,nonatomic) unsigned char calibrationState;
@property (readonly,nonatomic) unsigned int lifeRemaining;
@property (readonly,nonatomic) unsigned int sessionTimeRemaining;
@property (readonly,nonatomic) unsigned int activateByTime;
@property (readonly,nonatomic) bool isBLEOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)dealloc;
- (id)initWithName:(id)v1;
- (void)startBluetooth;
- (void)resetProperties;
- (bool)setupNewTransmitter:(id)v1;
- (bool)setupExistingTransmitter:(id)v1;
- (void)startScan;
- (void)stopScan;
- (void)clearSessionExpiry;
- (long long)numberOfPreviousSessionsForTransmitter:(id)v1;
- (bool)startSensor;
- (bool)stopSensor;
- (bool)calibrateWithMeter:(id)v1 lastMeter:(id)v2;
- (void)peripheralStateUpdate:(long long)v1;
- (bool)peripheralFound:(id)v1 advData:(id)v2 rssi:(id)v3;
- (void)peripheralConnected:(long long)v1;
- (void)peripheralDisconnected:(long long)v1;
- (void)discoveredServiceReady:(id)v1;
- (void)connectAndProcess;
- (void)peripheralRSSI:(long long)v1;
- (void)peripheralDidUpdateName:(id)v1;
- (void)processAuthenticatedConnection;
- (bool)validateDiscoveredPeripheral:(unsigned char)v1;
- (long long)authenticateAndBond;
- (long long)completeBonding;
- (unsigned char)authenticateWithTxId:(id)v1;
- (unsigned char)authenticateWithAppKey:(id)v1 appKey:(id)v2 appKeyBackup:(id)v3;
- (void)checkAppLevelKey;
- (void)syncTransmitterTime:(id)v1;
- (void)doStartSession:(id)v1 sessionLogType:(long long)v2;
- (void)doStopSession:(unsigned int)v1 sessionLogType:(long long)v2;
- (bool)storeTransmitterStateWithEGV:(id)v1;
- (bool)storeTransmitterStateWithEGVRecord:(id)v1;
- (bool)storeTransmitterBackfilledEGVs:(id)v1;
- (void)storeTransmitterCalBounds:(id)v1;
- (bool)readTransmitterVersion;
- (bool)readTransmitterBatteryStatus:(bool)v1;
- (void)readOtherOpCodesIfEnabled;
- (void)readDiagnosticData;
- (void)insertDiagnosticRecord:(id)v1;
- (void)deleteDiagnosticRecordWithType:(unsigned char)v1;
- (void)fetchStreamType:(unsigned char)v1;
- (id)parseStreamResponse:(id)v1 withDataStreamRecord:(id)v2;
- (void)processStreamData:(id)v1 withStreamType:(unsigned char)v2 startTime:(unsigned int)v3 endTime:(unsigned int)v4 currentTime:(unsigned int)v5;
- (id)backfillEGVs:(id)v1;
- (unsigned char)getTransmitterTypeFromId:(id)v1;
- (void)processCommandQueue;
- (void)processStartCommand:(id)v1;
- (void)processStartCommandReply:(id)v1 startReply:(id)v2;
- (void)processStopCommand:(id)v1;
- (void)processStopCommandReply:(id)v1 stopReply:(id)v2;
- (void)processCalibrationCommand:(id)v1;
- (void)processCalibrationCommandReply:(id)v1 calReply:(id)v2;
- (void)setTransmitterWarmupTime:(unsigned short)v1;
- (void)setPrivateDataLastUpdateTime:(double)v1;
- (void)setPrivateDataLastUpdateTicks:(unsigned int)v1;
- (void)setPrivateDataContinueDownload:(bool)v1;
- (void)setTransmitterCurrentTimeTicks:(unsigned int)v1;
- (void)setTransmitterSessionDurationTicks:(unsigned int)v1;
- (void)setTransmitterSessionStartTicks:(unsigned int)v1;
- (void)setTransmitterTimeOffset:(int)v1;
- (void)setLastConnectionTime:(unsigned int)v1;
- (void)resetFailedConnectionCount;
- (void)incrementFailedConnectionCount;
- (void)setTransmitterSWNumber:(unsigned int)v1;
- (void)setTransmitterAPIVersion:(unsigned char)v1;
- (void)setTransmitterSessionDays:(unsigned int)v1;
- (void)setMinBackfillTime:(unsigned int)v1;
- (void)setTransmitterError:(long long)v1;
- (void)setTransmitterBatteryStatus:(long long)v1;
- (void)setTransmitterStorageTime:(unsigned int)v1;
- (void)setTransmitterMaxStorageTime:(unsigned int)v1;
- (void)setTransmitterMaxRuntime:(unsigned int)v1;
- (void)setTransmitterBondStatus:(unsigned char)v1;
- (void)setTransmitterAlgState:(unsigned char)v1;
- (void)setTransmitterSessionExpiry:(bool)v1;
- (void)setDisplayCalibrationStateFromAlgState:(unsigned char)v1;
- (void)setDisplayCalibrationState:(unsigned char)v1;
- (void)setReadBatteryStatusEnable:(bool)v1;
- (void)setTransmitterType:(unsigned char)v1;
- (void)processNotificationAppCameToForeground:(unsigned long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ClarityHelper : NSObject
+ (bool)isClarityAppInstalled;
+ (void)launchClarityApp;
+ (id)logName;
@end


/*****************************************************************/

@interface DPUserEventRecord : DPBaseRecord {
    NSString * _EventSystemTime;
    NSString * _EventDisplayTime;
    NSString * _EventId;
    NSString * _Name;
    NSString * _SubType;
    long long _Value;
    NSString * _Units;
    NSString * _RecordVersion;
    NSString * _RecordStatus;
}
@property (retain) NSString * EventSystemTime;
@property (retain) NSString * EventDisplayTime;
@property (retain) NSString * EventId;
@property (retain) NSString * Name;
@property (retain) NSString * SubType;
@property (nonatomic) long long Value;
@property (retain) NSString * Units;
@property (retain) NSString * RecordVersion;
@property (retain) NSString * RecordStatus;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMShareNoFollowersViewController : DXCMBaseShareViewController
- (void)viewDidLoad;
@end


/*****************************************************************/

@interface PairTransmitterViewController : SetupWizardBaseViewController<UITextViewDelegate> {
    UIImageView * _errorImageView;
}
@property (retain,nonatomic) UIImageView * errorImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)onClose;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCircularSpinnerView : UIView {
    double _angle;
    double _rotationAngle;
    UIColor * _fillColor;
    UIColor * _pathColor;
    double _thickness;
}
@property (retain,nonatomic) UIColor * fillColor;
@property (retain,nonatomic) UIColor * pathColor;
@property (nonatomic) double thickness;
- (id)initWithFrame:(struct CGRect)v1;
- (void)drawRect:(struct CGRect)v1;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMEGVStackSubview : DXCMBaseView {
    UIButton * _calibrateButton;
    UIButton * _shareButton;
    CGMSoundButton * _soundButton;
    CGMCircleView * _circleView;
    UILabel * _helpTextLabel;
}
@property (retain,nonatomic) UIButton * calibrateButton;
@property (retain,nonatomic) UIButton * shareButton;
@property (retain,nonatomic) CGMSoundButton * soundButton;
@property (retain,nonatomic) CGMCircleView * circleView;
@property (retain,nonatomic) UILabel * helpTextLabel;
- (void)awakeFromNib;
- (void)commonButtonSetup:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSafetyStatementsViewController : DXCMBaseViewController<UITableViewDelegate,UITableViewDataSource> {
    NSMutableArray * _safetyList;
    UITableView * _tableView;
}
@property (retain,nonatomic) NSMutableArray * safetyList;
@property (retain,nonatomic) UITableView * tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)loadSafetyData;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMHKSampleManager : NSObject {
    CGMDataMgr * _coreDataMgr;
}
@property (retain,nonatomic) CGMDataMgr * coreDataMgr;
+ (id)sharedInstance;
- (id)init;
- (void)filterEventsFromSamples:(id)v1;
- (void)saveMeal:(id)v1;
- (void)saveMealAsCorrelation:(id)v1;
- (id)setObjectsInMealEvent:(id)v1 withSample:(id)v2;
- (void)saveWorkout:(id)v1;
- (void)deleteEventsFromDB:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMBlockButton : UIButton {
    void (^ /* unknown block signature */)(void) _clickBlock;
}
@property (nonatomic) struct UIEdgeInsets hitTestEdgeInsets;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) clickBlock;
+ (id)blockButtonOkWithTitle:(id)v1;
+ (id)blockButtonOKWithImage:(id)v1;
+ (id)blockButtonCancelWithTitle:(id)v1;
+ (id)blockButtonLayoutConstraintsForOkButton:(id)v1 cancelButton:(id)v2;
+ (void)applyOkThemeToButton:(id)v1;
+ (void)applyCancelThemeToButton:(id)v1;
+ (void)setCommonAttributes:(id)v1;
- (void)initializeDXCMBlockButton;
- (id)init;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)setEnabled:(bool)v1;
- (struct CGSize)intrinsicContentSize;
- (void)onBlockButton;
- (bool)pointInside:(struct CGPoint)v1 withEvent:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMAPIDataPostAPI : DSAPIBaseAPI {
    NSString * serverURL;
}
+ (id)instance;
- (id)init;
- (void)setServerToDefault;
- (void)setServer:(id)v1;
- (id)getServer;
- (id)PostPatientData2:(id)v1;
- (id)ReadLastDataPost2;
- (void)postServerCallForPatientData:(id)v1 withPayload:(id)v2 withCompletionBlock:(void (^ /* unknown block signature */)(void))v3;
- (void)deleteDeviceKey;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMInsulinEvent : CGMEventBase {
    float _doseAmount;
}
@property float doseAmount;
@property (readonly,nonatomic) long long insulinType;
+ (id)localNameForInsulinEvent:(long long)v1;
+ (id)localNameForInsulinEventEnglish:(long long)v1;
- (long long)event_type;
- (id)completeLocalNameForInsulinEvent;
- (id)dataPostSubType;
- (bool)isShortActingInsulinEvent;
- (id)humanReadableValueWithUnits;
- (float)insulinUnits;
- (id)calloutTitle;
- (id)calloutDetails;
- (id)summaryDetailForEvents:(id)v1;
@end


/*****************************************************************/

@interface CGMExerciseViewController : CGMEventManagerViewController<UITableViewDelegate,UITableViewDataSource,CGMEventDurationPickerTableViewCellDelegate> {
    UITableView * _tableView;
    NSArray * _intensityRowCells;
    NSIndexPath * _selected;
    NSMutableArray * _timeDurationRowCells;
    DXCMCGMBaseTableViewCell * _startTimeCell;
    CGMDatePickerTableViewCell * _datePickerCell;
    DXCMCGMBaseTableViewCell * _durationCell;
    CGMEventDurationPickerTableViewCell * _durationPickerCell;
}
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSArray * intensityRowCells;
@property (copy,nonatomic) NSIndexPath * selected;
@property (retain,nonatomic) NSMutableArray * timeDurationRowCells;
@property (retain,nonatomic) DXCMCGMBaseTableViewCell * startTimeCell;
@property (retain,nonatomic) CGMDatePickerTableViewCell * datePickerCell;
@property (retain,nonatomic) DXCMCGMBaseTableViewCell * durationCell;
@property (retain,nonatomic) CGMEventDurationPickerTableViewCell * durationPickerCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)setupTableView;
- (void)setupCells;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (id)tableView:(id)v1 titleForHeaderInSection:(long long)v2;
- (void)tableView:(id)v1 willDisplayHeaderView:(id)v2 forSection:(long long)v3;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (id)intensityCellForRowAtIndexPath:(id)v1;
- (void)refreshTableSectionIntensity;
- (void)showDatePickerCell:(bool)v1 atIndexPath:(id)v2;
- (void)showDurationPickerCell:(bool)v1 atIndexPath:(id)v2;
- (int)findTableViewCell:(id)v1;
- (void)datePickerDidChange;
- (void)didSelectDurationWithMinutes:(int)v1;
- (bool)isValidData;
- (id)messageForAddEventConfirmation;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceAuthenticationStatusRecord : NSObject {
    unsigned char _authStatus;
    unsigned char _bondStatus;
    unsigned char _failureReason;
}
@property (readonly,nonatomic) unsigned char authStatus;
@property (readonly,nonatomic) unsigned char bondStatus;
@property (readonly,nonatomic) unsigned char failureReason;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1 andBondStatus:(unsigned char)v2 andFailureReason:(unsigned char)v3;
@end


/*****************************************************************/

@interface CGMVideosViewController : DXCMBaseViewController<UITableViewDelegate,UITableViewDataSource> {
    NSMutableArray * section1Cells;
    UITableView * _tableView;
    AVPlayer * _avPlayer;
}
@property (retain,nonatomic) AVPlayer * avPlayer;
@property (retain,nonatomic) UITableView * tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)observeValueForKeyPath:(id)v1 ofObject:(id)v2 change:(id)v3 context:(void *)v4;
- (void)dealloc;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DCGMServiceStopResponseRecord : NSObject {
    unsigned char _responseStatus;
    unsigned int _sessionStopTime;
    DCGMServiceTransmitterTimeRecord * _timeRecord;
}
@property (readonly) unsigned char responseStatus;
@property (readonly) unsigned int sessionStopTime;
@property (readonly) DCGMServiceTransmitterTimeRecord * timeRecord;
+ (id)recordWithData:(id)v1;
- (id)initWithValues:(unsigned char)v1 sessionStopTime:(unsigned int)v2 sessionSigniture:(unsigned int)v3 transmitterTime:(unsigned int)v4;
- (id)initWithValues:(unsigned char)v1 sessionStopTime:(unsigned int)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCGMController : NSObject<DXCMTransmitterDelegate> {
    DXCMTransmitter * _dxcmTransmitter;
}
@property (retain,nonatomic) DXCMTransmitter * dxcmTransmitter;
@property (readonly,nonatomic) long long transmitterPredictiveState;
@property (readonly,nonatomic) unsigned int transmitterPredictiveStateStartTime;
@property (readonly,nonatomic) long long transmitterPredictiveTimeRemaining;
@property (readonly,nonatomic) unsigned int transmitterNoReadingsStartTime;
@property (readonly,nonatomic) unsigned int totalWarmupTimeForTransmitter;
@property (readonly,nonatomic) bool isTransmitterPaired;
@property (readonly,nonatomic) bool isTransmitterSetup;
@property (readonly,nonatomic) unsigned int sessionSignature;
@property (readonly,nonatomic) unsigned int transmitterTicks;
@property (readonly,nonatomic) unsigned int transmitterSessionDays;
@property (readonly,nonatomic) bool atLeastOneSessionLeft;
@property (readonly,nonatomic) bool isLastSession;
@property (readonly,nonatomic) bool isSingleSessionTransmitter;
@property (readonly,nonatomic) unsigned char algorithmState;
@property (readonly,nonatomic) bool startPending;
@property (readonly,nonatomic) bool isInSession;
@property (readonly,nonatomic) bool isInCalibration;
@property (readonly,nonatomic) bool isInWarmup;
@property (readonly,nonatomic) bool isAutoCalibration;
@property (readonly,nonatomic) unsigned char calibrationMode;
@property (readonly,nonatomic) bool isBLEOn;
@property (readonly,nonatomic) long long authorizationStatus;
@property (readonly,nonatomic) unsigned int transmitterLifeRemaining;
@property (readonly,nonatomic) unsigned int transmitterLife;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)sharedController;
+ (void)resetInstance;
- (id)init;
- (void)startBluetooth;
- (id)getTransmitterRef;
- (bool)setupNewTransmitter:(id)v1;
- (bool)setupExistingTransmitter:(id)v1 andSendDisconnect:(bool)v2;
- (id)getEndOfSessionTimestamp;
- (id)getTransmitterId;
- (void)startTransmitterScan;
- (void)stopTransmitterScan;
- (void)cancelTransmitterReconnect;
- (bool)transmitterSessionExpiry;
- (void)clearSessionExpiry;
- (bool)startSensor;
- (void)stopSensor;
- (bool)calibrateWithMeter:(id)v1 lastMeter:(id)v2;
- (id)displaySessionStartTime;
- (unsigned int)displaySessionStartTimeSeconds;
- (unsigned int)transmitterTimeOffset;
- (unsigned short)lastBGValue;
- (id)txTicksToDisplayDate:(unsigned int)v1;
- (id)lastBGTime;
- (id)transmitterVersion;
- (unsigned int)transmitterSWNumber;
- (bool)transmitterFatalError;
- (bool)transmitterBatteryLow;
- (id)transmitterActivationDate;
- (id)transmitterActivateByDate;
- (unsigned int)lastConnectionTime;
- (unsigned int)failedConnectionCount;
- (bool)calibrationPending;
- (unsigned char)calibrationState;
- (long long)trendArrowFromString:(id)v1;
- (void)resetTransmitterProperties;
- (struct anonymous_type_25)currentCalibrationBounds;
- (unsigned int)transmitterSessionTimeRemaining;
- (id)getTransmitterVersion;
- (id)getTransmitterSoftwareNumber;
- (unsigned char)getTransmitterType;
- (void)registerTransmitterIdWithServer;
- (void)dxcmTransmitter:(id)v1 transmitterDidConnect:(id)v2;
- (void)dxcmTransmitter:(id)v1 transmitterDidDisconnect:(id)v2;
- (void)dxcmTransmitter:(id)v1 transmitterDidStartSession:(id)v2 withType:(long long)v3;
- (void)dxcmTransmitter:(id)v1 transmitterDidStopSession:(id)v2 withType:(long long)v3;
- (void)compabilityDidChangeNotification:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface ErrorCircleHelpPopUps : UIView<UITextViewDelegate> {
    UIImageView * _iPhoneBTPairingImageView;
    UIImageView * _iPodBTPairingImageView;
    UITextView * _transmitterHelpTextDesc;
    UITextView * _restartSmartDeviceTextDesc;
    UILabel * _warmupHelpTextDesc;
    DXCMBlockButton * _goToSettings;
    UILabel * _turnOnBluetoothSharing;
    UILabel * _whatHappenedTitle;
    UILabel * _whatHappenedTextDesc;
    UILabel * _sensorErrorInstructionsTextDesc;
    UILabel * _whatToDoTitle;
    UILabel * _whatToDoTextDesc;
    UITextView * _sensorErrorContacSupportTextDesc;
}
@property (nonatomic) UIImageView * iPhoneBTPairingImageView;
@property (nonatomic) UIImageView * iPodBTPairingImageView;
@property (nonatomic) UITextView * transmitterHelpTextDesc;
@property (nonatomic) UITextView * restartSmartDeviceTextDesc;
@property (nonatomic) UILabel * warmupHelpTextDesc;
@property (nonatomic) DXCMBlockButton * goToSettings;
@property (nonatomic) UILabel * turnOnBluetoothSharing;
@property (nonatomic) UILabel * whatHappenedTitle;
@property (nonatomic) UILabel * whatHappenedTextDesc;
@property (nonatomic) UILabel * sensorErrorInstructionsTextDesc;
@property (nonatomic) UILabel * whatToDoTitle;
@property (nonatomic) UILabel * whatToDoTextDesc;
@property (nonatomic) UITextView * sensorErrorContacSupportTextDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)awakeFromNib;
- (void)setupTurnOnBluetoothSharingText;
- (void)setupTemporaryErrorScreen;
- (void)setupNoSignalScreen;
- (void)setCommonAttributesForTextViewWithHyperlinks:(id)v1;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDeviceInfoDetailViewController : DXCMBaseViewController {
    NSString * _navigationTitle;
    NSString * _detailInfo;
    UITableView * _tableView;
}
@property (nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSString * navigationTitle;
@property (retain,nonatomic) NSString * detailInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)didReceiveMemoryWarning;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DSAPIPublisherAPI : DSAPIBaseAPI {
    NSString * serverURL;
}
+ (id)instance;
- (id)init;
- (void)setServerToDefault;
- (void)setServer:(id)v1;
- (void)checkInternet;
- (id)SystemUtcTime;
- (id)CheckMonitoredReceiverAssignmentStatus2:(id)v1;
- (id)ReadContactByName:(id)v1;
- (id)GetMonitoredReceiverIdIfEnabled2;
- (id)ReplacePublisherAccountMonitoredReceiver2:(id)v1;
- (void)StopMonitoringReceiver2:(id)v1;
- (void)StopRemoteMonitoringSession2;
- (bool)isTransmitterIdTaken:(id)v1;
- (void)surrenderTransmitterId;
- (void)CreateNamedValue2:(id)v1 withName:(id)v2;
- (void)CreateNamedValueWithDict:(id)v1 withName:(id)v2;
- (void)CreateNamedValueWithArray:(id)v1 withName:(id)v2;
- (id)ReadNamedValue2:(id)v1;
- (id)ReadDictFromNamedValue:(id)v1;
- (id)ReadArrayFromNamedValue:(id)v1;
- (void)UpdateNamedValue2:(id)v1 withName:(id)v2;
- (void)UpdateNamedValueWithDict:(id)v1 withName:(id)v2;
- (void)UpdateOrCreateNamedValueWithDict:(id)v1 withName:(id)v2;
- (void)UpdateNamedValueWithArray:(id)v1 withName:(id)v2;
- (void)UpdateOrCreateNamedValueWithArray:(id)v1 withName:(id)v2;
- (int)DeleteAllNamedValues2:(id)v1;
- (int)DeleteAllNamedValues2;
- (int)DeleteAllAndroidNamedValues;
- (id)ListValueNames2;
- (id)wrapDictionaryWithVersionAndTimestamp:(id)v1;
- (id)wrapArrayWithVersionAndTimestamp:(id)v1;
- (id)getServer;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMInsulinEventViewController : CGMEventManagerViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate> {
    double _animDuration;
    unsigned long long _animCurve;
    UIView * keyboardSpacerView;
    NSLayoutConstraint * keyboardHeight;
    UIView * keyboardSeparatorView;
    UITableView * _tableView;
    DXCMCGMBaseTextFieldTableViewCell * _doseAmountCell;
    DXCMCGMBaseTableViewCell * _doseTimeCell;
    CGMDatePickerTableViewCell * _datePickerCell;
}
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) DXCMCGMBaseTextFieldTableViewCell * doseAmountCell;
@property (retain,nonatomic) DXCMCGMBaseTableViewCell * doseTimeCell;
@property (retain,nonatomic) CGMDatePickerTableViewCell * datePickerCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)setupTableView;
- (void)setupCells;
- (float)minInsulinValue;
- (float)maxInsulinValue;
- (id)localNameForInsulinEvent;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)showDatePickerCell:(bool)v1;
- (void)textFieldBeginEdit:(id)v1;
- (void)textFieldDidChange:(id)v1;
- (bool)textField:(id)v1 shouldChangeCharactersInRange:(struct _NSRange)v2 replacementString:(id)v3;
- (bool)doesString:(id)v1 containSubstring:(id)v2;
- (void)datePickerDidChange;
- (bool)isValidData;
- (id)titleForAddEventConfirmation;
- (id)messageForAddEventConfirmation;
- (void)willCancelAction;
- (void)keyboardWillShow:(id)v1;
- (void)keyboardWillHide:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface StartVideoViewController : SetupWizardBaseViewController<SetupWizardBaseViewControllerDelegate> {
    bool _movieIsPlaying;
    DXCMBlockButton * _startVideo;
    DXCMBlockButton * _nextButton;
}
@property bool movieIsPlaying;
@property (retain,nonatomic) DXCMBlockButton * startVideo;
@property (retain,nonatomic) DXCMBlockButton * nextButton;
@property (readonly) UIView * view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)dealloc;
- (void)moviePlaybackDidFinish:(id)v1;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)videoImageTapped;
- (void)presentSensorInsertionVideo;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface UAMWebAPI : NSObject {
    NSString * _uamAPIBaseURL;
    NSString * _baseURL;
    NSObject<OS_dispatch_semaphore> * _synchronousSemaphore;
}
@property (retain,nonatomic) NSString * uamAPIBaseURL;
@property (retain,nonatomic) NSString * baseURL;
@property (readonly,nonatomic) NSString * accessToken;
@property (retain) NSObject<OS_dispatch_semaphore> * synchronousSemaphore;
+ (id)sharedInstance;
- (id)init;
- (id)readAccountInformation;
- (id)sendRequest:(id)v1 httpMethodType:(id)v2 timeout:(double)v3;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCalibrationHelper : NSObject {
    double _weight;
    struct bounds _bounds1;
    struct bounds _bounds2;
}
@property (readonly) double weight;
@property (readonly) struct bounds bounds1;
@property (readonly) struct bounds bounds2;
+ (id)nextRecalibrationTimeString;
- (id)init;
@end


/*****************************************************************/

@interface CGMBondedDevice : CGMBaseDataObject {
    bool _device_is_bonded;
    NSString * _device_name;
    NSString * _device_id;
    NSString * _device_bonded_uuid;
    unsigned long long _record_id;
}
@property (copy,nonatomic) NSString * device_name;
@property (copy,nonatomic) NSString * device_id;
@property (copy,nonatomic) NSString * device_bonded_uuid;
@property (nonatomic) bool device_is_bonded;
@property (nonatomic) unsigned long long record_id;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSessionRecord : CGMBaseDataObject {
    unsigned char _calibration_mode;
    unsigned int _recorded_system_time_sec;
    unsigned int _transmitter_sessionstarttime;
    unsigned int _transmitter_sessionoffset;
    unsigned int _transmitter_time;
    unsigned int _session_warmup_time;
    unsigned int _session_length;
    unsigned long long _record_id;
    NSString * _guid;
    NSString * _recorded_system_time;
    NSString * _recorded_display_time;
    NSString * _transmitter_id;
    NSString * _logType;
}
@property (nonatomic) unsigned long long record_id;
@property (retain,nonatomic) NSString * guid;
@property (nonatomic) unsigned int recorded_system_time_sec;
@property (retain,nonatomic) NSString * recorded_system_time;
@property (retain,nonatomic) NSString * recorded_display_time;
@property (retain,nonatomic) NSString * transmitter_id;
@property (nonatomic) unsigned int transmitter_sessionstarttime;
@property (nonatomic) unsigned int transmitter_sessionoffset;
@property (nonatomic) unsigned int transmitter_time;
@property (nonatomic) unsigned char calibration_mode;
@property (nonatomic) unsigned int session_warmup_time;
@property (nonatomic) unsigned int session_length;
@property (retain,nonatomic) NSString * logType;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCircleView : UIView<CGMEGVErrorStateDelegate> {
    UIView * _masterCGMSquareView;
    EGVCircleView * _egvCircleView;
    CGMEGVErrorStateView * _errorCircleView;
    WarmUpCircleView * _warmUpCircleView;
    PairingCircleView * _pairingCircleView;
}
@property (retain,nonatomic) UIView * masterCGMSquareView;
@property (retain,nonatomic) EGVCircleView * egvCircleView;
@property (retain,nonatomic) CGMEGVErrorStateView * errorCircleView;
@property (retain,nonatomic) WarmUpCircleView * warmUpCircleView;
@property (retain,nonatomic) PairingCircleView * pairingCircleView;
- (id)initWithFrame:(struct CGRect)v1;
- (void)awakeFromNib;
- (void)initAllCircle;
- (void)openErrorCircleHelpWithIdentifier:(id)v1;
- (void)openCalibrationHelpWithIdentifier:(id)v1;
- (void)updateWarmUpCircle;
- (void)onHelpButton:(unsigned long long)v1;
- (void)onErrorButton:(unsigned long long)v1;
- (void)openErrorInitialHelpTextWithIdentifier:(id)v1;
- (void)showErrorState:(unsigned long long)v1;
- (void)showWarmUpState;
- (void)showPairing;
- (void)showEGV:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMMenuItemsManager : NSObject {
    NSMutableArray * _menuList;
}
@property (retain,nonatomic) NSMutableArray * menuList;
+ (id)sharedManager;
- (void)initCGMMenuList;
- (long long)numberOfSection;
- (long long)numberOfItemsInSection:(long long)v1;
- (id)itemsAtIndexPath:(id)v1;
- (id)headerTitleOfItemsInSection:(long long)v1;
- (id)headerAccessibilityIdInSection:(long long)v1;
- (id)footerTitleOfItemsInSection:(long long)v1;
- (id)footerAccessibilityIdInSection:(long long)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMSensorCodeHelper : NSObject
+ (id)sensorCodesDictionary;
+ (id)getSensorCodes;
+ (void)getSensitivityValuesForSensorCode:(id)v1 m0:(unsigned long long *)v2 mf:(unsigned long long *)v3;
+ (long long)getStatusForSensorCode:(id)v1;
+ (void)resetSensorCodeEntryValues;
@end


/*****************************************************************/

@interface CGMMoreViewController : DXCMBaseViewController<UITableViewDataSource,UITableViewDelegate> {
    bool _needsReload;
    long long _trendGraphMaxRange;
    UITableView * _tableView;
    UIView * _sectionHeaderViews;
    NSString * _updatedShareStatus;
}
@property (nonatomic) long long trendGraphMaxRange;
@property (nonatomic) UITableView * tableView;
@property (retain,nonatomic) UIView * sectionHeaderViews;
@property (retain,nonatomic) NSString * updatedShareStatus;
@property (nonatomic) bool needsReload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)graphHeightChanged:(id)v1;
- (bool)saveGraphHeightChanges;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidDisappear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)setupTableView;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (id)menuItemAtIndexPath:(id)v1;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)pushViewControllerNamed:(id)v1 storyBoardNamed:(id)v2 viewControllerTitleNamed:(id)v3;
- (id)getStringFromDate:(id)v1;
- (void)setupMenuTableViewCell:(id)v1 withMenuItem:(id)v2;
- (void)getShareStatus;
- (void)unwindToSettings:(id)v1;
- (void)sessionStatusChanged;
- (void)dataConsentStatusChangedRemotely;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPMeterRecord : DPBaseRecord {
    NSString * _TransmitterId;
    long long _TransmitterTime;
    NSString * _MeterSystemTime;
    NSString * _MeterDisplayTime;
    long long _Value;
    NSString * _EntryType;
}
@property (retain) NSString * TransmitterId;
@property long long TransmitterTime;
@property (retain) NSString * MeterSystemTime;
@property (retain) NSString * MeterDisplayTime;
@property long long Value;
@property (retain) NSString * EntryType;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CriticalAlertsExplanationReadyViewController : SetupWizardBaseViewController {
    NSObject<CriticalAlertsReadyExplanationViewDelegate> * _pagerReadyViewdelegate;
    DXCMBlockButton * _nextButton;
    UILabel * _contentLabel;
}
@property (retain,nonatomic) DXCMBlockButton * nextButton;
@property (retain,nonatomic) UILabel * contentLabel;
@property (retain,nonatomic) NSObject<CriticalAlertsReadyExplanationViewDelegate> * pagerReadyViewdelegate;
- (void)viewDidLoad;
- (void)setUpView;
- (void)setUpContraints;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMSessionDao : CGMBaseDao
+ (id)getRecordedSystemTimeFrom:(id)v1;
- (unsigned int)getMinRecordId;
- (unsigned int)getMaxRecordId;
- (unsigned long long)insertSession:(id)v1 txId:(id)v2 txStartTimeSeconds:(unsigned int)v3 txOffsetSeconds:(unsigned int)v4 txTimeStamp:(unsigned int)v5 warmupLength:(unsigned int)v6 sessionLength:(unsigned int)v7 calMode:(unsigned char)v8 logType:(long long)v9;
- (id)sessionsWithTransmitterId:(id)v1;
- (id)getCGMSessionRecordDictWithRecordId:(unsigned long long)v1;
- (id)getCGMSessionRecordDictsInRange:(unsigned long long)v1 last:(unsigned long long)v2;
- (id)getRecordsBetweenStartTime:(int)v1 andEndTime:(int)v2;
- (id)getCGMSessionRecordDicts;
- (id)getLastStoppedRecordForTxID:(id)v1;
- (void)eraseData;
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
@end


/*****************************************************************/

@interface DPDeviceSettingsLogRecord : DPBaseRecord {
    NSString * _Language;
    NSNumber * _IsMmolDisplayMode;
    NSNumber * _Is24HourMode;
    NSNumber * _IsBlindedMode;
    NSString * _TransmitterId;
    long long _SystemTimeOffset;
    long long _DisplayTimeOffset;
    NSString * _SoftwareNumber;
    NSString * _SoftwareVersion;
}
@property (retain) NSString * Language;
@property (retain) NSNumber * IsMmolDisplayMode;
@property (retain) NSNumber * Is24HourMode;
@property (retain) NSNumber * IsBlindedMode;
@property (retain) NSString * TransmitterId;
@property long long SystemTimeOffset;
@property long long DisplayTimeOffset;
@property (retain) NSString * SoftwareNumber;
@property (retain) NSString * SoftwareVersion;
- (id)init;
- (id)initWithDeviceInfo:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMShareRTEventsDao : CGMBaseDao
- (void)setupDataModelIfNeeded;
- (void)resetDataModel;
- (void)eraseData;
- (long long)insertRealTimeEvent:(id)v1 withSubType:(id)v2 andRecords:(id)v3;
- (id)getUnuploadedRealTimeEvents;
- (unsigned long long)dataRecordTypeString:(id)v1;
- (id)dictDataRecordTypes;
- (void)deleteRealTimeEventsBeforeTime:(double)v1;
- (void)deleteRealTimeEventsAfterTime:(double)v1;
- (void)deleteDuplicateRealTimeEvents;
- (void)updateRealTimeEvents:(long long)v1 withRecords:(id)v2;
@end


/*****************************************************************/

@interface CGMTrendNavigationController : UINavigationController {
    bool _allowsRotation;
}
@property (nonatomic) bool allowsRotation;
- (void)viewDidLoad;
- (bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (bool)hasBeenDismissedViewController:(id)v1;
- (unsigned long long)supportedInterfaceOrientations;
@end


/*****************************************************************/

@interface DXCMBaseErrorModalViewController : DXCMBaseViewController<UITextViewDelegate> {
    void (^ /* unknown block signature */)(void) _okPressedBlock;
    UIView * _topBarView;
    UIImageView * _bannerIconImageView;
    UILabel * _barTitleLabel;
    UIView * _contentView;
    UIScrollView * _scrollView;
    UIView * _scrollContentView;
    UILabel * _errorTitleLabel;
    UILabel * _descriptionLabel;
    UITextView * _globalTextView;
    DXCMBlockButton * _linkButton;
    DXCMBlockButton * _okButton;
    NSDictionary * _metricsDictionary;
}
@property (retain,nonatomic) UIView * topBarView;
@property (retain,nonatomic) UIImageView * bannerIconImageView;
@property (retain,nonatomic) UILabel * barTitleLabel;
@property (retain,nonatomic) UIView * contentView;
@property (retain,nonatomic) UIScrollView * scrollView;
@property (retain,nonatomic) UIView * scrollContentView;
@property (retain,nonatomic) UILabel * errorTitleLabel;
@property (retain,nonatomic) UILabel * descriptionLabel;
@property (retain,nonatomic) UITextView * globalTextView;
@property (retain,nonatomic) DXCMBlockButton * linkButton;
@property (retain,nonatomic) DXCMBlockButton * okButton;
@property (retain,nonatomic) NSDictionary * metricsDictionary;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) okPressedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (void)addContentWithBarTitle:(id)v1 errorTitle:(id)v2 description:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addContentWithBarTitleAndGlobalSupportText:(id)v1 errorTitle:(id)v2 description:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addTransmitterAndSensorExpiredContentWithBarTitle:(id)v1 errorTitle:(id)v2 description:(id)v3 accessibilityIdentifier:(id)v4;
- (id)createTextViewWithAttributedText:(id)v1;
- (void)okButtonPressed;
- (void)linkButtonPressed;
- (void)linkButtonGlobalPressed;
- (bool)textView:(id)v1 shouldInteractWithURL:(id)v2 inRange:(struct _NSRange)v3 interaction:(long long)v4;
- (void)layoutConstraintsWithContentView:(id)v1;
- (void)layoutConstraintsWithTopBarView:(id)v1 barTitleLabel:(id)v2 bannerIconImageView:(id)v3 errorTitleLabel:(id)v4 scrollView:(id)v5 scrollContentView:(id)v6 descriptionLabel:(id)v7 globalTextView:(id)v8 okButton:(id)v9 linkButton:(id)v10;
- (void)layoutConstraintsWithTopBarView:(id)v1 barTitleLabel:(id)v2 bannerIconImageView:(id)v3 errorTitleLabel:(id)v4 scrollView:(id)v5 scrollContentView:(id)v6 descriptionLabel:(id)v7 okButton:(id)v8 linkButton:(id)v9;
- (void)layoutConstraintsWithTopBarView2:(id)v1 barTitleLabel:(id)v2 bannerIconImageView:(id)v3 errorTitleLabel:(id)v4 scrollView:(id)v5 scrollContentView:(id)v6 descriptionLabel:(id)v7 okButton:(id)v8 linkButton:(id)v9;
- (void)setCommonAttributesForLabel:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMBaseEGVView : UIView {
    UILabel * _circleLabel;
}
@property (retain,nonatomic) UILabel * circleLabel;
- (id)initWithCoder:(id)v1;
- (id)initWithFrame:(struct CGRect)v1;
- (void)sharedInit;
- (void)initEGVStateLabelWithFrame:(struct CGRect)v1;
- (void)initCircleLabelWithFrame:(struct CGRect)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DXCMCGMBaseTextFieldTableViewCell : DXCMCGMBaseTableViewCell {
    UITextField * _valueTextField;
    UITextField * _unitLabel;
}
@property (retain,nonatomic) UITextField * valueTextField;
@property (retain,nonatomic) UITextField * unitLabel;
- (id)init;
- (id)initWithFrame:(struct CGRect)v1;
- (id)initWithCoder:(id)v1;
- (id)initWithStyle:(long long)v1 reuseIdentifier:(id)v2;
- (void)setup;
- (void)updateConstraints;
- (void)addAccessibilityIdWithSuffix:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPPublicDataSource : NSObject<_TtP3CGM26DPPublicDataSourceProtocol_>
- (id)getGlucoseRecordsFrom:(int)v1 to:(int)v2;
- (id)getMeterDataRecordsFrom:(int)v1 to:(int)v2;
- (id)getSensorSessionRecordsFrom:(int)v1 to:(int)v2;
- (id)getUserEventRecordsFrom:(int)v1 to:(int)v2;
- (id)getAlertScheduleInfo;
- (id)getDeviceInfoRecordFrom:(int)v1 to:(int)v2;
- (id)getNutritionRecordsFrom:(int)v1 to:(int)v2;
- (id)getWorkoutEventRecordsFrom:(int)v1 to:(int)v2;
- (id)getAlertStatusRecordsFrom:(int)v1 to:(int)v2;
@end


/*****************************************************************/

@interface DCSAPIExceptionTypeNamesArray : NSObject
+ (void)init;
+ (int)toExceptionType:(id)v1;
+ (id)desc:(id)v1;
@end


/*****************************************************************/

@interface DCSAPIException : NSException {
    int _codeEnum;
    long long _httpResponseCode;
}
@property int codeEnum;
@property long long httpResponseCode;
+ (id)exception:(id)v1 httpResponseCode:(long long)v2 message:(id)v3;
+ (id)exception:(id)v1 message:(id)v2;
- (id)initWithReason:(id)v1 reason:(id)v2 httpResponse:(long long)v3 userInfo:(id)v4;
- (id)description;
@end


/*****************************************************************/

@interface DXCMLayout : NSObject
+ (void)addButtonsToView:(id)v1 okButton:(id)v2 cancelButton:(id)v3;
+ (void)addButtonsToView:(id)v1 okButton:(id)v2 secondButton:(id)v3 cancelButton:(id)v4;
+ (void)addButtonsToView:(id)v1 okButton:(id)v2 helpText:(id)v3 secondOkButton:(id)v4;
@end


/*****************************************************************/

@interface PushNoAnimationSegue : UIStoryboardSegue
- (void)perform;
@end


/*****************************************************************/

@interface CGMStartSessionHelpPopUpView : DXCMBaseView {
    UISwitch * _dontShowSwitch;
}
@property (nonatomic) UISwitch * dontShowSwitch;
- (id)initWithFrame:(struct CGRect)v1;
- (void)onDontShowSwitch:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SendInviteViewController : DXCMBaseShareViewController<UITableViewDataSource,UITableViewDelegate> {
    bool _isInvitingFirstFollower;
    UITableView * _tableView;
    NSArray * _sections;
    UIView * _trendGraphSectionHeaderView;
}
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSArray * sections;
@property (retain,nonatomic) UIView * trendGraphSectionHeaderView;
@property (nonatomic) bool isInvitingFirstFollower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(bool)v1;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 viewForHeaderInSection:(long long)v2;
- (double)tableView:(id)v1 heightForFooterInSection:(long long)v2;
- (void)configureTableView;
- (id)getValueFromBool:(bool)v1;
- (id)configureTrendGraphViewSection;
- (id)configureUrgentLowSection;
- (id)configureLowSection;
- (id)configureHighSection;
- (id)configureNoDataSection;
- (id)createTrendGraphSectionHeaderView;
- (bool)inviteContactWithStatusHUD:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface SetupWizardBaseViewController : DXCMBaseViewController<UIScrollViewDelegate> {
    bool _forbidSwipeGestureBackward;
    bool _pageLabelNotIncrementedOnSegue;
    UIView * _safeAreaView;
    unsigned long long _currentPageIndex;
    NSString * _additionalLoggingInformation;
    NSMutableDictionary * _alertDefaultLimitData;
    UIViewController * _popFromNavigationStack;
    UIScrollView * _scrollView;
    UIView * _contentView;
    NSArray * _contentConstraints;
    double _dexcomLogoOffsetTop;
    UIImageView * _dexcomLogo;
    MBProgressHUD * _progressHUD;
    UILabel * _currentPageLabel;
    NSDictionary * _wizardTypeLogName;
    UILabel * _captionLabel;
    UITextView * _captionTextView;
}
@property (retain,nonatomic) UIScrollView * scrollView;
@property (retain,nonatomic) UIView * contentView;
@property (retain,nonatomic) NSArray * contentConstraints;
@property (nonatomic) double dexcomLogoOffsetTop;
@property (retain,nonatomic) UIImageView * dexcomLogo;
@property (retain,nonatomic) MBProgressHUD * progressHUD;
@property (retain,nonatomic) UILabel * currentPageLabel;
@property (retain,nonatomic) NSDictionary * wizardTypeLogName;
@property (retain,nonatomic) UILabel * captionLabel;
@property (retain,nonatomic) UITextView * captionTextView;
@property (retain,nonatomic) UIView * safeAreaView;
@property (nonatomic) unsigned long long currentPageIndex;
@property (retain,nonatomic) NSString * additionalLoggingInformation;
@property (retain,nonatomic) NSMutableDictionary * alertDefaultLimitData;
@property bool forbidSwipeGestureBackward;
@property (nonatomic) bool pageLabelNotIncrementedOnSegue;
@property (retain,nonatomic) UIViewController * popFromNavigationStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)viewDidAppear:(bool)v1;
- (void)viewWillDisappear:(bool)v1;
- (id)getEntryPoint;
- (void)saveTransmitterId:(id)v1;
- (void)updateTransmitterMode:(unsigned char)v1;
- (void)updateUserSettingsIfNeededForCurrentTransmitterType:(unsigned char)v1 andLastProductMode:(long long)v2;
- (void)resetGraphHeightSettings;
- (void)enableAlwaysShareIfNeeded;
- (void)saveTransmitterComplete;
- (void)hidePageLabel:(bool)v1;
- (id)createLabelWithText:(id)v1;
- (id)createBoldedLabelWithText:(id)v1;
- (void)showHUDSuccessWithTitle:(id)v1 okToSegueBlock:(void (^ /* unknown block signature */)(void))v2;
- (void)prepareForSegue:(id)v1 sender:(id)v2;
- (void)addDexcomLogo:(bool)v1;
- (void)addContentWithDescription:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4;
- (void)addContentWithHyperlinkDescription:(id)v1 imageView:(id)v2 caption:(id)v3 accessibilityIdentifier:(id)v4 textViewDelegate:(id)v5;
- (void)addContentWithCustomView:(id)v1 constraints:(id)v2;
- (void)addLayoutConstraintsWithLabel:(id)v1;
- (void)layoutConstraintsWithScrollLabel:(id)v1 scrollView:(id)v2 contentView:(id)v3;
- (void)addLayoutConstraintsWithOkButton:(id)v1 cancelButton:(id)v2;
- (void)addLayoutConstraintsWithOkButton:(id)v1 okButtonTwo:(id)v2;
- (void)addLayoutConstraintsWithOkButton:(id)v1 secondButton:(id)v2 cancelButton:(id)v3;
- (void)addLayoutConstraintsWithOkButton:(id)v1 helpText:(id)v2 secondOkButton:(id)v3;
- (void)displayModalViewWithDescription:(id)v1 descriptionLabelAccessibilityId:(id)v2;
- (void)displayModalViewWithHyperlinkDescription:(id)v1 withHypelinksDictionary:(id)v2 delegate:(id)v3 andDescriptionTextViewAccessibilityId:(id)v4;
- (void)displayModalViewWithDescription:(id)v1 imageView:(id)v2 caption:(id)v3;
- (void)displayModalViewWithDescription:(id)v1 navigationTitle:(id)v2 imageView:(id)v3 caption:(id)v4;
- (void)displayModalViewWithDescription:(id)v1 navigationTitle:(id)v2;
- (void)displayModalViewWithDescription:(id)v1 navigationTitle:(id)v2 imageView:(id)v3 caption:(id)v4 accessibilityIdentifier:(id)v5;
- (void)displayWebViewWithKey:(id)v1;
- (void)dismissSelf;
- (void)onWizardFinished;
- (void)layoutConstraintsWithDexcomLogo:(id)v1 scrollView:(id)v2 contentView:(id)v3 okButton:(id)v4;
- (void)layoutConstraintsWithDexcomLogo:(id)v1 scrollView:(id)v2 contentView:(id)v3 secondOkButton:(id)v4 helpText:(id)v5;
- (id)createLabelWithAttributedText:(id)v1;
- (id)createTextViewWithAttributedText:(id)v1;
- (id)createCurrentPageLabel;
- (void)resetViewHierarchy;
- (unsigned long long)numSetupWizardScreens;
- (id)getMaximumPagesForWizardType;
- (id)getLogName:(id)v1;
- (void)displayModalViewWithDescription:(id)v1 navigationTitle:(id)v2 okPressedBlock:(void (^ /* unknown block signature */)(void))v3 viewControllerToPresent:(id)v4;
- (void)setupVideoImageView:(id)v1;
- (void)setupVideoImageButton:(id)v1;
- (id)localizedPlayVideoText;
- (void)removePlayVideoText;
- (void)resetSensorCode;
- (void)finishedNoSensorCode;
- (void)finishedSensorCodeEntry;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface BusinessAnalytics : NSObject {
    bool _analyticsEngineEnabled;
    NSString * _logName;
}
@property (nonatomic) bool analyticsEngineEnabled;
@property (retain,nonatomic) NSString * logName;
+ (id)sharedInstance;
+ (id)readableViewName:(id)v1;
- (id)init;
- (void)logEvent:(id)v1 fromSender:(id)v2;
- (void)logEvent:(id)v1 withParameters:(id)v2 fromSender:(id)v3;
- (void)logEvent:(id)v1 timed:(bool)v2 fromSender:(id)v3;
- (void)logEvent:(id)v1 timed:(bool)v2 withParameters:(id)v3 fromSender:(id)v4;
- (void)endTimedEvent:(id)v1 fromSender:(id)v2;
- (void)endTimedEvent:(id)v1 withParameters:(id)v2 fromSender:(id)v3;
- (void)logEventWithTime:(id)v1 startTime:(id)v2 endTime:(id)v3 fromSender:(id)v4;
- (id)fullEventNameForSender:(id)v1 eventName:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMDatabaseException : NSException
- (id)initWithName:(id)v1 originalError:(id)v2;
@end


/*****************************************************************/

@interface CGMAlertScheduleEditTimeViewController : DXCMBaseViewController<UITableViewDelegate,UITableViewDataSource> {
    CGMAlertSchedule * _alertSchedule;
    UIDatePicker * _timePicker;
    UITableView * _tableView;
    NSDateFormatter * _dateFormatter24hr;
    DXCMAlertScheduleTimeTableViewCell * _startTimeCell;
    DXCMAlertScheduleTimeTableViewCell * _endTimeCell;
    struct timeOfDay _selectedStartTime;
    struct timeOfDay _selectedEndTime;
    NSDateFormatter * _timeFormatter;
}
@property (nonatomic) UIDatePicker * timePicker;
@property (nonatomic) UITableView * tableView;
@property (retain,nonatomic) NSDateFormatter * dateFormatter24hr;
@property (retain,nonatomic) DXCMAlertScheduleTimeTableViewCell * startTimeCell;
@property (retain,nonatomic) DXCMAlertScheduleTimeTableViewCell * endTimeCell;
@property (nonatomic) struct timeOfDay selectedStartTime;
@property (nonatomic) struct timeOfDay selectedEndTime;
@property (retain,nonatomic) NSDateFormatter * timeFormatter;
@property (retain,nonatomic) CGMAlertSchedule * alertSchedule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)setPickerTime:(struct timeOfDay)v1 animated:(bool)v2;
- (void)saveAlertScheduleTime;
- (void)willMoveToParentViewController:(id)v1;
- (void)setupTimePicker;
- (void)timePickerValueChanged;
- (bool)isStartTimeRowSelected;
- (bool)isEndTimeRowSelected;
- (void)initDataSource;
- (void)setupTableView;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (long long)numberOfSectionsInTableView:(id)v1;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMCarbsEventViewController : CGMEventManagerViewController<UITableViewDelegate,UITableViewDataSource> {
    double _animDuration;
    unsigned long long _animCurve;
    UIView * keyboardSpacerView;
    NSLayoutConstraint * keyboardHeight;
    UIView * keyboardSeparatorView;
    UITableView * _tableView;
    DXCMCGMBaseTextFieldTableViewCell * _carbsAmountCell;
    DXCMCGMBaseTableViewCell * _carbsTimeCell;
    CGMDatePickerTableViewCell * _datePickerCell;
}
@property (retain,nonatomic) UITableView * tableView;
@property (retain,nonatomic) DXCMCGMBaseTextFieldTableViewCell * carbsAmountCell;
@property (retain,nonatomic) DXCMCGMBaseTableViewCell * carbsTimeCell;
@property (retain,nonatomic) CGMDatePickerTableViewCell * datePickerCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)v1;
- (void)setupTableView;
- (void)setupCells;
- (long long)numberOfSectionsInTableView:(id)v1;
- (double)tableView:(id)v1 heightForHeaderInSection:(long long)v2;
- (id)tableView:(id)v1 cellForRowAtIndexPath:(id)v2;
- (long long)tableView:(id)v1 numberOfRowsInSection:(long long)v2;
- (double)tableView:(id)v1 heightForRowAtIndexPath:(id)v2;
- (id)tableView:(id)v1 viewForFooterInSection:(long long)v2;
- (void)tableView:(id)v1 didSelectRowAtIndexPath:(id)v2;
- (void)showDatePickerCell:(bool)v1;
- (void)textFieldBeginEdit:(id)v1;
- (void)textFieldDidChange:(id)v1;
- (bool)doesString:(id)v1 containSubstring:(id)v2;
- (void)datePickerDidChange;
- (bool)isValidData;
- (id)messageForAddEventConfirmation;
- (void)willCancelAction;
- (void)keyboardWillShow:(id)v1;
- (void)keyboardWillHide:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMShareEngine : NSObject {
    bool _phoneError;
    bool _internetError;
    bool _cloudError;
    bool _noActiveContacts;
    UIViewController * _entrypointRootViewController;
    NSString * _logName;
    DSAPIEgv * _latestServerEGV;
    CGMEGV * _latestCurrentEGV;
    double _lastRealTimeEventTimestamp;
    unsigned long long _backgroundTask;
    unsigned long long _backgroundTaskForTimer;
    double _lastFollowerUpdateTime;
}
@property (retain,nonatomic) DSAPIEgv * latestServerEGV;
@property (retain) CGMEGV * latestCurrentEGV;
@property double lastRealTimeEventTimestamp;
@property unsigned long long backgroundTask;
@property unsigned long long backgroundTaskForTimer;
@property (nonatomic) bool noActiveContacts;
@property double lastFollowerUpdateTime;
@property (nonatomic) bool phoneError;
@property (nonatomic) bool internetError;
@property (nonatomic) bool cloudError;
@property (readonly,nonatomic) bool isConsentRequired;
@property (readonly,nonatomic) unsigned long long status;
@property (readonly,nonatomic) NSString * localizedStatus;
@property (retain,nonatomic) UIViewController * entrypointRootViewController;
@property (retain,nonatomic) NSString * logName;
+ (id)sharedInstance;
- (id)init;
- (void)onResetToOOBE;
- (void)resetUploadTimestampToNow;
- (void)triggerUploadOfEvents:(id)v1;
- (void)uploadRealTimeEventRecords;
- (void)doUploadRecordsWithEvent;
- (long long)getArrowForFollowFromTrend:(char)v1;
- (void)updatePhoneStatus;
- (void)updateShareFollowerStates;
- (id)determineEgvsToShare;
- (id)serverReadLatestGlucoseValue;
- (void)doSomethingOnBackgroundTask:(void (^ /* unknown block signature */)(void))v1;
- (void)beginBackgroundTask;
- (void)endBackgroundTask;
- (bool)uploadEvents;
- (bool)serverUploadRealTimeEvents:(id)v1;
- (id)latestServerEgvFromDictionary:(id)v1;
- (void)deleteEventsInserted;
- (void)performActionsWhenBluetoothIsDisabled;
- (void)performActionsWhenBluetoothIsEnabled;
- (void)performActionsWhenTransmitterIsNotFound;
- (void)performActionsWhenTransmitterIsFound;
- (void)endBackgroundTaskTimer;
- (void)handleNotConsented;
- (void)enableShare;
- (void)disableShare;
- (void)resetShareTutorialWithNoFollower;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface DPManifest : DPBaseObject {
    NSArray * _Entries;
}
@property (retain) NSArray * Entries;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface CGMTrendGraphIntentIntent : INIntent
@property (nonatomic) long long duration;
@end


/*****************************************************************/

@interface CGMTrendGraphIntentIntentResponse : INIntentResponse {
    long long _code;
}
@property (nonatomic) long long code;
- (id)initWithCode:(long long)v1 userActivity:(id)v2;
@end


/*****************************************************************/

@interface CGMDurationResolutionResult : INEnumResolutionResult
+ (id)successWithResolvedDuration:(long long)v1;
+ (id)confirmationRequiredWithDurationToConfirm:(long long)v1;
@end


/*****************************************************************/

@interface CGMViewGlucoseIntent : INIntent
@end


/*****************************************************************/

@interface CGMViewGlucoseIntentResponse : INIntentResponse {
    long long _code;
}
@property (nonatomic) long long code;
@property (copy,nonatomic) INObject * glucose;
@property (nonatomic) long long rate;
@property (nonatomic) long long errorMessage;
@property (copy,nonatomic) NSNumber * time;
@property (nonatomic) long long readingErrorMessage;
@property (copy,nonatomic) NSString * predictedTimeLeft;
+ (id)successIntentResponseWithGlucose:(id)v1 rate:(long long)v2;
+ (id)edgeCasesIntentResponseWithErrorMessage:(long long)v1;
+ (id)warmUpIntentResponseWithTime:(id)v1;
+ (id)urgentLowIntentResponseWithGlucose:(id)v1 rate:(long long)v2;
+ (id)urgentLowSoonIntentResponseWithGlucose:(id)v1 predictedTimeLeft:(id)v2;
+ (id)readingErrorIntentResponseWithGlucose:(id)v1 rate:(long long)v2 readingErrorMessage:(long long)v3;
+ (id)successNoTrendIntentResponseWithGlucose:(id)v1;
+ (id)urgentLowNoTrendIntentResponseWithGlucose:(id)v1;
+ (id)readingErrorNoTrendIntentResponseWithGlucose:(id)v1 readingErrorMessage:(long long)v2;
- (id)initWithCode:(long long)v1 userActivity:(id)v2;
@end


/*****************************************************************/

@interface CGMTrendArrowResolutionResult : INEnumResolutionResult
+ (id)successWithResolvedTrendArrow:(long long)v1;
+ (id)confirmationRequiredWithTrendArrowToConfirm:(long long)v1;
@end


/*****************************************************************/

@interface CGMExpirationStatusResolutionResult : INEnumResolutionResult
+ (id)successWithResolvedExpirationStatus:(long long)v1;
+ (id)confirmationRequiredWithExpirationStatusToConfirm:(long long)v1;
@end


/*****************************************************************/

@interface CGMReadingErrorStatusResolutionResult : INEnumResolutionResult
+ (id)successWithResolvedReadingErrorStatus:(long long)v1;
+ (id)confirmationRequiredWithReadingErrorStatusToConfirm:(long long)v1;
@end
