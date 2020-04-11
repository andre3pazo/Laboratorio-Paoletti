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
