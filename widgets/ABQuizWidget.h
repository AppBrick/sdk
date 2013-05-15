//
//  ABQuizWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/11/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABQuizWidget - Quiz widget allows apps to create multiple choice quizes
 and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABQuizWidget : ABWidget

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* quizes;
@property (retain,strong) NSMutableDictionary* quizesMap;

@end
