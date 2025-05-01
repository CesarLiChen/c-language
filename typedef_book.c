/* Typedef 
Particularly useful for enumerated types (enums) and
data structures.
*/

typedef enum {
    false,
    true
} BOOLEAN;

void main(void)
{
    BOOLEAN b_var;

    b_var = false;
    if (b_var == true)
    {
        prinft("TRUE\n");
    } else 
    {
        printf("FALSE\n");
    }
}