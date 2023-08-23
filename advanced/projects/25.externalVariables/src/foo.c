int count = 5;

void foo() {
    extern int i;
    i = 100;

    extern char text[];
    extern char text2[][50];
}

void write_extern() {
    extern int count;

    printf("count = %d\n", count);
}