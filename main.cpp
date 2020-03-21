#include <iostream>
#include <gtest/gtest.h>
#include "Activity.h"
#include "Register.h"

int main() {
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
    Activity* activity = new Activity("Walk the dog", Time(12, 30), Time(12, 45));
    Date* date = new Date(2020, 3, 2);
    Register reg = Register();
    reg.add(date, activity);
    Activity* anotherActivity = new Activity("Take a shower", Time(19), Time(19, 10, 15));
    reg.add(date, anotherActivity);
    reg.show();
    delete activity;
    delete date;
    delete anotherActivity;
}