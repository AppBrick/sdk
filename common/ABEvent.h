//
//  ABEvent.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 10/25/12.
//  Copyright (c) 2012 AppBrick Inc All rights reserved.
//

#import "ABBase.h"
#import "ABPrice.h"
#import "ABAddress.h"

/**
 ABEvent - Event object
 */
@interface ABEvent : ABBase

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) ABAddress* address;
@property (nonatomic, strong) NSString* phone;
@property (nonatomic, strong) NSString* date;
@property (nonatomic, strong) NSString* time;
@property (nonatomic, strong) NSString* video;
@property (nonatomic, strong) NSMutableArray* images;
@property (nonatomic, strong) NSMutableArray* prices;
@end
