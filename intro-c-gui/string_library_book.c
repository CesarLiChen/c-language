#include <stdio.h>
#include <string.h> // NEW

void main(void)
{
    char str1[10] = "first";
    char str2[10] = "second";
    char str3[20];

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("%s + %s = %s\n", str1, str2, str3);

    printf("\n----------------Comparing Strings---------------\n\n");
    
    char cmp_str1[10] = "first";
    char cmp_str2[10] = "fire";
    char *ptr1 = cmp_str1, *ptr2 = cmp_str2;

    while (*ptr1 != 0 && *ptr2 != 0)
    {
        if (*ptr1 != *ptr2)
        {
            break;
        }
        *ptr1++;
        *ptr2++;
    }

    printf("Is \'%s\' identical to \'%s\'?\n", cmp_str1, cmp_str2);
    // Ternary op
    (*ptr1 == 0 && *ptr2 == 0) ? printf("They are identical\n") :
        printf("They are not identical\n");

    printf("\n-----------------strcmp method--------------------\n\n");
    
    (strcmp(cmp_str1, cmp_str2) == 0) ? printf("Yeah, same\n") : printf("Not same\n");

    printf("\n-----------------strncmp method--------------------\n\n");

    if (strncmp(cmp_str1, cmp_str2, 3) == 0)
    {
        printf("First 3 letters of %s and %s are the same.\n", cmp_str1, cmp_str2);
    }
    else
    {
        printf("First 3 letters of %s and %s are NOT the same.\n", cmp_str1, cmp_str2);
    }

    /*
        Compare while ignoring case.
        strcasecmp(str1, str2)
        strncasecmp(str1, str2, n_letters)
    */
}