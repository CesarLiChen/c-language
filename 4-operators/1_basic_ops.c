#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 33;
    int b = 15;
    int result = 0;

    result = a % b;

    printf("Result is %d\n", result);

    // Unary ops and their order
    printf("After will output same number: %d\n", a++);
    printf("After will output actual calculation: %d\n", ++a);
    return 0;
}
