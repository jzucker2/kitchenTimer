//
//  Timer.h
//  iKitchenTimer
//
//  Created by Jordan Zucker on 12/29/12.
//  Copyright (c) 2012 Adam Zucker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Timer : NSManagedObject

@property (nonatomic, retain) NSDate * startDate;
@property (nonatomic, retain) NSDate * projectedEndTime;
@property (nonatomic, retain) NSNumber * isActive;
@property (nonatomic, retain) NSDate * stopDate;
@property (nonatomic, retain) NSNumber * duration;
@property (nonatomic, retain) NSNumber * elapsedTime;
@property (nonatomic, retain) NSManagedObject *timerImage;

@end
