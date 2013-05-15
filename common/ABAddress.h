//
//  ABAddress.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 10/25/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import "ABBase.h"

/**
 ABAddress - Address object
 */
@interface ABAddress : ABBase

@property (nonatomic, strong) NSString* address;
@property (nonatomic, strong) NSString* city;
@property (nonatomic, strong) NSString* state;
@property (nonatomic, strong) NSString* country;
@property (nonatomic, strong) NSString* zip;
@property (nonatomic, strong) NSString* phone;

@end
