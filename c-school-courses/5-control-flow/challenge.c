// Program that calculates weekly pay.
// Input: get user input for number of hours worked in a week.
// Output: gross pay, taxes, and net pay.

/*
    Assumptions:
    Pay rate = $12.00/hr
    Overtime (>= 40 hours) = time and a half (1.5)
    Tax rate:
        15% of the first $300
        20% of the next $150
        25% of the rest
*/

#include <stdio.h>

int main() {


    int hoursWorked;
    double rate = 12.00;
    double grossPay, grossPayRemainder, taxes, netPay;

    printf("Please type your hours worked in a week: ");
    scanf("%d", &hoursWorked);

    if (hoursWorked <= 40) {
        grossPay = rate * hoursWorked;
    } else {
        grossPay = (rate * 1.5) * hoursWorked;
    }

    grossPayRemainder = grossPay;

    if (grossPayRemainder > 300.00) {
        taxes += (300.00 * 0.15);  
        grossPayRemainder -= 300.00;
        if (grossPayRemainder >= 150.00 ) {
            taxes += (150.00 * 0.2);
            grossPayRemainder -= 150.00;
            if (0 < grossPayRemainder) {
                taxes += (grossPayRemainder * 0.25);
            }
        } else if (0 < grossPayRemainder && grossPayRemainder < 150) {
            taxes += (grossPayRemainder * 0.2);
        }
    } else if (0 < grossPayRemainder < 300.00) {
        taxes = grossPayRemainder * 0.15;
    }

    printf("Gross pay for a week will be: %.2f\n", grossPay);
    printf("You will need to pay %.2f in taxes.\n", taxes);
    printf("And your netpay will be $%.2f\n", grossPay - taxes);
    return 0;
}