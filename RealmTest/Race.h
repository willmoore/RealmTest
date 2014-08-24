//
//  Race.h
//  RealmTest
//
//  Created by Will Moore on 8/24/14.
//  Copyright (c) 2014 Will Moore. All rights reserved.
//

#import <Realm/Realm.h>

@interface Race : RLMObject

@property NSInteger ID;
@property NSString *name;

@end

// This protocol enables typed collections. i.e.:
// RLMArray<Race>
RLM_ARRAY_TYPE(Race)
