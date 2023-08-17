#include <stdio.h>
#include <string.h>

void sqrt(int *x);

void sqrt(int *x){
  *x *= *x;
}

int main(int argc, char *argv[]) {
  //malloc auto memmory allocate 
  int *x = (int *) malloc(sizeof(int));
  *x = 4;

  sqrt(x);

  printf("sqrt(X) = %d\n", *x);

}