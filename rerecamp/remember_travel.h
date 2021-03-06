//
//  remember_travel.h
//  rerecamp
//
//  Created by yukihara on 2013/08/28.
//  Copyright (c) 2013年 edu.self. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"
#import "FMDatabaseAdditions.h"

@interface remember_travel : NSObject

@property (nonatomic, retain) NSMutableArray *travelName;
@property (nonatomic, retain) NSMutableArray *date;
@property (nonatomic, retain) NSMutableArray *picture;
@property (nonatomic, retain) NSArray  *paths;
@property (nonatomic, retain) NSString *dir;
@property (nonatomic, retain) NSString *db_path;
@property (nonatomic, retain) FMDatabase *db;

-(void)set_array:(int)travelNo;
-(void)setTravelList;
+(void)resetTravelNo;
+(void)changeTravelNo:(int)newTravelNo;
+(int)referTravelNo;

@end
