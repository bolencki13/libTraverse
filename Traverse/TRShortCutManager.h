//
//  TRShortCutManager.h
//  test
//
//  Created by Brian Olencki on 10/17/15.
//  Copyright © 2015 bolencki13. All rights reserved.
//

#import <Foundation/Foundation.h>

//#define SCREEN ([UIScreen mainScreen].bounds)

typedef enum : NSInteger {
    TRShortCutTypeSpringboard, /* Actions only in springboard */
    TRShortCutTypeControlCenter, /* Actions only in control center */
    TRShortCutTypeAll /* All actions */
} TRShortCutType;

@interface TRShortCutManager : NSObject

/*
 *
 *  Shared Instance to be used at all times
 *
 */
+ (TRShortCutManager*)sharedInstance;

/*
 *
 *  Returns an array of 'SBSApplicationShortcutItem' based on the bundle identifer and the shortcuts type that are needed.
 *
 *  TRShortCutTypeControlCenter is only valid of QuickCenter is installed. The actions can still be grabbed but don't have any effect
 *
 */
- (NSArray*)shortCutsForAppWithBundleID:(NSString*)bundleID withType:(TRShortCutType)type;

/*
 *
 *  Returns the URLScheme (also included Activator actions and shell scripts) based on the bundle identifier, title of the action, and the type of actions that should be returned
 *
 */
- (NSString*)getURLSchemeForBundleID:(NSString*)bundleID withTitle:(NSString*)title withType:(TRShortCutType)type;

/*
 *
 *  Checks if the bundle identifier passed is included in the users Traverse actions
 *
 */
- (BOOL)containsBundleID:(NSString*)bundleID;
@end
