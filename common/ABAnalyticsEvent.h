//
//  ABAnalyticsEvent.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 4/20/13.
//  Copyright (c) 2013 Cisco Systems. All rights reserved.
//

#import "ABBase.h"

/**
 ABAnalyticsEvent - Interface defines analytics event object.
 */
@interface ABAnalyticsEvent : ABBase

@property (nonatomic, strong) NSString* category;
@property (nonatomic, strong) NSString* name;

@end
