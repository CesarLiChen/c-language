#include <stdio.h>
#include "function.h"

/* stdio.h is included with <> while
our own created one is etween "".

This is because <> tells the compiler to 
look for the file in the dir where the system's
include files are stored.

While "" says that the file is local and is in the
same dir as the .c files we're building. */
void main(void)
{
    printf("The total is %d\n", add_vals(1, 2, 3));
}