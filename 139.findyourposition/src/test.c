#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/139.findyourposition/src/file_new.txt";

  int len;

  pfile = fopen(filename, "r");

  if (pfile == NULL) {
    perror("Error opening file");
    return -1;
  }

  fseek(pfile, 0, SEEK_END);

  len = ftell(pfile);

  fclose(pfile);
  pfile = NULL;

  printf("Total size of %s = %d bytes\n", filename, len);

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/139.findyourposition/src/file_new2.txt";

  fpos_t position;

  pfile = fopen(filename, "w+");

  fgetpos(pfile, &position);
  fputs("Hello world", pfile);

  fclose(pfile);
  pfile = NULL;



}
