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

void Activity::setStartTime(const Time &time) {
    (this->startTime).setHour(time.getHour());
    (this->startTime).setMinutes(time.getMinute());
    (this->startTime).setSeconds(time.getSecond());
}

const Time &Activity::getEndTime() const {
    return endTime;
}

void Activity::setEndTime(const Time &time) {
    (this->endTime).setHour(time.getHour());
    (this->endTime).setMinutes(time.getMinute());
    (this->endTime).setSeconds(time.getSecond());
}

const Date &Activity::getDate() const {
    return date;
}

void Activity::setDate(const Date &newDate) {
    (this->date).setYear(newDate.getYear());
    (this->date).setMonth(newDate.getMonth());
    (this->date).setDay(newDate.getDay());
}

const void Activity::printStartTime() const {
    std::cout << startTime.printHour() << ":";
    std::cout << startTime.printMinutes() << ":";
    std::cout << startTime.printSeconds();
}

const void Activity::printEndTime() const {
    std::cout << endTime.printHour() << ":";
    std::cout << endTime.printMinutes() << ":";
    std::cout << endTime.printSeconds();
}
