//
//  PlayersTableViewController.h
//  Ratings
//
//  Created by Steven Burnett on 8/15/15.
//  Copyright (c) 2015 Steven Burnett. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"


@interface PlayersTableViewController : UITableViewController <PlayerDetailsViewControllerDelegate>
@property (nonatomic, strong) NSMutableArray* players;
@end
