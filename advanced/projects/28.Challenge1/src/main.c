#include <stdio.h>

static double dob = 1; //global double variable that is only accessible inside this file
float flo; //global float variable that is accessible within the entire program

void set_flo();

void func() {
    auto int x; //an int variable with block scope and temporary storage 
}

static void func1() {
    auto int x; //an int variable with block scope and temporary storage 
}


int main() {
    set_flo();
    printf("%f\n", flo);     

    register int m = 10;

}