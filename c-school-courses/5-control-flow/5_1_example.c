/*It's supposed to be an example only,
nothing too in depth.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p = 5;
    int q;

    while (p > 0)
    {
        printf("First print %d\n", p);
        scanf("%d", &q);

        while (q > 0)
        {
            printf("Second print %d\n", p*q);
            if (q > 100)
                break;
            scanf("Enter second %d", &q);
        }
        if (q > 200)
            break;
        printf("Enter last");
        scanf("%d", &p);        
    }
    
    return 0;
}
