//
// Created by andre on 05/03/2020.
//

#include "Register.h"

void Register::show(const Date& date) const {
    std::cout << "In the day ";
    std::cout << date.printDay() << " of " << date.printMonth() << " " << date.printYear() << std::endl;
    std::cout << " the following activities were done: " << std::endl;
    for (auto it: activities) {
        if(it.getDate() == date) {
            std::cout << it.getDescription() << " from ";
            it.printStartTime();
            std::cout << " to ";
            it.printStartTime();
            std::cout << std::endl;
        }
    }
}

int Register::getNumActivities() {
    int result = 0;
    for(auto it: activities)
        result += 1;
    return result;
}
