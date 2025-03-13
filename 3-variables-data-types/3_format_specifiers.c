// Format specifiers for printf

#include <stdio.h>
#include <stdbool.h>

int main() {
    int sum = 89;
    printf("The sum is %d\n", sum);

    int intVar = 100;
    float floatingVar = 331.79;
    double dblVar = 8.44e+11;
    char charVar = 'W';
    
    bool boolVar = true;


    printf("integer = %i\n", intVar);
    printf("floating = %f\n", floatingVar);
    printf("double = %e\n", dblVar);
    printf("double = %g\n", dblVar);
    printf("char = %c\n", charVar);

    printf("boolean = %i\n", boolVar);

    float floatWidt = 5324.8492374;
    printf("%.4f\n", floatWidt);

    return 0;
}