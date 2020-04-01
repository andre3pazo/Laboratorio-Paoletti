#include <gtest/gtest.h>
#include "Activity.h"
#include "Register.h"

int main() {
    Date date = Date(2020, 3, 2);
    Activity activity = Activity("Walk the dog", date, Time(12, 30), Time(12, 45));
    Register reg = Register();
    reg.add(activity);
    Activity anotherActivity = Activity("Take a shower", date, Time(19), Time(19, 10, 15));
    reg.add(anotherActivity);
    reg.show(date);
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
    return 0;
}