//
//  ABImageObj.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 8/30/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABBase.h"

/**
 ABImage - Image object
 */
@interface ABImage : ABBase

@property(nonatomic,retain) NSString* imageLink;
@property(nonatomic,retain) NSString* imageIcon;
@property(nonatomic,retain) NSMutableArray* frames;
@end
