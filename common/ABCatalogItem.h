//
//  ABCatalogItem.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/30/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABCatalogItem - Catalog item
 */
@interface ABCatalogItem : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* description;
@property (nonatomic, strong) NSMutableArray* audios;
@property (nonatomic, strong) NSMutableArray* videos;
@property (nonatomic, strong) NSMutableArray* documents;
@property (nonatomic, strong) NSMutableArray* images;
@end
