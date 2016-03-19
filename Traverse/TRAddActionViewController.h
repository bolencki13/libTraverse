//
//  TRAddActionViewController.h
//  watchJB
//
//  Created by Brian Olencki on 3/13/16.
//  Copyright © 2016 bolencki13. All rights reserved.
//

#import "TRRootViewController.h"

@interface TRAddActionViewController : TRRootViewController
/*
 * @{
 *  @"title" : @"your title string"
 *  @"subtitle" : @"your subtitle string"
 *  @"icon" : @0
 *  @"url_scheme" : @"your url scheme/activator action/shellscript"
 *  }
 *
 *  Icon Numbers:
 *      0 = Add
 *      1 = Compose
 *      2 = Location
 *      3 = Pause
 *      4 = Play
 *      5 = Search
 *      6 = Share
 *
 */
- (void)setValues:(NSDictionary*)values;
@end