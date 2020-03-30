//
// Created by andre on 09/03/2020.
//

#include "gtest/gtest.h"
#include "../../Date.h"

TEST(DateTest, CorrectDate) {
    auto date = Date(2020, 3, 24);
    ASSERT_EQ(2020, date.getYear());
    ASSERT_EQ(3, date.getMonth());
    ASSERT_EQ(24, date.getDay());
}
