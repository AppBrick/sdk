//
//  ABQuestionOption.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/31/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABQuestionOption - this represents multiple choice option object
 */
@interface ABQuestionOption : ABBase

@property (nonatomic, strong) NSString* optionText;
@property (nonatomic, strong) NSString* optionImage;
@end
