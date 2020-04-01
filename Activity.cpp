//
// Created by andre on 05/03/2020.
//

#include "Activity.h"

const std::string &Activity::getDescription() const {
    return description;
}

void Activity::setDescription(const std::string &description) {
    Activity::description = description;
}

const Time &Activity::getStartTime() const {
    return startTime;
}

void Activity::setStartTime(const Time &startTime) {
    Activity::startTime = startTime;
}

const Time &Activity::getEndTime() const {
    return endTime;
}

void Activity::setEndTime(const Time &endTime) {
    Activity::endTime = endTime;
}

const Date &Activity::getDate() const {
    return date;
}

void Activity::setDate(const Date &date) {
    Activity::date = date;
}
