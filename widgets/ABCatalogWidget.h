//
//  ABCatalogWidget.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/30/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABWidget.h"

/**
 ABCatalogWidget - Catalog widget allows apps to create product catalogs
 and dynamically change them from the WidgetBoost.com's dashboard.
 */
@interface ABCatalogWidget : ABWidget<NSXMLParserDelegate>

-(void) load:(NSString*)widgetKey;
@property (retain,strong) NSMutableArray* categories;
@property (retain,strong) NSMutableDictionary* categoriesMap;
@end
