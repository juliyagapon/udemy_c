#include <stdio.h>

int main() {
    auto int x; //local variable
    int m; // m in scope
    scanf("%d", &m);
    {
        int i;
        int n = 5;
        for (i=m; i<n; i++) {
            int i;
        }
    }
    return 0;
}

int func_name() {
    auto int y; //local variable
    return y;
}

char *other_func() {
    char x[] = "apple";
    return x;
}