#include <stdio.h>
#include <string.h>

int lenString(const char *str) {
  const char *lastAddress = str;

  while (*lastAddress)
  {
    ++lastAddress;
  }
  return lastAddress-str;
  
}

int main(int argc, char *argv[]) {
  char multiple[] = "iii";
  char to[] = "";

  printf("len \"%d\"\n", lenString(multiple));
  
}