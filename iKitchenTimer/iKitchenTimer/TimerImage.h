//
//  TimerImage.h
//  iKitchenTimer
//
//  Created by Jordan Zucker on 12/29/12.
//  Copyright (c) 2012 Adam Zucker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Timer;

@interface TimerImage : NSManagedObject

@property (nonatomic, retain) NSNumber * xOrigin;
@property (nonatomic, retain) NSNumber * yOrigin;
@property (nonatomic, retain) NSNumber * width;
@property (nonatomic, retain) NSNumber * height;
@property (nonatomic, retain) NSData * image;
@property (nonatomic, retain) Timer *timerFromTimerImage;

@end
