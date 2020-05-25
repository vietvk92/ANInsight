// Generated by Apple Swift version 5.2.2 effective-4.2 (swiftlang-1103.0.32.6 clang-1103.0.32.51)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="InsightSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif









typedef SWIFT_ENUM(NSInteger, ITActionEvent, closed) {
  ITActionEventITActionEventScreenView = 0,
  ITActionEventITActionEventIdentify = 1,
  ITActionEventITActionEventUserRegister = 2,
  ITActionEventITActionEventSignIn = 3,
  ITActionEventITActionEventSignOut = 4,
  ITActionEventITActionEventProductSearch = 5,
  ITActionEventITActionEventProductListView = 6,
  ITActionEventITActionEventProductListFilter = 7,
  ITActionEventITActionEventProductClick = 8,
  ITActionEventITActionEventProductView = 9,
  ITActionEventITActionEventAddToCart = 10,
  ITActionEventITActionEventRemoveCart = 11,
  ITActionEventITActionEventViewCart = 12,
  ITActionEventITActionEventProductCheckout = 13,
  ITActionEventITActionEventProductPayment = 14,
  ITActionEventITActionEventProductPurchase = 15,
  ITActionEventITActionEventAdvertisingImpression = 16,
  ITActionEventITActionEventAdvertisingView = 17,
  ITActionEventITActionEventAdvertisingClick = 18,
  ITActionEventITActionEventAllowPushNotification = 19,
};

@class ITContextObj;
@class ITExtraObj;
@class ITDimsObj;
@class ITItemObj;

SWIFT_CLASS("_TtC10InsightSDK10ITAnalytic")
@interface ITAnalytic : NSObject
+ (void)configure;
+ (void)configureWithPortalID:(NSString * _Nullable)portalID propertyID:(NSString * _Nullable)propertyID;
+ (void)logEventWithAction:(enum ITActionEvent)action contextObject:(ITContextObj * _Nullable)contextObject extraObject:(ITExtraObj * _Nullable)extraObject dimsObject:(NSArray<ITDimsObj *> * _Nullable)dimsObject items:(NSArray<ITItemObj *> * _Nullable)items;
+ (void)logEventCustomWithActionName:(NSString * _Nonnull)actionName category:(NSString * _Nonnull)category;
+ (void)resetAnonymousID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@class UIEvent;

/// The <code>BaseView</code> class is a reusable message view base class that implements some
/// of the optional SwiftMessages protocols and provides some convenience functions
/// and a configurable tap handler. Message views do not need to inherit from <code>BaseVew</code>.
SWIFT_CLASS("_TtC10InsightSDK10ITBaseView")
@interface ITBaseView : UIView
/// Fulfills the <code>ITBackgroundViewable</code> protocol and is the target for
/// the optional <code>tapHandler</code> block. Defaults to <code>self</code>.
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified backgroundView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
/// IBInspectable access to layoutMarginAdditions.top
@property (nonatomic) IBInspectable CGFloat topLayoutMarginAddition;
/// IBInspectable access to layoutMarginAdditions.left
@property (nonatomic) IBInspectable CGFloat leftLayoutMarginAddition;
/// IBInspectable access to layoutMarginAdditions.bottom
@property (nonatomic) IBInspectable CGFloat bottomLayoutMarginAddition;
/// IBInspectable access to layoutMarginAdditions.right
@property (nonatomic) IBInspectable CGFloat rightLayoutMarginAddition;
@property (nonatomic) IBInspectable BOOL collapseLayoutMarginAdditions;
@property (nonatomic) IBInspectable CGFloat bounceAnimationOffset;
- (void)updateConstraints;
@end




@interface ITBaseView (SWIFT_EXTENSION(InsightSDK))
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC10InsightSDK12ITContextObj")
@interface ITContextObj : NSObject
- (nonnull instancetype)initWithScreenName:(NSString * _Nonnull)screenName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithScreenName:(NSString * _Nonnull)screenName campaignName:(NSString * _Nonnull)campaignName campaignSource:(NSString * _Nonnull)campaignSource campaignMedium:(NSString * _Nonnull)campaignMedium campaignTerm:(NSString * _Nonnull)campaignTerm campaignContent:(NSString * _Nonnull)campaignContent OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// A background view that messages can use for rounding all or a subset of corners with squircles
/// (the smoother method of rounding corners that you see on app icons).
SWIFT_CLASS("_TtC10InsightSDK20ITCornerRoundingView")
@interface ITCornerRoundingView : UIView
/// Specifies the corner radius to use.
@property (nonatomic) IBInspectable CGFloat cornerRadius;
/// Set to <code>true</code> for layouts where only the leading corners should be
/// rounded. For example, the layout in TabView.xib rounds the bottom corners
/// when displayed from the top and the top corners when displayed from the bottom.
/// When this property is <code>true</code>, the <code>roundedCorners</code> property will be overwritten
/// by relevant animators (e.g. <code>TopBottomAnimation</code>).
@property (nonatomic) IBInspectable BOOL roundsLeadingCorners;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC10InsightSDK9ITDimsObj")
@interface ITDimsObj : NSObject
- (nonnull instancetype)initWithItemCategory:(NSString * _Nonnull)itemCategory itemID:(NSString * _Nonnull)itemID itemName:(NSString * _Nonnull)itemName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class ITOptionObj;

SWIFT_CLASS("_TtC10InsightSDK10ITExtraObj")
@interface ITExtraObj : NSObject
- (nonnull instancetype)initWithOrderID:(NSString * _Nullable)orderID revenue:(float)revenue discountAmount:(float)discountAmount promotionCode:(NSString * _Nullable)promotionCode tax:(NSString * _Nullable)tax deliveryCost:(float)deliveryCost searchTerm:(NSString * _Nonnull)searchTerm pushNotificationID:(NSString * _Nullable)pushNotificationID options:(NSArray<ITOptionObj *> * _Nonnull)options OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10InsightSDK9ITItemObj")
@interface ITItemObj : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A view that adjusts it’s height based on keyboard hide and show notifications.
/// Pin it to the bottom of the screen using Auto Layout and then pin views that
/// should avoid the keyboard to the top of it. Supply an instance of this class
/// on <code>SwiftMessages.Config.keyboardTrackingView</code> or <code>SwiftMessagesSegue.keyboardTrackingView</code>
/// for automatic keyboard avoidance for the entire SwiftMessages view or view controller.
SWIFT_CLASS("_TtC10InsightSDK22ITKeyboardTrackingView")
@interface ITKeyboardTrackingView : UIView
/// The margin to maintain between the keyboard and the top of the view.
@property (nonatomic) IBInspectable CGFloat topMargin;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
@end

@class UILabel;
@class UIImageView;
@class UIButton;

SWIFT_CLASS("_TtC10InsightSDK13ITMessageView")
@interface ITMessageView : ITBaseView <WKNavigationDelegate>
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
/// An optional title label.
@property (nonatomic, strong) IBOutlet UILabel * _Nullable titleLabel;
/// An optional body text label.
@property (nonatomic, strong) IBOutlet UILabel * _Nullable bodyLabel;
/// An optional icon image view.
@property (nonatomic, strong) IBOutlet UIImageView * _Nullable iconImageView;
/// An optional icon label (e.g. for emoji character, icon font, etc.).
@property (nonatomic, strong) IBOutlet UILabel * _Nullable iconLabel;
/// An optional button. This buttons’ <code>.TouchUpInside</code> event will automatically
/// invoke the optional <code>buttonTapHandler</code>, but its fine to add other target
/// action handlers can be added.
@property (nonatomic, strong) IBOutlet UIButton * _Nullable button;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end









@class WKWebView;
@class WKNavigationAction;
@class WKNavigation;

@interface ITMessageView (SWIFT_EXTENSION(InsightSDK))
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (void)webView:(WKWebView * _Nonnull)webView didStartProvisionalNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView didFailProvisionalNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView didCommitNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
@end


SWIFT_CLASS("_TtC10InsightSDK11ITOptionObj")
@interface ITOptionObj : NSObject
- (nonnull instancetype)initWithOptionName:(NSString * _Nonnull)optionName optionValue:(NSString * _Nonnull)optionValue OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10InsightSDK18ITPhysicsAnimation")
@interface ITPhysicsAnimation : NSObject
- (void)adjustMargins;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10InsightSDK12ITProductObj")
@interface ITProductObj : ITItemObj
- (nonnull instancetype)initWithProductID:(NSString * _Nonnull)productID productName:(NSString * _Nonnull)productName productDescription:(NSString * _Nonnull)productDescription SKU:(NSString * _Nonnull)SKU price:(NSInteger)price quantity:(NSInteger)quantity brand:(NSString * _Nonnull)brand category:(NSString * _Nonnull)category variant:(NSString * _Nonnull)variant imageURL:(NSString * _Nonnull)imageURL productURL:(NSString * _Nonnull)productURL coupon:(NSString * _Nonnull)coupon sellerID:(NSString * _Nonnull)sellerID options:(NSArray<ITOptionObj *> * _Nonnull)options OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UIViewController;

/// <code>SwiftMessagesSegue</code> is a configurable subclass of <code>UIStoryboardSegue</code> that utilizes
/// SwiftMessages to present and dismiss modal view controllers. It performs these transitions by
/// becoming your view controller’s <code>transitioningDelegate</code> and calling SwiftMessage’s <code>show()</code>
/// and <code>hide()</code> under the hood.
/// To use <code>SwiftMessagesSegue</code> with Interface Builder, control-drag a segue, then select
/// “swift messages” from the Segue Type dialog. This configures a default transition. There are
/// two suggested ways to further configure the transition by setting options on <code>SwiftMessagesSegue</code>.
/// First, and recommended, you may subclass <code>SwiftMessagesSegue</code> and override <code>init(identifier:source:destination:)</code>.
/// Subclasses will automatically appear in the segue type dialog using an auto-generated name (for example, the
/// name for “VeryNiceSegue” would be “very nice”). Second, you may override <code>prepare(for:sender:)</code> in the
/// presenting view controller and downcast the segue to <code>SwiftMessagesSegue</code>.
/// <code>SwiftMessagesSegue</code> can be used without an associated storyboard or segue by doing the following in
/// the presenting view controller.
/// \code
/// let destinationVC = ... // make a reference to a destination view controller
/// let segue = SwiftMessagesSegue(identifier: nil, source: self, destination: destinationVC)
/// ... // do any configuration here
/// segue.perform()
///
/// \endcodeTo dismiss, call the UIKit API on the presenting view controller:
/// \code
/// dismiss(animated: true, completion: nil)
///
/// \endcodeIt is not necessary to retain <code>segue</code> because it retains itself until dismissal. However, you can
/// retain it if you plan to <code>perform()</code> more than once.
/// note:
/// Some additional details:
/// <ol>
///   <li>
///     Your view controller’s view will be embedded in a <code>SwiftMessages.BaseView</code> in order to
///     utilize some SwiftMessages features. This view can be accessed and configured via the
///     <code>SwiftMessagesSegue.messageView</code> property. For example, you may configure a default drop
///     shadow by calling <code>segue.messageView.configureDropShadow()</code>.
///   </li>
///   <li>
///     SwiftMessagesSegue provides static default view controller sizing based on device.
///     However, it is recommended that you specify sizing appropriate for your content using
///     one of the following methods.
///     <ol>
///       <li>
///         Define sufficient width and height constraints in your view controller.
///       </li>
///       <li>
///         Set <code>preferredContentSize</code> (a.k.a “Use Preferred Explicit Size” in Interface Builder’s
///         attribute inspector). Zeros are ignored, e.g. <code>CGSize(width: 0, height: 350)</code> only
///         affects the height.
///       </li>
///       <li>
///         Add explicit width and/or height constraints to <code>segue.messageView.backgroundView</code>.
///         Note that <code>Layout.topMessage</code> and <code>Layout.bottomMessage</code> are always full screen width.
///         For other layouts, the there is a maximum 500pt width on iPad (regular horizontal size class)
///         at 950 priority, which can be overridden by adding higher-priority constraints.
///       </li>
///     </ol>
///   </li>
/// </ol>
/// See the “View Controllers” selection in the Demo app for examples.
SWIFT_CLASS("_TtC10InsightSDK20ITSwiftMessagesSegue")
@interface ITSwiftMessagesSegue : UIStoryboardSegue
- (void)perform;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nullable)identifier source:(UIViewController * _Nonnull)source destination:(UIViewController * _Nonnull)destination OBJC_DESIGNATED_INITIALIZER;
@end







@protocol UIViewControllerAnimatedTransitioning;

@interface ITSwiftMessagesSegue (SWIFT_EXTENSION(InsightSDK)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10InsightSDK20ITTopBottomAnimation")
@interface ITTopBottomAnimation : NSObject
- (void)adjustMargins;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10InsightSDK9ITUserObj")
@interface ITUserObj : ITItemObj
- (nonnull instancetype)initWithUserID:(NSString * _Nonnull)userID username:(NSString * _Nonnull)username firstName:(NSString * _Nonnull)firstName lastName:(NSString * _Nonnull)lastName address:(NSString * _Nonnull)address avatar:(NSString * _Nonnull)avatar birthday:(NSString * _Nonnull)birthday email:(NSString * _Nonnull)email gender:(NSString * _Nonnull)gender phone:(NSString * _Nonnull)phone customerID:(NSString * _Nonnull)customerID OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10InsightSDK22ITWindowViewController")
@interface ITWindowViewController : UIViewController
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end












/// Class which implements the various <code>URLSessionDelegate</code> methods to connect various Alamofire features.
SWIFT_CLASS("_TtC10InsightSDK15SessionDelegate")
@interface SessionDelegate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSURLSession;

@interface SessionDelegate (SWIFT_EXTENSION(InsightSDK)) <NSURLSessionDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
@end

@class NSURLSessionDataTask;
@class NSCachedURLResponse;

@interface SessionDelegate (SWIFT_EXTENSION(InsightSDK)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask willCacheResponse:(NSCachedURLResponse * _Nonnull)proposedResponse completionHandler:(void (^ _Nonnull)(NSCachedURLResponse * _Nullable))completionHandler;
@end

@class NSURLSessionDownloadTask;

@interface SessionDelegate (SWIFT_EXTENSION(InsightSDK)) <NSURLSessionDownloadDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
@end

@class NSURLSessionTask;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSInputStream;
@class NSURLSessionTaskMetrics;

@interface SessionDelegate (SWIFT_EXTENSION(InsightSDK)) <NSURLSessionTaskDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task needNewBodyStream:(void (^ _Nonnull)(NSInputStream * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didFinishCollectingMetrics:(NSURLSessionTaskMetrics * _Nonnull)metrics;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session taskIsWaitingForConnectivity:(NSURLSessionTask * _Nonnull)task SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13);
@end









#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
