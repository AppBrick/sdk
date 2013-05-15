//
//  ABLogService.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 12/22/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import "ABBase.h"

/**
 ABLogService - Logging interface, sends logs to the backend server
 */
@interface ABLogService : ABBase

+ (ABLogService*) shared;

- (void)debug:(NSString*)log;
- (void)error:(NSString*)log;
- (void)info:(NSString*)log;

@end
