#include <stdio.h>

void main(int argc, char *argv[]) {
    int work_hours = 0;
    float gross = 0.0;
    float net = 0.0;
    float taxes = 0.0;

    int basic_pay_rate = 12; //per hour
    int overtime_pay_rate = basic_pay_rate + basic_pay_rate/2;
    int work_limit = 40;

    int tax_1 = 300;
    float tax_rate_1 = tax_1 * 0.15;
    
    int tax_2 = 150;
    float tax_rate_2 = tax_2 * 0.20;
    

    float tax_rate_3 = 0.25;

    printf("Please enter this week number of worked hours\n");
    scanf("%d", &work_hours);
    //calculate gross
    gross = work_hours>work_limit ? ((work_hours-work_limit) * overtime_pay_rate) + (work_limit*basic_pay_rate) : work_hours * basic_pay_rate;

    //calculate taxes
    taxes = tax_rate_1;

    int temp_gross = gross - tax_1;
    if (temp_gross > 0) {
        taxes +=  tax_rate_2;
        temp_gross -= tax_rate_2;
    }

    if (temp_gross > 0) {
        taxes += temp_gross * tax_rate_3;
    }

    //calculate net
    net = gross - taxes;

    printf("Gross %.2f\n", gross);
    printf("Net  %.2f\n", net);
    printf("Taxes %.2f\n", taxes);

}