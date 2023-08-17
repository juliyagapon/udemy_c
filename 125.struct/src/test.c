#include <stdio.h>
#include <string.h>

struct sTime
{
  int sec;
  int min;
  int hour;
};


struct sDate
{
  int date;
  int mount;
  int year;
};


struct sTime2
{
  struct sDate2
  {
    int date;
    int mount;
    int year;
  } dob;

  int sec;
  int min;
  int hour;
};

struct sDateandTime
{
  struct sTime time;
  struct sDate date;
};



int main(int argc, char *argv[]) {
struct sDateandTime dateandtime = {{10, 20, 8}, {10, 11, 2017}};

printf("Time %d:%d:%d\n", dateandtime.time.hour, dateandtime.time.min, dateandtime.time.sec);    
   
}
