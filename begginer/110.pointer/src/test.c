#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int main(int argc, char *argv[]) {
  int a= 100, b=200;

  printf("\nA = %d\n", a);
  printf("\nB = %d\n", b);
  
  swap(&a,&b);
  printf("--------swap-------------");
  printf("\nA = %d\n", a);
  printf("\nB = %d\n", b);
}