#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/133.readfileFormated/src/file_new.txt";
  char str1[10], str2[10], str3[10];
  int year;


  pfile = fopen(filename, "r");

  if (pfile == NULL) {
    printf("Failed to open %s \n", filename);
    return -1;
  }

  rewind(pfile);
  fscanf(pfile, "%s %s %s %d", str1, str2, str3, year);

  printf("Read String1 | %s|\n", str1);
  printf("Read String2 | %s|\n", str2);
  printf("Read String3 | %s|\n", str3);
  printf("Read Integer | %s|\n", year);
  

  fclose(pfile);
  pfile = NULL;


}
