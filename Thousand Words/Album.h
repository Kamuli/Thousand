//
//  Album.h
//  Thousand Words
//
//  Created by Juha Näppi on 23.9.2014.
//  Copyright (c) 2014 Kamuli Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Album : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * date;

@end
