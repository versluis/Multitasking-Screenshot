//
//  DetailViewController.h
//  Background
//
//  Created by Jay Versluis on 08/01/2015.
//  Copyright (c) 2015 Pinkstone Pictures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

