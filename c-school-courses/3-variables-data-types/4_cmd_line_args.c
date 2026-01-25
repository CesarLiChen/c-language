#include <stdio.h>

int main(int argc, char *argv[]) {

    int numberOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("# of Args: %d\n", numberOfArgs);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the cmd line argument: %s\n", argument2);

    return 0;
}