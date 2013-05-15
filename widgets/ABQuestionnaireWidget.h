//
//  ABQuestionnaireWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/11/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABQuestionnaireWidget - Questionnaire widget allows apps to create questionnaires
 and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABQuestionnaireWidget : ABWidget

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* quizes;
@end
