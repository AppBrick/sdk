//
//  AppBrickAnalytics.h
//  AppBrickAnalytics
//
//  Created by Vijay Gaur on 2/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

@interface ABAnalyticsService : ABBase


+ (ABAnalyticsService*) shared;

/**
 postevent - This function posts app events to the backend platform for analytics.
 App should call this function to capture events.
 @param category - Event category is used to classify events in different groups.
 @param eventName - Name of the event.
 Example: [[ABAnalyticsService shared] postevent:<category> eventName:<event name>];
 */
- (void)postevent:(NSString*)category eventName:(NSString*)name;

@end
