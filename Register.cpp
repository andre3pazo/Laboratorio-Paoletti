//
// Created by andre on 05/03/2020.
//

#include "Register.h"

void Register::show() const {
    std::cout << "Register contains: " << std::endl;
    for (auto it: activities) {
        std::cout << "In the date ";
        (it.first)->print();
        std::cout << " the activities done are: " << std::endl;
        (it.second)->getDescription();
        std::cout << " from ";
        (it.second)->getStartTime();
        std::cout << " to ";
        (it.second)->getEndTime();
        std::cout << std::endl;
    }
}
