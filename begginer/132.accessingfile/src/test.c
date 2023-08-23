#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  
  /*fileOpen() 
  w a r w+ a+ r+
  */
  FILE *pfile = NULL;
  char *filename = "/home/iuliia/Documents/udemy/c/132.accessingfile/src/test.txt";
  pfile = fopen(filename, "w");

  if (pfile != NULL)
    printf("Failed to open %s \n", filename);

  fclose(pfile);
  pfile = NULL;

  rename("/home/iuliia/Documents/udemy/c/132.accessingfile/src/file.txt", "/home/iuliia/Documents/udemy/c/132.accessingfile/src/file_new.txt");

  //remove("/home/iuliia/Documents/udemy/c/132.accessingfile/src/file.txt");

}
