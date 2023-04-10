#import <Cordova/CDV.h>
#import <Easebuzz/Easebuzz.h>

@interface EBMain : CDVPlugin

@property NSString *callbackId;

- (void)paywitheasebuzz:(CDVInvokedUrlCommand *)command;

@end
