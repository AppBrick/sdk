//
//  AppBrickBase.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    SYNC_FILE_STORE_ALL_LOCAL=0,
    SYNC_FILE_DO_NOT_STORE_LOCAL=1,
    SYNC_FILE_STORE_FILE_ONLY=2
}SYNC_FILE_ENUM;

/**
 ABBase - Base interface.
 */
@interface ABBase : NSObject

@property (retain,strong) NSMutableDictionary* attributes;
@property (nonatomic, strong) NSString* description;
@end
