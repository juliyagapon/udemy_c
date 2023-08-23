#include <stdio.h>

int i = 5; //global variable
char text[255];
char text2[255][25];
int count;

void foo(void);
extern void write_extern();

int main() {
    printf("%d\n", i);
    //call foo
    foo();

    printf("%d\n", i);
    count = 5;
    write_extern();
}

