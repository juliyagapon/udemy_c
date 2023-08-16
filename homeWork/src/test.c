#include <stdio.h>

int main(void) {
    char yourName[50];

    printf("Please enter your name\n");
    scanf("%s", yourName);

    printf("Hello  %s! \n", yourName);

    return 0;
}