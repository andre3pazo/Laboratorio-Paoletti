//
// Created by andre on 05/03/2020.
//

#include "Date.h"

Date::Date(int y, int m, int d) {
    if (y < 0)
        throw std::out_of_range("Trying to set negative year");
    else if (m < 1 || m > 12)
        throw std::out_of_range("Trying to set invalid month");
    else if (d < 1 || d > 31)
        throw std::out_of_range("Trying to set invalid day");
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        throw std::out_of_range("Trying to set invalid day");
    else if (m == 2) {
        if (((y % 4 == 0 && y % 100 != 0) || (y % 4 && y % 400)) && d > 29)
            throw std::out_of_range("Trying to set invalid day in February");
        else if (d > 28)
            throw std::out_of_range("Trying to set invalid day in February");
    } else {
        year = y;
        month = m;
        day = d;
    }
}

void Date::setYear(int y) {
    if (y<0)
        throw std::out_of_range("Trying to set negative year");
    else
        year = y;
}

void Date::setMonth(int m) {
    if (m<1 || m>12)
        throw std::out_of_range("Trying to set invalid month");
    else
        month = m;
}

void Date::setDay(int d) {
    if ((month==4 || month==6 || month==9 || month==11) && d>30)
        throw std::out_of_range("Trying to set invalid day");
    if (month==2) {
        if (((year % 4 == 0 && year % 100 != 0) || (year % 4 && year % 400)) && d > 29)
            throw std::out_of_range("Trying to set invalid day in February");
        else if (d > 28)
            throw std::out_of_range("Trying to set invalid day in February");
    }
    day = d;
}
