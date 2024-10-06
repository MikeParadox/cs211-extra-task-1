#ifndef EXTRA_TASK_1_H
#define EXTRA_TASK_1_H

// returns time in hours from time given in minutes
int get_hours(int time);

// returns time in minutes from given time minus whole hours
int get_minutes(int time);

// returns time in seconds from given time minus whole minutes
int get_seconds(int time);

// Return the number of seconds later that a time in seconds
double seconds_difference(double time_1, double time_2);

// Returns the number of hours later that a time in seconds
double hours_difference(double time_1, double time_2);

// Return the total number of hours in the specified number of hours,
// minutes, and seconds.
double to_float_hours(int hours, int minutes, int seconds);

#endif
