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
    else
        month = m;
    if (d < 1 || d > 31)
        throw std::out_of_range("Trying to set invalid day");
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
            throw std::out_of_range("Trying to set invalid day");
    if (m == 2 && d > 28) {
        if (d == 29 && (y % 4 != 0 || (y % 4 == 0 && y % 100 == 0)))
            throw std::out_of_range("Trying to set invalid day in February");
        else if (d > 29)
            throw std::out_of_range("Trying to set invalid day in February");
    }
    day = d;
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
    else
        month = m;
}

void Date::setDay(int d) {
    if (d < 1 || d > 31)
        throw std::out_of_range("Trying to set invalid day");
    else {
        if ((month == 4 || month == 6 || month == 9 || month == 11) && d > 30)
            throw std::out_of_range("Trying to set invalid day");
        else if (month == 2) {
            if (d > 28 && (year % 4 != 0 || (year % 4 == 0 && year % 100 == 0)))
                throw std::out_of_range("Trying to set invalid day in February");
            if (d > 29 && year % 4 == 0 && (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)))
                throw std::out_of_range("Trying to set invalid day in February");
        } else
            day = d;
    }
}

const std::string Date::printDay() const {
    return std::to_string(day);
}

const std::string Date::printMonth() const {
    if(month == 1)
        return "January";
    if(month == 2)
        return "February";
    if(month == 3)
        return "March";
    if(month == 4)
        return "April";
    if(month == 5)
        return "May";
    if(month == 6)
        return "June";
    if(month == 7)
        return "July";
    if(month == 8)
        return "August";
    if(month == 9)
        return "September";
    if(month == 10)
        return "October";
    if(month == 11)
        return "November";
    if(month == 12)
        return "December";
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

bool Date::operator<(const Date &date) const {
    if(year < date.getYear())
        return true;
    if(year > date.getYear())
        return false;
    if(year == date.getYear()) {
        if (month < date.getMonth())
            return true;
        if (month > date.getMonth())
            return false;
        if(month == date.getMonth()) {
            if(day < date.getDay())
                return true;
            if(day > date.getDay())
                return false;
        }
    }
}
