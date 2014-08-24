//
//  RealmTestTests.m
//  RealmTestTests
//
//  Created by Will Moore on 8/24/14.
//  Copyright (c) 2014 Will Moore. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <Realm/Realm.h>
#import "ResultRecord.h"

@interface RealmTestTests : XCTestCase

@end

@implementation RealmTestTests

- (void)testSort {
    NSString *realmPath = [[[NSBundle mainBundle] resourcePath]
                           stringByAppendingPathComponent:@"sample.realm"];
    RLMRealm *realm = [RLMRealm realmWithPath:realmPath];
    RLMArray *allResults = [[ResultRecord allObjectsInRealm:realm]
                            arraySortedByProperty:@"ageGroup" ascending:YES];
    RLMArray *sortedResults = [allResults
                               arraySortedByProperty:@"overallTime" ascending:YES];
    XCTAssertEqual(allResults.count, sortedResults.count);
}

@end
