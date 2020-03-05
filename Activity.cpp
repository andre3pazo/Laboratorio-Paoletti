//
// Created by andre on 05/03/2020.
//

#include "Activity.h"

const std::string &Activity::getDescription() const {
    std::cout << description;
    return description;
}

const Time &Activity::getStartTime() const {
    startTime.print();
    return startTime;
}

void Activity::setStartTime(const Time &startTime) {
    Activity::startTime = startTime;
}

void Activity::setDescription(const std::string &description) {
    Activity::description = description;
}

const Time &Activity::getEndTime() const {
    endTime.print();
    return endTime;
}

void Activity::setEndTime(const Time &endTime) {
    Activity::endTime = endTime;
}
