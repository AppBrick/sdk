//
//  ABMatchingQuizWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/11/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABMatchingQuizWidget - Matching quiz widget allows apps to create matching quiz 
 games and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABMatchingQuizWidget : ABWidget<NSXMLParserDelegate>

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* matchpairs;
@end
