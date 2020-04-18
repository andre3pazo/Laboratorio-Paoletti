//
// Created by andre on 30/03/2020.
//

#include "gtest/gtest.h"
#include "../../Register.h"

TEST(RegisterTest, CorrectActivitiesNumber) {
    auto firstActivity = Activity();
    auto secondActivity = Activity();
    auto thirdActivity = Activity();
    auto forthActivity = Activity();
    Register firstRegister;
    firstRegister.add(firstActivity);
    firstRegister.add(secondActivity);
    firstRegister.add(thirdActivity);
    firstRegister.add(forthActivity);
    ASSERT_EQ(4, firstRegister.getNumActivities());
}

TEST(RegisterTest, CorrectInsertRemove) {
    auto firstDate = Date(2020, 3, 5);
    auto secondDate = Date(2020, 4, 2);
    auto firstActivity = Activity("", firstDate);
    auto secondActivity = Activity("", secondDate);
    auto reg = Register();
    reg.add(firstActivity);
    reg.add(secondActivity);
    ASSERT_EQ(reg.getNumActivities(), 2);
    reg.remove(secondActivity);
    ASSERT_EQ(reg.getNumActivities(), 1);
    ASSERT_TRUE(reg.search(firstActivity));
    ASSERT_FALSE(reg.search(secondActivity));
}
