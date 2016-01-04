//
//  Player.h
//  Ratings
//
//  Created by Steven Burnett on 8/15/15.
//  Copyright (c) 2015 Steven Burnett. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
