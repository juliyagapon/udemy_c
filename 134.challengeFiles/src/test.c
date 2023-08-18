#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/134.challengeFiles/src/file_new.txt";
  char str[60];
  int counter = 0;
  char c;


  pfile = fopen(filename, "r");

  if (pfile == NULL) {
    printf("Failed to open %s \n", filename);
    return -1;
  }

  while ((c = fgetc(pfile))!= EOF)
  {
    if (c == '\n') counter++;
  }
  

  fclose(pfile);
  pfile = NULL;

  printf("there is %d lines\n", counter);


}
