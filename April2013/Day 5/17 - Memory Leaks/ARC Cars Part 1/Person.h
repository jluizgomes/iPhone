//
//  Person.h
//  ObjectOwnership
//
//  Created by Paul Solt on 4/25/13.
//  Copyright (c) 2013 Paul Solt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject {
    NSString *_name;
    unsigned int _weight;
}

@property (strong) NSString *name;
@property unsigned int weight;

@end
