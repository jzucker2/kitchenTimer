//
//  MainViewController.h
//  iKitchenTimer
//
//  Created by Adam Zucker on 12/28/12.
//  Copyright (c) 2012 Adam Zucker. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate, UIImagePickerControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@property (strong, nonatomic) UIImagePickerController *takePictureController;

@end
