// Below is a question that was hard for me to answer:

// Outputs: a
// Because 97 is the ASCII number for character a.
#include <stdio.h>

void main() {
    int x = 97;
    char y = x;

    printf("%c\n", y);
}