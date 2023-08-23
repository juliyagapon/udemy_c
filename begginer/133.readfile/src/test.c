#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/133.readfile/src/file_new.txt";
  int c;

  pfile = fopen(filename, "r");

  if (pfile == NULL) {
    printf("Failed to open %s \n", filename);
    return -1;
  }

  while ((c = fgetc(pfile))!= EOF)
  {
    printf("%c", c);
  }
  

  fclose(pfile);
  pfile = NULL;


}
