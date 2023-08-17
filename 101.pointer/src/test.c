#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int number = 10;
  int *pNumber = NULL;

  pNumber = &number;

  int number2 = *pNumber;

  printf("address of number %p\n", &number);

  printf("address of poiner %p\n", &pNumber);

  printf("value of poiner %p\n", pNumber);
  printf("value of poiner story %d\n", *pNumber);
  printf("value of number2 %d\n", number2);


  number = 14;

  printf("address of number %p\n", &number);

  printf("address of poiner %p\n", &pNumber);

  printf("value of poiner %p\n", pNumber);
  printf("value of poiner story %d\n", *pNumber);
  printf("value of number2 %d\n", number2);
}