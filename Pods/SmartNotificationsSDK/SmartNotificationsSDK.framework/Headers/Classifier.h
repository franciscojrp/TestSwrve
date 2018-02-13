//
//  XGBoostLib.h
//  SnipXGBoost
//
//  Created by Francisco Rodriguez on 9/10/17.
//  Copyright © 2017 Smart Notifications. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Classifier : NSObject

+ (float)predictWithFloats:(NSArray *)floatsArray modelPath:(NSString *)path;

@end
