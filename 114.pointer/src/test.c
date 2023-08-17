#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char multiple[] = "a string";
  char *p = multiple;

  for (int i = 0; i < strnlen(multiple, sizeof(multiple)); ++i) {
    printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n",
    i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
  }

  printf("\n");
  long lmultiple[] = {15L, 25L, 35L, 45L};
  long *lp = lmultiple;

  for (int i = 0; i < sizeof(lmultiple)/sizeof(lmultiple[0]); ++i) {
    printf("adress p+%d (&lmultiple[%d]): %llu  *(p+%d) value %d\n",
    i, i, (unsigned long long)(lp+i), i, *(lp+i));
  }
  printf("\n Type long occupies: %d bytes \n", (int)(sizeof(long)));

  return 0;

}