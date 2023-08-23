#include <stdio.h>

int func() {
    static int count = 0;
    count++;
    return count;
}

int initializer() {
    return 50;
}

int func1() {
    static int count = 100;
    //count = 100;
    int localVar = 0;

    printf("automatic = %d, static = %d\n", localVar, count);

    count++;
    localVar++;
    return count;
}

int main() {
    for (int i = 0; i < 5; i++)
    {
        func1();
    }
    
    
}

