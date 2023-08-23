#include <stdio.h>

extern int counter;

void print() {
    counter++;
    printf("counter = %d\n", counter);
}