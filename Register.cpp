//
// Created by andre on 05/03/2020.
//

#include "Register.h"

void Register::show(const Date& date) {
    std::cout << std::endl;
    auto it = activities.find(date);
    if(it != activities.end()) {
        std::cout << "In the day ";
        std::cout << date.printDay() << " of " << date.printMonth() << " " << date.printYear();
        std::cout << " the following activities were done: " << std::endl;
        while (it->first == date) {
            std::cout << (it->second).getDescription() << " (from ";
            (it->second).printStartTime();
            std::cout << " to ";
            (it->second).printEndTime();
            std::cout << ")" << std::endl;
            it++;
        }
    } else {
        std::cout << "No activities were done in the day ";
        std::cout << date.printDay() << " of " << date.printMonth() << " " << date.printYear() << ".";
        std::cout << std::endl << std::endl;
    }
}

int Register::getNumActivities() {
    int result = 0;
    for(auto it: activities)
        result += 1;
    return result;
}
