//
//  ABPatternService.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 3/16/13.
//  Copyright (c) 2013 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABPatternService - This tracks app's defined patterns on the website
 */
@interface ABPatternService : ABBase

+ (ABPatternService*) shared;

- (void)postevent:(NSString*)patternName eventName:(NSString*) eventName data:(NSMutableDictionary *) data;

@end
