#include <stdio.h>
#include <string.h>

struct sDate
{
  int date;
  int mount;
  int year;
};

int main(int argc, char *argv[]) {
   struct sDate dates[5] = {{12, 10, 2021}, {.mount=9, .date=17, .year=2023}, {1, 10, 2022}};

    printf("%d/%d/%d\n", dates[2].date, dates[2].mount, dates[2].year);
   
}
