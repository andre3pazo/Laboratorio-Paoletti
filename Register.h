//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_REGISTER_H
#define ACTIVITIESREGISTER_REGISTER_H


#include <list>
#include <map>
#include "Date.h"
#include "Activity.h"

class Register {
public:
    void add(Activity activity) {
        activities.insert(std::make_pair(activity.getDate(), activity));
    }

    void remove(Activity activity) {
        activities.erase(activity.getDate());
    }
    
    bool search(Activity activity);

    int getNumActivities();

    void show(const Date& date);

private:
   std::multimap<Date, Activity> activities;
};


#endif //ACTIVITIESREGISTER_REGISTER_H
