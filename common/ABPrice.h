//
//  ABPrice.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 10/25/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import "ABBase.h"

/**
 ABPrice - Price object, used in event widget
 */
@interface ABPrice : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, assign) double price;
@property (nonatomic, strong) NSString* currency;

@end
