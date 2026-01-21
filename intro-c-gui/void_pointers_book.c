#include <stdio.h>

void main (void) 
{
    /* Initialize void pointer vptr to point to an int
    variable, intval. */
    int intval = 23453458;
    void *vptr = &intval;

    /* We then cast the void pointer to an integer pointer by 
    inserting (int *) infront of vptr before dereferencing 
    with the first *. */
    printf("The value at vptr as an int is %d\n", *((int *)vptr));
    printf("The value at vptr as char is %d\n", *((char *)vptr));
}