//
//  ABCategoryObj.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/17/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABNotesCategory - Notes widget allows apps to create flash cards
 and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABNotesCategory : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* description;
@property (nonatomic, strong) NSMutableArray* notes;

@end
