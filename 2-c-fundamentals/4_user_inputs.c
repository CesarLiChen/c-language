#include <stdio.h>

int main() {

    char str[100];
    int i;
    double j;

    printf("Enter a value: ");
    scanf("%s %d %lf", str, &i, &j);

    printf("\nYou entered: %s and %d as well as a double %j\n", str, i, j);
    return 0;
}