//
//  EventWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"
#import "ABEventWidget.h"

/**
 ABEventWidget - Event widget allows apps to get collection of events and dynamically
 change the collection from the WidgetBoost.com's dashboard.
 */
@interface ABEventWidget : ABWidget<NSXMLParserDelegate>

@property (retain,strong) NSMutableArray* events;

-(void) init:(NSString *)url syncType:(SYNC_FILE_ENUM)type;
@end
