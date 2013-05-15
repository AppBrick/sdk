//
//  ABPushNotifyService.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 11/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import "ABBase.h"

/**
 ABPushNotifyService - push notification interface
 */
@interface ABPushNotifyService : ABBase

@property (nonatomic, strong) NSString* deviceToken;

+ (ABPushNotifyService*) shared;

- (void) registerNotifications;

- (void) setDeviceToken: (NSData *) token;

- (void) notify: (NSDictionary *) info;



@end
