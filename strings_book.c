#include <stdio.h>

void main(void)
{
    // A string in C MUST end with a byte set to 0 (zero).
    // Allocate 1 byte more than needed.
    // 0 1 2 3 4 5 6 7 8 9
    // t h e s t r i n g 0;
    char mystring[10] = "thestring";

    // Name of string variable (e.g. str1) is a pointer to first characters (i.e. 'f')
    char str1[10] = "first";
    char str2[10] = "second";
    char str3[20];

    char *src, *dst;

    src = str1; //assign src to point to first element of str1
    dst = str3;

    while (*src != 0)
    {
        // Var pointed to by dst will be equal to var pointed to by src.
        *dst = *src; 
        src++;
        dst++;
    }
    printf("%d\n", *src);
    src = str2;
    while (*src != 0)
    {
        *dst = *src;
        printf("%c\n", *src);
        src++;
        dst++;
    }
    *dst = 0;

    printf("%s + %s = %s\n", str1, str2, str3);
    printf("%d\n", src);

    // ---------------------------------
    // Writing to strings
    printf("------------------------------\n\n");

    int val = 12, count = 0;
    char astring[50];
    
    char *ptr_to_astring = astring;

    sprintf(astring, "The value of val is %d\n", val);
    while (*ptr_to_astring)
    {
        printf("%d -- %c -- %p\n", count, *ptr_to_astring, ptr_to_astring);
        count++;
        ptr_to_astring++;
    }
    printf("%d -- %c -- %d\n", count, *ptr_to_astring, ptr_to_astring);
    
    printf("%s", astring);

    printf("---------------------------------\n\n");
    int index = 0;
    char trystr[23] = "The value of val is 12\n";

    while (*(trystr+index))
    {
        printf("%c[%d] ", *(trystr+index), index);
        index++;
    }    
}