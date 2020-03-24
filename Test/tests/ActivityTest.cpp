//
// Created by andre on 24/03/2020.
//

#include "ActivityTest.h"
#include "../../Time.h"
#include "../../Register.h"

TEST(ActivityTest, CorrectTime) {
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
    /*std::string description = "description";
    Time* startTime = new Time(12, 30);
    Time* endTime = new Time(14, 20);
    Activity* activity = new Activity(description, *startTime, *endTime);
    Date* date = new Date(2020, 3, 24);
    Register reg;
    reg.add(date, activity);*/
}
