//
// Created by andre on 09/03/2020.
//

#include "gtest/gtest.h"
#include "../../Time.h"

TEST(TimeTest, CorrectTime) {
    auto time = Time(20, 30, 40);
    ASSERT_EQ(20, time.getHour());
    ASSERT_EQ(30, time.getMinute());
    ASSERT_EQ(40, time.getSecond());
}
