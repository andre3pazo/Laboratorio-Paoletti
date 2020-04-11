//
// Created by andre on 09/03/2020.
//

#include "gtest/gtest.h"
#include "../../Date.h"

TEST(DateTest, CorrectConstructor) {
    auto date = Date(2020, 2, 29);
    ASSERT_EQ(2020, date.getYear());
    ASSERT_EQ(2, date.getMonth());
    ASSERT_EQ(29, date.getDay());
    ASSERT_THROW(Date(-1),std::out_of_range);
    ASSERT_THROW(Date(2020, 13), std::out_of_range);
    ASSERT_THROW(Date(2020, 12, 32), std::out_of_range);
    ASSERT_THROW(Date(1900, 2, 29), std::out_of_range);
}

TEST(DateTest, CorrectSetters) {
    auto date = Date(2020, 3, 24);
    date.setDay(1);
    date.setMonth(4);
    date.setYear(2019);
    ASSERT_EQ(1, date.getDay());
    ASSERT_EQ(4, date.getMonth());
    ASSERT_EQ(2019, date.getYear());
    ASSERT_THROW(date.setYear(-1),std::out_of_range);
    ASSERT_THROW(date.setMonth(13), std::out_of_range);
    ASSERT_THROW(date.setDay(32), std::out_of_range);
    date.setMonth(2);
    ASSERT_THROW(date.setDay(30), std::out_of_range);
}