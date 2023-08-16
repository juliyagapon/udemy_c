#include <stdio.h>

int main(int argc, char *argv[]) {
    int v_int = 16;
    char v_char;
    long v_long;
    long long v_long_long;
    double v_double;
    long double v_long_double;

    printf("int size %zd \n", sizeof(v_int));
    printf("char size %zd \n", sizeof(v_char));
    printf("long size %zd \n", sizeof(v_long));
    printf("long long size %zd \n", sizeof(v_long_long));
    printf("double size %zd \n", sizeof(v_double));
    printf("long double size %zd \n", sizeof(v_long_double));


    return 0;
}