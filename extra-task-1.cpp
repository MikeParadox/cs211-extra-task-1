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

