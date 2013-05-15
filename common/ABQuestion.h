//
//  ABQuestion.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/31/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABQuestion - question object
 */
@interface ABQuestion : ABBase

@property (nonatomic, strong) NSString* questionText;
@property (nonatomic, strong) NSString* image;
@property (nonatomic, strong) NSString* audio;
@property (nonatomic, assign) int rightOption;
@property (nonatomic, strong) NSMutableArray* options;
@property (nonatomic, strong) NSString* explaination;
@end
