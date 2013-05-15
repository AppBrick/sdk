//
//  ABQuiz.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/31/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABQuiz - quiz object
 */
@interface ABQuiz : ABBase

-(void) report;

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* description;
@property (nonatomic, strong) NSMutableArray* questions;
@end
