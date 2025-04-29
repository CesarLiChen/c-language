#include <stdio.h>

void main (void) 
{
    int intval = 23453458;
    void *vptr = &intval;

    printf("The value at vptr as an int is %d\n", *((int *)vptr));
    printf("The value at vptr as char is %d\n", *((char *)vptr));
}