//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_TIME_H
#define ACTIVITIESREGISTER_TIME_H


#include <iostream>

class Time {
public:
    Time(int h=0, int m=0, int s=0);

    void setHour(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    int getHour() {
        return hour;
    }

    int getMinute() {
        return minutes;
    }

    int getSecond() {
        return seconds;
    }

    const void print() const {
        std::cout << hour << ":" << minutes << ":" << seconds;
    }

private:
    int hour;
    int minutes;
    int seconds;
};


#endif //ACTIVITIESREGISTER_TIME_H
