//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_ACTIVITY_H
#define ACTIVITIESREGISTER_ACTIVITY_H


#include "Time.h"
#include "Date.h"

class Activity {
public:
    Activity(std::string d="Empty description", Date date=Date(), Time s=Time(), Time e=Time()) : description(d), date(date), startTime(s), endTime(e) {}

    const std::string &getDescription() const;
    void setDescription(const std::string &description);

    const Date &getDate() const;

    void setDate(const Date &date);

    const Time &getStartTime() const;
    void setStartTime(const Time &startTime);

    const Time &getEndTime() const;
    void setEndTime(const Time &endTime);

private:
    std::string description;
    Date date;
    Time startTime;
    Time endTime;
};


#endif //ACTIVITIESREGISTER_ACTIVITY_H
