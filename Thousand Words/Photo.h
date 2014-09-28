//
//  Photo.h
//  Thousand Words
//
//  Created by Juha Näppi on 26.9.2014.
//  Copyright (c) 2014 Kamuli Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Album *albumBook;

@end
