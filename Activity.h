//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_ACTIVITY_H
#define ACTIVITIESREGISTER_ACTIVITY_H


#include "Time.h"

class Activity {
public:
    Activity(std::string d="Empty description", Time s=Time(), Time e=Time()) : description(d), startTime(s), endTime(e) {}

    const std::string &getDescription() const;
    void setDescription(const std::string &description);

    const Time &getStartTime() const;
    void setStartTime(const Time &startTime);

    const Time &getEndTime() const;
    void setEndTime(const Time &endTime);

private:
    std::string description;
    Time startTime;
    Time endTime;
};


#endif //ACTIVITIESREGISTER_ACTIVITY_H
