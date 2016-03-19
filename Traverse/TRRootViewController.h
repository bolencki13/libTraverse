//
//  ViewController.h
//  watchJB
//
//  Created by Brian Olencki on 3/13/16.
//  Copyright © 2016 bolencki13. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Preferences/Preferences.h>

@interface TRRootViewController : PSViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate>
/*
 *
 *  The dictionary used in the tableview:
 *      @{
 *      @"0" : @[
 *              @"Section 0, row 0",
 *              @"Section 0, row 1",
 *              @"Section 0, row 2",
 *              ],
 *      @"1" : @[
 *              @"Section 1, row 0",
 *              @"Section 1, row 1",
 *              ]
 *      }
 *
 */
@property (nonatomic, retain) NSDictionary *dictTableInformation;

/*
 *
 *  UITableView used in the UIViewController
 *
 */
@property (nonatomic, retain) UITableView *tableView;

/*
 *
 *  UIRefreshControl used in the UITableView above
 *
 */
@property (nonatomic, retain) UIRefreshControl *refreshControl;

/*
 *
 *  Returns the UIViewController that will be used for 3D touch and presented on UITableViewCell selection
 *
 */
- (UIViewController*)viewControllerForObjectAtIndex:(NSIndexPath*)indexPath withNavBar:(BOOL)hasNavBar;

/*
 *
 *  Returns the UIImage used as an icon for the UITableViewCell
 *
 */
- (UIImage*)getImageForIndex:(NSIndexPath*)indexPath;

/*
 *
 *  Part of the UITableViewDataSource
 *
 */
- (UITableViewCell*)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

/*
 *
 *  Part of the UITableViewDelegate
 *
 */
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

/*
 *
 *  Called when the Above UIRefreshControl (refreshControl) is called
 *
 */
- (void)refreshTable:(UIRefreshControl*)sender;
@end
