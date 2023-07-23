
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNQuickBase64Spec.h"

@interface QuickBase64 : NSObject <NativeQuickBase64Spec>
#else
#import <React/RCTBridgeModule.h>

@interface QuickBase64 : NSObject <RCTBridgeModule>
#endif

@end
