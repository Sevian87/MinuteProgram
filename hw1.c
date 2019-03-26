#include <stdio.h>

int main()
{
    int minutes_in_hour = 60, hours_in_day = 24, minutes_in_day;

    minutes_in_day = hours_in_day * minutes_in_hour;

    printf("Number of minutes in a day: %d.\n", minutes_in_day);

    return 0;
}
