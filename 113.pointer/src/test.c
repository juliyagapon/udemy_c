#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int arrInt[3] = {1, 3, 5};
  int *parrInt = arrInt;

  printf("1: %d\n", *parrInt);
  printf("2: %d\n", *(parrInt+2));

  parrInt += 1;
  printf("3: %d\n", *parrInt);

  --parrInt;
  *parrInt = 10;
  printf("4: %d\n", *parrInt);
  printf("5: %d\n", arrInt[0]);

}