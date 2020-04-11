#include "gtest/gtest.h"
#include "Activity.h"
#include "Register.h"

int main() {
    ::testing::InitGoogleTest();
    Date firstDate = Date(2020, 3, 2);
    Activity firstActivity = Activity("Walk the dog", firstDate, Time(12, 30), Time(12, 45));
    Register reg = Register();
    reg.add(firstActivity);
    Activity secondActivity = Activity("Take a shower", firstDate, Time(19), Time(19, 10, 15));
    reg.add(secondActivity);
    Date secondDate = Date(2020, 4, 10);
    Activity thirdActivity = Activity("Go running", secondDate, Time(16, 45, 5), Time(17, 10));
    reg.show(firstDate);
    reg.add(thirdActivity);
    reg.show(secondDate);
    Date thirdDate = Date(2020, 12, 2);
    Activity forthActivity = Activity("Wash the car", thirdDate, Time(10, 30));
    reg.add(forthActivity);
    reg.remove(forthActivity);
    reg.show(thirdDate);
    return RUN_ALL_TESTS();
}