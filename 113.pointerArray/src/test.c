#include <stdio.h>
#include <string.h>

int arrSum(int *parray, int n);

int arrSum(int *parray, int n) {
  int sum = 0;
  int *const arrEnd = parray + n;

  for (; parray < arrEnd; ++parray) {
    sum += *parray;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  int values[10] = {0, 20, 5, -5, -12, 7, 122, 50, -199, 100};

  printf("SUM = %d\n", arrSum(values, 10));
}