//
//  ABNotesWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/17/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABNotesWidget - Notes widget allows apps to create flash cards
 and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABNotesWidget : ABWidget

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* categories;
@property (retain,strong) NSMutableDictionary* categoriesMap;
@end

