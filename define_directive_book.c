#include <stdio.h>

#define PI 3.14159 // Define constants, saves memory.
#define ADD(a,b) (a + b)

void main(void)
{
    float rad = 3;
    float circ = rad * 2 * PI;
    float area = rad * rad * PI;
    printf("The circumference of a circle radius %.3f is %.3f.\n", 
        rad, circ);
    printf("The area of a circle radius %.3f is %.3f.\n", rad, area);

    printf("Addition of 10 and 63 is %d.\n", ADD(10, 63));

    // if #if 1 then the code between #if - #else will run.
    #if 0
        printf("This won't run since #if has 0\n");
    #else
        printf("This will run\n");
    #endif
}