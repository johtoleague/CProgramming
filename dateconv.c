#include <stdio.h>
/* this stacked array represents years with and without the extra day
in leap year*/
static char daytab[2][13] = {
    {0, 31, 28,31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29,31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
}

/* day_of_yar: set day of year from month & day */

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = year%4 == 0 && year%100 != 0 || year&400 == 0;
    for (i = 1; i < month; i++)
}