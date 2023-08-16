#include <stdio.h>


int main(int argc, char *argv[]) {
    int mins;
    double days = 0;
    double years;

    //Info
    printf("Please enter number of minutes\n");
    //get input from user
    scanf("%d", &mins);


    //calculation
    days = ((mins / 60) / 24);
    years = days / 365;

    printf("days: %.4f\n", days);
    printf("years: %.4f\n", years);

    return 0;
}