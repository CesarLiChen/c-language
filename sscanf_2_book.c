#include <stdio.h>
#include <string.h>

void main(void)
{
    int val;
    char result[10];
    char string[25] = "The first number is 1";

    /* Specifically looks for 'first' and '1' by writing down
    existing 'The', 'number', and 'is' words.
    == 2 looks for the fact that it succesfully found 2 words. */
    if (sscanf (string, "The %s number is %d", result, &val) == 2)
    {
        printf("String: %s - Value: %d\n", result, val);
    }
    else
    {
        printf("I couldn't find two values in that string.\n");
    }

    printf("Length of the string: \'%s\' is %d\n", string, strlen(string));
}