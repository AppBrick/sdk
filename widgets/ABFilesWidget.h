//
//  ABFilesWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/11/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABFilesWidget - File widget allows apps to get collection of files and dynamically
 change them from the WidgetBoost.com's dashboard.
 */
@interface ABFilesWidget : ABWidget<NSXMLParserDelegate>

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* categories;
@property (retain,strong) NSMutableDictionary* categoriesMap;

@end
