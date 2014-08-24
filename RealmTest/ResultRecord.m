//
//  ResultsRecord.m
//  RealmTest
//
//  Created by Will Moore on 8/24/14.
//  Copyright (c) 2014 Will Moore. All rights reserved.
//

#import "ResultRecord.h"

@implementation ResultRecord

// Specify default values for properties

//+ (NSDictionary *)defaultPropertyValues
//{
//    return @{};
//}

// Specify properties to ignore (Realm won't persist these)
+ (NSArray *)ignoredProperties {
    return @[@"genderString"];
}

- (NSString *)genderString {
    NSString *gender = @"Unk";
    switch (self.gender) {
        case GenderUnknown:
            break;
        case GenderMale:
            gender = @"Male";
            break;
        case GenderFemale:
            gender = @"Female";
            break;
    }
    return gender;
}

@end
