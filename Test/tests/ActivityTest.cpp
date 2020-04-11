//
// Created by andre on 24/03/2020.
//

#include "gtest/gtest.h"
#include "../../Activity.h"

TEST(ActivityTest, CorrectDescription) {
    auto activity = Activity();
    EXPECT_EQ("Empty description", activity.getDescription());
}

TEST(ActivityTest, CorrectDate) {
    auto date = Date(2020, 5, 2);
    auto activity = Activity("", date);
    ASSERT_EQ(Date(2020, 5, 2), activity.getDate());
    ASSERT_THROW(activity.setDate(-10), std::out_of_range);
}

TEST(ActivityTest, CorrectTime) {
    auto startTime = Time(22);
    auto endTime = Time(22, 30);
    auto activity = Activity("", Date(), startTime, endTime);
    ASSERT_EQ(Time(22), activity.getStartTime());
    ASSERT_EQ(Time(22, 30), activity.getEndTime());
    ASSERT_THROW(activity.setStartTime(Time(25)),std::out_of_range);
    ASSERT_THROW(activity.setEndTime(Time(-10)), std::out_of_range);
}