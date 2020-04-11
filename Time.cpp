//
// Created by andre on 05/03/2020.
//

#include "Time.h"

Time::Time(int h, int m, int s) {
    if (h<0 || h>23)
        throw std::out_of_range("Trying to set invalid hour");
    else if (m<0 || m>59)
        throw std::out_of_range("Trying to set invalid minute");
    else if (s<0 || s>59)
        throw std::out_of_range("Trying to set invalid second");
    else {
        hour = h;
        minutes = m;
        seconds = s;
    }
}

void Time::setHour(int h) {
    if (h>=0 && h<24)
        hour = h;
    else
        throw std::out_of_range("Trying to set invalid hour");
}

void Time::setMinutes(int m) {
    if (m>=0 && m<60)
        minutes = m;
    else
        throw std::out_of_range("Trying to set invalid minute");
}

void Time::setSeconds(int s) {
    if (s >= 0 && s < 60)
        seconds = s;
    else
        throw std::out_of_range("Trying to set invalid second");
}

const std::string Time::printHour() const {
    return std::to_string(hour);
}

const std::string Time::printMinutes() const {
    return std::to_string(minutes);
}

const std::string Time::printSeconds() const {
    return std::to_string(seconds);
}

bool Time::operator==(const Time& time) const {
    if(hour == time.getHour()) {
        if (minutes == time.getMinute()) {
            if (seconds == time.getSecond())
                return true;
            else
                return false;
        } else
            return false;
    } else
        return false;
}
