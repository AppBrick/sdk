//
//  ABMatchQuizPair.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 10/19/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABImage.h"

/**
 ABMatchQuizPair - Matching quiz pair object
 */
@interface ABMatchQuizPair : ABBase

@property (nonatomic, strong) ABImage* img1;
@property (nonatomic, strong) ABImage* img2;

@end
