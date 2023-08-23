#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/135.writetofile/src/test.txt";
  char ch;


  pfile = fopen(filename, "w+");

  for (ch = 33; ch <= 100; ch++) {
    fputc(ch, pfile);
  } 

  fputs("\n Hello there are", pfile);

  fprintf(pfile, "%s %s %s %s %d", "\nHello", "my", "number", "is", 987653);

  fclose(pfile);
  pfile = NULL;

}
