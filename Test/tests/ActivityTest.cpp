//
// Created by andre on 24/03/2020.
//

#include "gtest/gtest.h"
#include "../../Activity.h"

TEST(ActivityTest, CorrectTime) {
    auto startTime = Time(22);
    auto endTime = Time(22, 30);
    auto activity = Activity("Descriprion", startTime, endTime);
    ASSERT_EQ(Time(22), activity.getStartTime());
    ASSERT_EQ(Time(22, 30), activity.getEndTime());
}

TEST(ActivityTest, CorrectDescription) {
    auto activity = Activity();
    EXPECT_EQ("Empty description", activity.getDescription());
}