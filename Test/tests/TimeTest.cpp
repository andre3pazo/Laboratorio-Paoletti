//
// Created by andre on 09/03/2020.
//

#include "gtest/gtest.h"
#include "../../Time.h"

TEST(TimeTest, CorrectConstructor) {
    auto time = Time(20, 30, 40);
    ASSERT_EQ(20, time.getHour());
    ASSERT_EQ(30, time.getMinute());
    ASSERT_EQ(40, time.getSecond());
    ASSERT_THROW(Time(24), std::out_of_range);
    ASSERT_THROW(Time(12, 60), std::out_of_range);
    ASSERT_THROW(Time(12, 30, 60), std::out_of_range);
}

TEST(TimeTest, CorrectSetters) {
    auto time = Time();
    time.setHour(1);
    ASSERT_EQ(time.getHour(), 1);
    time.setMinutes(20);
    ASSERT_EQ(time.getMinute(), 20);
    time.setSeconds(30);
    ASSERT_EQ(time.getSecond(), 30);
    ASSERT_THROW(time.setSeconds(60), std::out_of_range);
    ASSERT_THROW(time.setMinutes(60), std::out_of_range);
    ASSERT_THROW(time.setHour(24), std::out_of_range);
}