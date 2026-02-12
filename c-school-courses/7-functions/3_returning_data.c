#include <stdio.h>

// Parameters - things on function declaration
int multiply_two (int x, int y) {
    int result = x * y;
    return result;
}

void main() {
    int first = 34;
    int second = 89;

    int result = multiply_two(first, second);
    printf("The result for %d * %d, is %d\n", first, second, result);
}
