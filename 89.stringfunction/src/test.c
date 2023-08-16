#include <stdio.h>
#include <string.h>

#define ARRSIZE 3

void bubbleSort(char arrStrings[ARRSIZE], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
        if (strcmp((char)arrStrings[i], (char)arrStrings[i+1]) > 0) {
          char temp[20];
          strcpy(temp, (char)arrStrings[i]);
          strcpy((char)arrStrings[i], (char)arrStrings[i+1]);
          strcpy((char)arrStrings[i+1], temp);
        }
    }
  }
}

void printResult(char arrStrings[ARRSIZE], int size) {
  for (int i = 0; i < size; size++) {
      printf("%s ", arrStrings[i]);
  }
  printf("\n");
}


int main(int argc, char *argv[]) {
    //write a program that sorts the string of an array using a bubble sort
    //need to use the strcmp and strcpy function
    /*input numbers of strings: 3
    input strings 3:
        zero
        one
        two
    inspected output
        one
        two
        zero
    */
    int numberOfString;
    printf("\nPlease input the number of strings\n");
    scanf("%d", &numberOfString);

    char arrStrings[numberOfString][20];
    for (int i = 0; i < numberOfString; i++) {
      printf("\nPlease input string %d\n", i+1);
      scanf("%s", &arrStrings[i]);
    }

    for (int step = 0; step < numberOfString - 1; ++step) {
    for (int i = 0; i < numberOfString - step - 1; ++i) {
        if (strcmp(arrStrings[i], arrStrings[i+1]) > 0) {
          char temp[20];
          strcpy(temp, arrStrings[i]);
          strcpy(arrStrings[i], arrStrings[i+1]);
          strcpy(arrStrings[i+1], temp);
        }
    }
  }

  for (int i = 0; i < numberOfString; i++) {
      printf("%s ", arrStrings[i]);
  }
  printf("\n");

    //bubbleSort(arrStrings, numberOfString);
    //printResult(arrStrings, numberOfString);

}