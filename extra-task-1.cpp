#include "extra-task-1.h"
#include <cassert>

constexpr int num_sec_in_hour{3600};
constexpr int num_minutes_in_hour{60};
constexpr int num_sec_in_minute{60};

// returns time in hours from time given in minutes
int get_hours(int time) { return time / num_sec_in_hour; }

// returns time in minutes from given time minus whole hours
int get_minutes(int time) { return time % num_sec_in_hour / num_sec_in_minute; }

// returns time in seconds from given time minus whole minutes
int get_seconds(int time) { return time % num_sec_in_minute; }

// Returns the number of seconds later that a time in seconds time2 than
// time1
double seconds_difference(double time_1, double time_2)
{
    /*      >>> seconds_difference(1800.0, 3600.0) 1800.0
            >>> seconds_difference(3600.0, 1800.0) - 1800.0
            >>> seconds_difference(1800.0, 2160.0) 360.0
            >>> seconds_difference(1800.0, 1800.0) 0.0*/
    return time_2 - time_1;
}

