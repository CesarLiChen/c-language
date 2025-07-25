#include <stdio.h>

int main(int argc, char *argv[])
{
    int arg1, arg2;
    if (argc == 4)
    {
        sscanf(argv[1], "%d", &arg1);
        sscanf(argv[3], "%d", &arg2);

        /* We use *argv[2] as precaution to ONLY get the 
        first character of a string if a user inputs a string.
        argv[2] would get the whole string instead */
        if (*argv[2] == '+') printf("%d\n", arg1 + arg2);
        if (*argv[2] == '-') printf("%d\n", arg1 - arg2);
        if (*argv[2] == 'x') printf("%d\n", arg1 * arg2);
        if (*argv[2] == '/') printf("%d\n", arg1 / arg2);
    }
    return 0;
}
