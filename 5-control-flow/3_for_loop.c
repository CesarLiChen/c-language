#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++) {
        printf("%d\n", i);
    }

    for (int i = 1, j = 2; i <= 5; ++i, j = j + 2) {
        printf(" %5d", i*j);
    }

    return 0;
}
