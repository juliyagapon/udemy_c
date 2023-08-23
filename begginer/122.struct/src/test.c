#include <stdio.h>
#include <string.h>

struct sDate
{
  int month;
  int date;
  int year;
};


int main(int argc, char *argv[]) {
   struct sDate today;
   today.date = 17;
   today.year = 2023;
   today.month = 8;

   struct sDate *ptoday;
   ptoday = &today;

   printf("date %d", ptoday->date);

   struct sDate today1 = {12, 20, 2022};
   struct sDate today3 = {.date = 12, .month = 6, .year = 2022};

   struct sDate today5 = (struct sDate) {9, 15, 1999};
}
