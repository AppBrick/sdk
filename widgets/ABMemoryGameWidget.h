//
//  ABMemoryGameWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/31/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABMemoryGameWidget - Memory game widget allows apps to create memory games
 and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABMemoryGameWidget : ABWidget

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* imagesArray;

@end
