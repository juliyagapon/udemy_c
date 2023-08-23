#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/137.challengeToUpperCase/src/file_new.txt";

  FILE *pfiletemp = NULL;
  char *filenametemp = "/home/iuliia/Documents/udemy/c/137.challengeToUpperCase/src/file_new_temp.txt";
  char ch;


  pfile = fopen(filename, "r");
  pfiletemp = fopen(filenametemp, "w+");

  while ((ch = fgetc(pfile))!= EOF)
  {
    ch = toupper(ch); 
    fputc(ch, pfiletemp);
  }

  remove(filename);
  rename(filenametemp, filename);


  fclose(pfile);
  pfile = NULL;

  fclose(pfiletemp);
  pfiletemp = NULL;


}
