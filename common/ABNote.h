//
//  ABNotesObj.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 7/17/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABNote - interface holds properties of a flash card.
 */
@interface ABNote : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* imageLink;

@end
