#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MOUNTH 12

struct t_thing {
    float a[YEARS][MOUNTH];
};

void printYearAverage (float yearAverage[YEARS], float yearlyAvarage) {
   int arrYears[YEARS] = {2023, 2022, 2021, 2020, 2019};
   
   printf("\nYEAR  RAINFALL (mm)\n");
   for (int y=0; y < YEARS; y++) {
      printf("%d      %.2f\n", arrYears[y], yearAverage[y]);
   }

   printf("\nThe yearly avarage is %.2f (mm)\n", yearAverage);
}

void printMothlyAverage (float arrMothlyAverage[MOUNTH]) {
   char arrmMounths[MOUNTH][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
   
   printf("\nMonthly avarages (mm):\n");
   for (int m = 0; m < MOUNTH; m++) {
      printf("%s-%.2f; ", arrmMounths[m], arrMothlyAverage[m]);
   }
   printf("\n\n");
}

void calculateYearAverage(int arrWeater[YEARS][MOUNTH]) {
   float yearAverage[YEARS] = {0.0, 0.0, 0.0, 0.0, 0.0};
   float yearlyAvarage = 0.0;

   for (int y = 0; y < YEARS; y++) {
      float sum = 0.0;
      for (int m = 0; m < MOUNTH; m++) {
         sum += arrWeater[y][m];
      }
      yearAverage[y] = sum/MOUNTH;
      yearlyAvarage += yearAverage[y];
   }
   yearlyAvarage /= YEARS;

   printYearAverage(yearAverage, yearlyAvarage);
}

void calculateMothlyAverage(int arrWeater[YEARS][MOUNTH]) {
   float arrMothlyAverage[MOUNTH] = {};
   for (int m = 0; m < MOUNTH; m++) {
      float sum = 0.0;
      for (int y = 0; y < YEARS; y++) {
         sum = arrWeater[y][m];
      }
      arrMothlyAverage[m] = sum/YEARS;
   }
   printMothlyAverage(arrMothlyAverage);
}

int main(int argc, char *argv[]) {
   int arrWeater[YEARS][MOUNTH] = {
      {90, 60, 135, 95, 110, 110, 155, 155, 175, 260, 645, 565},
      {100, 60, 135, 95, 110, 110, 176, 155, 175, 260, 678, 689},
      {99, 34, 135, 98, 679, 88, 155, 155, 175, 260, 900, 450},
      {98, 44, 135, 108, 124, 899, 155, 155, 175, 260, 567, 565},
      {91, 120, 135, 101, 90, 110, 155, 155, 175, 260, 346, 565},
   };

   calculateYearAverage(arrWeater);
   calculateMothlyAverage(arrWeater);
   return 0;
}