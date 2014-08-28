//
//  ViewController.h
//  UITableViewTest
//
//  Created by iBlock on 14-8-28.
//  Copyright (c) 2014年 iBlock. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
