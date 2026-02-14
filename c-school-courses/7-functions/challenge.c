/*
 * Write 3 functions:
 * 1. Function to find the greatest common divisor of 2 non-negative int values.
 * - Takes 2 ints as parameters
 *
 * 2. Write function to calculate absolute value of a number.
 * - Take parameter as float, return float
 *
 * 3. Function to compute the square root of a number.
 * - If a negative arg is passed then a message is displayed and -1.0
 * should be returned.
 * - Should use absolute value function as step 2.
 */

#include <stdio.h>

int gcd(int x, int y) {
    int result;

    int smaller = (x <= y) ? x : y;

    for(int i = smaller; i > 0; i--) {
        if ( (x % i == 0) && (y % i == 0) ) {
            result = i;
            break;
        }
    }
    return result;
}

float abs_val(float val) {
    int result = (val < 0) ? (val * -1.0) : val;
    return result;
}

// Hella naive solution
float square_root_floor(float x) {
    if (x > 0) {
        float result;
        while(result * result <= x) {
            result++;
        }

        return result-1;
    }
    return -1.0;
}

int main(void) {

    printf("GCD of 10 and 45 is %d\n", gcd(10, 45));
    printf("GCD of 1701 and 3768 is %d\n", gcd(1701, 3768));

    printf("%.2f\n", abs_val(65));
    printf("%.2f\n", abs_val(-123));

    printf("%.0f\n", square_root_floor(234));
}
