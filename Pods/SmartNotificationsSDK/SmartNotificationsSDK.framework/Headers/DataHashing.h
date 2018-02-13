//
//  DataHashing.h
//  SmartNotificationsSDK
//
//  Created by Francisco Rodriguez on 23/5/17.
//  Copyright © 2017 Smart Notifications. All rights reserved.
//

@interface DataHashing : NSObject

+ (nonnull NSString*) sha256:(NSString *_Nullable)input;
+ (nonnull NSString*) md5:(NSString *_Nullable)input;

@end
