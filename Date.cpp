//
// Created by andre on 05/03/2020.
//

#include "Date.h"

Date::Date(int y, int m, int d) {
    if (y < 0)
        throw std::out_of_range("Trying to set negative year");
    else
        year = y;
    if (m < 1 || m > 12)
        throw std::out_of_range("Trying to set invalid month");
    else {
        if (m == 1)
            month = "January";
        if (m == 2)
            month = "February";
        if (m == 3)
            month = "March";
        if (m == 4)
            month = "April";
        if (m == 5)
            month = "May";
        if (m == 6)
            month = "June";
        if (m == 7)
            month = "July";
        if (m == 8)
            month = "August";
        if (m == 9)
            month = "September";
        if (m == 10)
            month = "October";
        if (m == 11)
            month = "November";
        if (m == 12)
            month = "December";
    }
    if (d < 1 || d > 31)
        throw std::out_of_range("Trying to set invalid day");
    else {
        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
            throw std::out_of_range("Trying to set invalid day");
        else if (m == 2) {
            if (((y % 4 == 0 && y % 100 != 0) || (y % 4 && y % 400)) && d > 29)
                throw std::out_of_range("Trying to set invalid day in February");
            else if (d > 28)
                throw std::out_of_range("Trying to set invalid day in February");
        } else
            day = d;
    }
}

void Date::setYear(int y) {
    if (y < 0)
        throw std::out_of_range("Trying to set negative year");
    else
        year = y;
}

void Date::setMonth(int m) {
    if (m < 1 || m > 12)
        throw std::out_of_range("Trying to set invalid month");
    else if (m == 1)
        month = "January";
    if (m == 2)
        month = "February";
    if (m == 3)
        month = "March";
    if (m == 4)
        month = "April";
    if (m == 5)
        month = "May";
    if (m == 6)
        month = "June";
    if (m == 7)
        month = "July";
    if (m == 8)
        month = "August";
    if (m == 9)
        month = "September";
    if (m == 10)
        month = "October";
    if (m == 11)
        month = "November";
    if (m == 12)
        month = "December";
}

void Date::setDay(int d) {
    if (d < 1 || d > 31)
        throw std::out_of_range("Trying to set invalid day");
    else {
        if ((month == "April" || month == "June" || month == "September" || month == "November") && d > 30)
            throw std::out_of_range("Trying to set invalid day");
        else if (month == "February") {
            if (((year % 4 == 0 && year % 100 != 0) || (year % 4 && year % 400)) && d > 29)
                throw std::out_of_range("Trying to set invalid day in February");
            else if (d > 28)
                throw std::out_of_range("Trying to set invalid day in February");
        } else
            day = d;
    }
}

const std::string Date::printDay() const {
    return std::to_string(day);
}

const std::string Date::printMonth() const {
    return month;
}

const std::string Date::printYear() const {
    return std::to_string(year);
}

bool Date::operator==(const Date& date) const {
    if(date.getDay() == this->getDay()) {
        if (date.getMonth() == this->getMonth()) {
            if (date.getYear() == this->getYear())
                return true;
            else
                return false;
        } else
            return false;
    } else
        return false;
}
