//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Daniel Cai on 14/4/17.
//  Copyright (c) 2014 Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

// public properties
@property NSString          * pItemName;
@property BOOL                bCompleted;
@property (readonly) NSDate * pCreateDate;

@end
