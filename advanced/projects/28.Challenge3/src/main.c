#include <stdio.h>

int counter = 5;
extern void print();

int main() {
    for (int i = 0; i < 5; i++)
    {
        print();
    }
    

    return 0;
}