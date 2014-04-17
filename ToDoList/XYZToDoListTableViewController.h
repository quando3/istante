//
//  XYZToDoListTableViewController.h
//  ToDoList
//
//  Created by Daniel on 14/4/16.
//  Copyright (c) 2014 Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoListTableViewController : UITableViewController

// define a action for unwind to table view from add view
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
