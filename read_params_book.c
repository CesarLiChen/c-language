#include <stdio.h>

// argc - parameters provided in command line.
// name of program is always included, so value is always >= 1.

// *argv[] - array of pointers to characters.
// each element of array is a string, and each string 
// is one of the parameters provided by program.
int main(int argc, char *argv[])
{
    int param = 0;
    while (param < argc)
    {
        printf("Param %d is %s\n", param, argv[param]);
        param++;
    }
    return 0;
}
