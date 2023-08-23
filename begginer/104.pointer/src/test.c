#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int number = 10;
  int *pNumber = &number;
  
  int x;

  x = *pNumber;

  printf("x = %d\n", x);

  printf("%p\n", &number);
  printf("%p\n", (void*)&pNumber);
}