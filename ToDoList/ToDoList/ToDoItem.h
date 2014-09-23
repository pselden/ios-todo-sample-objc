//
//  ToDoItem.h
//  ToDoList
//
//  Created by Paul Selden on 9/22/14.
//  Copyright (c) 2014 Paul Selden. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
