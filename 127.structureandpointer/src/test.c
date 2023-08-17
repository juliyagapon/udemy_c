#include <stdio.h>
#include <string.h>

struct sDate
{
  int date;
  int mount;
  int year;
};

struct sIntPoints
{
  int *p1;
  int *p2;
};

struct sNamectl
{
  char * fname;
  char * sname;
  char * letters;
};


int main(int argc, char *argv[]) {
   struct sDate dates[5] = {{12, 10, 2021}, {.mount=9, .date=17, .year=2023}, {1, 10, 2022}};

    printf("%d/%d/%d\n", dates[2].date, dates[2].mount, dates[2].year);

   struct sDate *pdates = dates;

   printf("Pointer date: %d/%d/%d\n", (int*)(pdates+1)->date, (*pdates).mount, pdates->year);


   int i1 = 100, i2 = 10;

   struct sIntPoints points;
   points.p1 = &i1;
   points.p2 = &i2;

   printf("i1 = %d; i2 = %d \n", *points.p1, *points.p2); 



   char temp[30]= "Jerrald";

   struct sNamectl *pst;

   pst->fname = (char*)malloc(strlen(temp)+1);

   strcpy(pst->fname, temp);

   temp[30]= "Joshn";
   pst->sname = (char*)malloc(strlen(temp)+1);

   strcpy(pst->sname, temp); 
   temp[30]= "j.j@mail.com";

   pst->letters = (char*)malloc(strlen(temp)+1);

   strcpy(pst->letters, temp); 

   printf("%s, %s, %s", *pst->fname, *pst->sname, *pst->letters);
}
