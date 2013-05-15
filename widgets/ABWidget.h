//
//  WidgetBase.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABWidget - Widget base interface.
 */
@interface ABWidget : ABBase

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* link;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* description;
@property (nonatomic, strong) NSString* developer;
@end
