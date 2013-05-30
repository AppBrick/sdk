//
//  DeviceObj.h
//  AppBrickAnalytics
//
//  Created by Vijay Gaur on 2/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 ABDevice - Interface contains device properties.
 */
@interface ABDevice : NSObject
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* model;
@property (nonatomic, strong) NSString* os;
@property (nonatomic, strong) NSString* version;
@property (nonatomic, strong) NSString* carrier;
@property (nonatomic, strong) NSString* ipAddress;
@property (nonatomic, strong) NSString* deviceId;
@property (nonatomic, assign) int status;

+(ABDevice *)shared;
- (NSDictionary *) getDeviceDataDictionary;
- (NSString *)getIPAddress;


@end
