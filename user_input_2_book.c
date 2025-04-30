#include <stdio.h>

void main(void)
{
    char input[256], name[256], lname[256];
    int age;

    printf("What is your name, user?\n");
    // fgets(buffer_to_store_input, max_bytes, where_to_read_from)
    // It's safer since it stops reading after a newline,
    // end-of-file, or reaches the given number of characters.
    fgets(input, 256, stdin);
    sscanf(input, "%s %s", name, lname);

    printf("Hello, %s %s. How old are you?\n", name, lname);
    while (1)
    {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &age) == 1) break;
        printf("That's not an age I recognize, try again please.\n");
    }

    printf("Well, %s, you look young for %d...\n", name, age);
}