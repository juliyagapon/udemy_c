#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  /*malloc dynamic allocate memory at run time return the adderess

  int *pNumber = (int*)(malloc(100)); //requested 100bytes, can be problem in diff operation system
  int *pNumber = (int*)(malloc(25*sizeof(int))); // much better

  //release memory
  free(pNumber);
  pNumber = NULL;

  //calloc the same as malloc but did initialization
  int *pNumber = (int*)(calloc(75, sizeof(int)));

  //realloc enables you to reuse or extend memory 
  */

  char *str;
  /*Initial memory allocation*/
  str = (char *) malloc(15);
  strcpy(str, "jason");
  printf("String = %s, Address = %u\n", str, str);

  /*Reallocation memmory*/
  str = (char*) realloc(str, 25);
  strcat(str, ".com");
  printf("String = %s, Address = %u\n", str, str);

  free(str);
  return 0;
}