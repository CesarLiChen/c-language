/*

Program for Reading a File and displaying.

*/
#include <stdio.h>

void main(void)
{
    FILE *fp;
    int value;

    fp = fopen("./input.txt", "rb"); // rb - read binary
    if (fp)
    {
        while (1)
        {
            // fgetc reads char but returns int.
            // int value returned by fgetc can always be treated as char
            // Code for EOF falls outside of valid char range.
            value = fgetc(fp); 
            if (value == EOF) break;
            else printf("%c", value);
        }
        fclose(fp);
    }
}