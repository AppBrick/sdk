//
//  AppBrickLogin.h
//  AppBrickLogin
//
//  Created by Vijay Gaur on 2/7/12.
//  Copyright (c) 2012 AppBrick Inc. All rights reserved.
//
/**
 ABMembershipService - This file provides the membership functionalities.
 Apps can use this membership interface to signup and login users.
 */

#import <Foundation/Foundation.h>

@protocol ABMembershipServiceDelegate
-(void) loginSuccessful;
-(void) signupSuccessful;
-(void) loginFailed:(NSString*)message;
-(void) signupFailed:(NSString*)message;
@end

@interface ABMembershipService : NSObject<NSXMLParserDelegate>
{
    id <ABMembershipServiceDelegate> delegate;
}
@property (retain, nonatomic) id <ABMembershipServiceDelegate> delegate;

+ (ABMembershipService*) shared;

/**
 login - This function allows app to login a user.
 This function can be called at app's login button click.
 @param email - email id of the user.
 @param password - password of the user.
 @param delegate - app delegate
 Example: [[ABMembershipService shared] login:<email> password:<password delegate:<delegate>];
 */
- (void) login:(NSString*)email password:(NSString*)password delegate:(id <ABMembershipServiceDelegate>)delegate;

/**
 signup - This function allows an app user to signup.
 This function can be called at app's signup button click.
 @param email - email id of the user.
 @param password - password of the user.
 @param phone - phone number of the user <Optional>
 @param name - name of the user
 @param delegate - app delegate
 Example: [[ABMembershipService shared] signup:<name> email:<email> password:<password> phone:<phone number> delegate:<delegate>];
 */
- (void) signup:(NSString*)name email:(NSString*)email password:(NSString*)password phone:(NSString*)phone delegate:(id <ABMembershipServiceDelegate>)delegate;

@end
