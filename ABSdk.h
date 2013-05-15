//
//  AppBrickSdk.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/10/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//
/**
 ABSdk - This file provides the main entry point of the AppBrick SDK.
 App should call SDK's init method first then start method.
 */

#import <Foundation/Foundation.h>
#import "ABBase.h"


/**
 Set of methods to be implemented by app to get the data synchronization progress
 */
@protocol ABSdk
-(void) syncProgress;
-(void) syncDone;
@end

@interface ABSdk : ABBase

@property (nonatomic, strong) NSMutableArray* widgetsArray;
@property (nonatomic, strong) NSMutableDictionary* widgetsMap;
@property (nonatomic, strong) NSString* appKey;
@property (nonatomic, strong) NSString* version;
@property (nonatomic, strong) NSString* deviceId;

+ (ABSdk*) shared;

/**
 init - This function initializes sdk
 App should call this function in appdelegate's function didFinishLaunchingWithOptions.
 @param appid - you can get the appid by creating the app on WidgetBoost.com
 Example: [[ABSdk shared] init:@"XXXXXXXXX"];
 */
-(void) init:(NSString*)appKey appVersion:(NSString*)version;

/**
 startApp - This function registers and starts the app session.
 App should call this function in following appdelegate functions:
 didFinishLaunchingWithOptions - app started
 applicationDidBecomeActive - app entered in foreground
 Example: [[ABSdk shared] startApp];
 */
-(void) startApp;

/**
 stopApp - This function stops the app session.
 App should call this function in following appdelegate functions:
 applicationDidEnterBackground - app entered in background
 applicationWillTerminate - app is terminating
 Example: [[ABSdk shared] stopApp];
 */
-(void) stopApp;

/**
 enablePushNotifications - This function enables push notifications.
 App should call this function in appdelegate's function didFinishLaunchingWithOptions.
 Example: [[ABSdk shared] enablePushNotifications];
 */
-(void) enablePushNotifications;

/**
 loadWidgetLayer - This function loads the widget layer.
 You can create widgets on WidgetBoost.com and load those dynamically using widget layer.
 Example: [[ABSdk shared] loadWidgetLayer];
 */
-(void) loadWidgetLayer;

@end
