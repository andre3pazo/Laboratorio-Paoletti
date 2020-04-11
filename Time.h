//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_TIME_H
#define ACTIVITIESREGISTER_TIME_H


#include <iostream>

class Time {
public:
    Time(int h=0, int m=0, int s=0); //Le ore devono essere espresse come un numero tra 0 e 23; i minuti e i secondi tra 0 e 59.

    void setHour(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minutes;
    }

    int getSecond() const {
        return seconds;
    }

    const std::string printHour() const;
    const std::string printMinutes() const;
    const std::string printSeconds() const;

    bool operator==(const Time& time) const;

private:
    int hour;
    int minutes;
    int seconds;
};


#endif //ACTIVITIESREGISTER_TIME_H
