//
//  ABSubCategoryObj.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/29/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABCatalogSubCategory - Subcategory of catalog widget, it holds list of catalog items.
 */
@interface ABCatalogSubCategory : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* description;
@property (nonatomic, strong) NSMutableArray* items;
@end
