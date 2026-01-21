#include <stdio.h>

/*
    Below is the way that is not recommended
    because of users and their 
    unpredictability.
    Recommended way on user_input_2_book.c
*/

void main(void)
{
    char input[256];
    int age;

    printf("What is your name, user?\n");
    scanf("%s", input);

    printf("Hello, %s. How old are you?\n", input);
    scanf("%d", &age);

    prinft("Well, %s, you look young for %d...\n", input, age);
}