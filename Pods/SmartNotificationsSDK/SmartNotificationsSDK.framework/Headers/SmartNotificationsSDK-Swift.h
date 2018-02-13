// Generated by Apple Swift version 4.0.3 (swiftlang-900.0.74.1 clang-900.0.39.2)
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

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if __has_feature(modules)
@import ObjectiveC;
@import UserNotifications;
@import Foundation;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("SmartNotificationsSDK")


@class UIApplication;
@class UNUserNotificationCenter;
@class UNNotificationResponse;

SWIFT_CLASS("_TtC21SmartNotificationsSDK5SNLib")
@interface SNLib : NSObject <UNUserNotificationCenterDelegate>
/// SNlib SDK shared instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SNLib * _Nonnull sharedInstance;)
+ (SNLib * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/// Sets the license the SDK needs to work
/// \param license the license number
///
- (void)startWithApplication:(UIApplication * _Nonnull)application license:(NSString * _Nonnull)license;
/// Register the app to use remote push notifications
/// You must call this method in your application(<em>:willFinishLaunchingWithOptions:) or application(</em>:didFinishLaunchingWithOptions:) method
- (void)registerForRemoteNotifications;
/// Request authorization to the user to send push notifications. Requests authorization for alerts with sound and badges.
- (void)requestUserPermissionForNotifications;
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Set the user ID that the client app uses to uniquely identify the device’s user on their system
/// \param clientId the client Id used by the app
///
- (void)setUserIdWithClientUserId:(NSString * _Nonnull)clientUserId;
/// After setting the user ID, you can use this method to add information to segment your users
/// \param key name of the information (for example ‘country’)
///
/// \param value value of the information (for example ‘Spain’)
///
- (void)addUserSegmentationInfoWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Use this method to add information about an event that happened on the app
/// \param name name of the event (for example ‘purchase’)
///
/// \param value value of the event (for example ‘123’)
///
- (void)addUserEventWithName:(NSString * _Nonnull)name value:(NSString * _Nonnull)value;
/// Use this method to add information about a conversion
/// \param campaignId ID of the campaign that triggered the conversion
///
/// \param conversionType the conversion type (for example ‘purchase’ or ‘add_to_cart’)
///
- (void)registerConversionWithCampaignId:(NSString * _Nonnull)campaignId conversionType:(NSString * _Nonnull)conversionType;
/// You can use this method to remove the information to segment the user added using addUserSegmentationInfo
- (void)resetUserSegmentationInfoWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Get the user ID that the SDK uses to uniquely identify the device’s user.
- (NSString * _Nonnull)getSDKUserId SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSString *> * _Nonnull)getCampaignIdsOfQueuedNotifications SWIFT_WARN_UNUSED_RESULT;
/// Stores the APNS token for the push notifications
/// \param deviceToken the APNS token received in the AppDelegate for the push notifications
///
- (void)setPushTokenWithDeviceToken:(NSData * _Nonnull)deviceToken;
/// Stores the APNS token for the push notifications
/// \param tokenString the APNS token received in the AppDelegate for the push notifications as a string
///
- (void)setPushTokenStringWithTokenString:(NSString * _Nonnull)tokenString;
/// Enable quiet hours so the SDK don’t post notifications during that hours even if they timeout
/// \param startHour the hour the quiet mode starts (0-23)
///
/// \param endHour the hour the quiet mode ends (0-23)
///
- (BOOL)enableQuietHoursWithStartHour:(NSInteger)startHour endHour:(NSInteger)endHour error:(NSError * _Nullable * _Nullable)error;
/// Disable quiet hours so the SDK don’t post notifications during that hours even if they timeout
- (BOOL)disableQuietHoursAndReturnError:(NSError * _Nullable * _Nullable)error;
/// Call this method to inform the SDK that the user clicked a notification
/// \param notificationUserInfo the userInfo received from the system
///
- (void)userOpenedNotificationWithNotificationUserInfo:(NSDictionary * _Nonnull)notificationUserInfo;
/// Call this method to inform the SDK that the user dismissed a notification
/// \param notificationUserInfo the userInfo received from the system
///
- (void)userDismissedNotificationWithNotificationUserInfo:(NSDictionary * _Nonnull)notificationUserInfo;
/// Call this method from your AppDelegate in your implementation of <a href="apple-reference-documentation://hsrxZhGg7Y">userNotificationCenter(_:didReceive:withCompletionHandler:)</a>
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceive:(UNNotificationResponse * _Nonnull)response SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)enqueueNotificationWithCampaignId:(NSString * _Nonnull)campaignId contentId:(NSString * _Nonnull)contentId notificationId:(NSString * _Nonnull)notificationId urlToOpen:(NSString * _Nullable)urlToOpen title:(NSString * _Nonnull)title body:(NSString * _Nonnull)body timeoutInMinutes:(NSInteger)timeoutInMinutes userInfo:(NSDictionary<NSString *, id> * _Nullable)userInfo attachmentUrl:(NSString * _Nullable)attachmentUrl;
- (BOOL)isAPNSNotificationForSNlibWithUserInfo:(NSDictionary * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
/// Call this method from your AppDelegate in your implementation of <a href="apple-reference-documentation://hsJ_ZUeQdp">application(_:didReceiveRemoteNotification:fetchCompletionHandler:)</a>
- (void)application:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo fetchCompletionHandler:(void (^ _Nonnull)(UIBackgroundFetchResult))fetchCompletionHandler completionHandler:(void (^ _Nonnull)(void))completionHandler;
/// Call this method from your AppDelegate in your implementation of <a href="apple-reference-documentation://hsygyIaZ9p">application(_ application: UIApplication, performFetchWithCompletionHandler completionHandler: @escaping (UIBackgroundFetchResult) -> Void)</a>
- (void)application:(UIApplication * _Nonnull)application performFetchWithCompletionHandler:(void (^ _Nonnull)(UIBackgroundFetchResult))completionHandler;
/// Call this method for the SDK to update the prediction
/// \param completion block to be executed when the prediction has been updated
///
- (void)updatePredictionWithCompletion:(void (^ _Nonnull)(BOOL))completion;
/// Stops the currently running prediction
- (void)stopPrediction;
@end



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
