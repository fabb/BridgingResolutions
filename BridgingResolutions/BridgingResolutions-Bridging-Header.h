//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

// the problem is that FBSDKCoreKit.h imports FBSDKAppEvents.h too, but with a FBSDKCoreKit/ prefix
#import "FBSDKAppEvents.h"
#import "FBSDKCoreKit/FBSDKCoreKit.h"
// or this, does not matter
//#import <FBSDKCoreKit/FBSDKCoreKit.h>
