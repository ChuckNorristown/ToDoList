//
//  ToDoItem.h
//  ToDoList
//
//  Created by Sean Shields on 4/17/15.
//  Copyright (c) 2015 Sean Shields. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
