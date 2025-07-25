#include <stdio.h>
/* Typedef 
Particularly useful for enumerated types (enums) and
data structures.
*/

// After Standard C23 false and true are now keywords.
// Change with something else.
typedef enum {
    my_false,
    my_true
} BOOLEAN;

void main(void)
{
    BOOLEAN b_var;

    b_var = my_false;
    if (b_var == my_true)
    {
        printf("TRUE\n");
    } else 
    {
        printf("FALSE\n");
    }
}