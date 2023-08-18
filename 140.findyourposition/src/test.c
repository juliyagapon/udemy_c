#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/140.findyourposition/src/file_new.txt";

  int i = 0;
  int cnt = 0;

  pfile = fopen(filename, "r");

  if (pfile == NULL) {
    perror("Error opening file");
    return -1;
  }

  fseek(pfile, 0, SEEK_END);
  //get the position of the file 
  cnt = ftell(pfile);

  while (i < cnt)
  {
    i++;
    fseek(pfile, -i, SEEK_END);
    printf("%c", fgetc(pfile));
  }
  

  fclose(pfile);
  pfile = NULL;

 }
