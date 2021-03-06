// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC10PaymentSDK11AccessToken")
@interface AccessToken : NSObject
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable scope;
@property (nonatomic, copy) NSString * _Nullable firstName;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable mobileNo;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable jti;
@end

@class NSError;

SWIFT_CLASS("_TtC10PaymentSDK19AccessTokenResponse")
@interface AccessTokenResponse : NSObject
@property (nonatomic, readonly, strong) AccessToken * _Nullable accessToken;
@property (nonatomic, readonly, strong) NSError * _Nullable error;
- (nonnull instancetype)initWithAccessToken:(AccessToken * _Nullable)accessToken error:(NSError * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
@end

enum Algorithm : NSInteger;

SWIFT_CLASS("_TtC10PaymentSDK10AuthConfig")
@interface AuthConfig : NSObject
- (int64_t)getTimestamp;
- (NSString * _Nonnull)getNonce;
- (enum Algorithm)getCrypto;
- (NSString * _Nonnull)getAuthorization;
- (NSString * _Nonnull)getSignature;
@end

typedef SWIFT_ENUM(NSInteger, Algorithm) {
  AlgorithmSHA1 = 0,
  AlgorithmSHA256 = 1,
  AlgorithmSHA512 = 2,
};

typedef SWIFT_ENUM(NSInteger, AuthMethod) {
  AuthMethodCLIENT = 0,
  AuthMethodPASSPORT = 1,
  AuthMethodPASSWORD = 2,
};


SWIFT_CLASS("_TtC10PaymentSDK19AuthorizeOtpRequest")
@interface AuthorizeOtpRequest : NSObject
- (nonnull instancetype)initWithOtpTransactionIdentifier:(NSString * _Nonnull)otpTransactionIdentifier otp:(NSString * _Nonnull)otp transactionRef:(NSString * _Nonnull)transactionRef OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK20AuthorizeOtpResponse")
@interface AuthorizeOtpResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@end

@class UILabel;
@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC10PaymentSDK24B68UIFloatLabelTextField")
@interface B68UIFloatLabelTextField : UITextField

/// The floating label that is displayed above the text field when there is other text in the text field.
@property (nonatomic, strong) UILabel * _Nonnull floatingLabel;

/// The color of the floating label displayed above the text field when it is in an active state (i.e. the associated text view is first responder).
///
/// @discussion Note: Default Color is blue.
@property (nonatomic, strong) UIColor * _Nonnull activeTextColorfloatingLabel;

/// The color of the floating label displayed above the text field when it is in an inactive state (i.e. the associated text view is not first responder).
///
/// @discussion Note: 70% gray is used by default if this is nil.
@property (nonatomic, strong) UIColor * _Nonnull inactiveTextColorfloatingLabel;

/// The default dynamic test size
@property (nonatomic, copy) NSString * _Nonnull placeHolderTextSize;

/// default padding for floatingLabel
@property (nonatomic) CGFloat verticalPadding;
@property (nonatomic) CGFloat horizontalPadding;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nullable placeholder;
- (BOOL)hasText;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
@end

typedef SWIFT_ENUM(NSInteger, HttpMethod) {
  HttpMethodDELETE = 0,
  HttpMethodGET = 1,
  HttpMethodJSON_POST = 2,
  HttpMethodPOST = 3,
  HttpMethodPUT = 4,
};


SWIFT_CLASS("_TtC10PaymentSDK8Passport")
@interface Passport : NSObject
+ (NSString * _Nonnull)liveApiBase;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret OBJC_DESIGNATED_INITIALIZER;

/// <ul><li>(FOR TESTING ONLY) If you'd like your API requests to hit your own</li><li>(mocked) server, you can set this up here by overriding the base api URL.</li></ul>
+ (void)overrideApiBase:(NSString * _Nonnull)overriddenApiBase;
+ (NSString * _Nonnull)getApiBase;
- (void)getAccessToken:(void (^ _Nonnull)(AccessToken * _Nullable, NSError * _Nullable))completionHandler;
- (void)userLogin:(NSString * _Nonnull)username password:(NSString * _Nonnull)password completionHandler:(void (^ _Nonnull)(AccessToken * _Nullable, NSError * _Nullable))completionHandler;
- (void)getUserAccessToken:(NSString * _Nonnull)accessCode redirectUri:(NSString * _Nonnull)redirectUri completionHandler:(void (^ _Nonnull)(AccessToken * _Nullable, NSError * _Nullable))completionHandler;
@end


SWIFT_CLASS("_TtC10PaymentSDK7Payment")
@interface Payment : NSObject
+ (NSString * _Nonnull)liveApiBase;

/// <ul><li>(FOR TESTING ONLY) If you'd like your API requests to hit your own</li><li>(mocked) server, you can set this up here by overriding the base api URL.</li></ul>
+ (void)overrideApiBase:(NSString * _Nonnull)overriddenApiBase;
+ (NSString * _Nonnull)getApiBase;
+ (NSString * _Nonnull)formatAuthData:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2;
+ (NSString * _Nonnull)randomStringWithLength:(NSInteger)len;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK13PaymentMethod")
@interface PaymentMethod : NSObject
@property (nonatomic, copy) NSString * _Nonnull token;
@property (nonatomic, copy) NSString * _Nonnull tokenExpiry;
@property (nonatomic, copy) NSString * _Nonnull panLast4Digits;
@property (nonatomic, copy) NSString * _Nonnull cardProduct;
@end

@class NSDate;

SWIFT_CLASS("_TtC10PaymentSDK21PaymentStatusResponse")
@interface PaymentStatusResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@property (nonatomic, copy) NSString * _Nonnull amount;
@property (nonatomic, strong) NSDate * _Nonnull transactionDate;
@property (nonatomic, copy) NSString * _Nonnull panLast4Digits;
@end


SWIFT_CLASS("_TtC10PaymentSDK15PurchaseRequest")
@interface PurchaseRequest : NSObject
- (nonnull instancetype)initWithCustomerId:(NSString * _Nullable)customerId amount:(NSString * _Nonnull)amount pan:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2 transactionRef:(NSString * _Nonnull)transactionRef currency:(NSString * _Nonnull)currency requestorId:(NSString * _Nullable)requestorId OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK16PurchaseResponse")
@interface PurchaseResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull transactionIdentifier;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@property (nonatomic, copy) NSString * _Nullable amount;
@property (nonatomic, copy) NSString * _Nullable balance;
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable tokenExpiryDate;
@property (nonatomic, copy) NSString * _Nullable panLast4Digits;
@property (nonatomic, copy) NSString * _Nullable cardType;
@property (nonatomic, copy) NSString * _Nullable otpTransactionIdentifier;
@end


@interface UIColor (SWIFT_EXTENSION(PaymentSDK))
@end


SWIFT_CLASS("_TtC10PaymentSDK19ValidateCardRequest")
@interface ValidateCardRequest : NSObject
- (nonnull instancetype)initWithCustomerId:(NSString * _Nullable)customerId pan:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2 transactionRef:(NSString * _Nonnull)transactionRef requestorId:(NSString * _Nullable)requestorId OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK20ValidateCardResponse")
@interface ValidateCardResponse : PurchaseResponse
@end


SWIFT_CLASS("_TtC10PaymentSDK14WalletResponse")
@interface WalletResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@property (nonatomic, copy) NSArray<PaymentMethod *> * _Nonnull paymentMethods;
@end

@class UIWebView;
@class NSURLRequest;

SWIFT_CLASS("_TtC10PaymentSDK17WebViewController")
@interface WebViewController : UIViewController <UIWebViewDelegate>
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)handle;
@end

#pragma clang diagnostic pop
