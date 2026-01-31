#include <stdio.h>

#define MONTHS 12

int main(void) {
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %d has %d days.\n", index+1, days[index]);


    // Designated initializers
    int days2[MONTHS] = {31, 28, [4]=31, 30, 31, [1]=29};
    int i;

    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i+1, days2[i]);

    return 0;
}
