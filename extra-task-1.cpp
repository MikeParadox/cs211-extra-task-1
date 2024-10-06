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
    return time_2 - time_1;
}

// Returns the number of hours later that a time in seconds
double hours_difference(double time_1, double time_2)
{
    return static_cast<double>(time_2 - time_1) / num_sec_in_hour;
}

// Return the total number of hours in the specified number of hours,
// minutes, and seconds.
double to_float_hours(int hours, int minutes, int seconds)
{
    assert(minutes >= 0 && minutes < num_minutes_in_hour);
    assert(seconds >= 0 && seconds < num_sec_in_minute);

    return static_cast<double>(hours * num_sec_in_hour +
                               minutes * num_sec_in_minute + seconds) /
           num_sec_in_hour;
}

// double to_24_hour_clock(double hours)
// {
//     /*
//         hours is a number of hours since midnight. Return the
//         hour as seen on a 24-hour clock.

//         Precondition: hours >= 0

//         >>> to_24_hour_clock(24)
//         0

//         >>> to_24_hour_clock(48)
//         0

//         >>> to_24_hour_clock(25)
//         1

//         >>> to_24_hour_clock(4)
//         4

//         >>> to_24_hour_clock(28.5)
//         4.5

//         You may wish to inspect various function in <cmath> to work
//         with integer and fractional part of a hours separately.

//     */
// }

// /*
//     Implement three functions
//         * get_hours
//         * get_minutes
//         * get_seconds
//     They are used to determine the hours part, minutes part and seconds part
//     of a time in seconds. E.g.:

//     >>> get_hours(3800)
//     1

//     >>> get_minutes(3800)
//     3

//     >>> get_seconds(3800)
//     20

//     In other words, if 3800 seconds have elapsed since midnight,
//     it is currently 01:03:20 (hh:mm:ss).
// */

// double time_to_utc(int utc_offset, double time)
// {
//     /*
//         Return time at UTC+0, where utc_offset is the number of hours away
//        from UTC+0. You may be interested in:
//         https://en.wikipedia.org/wiki/Coordinated_Universal_Time

//         >>> time_to_utc(+0, 12.0)
//         12.0

//         >>> time_to_utc(+1, 12.0)
//         11.0

//         >>> time_to_utc(-1, 12.0)
//         13.0

//         >>> time_to_utc(-11, 18.0)
//         5.0

//         >>> time_to_utc(-1, 0.0)
//         1.0

//         >>> time_to_utc(-1, 23.0)
//         0.0
//     */
// }

// double time_from_utc(int utc_offset, double time)
// {
//     /*
//         Return UTC time in time zone utc_offset.

//         >>> time_from_utc(+0, 12.0)
//         12.0

//         >>> time_from_utc(+1, 12.0)
//         13.0

//         >>> time_from_utc(-1, 12.0)
//         11.0

//         >>> time_from_utc(+6, 6.0)
//         12.0

//         >>> time_from_utc(-7, 6.0)
//         23.0

//         >>> time_from_utc(-1, 0.0)
//         23.0

//         >>> time_from_utc(-1, 23.0)
//         22.0

//         >>> time_from_utc(+1, 23.0)
//         0.0
//     */
// }
