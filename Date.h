//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_DATE_H
#define ACTIVITIESREGISTER_DATE_H


#include <iostream>

class Date {
public:
    Date(int y=2020, int m=1, int d=1);

    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);

    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    const Date* print() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
        return this;
    }

private:
    int year;
    int month;
    int day;
};


#endif //ACTIVITIESREGISTER_DATE_H
