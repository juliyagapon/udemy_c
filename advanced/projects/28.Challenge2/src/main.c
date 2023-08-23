#include <stdio.h>

int sum (int a) {
    static int counter = 0;
    return counter += a;
}


int main() {
    printf("sum = %d\n", sum(25));
    printf("sum = %d\n", sum(15));
    printf("sum = %d\n", sum(30));

    return 0;
}