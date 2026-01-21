/*

Program for Reading a File and displaying.

*/
#include <stdio.h>

void main(void)
{
    FILE *fp;
    int value;

    /* Creates file pointer and initialises it
    to the beginning of the file. */
    fp = fopen("./input.txt", "rb"); // rb - read binary

    /* Check file pointer is non-zero.
    If zero, file was not opened successfully. */
    if (fp)
    {
        while (1)
        {
            // fgetc - file get character.
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