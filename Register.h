//
// Created by andre on 05/03/2020.
//

#ifndef ACTIVITIESREGISTER_REGISTER_H
#define ACTIVITIESREGISTER_REGISTER_H


#include <map>
#include <curses.h>
#include "Date.h"
#include "Activity.h"

class Register {
public:
    void add(Date* date, Activity* activity) {
        activities.insert(std::make_pair(date, activity));
    }

    void remove(Date* date) {
        activities.erase(date);
    }

    void show() const;

private:
    std::multimap<Date*, Activity*> activities;
};


#endif //ACTIVITIESREGISTER_REGISTER_H
