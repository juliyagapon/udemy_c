#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/133.readfile_byString/src/file_new.txt";
  char str[60];


  pfile = fopen(filename, "r");

  if (pfile == NULL) {
    printf("Failed to open %s \n", filename);
    return -1;
  }

  while (fgets(str, 60, pfile) != NULL)
  {
    printf("%s", str);
  }
  

  fclose(pfile);
  pfile = NULL;


}
