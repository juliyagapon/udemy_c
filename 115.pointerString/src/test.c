#include <stdio.h>
#include <string.h>

void copyString(char *to, char *from) {
  while (*from)
  {
    *to++ = *from++;
  }
  *to = '\0';
  
}

int main(int argc, char *argv[]) {
  char multiple[] = "a string";
  char to[] = "";

  copyString(to, multiple);

  printf("result \"%s\"\n", to);
  
}