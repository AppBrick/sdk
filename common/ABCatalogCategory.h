//
//  ABCatalogCategoryObj.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/29/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABCatalogCategory - Category holds catalog sub categories
 */
@interface ABCatalogCategory : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* description;
@property (nonatomic, strong) NSMutableArray* subcategories;
@end
