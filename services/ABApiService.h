//
//  ABApiService.h
//  AppBrickSdk
//
//  Created by Vijay Gaur on 3/16/13.
//  Copyright (c) 2013 AppBrick Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "ABBase.h"

/**
 ABApiService - Apps can create APIs and implement backend on ServiceBlade.com
 */
@protocol ABApiServiceDelegates
-(void) handleResponse:(NSString*) name type:(NSString*) type data:(NSString*) data;
-(void) handleTimeout:(NSString*) name type:(NSString*) type;
@end

@interface ABApiService : ABBase
{
    id <ABApiServiceDelegates> delegate;
    NSURLConnection* connection;
    NSObject* parent_;
}
@property (retain, nonatomic) id <ABApiServiceDelegates> delegate;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* apikey;
@property (nonatomic, strong) NSString* type;

-(void) init:(NSString*) name apikey:(NSString*) apikey ;//delegate:(id <ABApiService>)delegate;
-(void) sendRequest:(NSString*) type data:(NSString*) data;

@end
