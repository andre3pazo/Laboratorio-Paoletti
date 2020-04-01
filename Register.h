//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_REGISTER_H
#define ACTIVITIESREGISTER_REGISTER_H


#include <list>
#include "Date.h"
#include "Activity.h"

class Register {
public:
    void add(const Activity& activity) {
        activities.push_back(activity);
    }

    void remove(const Activity& activity) {
        activities.remove(activity);
    }

    int getNumActivities();

    void show(const Date& date) const;

private:
    std::list<Activity> activities;
};


#endif //ACTIVITIESREGISTER_REGISTER_H
