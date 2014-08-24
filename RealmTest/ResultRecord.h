//
//  ResultsRecord.h
//  RealmTest
//
//  Created by Will Moore on 8/24/14.
//  Copyright (c) 2014 Will Moore. All rights reserved.
//

#import <Realm/Realm.h>
#import "Race.h"

typedef NS_ENUM(NSInteger, Gender) {
    GenderUnknown   = 0,
    GenderMale      = 1,
    GenderFemale    = 2,
};

@interface ResultRecord : RLMObject

@property NSInteger ID;
@property Race *race;
@property BOOL isSelf;
@property NSInteger bibNumber;
@property NSString *name;
@property NSInteger age;
@property Gender gender;
@property (nonatomic, copy) NSString *genderString;
@property NSString *city;
@property NSString *state;
@property NSString *country;
@property NSString *ageGroup;
@property NSTimeInterval startTime;
@property NSInteger overallPlaceAll;
@property NSInteger overallPlaceAgeGroup;
@property NSInteger overallPlaceGender;
@property NSTimeInterval overallTime;
@property NSTimeInterval swimTime;
@property NSInteger swimPlaceAll;
@property NSInteger swimPlaceAgeGroup;
@property NSInteger swimPlaceGender;
@property NSTimeInterval T1Time;
@property NSInteger T1PlaceAll;
@property NSInteger T1PlaceAgeGroup;
@property NSInteger T1PlaceGender;
@property NSTimeInterval T1CumulativeTime;
@property NSInteger T1CumulativePlaceAll;
@property NSInteger T1CumulativePlaceAgeGroup;
@property NSInteger T1CumulativePlaceGender;
@property NSTimeInterval bikeTime;
@property NSInteger bikePlaceAll;
@property NSInteger bikePlaceAgeGroup;
@property NSInteger bikePlaceGender;
@property NSTimeInterval bikeCumulativeTime;
@property NSInteger bikeCumulativePlaceAll;
@property NSInteger bikeCumulativePlaceAgeGroup;
@property NSInteger bikeCumulativePlaceGender;
@property NSTimeInterval T2Time;
@property NSInteger T2PlaceAll;
@property NSInteger T2PlaceAgeGroup;
@property NSInteger T2PlaceGender;
@property NSTimeInterval T2CumulativeTime;
@property NSInteger T2CumulativePlaceAll;
@property NSInteger T2CumulativePlaceAgeGroup;
@property NSInteger T2CumulativePlaceGender;
@property NSTimeInterval runTime;
@property NSInteger runPlaceAll;
@property NSInteger runPlaceAgeGroup;
@property NSInteger runPlaceGender;

@end

// This protocol enables typed collections. i.e.:
// RLMArray<ResultRecord>

RLM_ARRAY_TYPE(ResultRecord)
