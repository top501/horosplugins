//
//  Worklist.h
//  Worklists
//
//  Created by Alessandro Volz on 09/14/2012.
//  Copyright 2012 OsiriX Team. All rights reserved.
//

#import <Foundation/Foundation.h>


extern NSString* const WorklistIDKey;
extern NSString* const WorklistNameKey;
extern NSString* const WorklistHostKey;
extern NSString* const WorklistPortKey;
extern NSString* const WorklistAETKey;
extern NSString* const WorklistRefreshSecondsKey;
extern NSString* const WorklistAutoRetrieveKey;


@interface Worklist : NSObject {
    NSDate* _lastRefreshDate;
    NSMutableDictionary* _properties;
}

@property(retain,readonly) NSDate* lastRefreshDate;

+ (id)worklistWithProperties:(NSMutableDictionary*)properties;
- (id)initWithProperties:(NSMutableDictionary*)properties;

- (void)setProperties:(NSMutableDictionary*)properties;

- (void)delete;

@end