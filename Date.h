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

    std::string getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    const std::string printDay() const;
    const std::string printMonth() const;
    const std::string printYear() const;

    bool operator==(const Date& date) const;

private:
    int year;
    std::string month;
    int day;
};


#endif //ACTIVITIESREGISTER_DATE_H
