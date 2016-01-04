//
//  PlayerCell.h
//  Ratings
//
//  Created by Steven Burnett on 8/17/15.
//  Copyright (c) 2015 Steven Burnett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
