// Challenge: Create a C program that converts the
// number of minutes to days and years.

// Should ask user to enter number of minutes.
// Should display as output the minutes and then 
// its equivalent in years and days.

#include <stdio.h>

int main() {

    int userMins;
    double inYears;
    double inDays;
    double minutesInYear = 60 * 24 * 365;

    printf("Please enter your number in minutes: ");
    scanf("%d", &userMins);

    printf("Equals to %.2f hours.\n", (userMins/60.0));
    inYears = userMins / minutesInYear;
    inDays = userMins * (1/60.0) * (1/24.0);

    printf("%d minutes is %f years.\n", userMins, inYears);
    printf("%d minutes is %.3f days.\n", userMins, inDays);

    return 0;
}
