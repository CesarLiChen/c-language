#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;

    while (i <= 100)
    {       
        printf("%d\n", i);
        i *= 2;
    }

    // After while loop it is still 160.
    printf("%d", i);

    do
    {
        printf("Is it  40 yet? = %d", i);
        i += 1;
    } while (i <= 40);
    

    return 0;
}
