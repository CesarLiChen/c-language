#include <stdio.h>

// Parameters - things on function declaration
void multiply_two (int x, int y) {
    int result = x * y;
    printf("\n%d multiplied by %d is: %d\n", x, y, result);
}

void main() {
    multiply_two(7, 8);
    multiply_two(323, 757);
}
