#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <stdbool.h>

enum kMonth {January=1, February, March, April, May, June, July, August, September, October, November, December};

enum kDay {Sunday, Monday, Tuesday, Wednesda, Thuesday, Friday, Saturday};

struct date
{
    enum kMonth month;
    enum kDay day;
    int year;
};

//Date type 
typedef struct date Date;

//Functions that work with dates
Date dateUpdate(Date today);
int numberOfDays(Date d);
bool isLeapYear(Date d);

//Macro to set a date in a structure
#define setDate(s, mm, dd, yy) s = (Date) {mm, dd, yy}

//External variable reference
extern Date todaysDate;


#endif //DATE_H_INCLUDED