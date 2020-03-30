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
    auto firstDate = Date();
    auto secondDate = Date();
    auto thirdDate = Date();
    auto forthDate = Date();
    Register firstRegister;
    firstRegister.add(&firstDate, &firstActivity);
    firstRegister.add(&secondDate, &secondActivity);
    firstRegister.add(&thirdDate, &thirdActivity);
    firstRegister.add(&forthDate, &forthActivity);
    ASSERT_EQ(4, firstRegister.getNumActivities());
}
