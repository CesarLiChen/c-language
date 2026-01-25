#include <stdio.h>

int main() {

    int numberToTest, ternaryTest;

    printf("Even or Odd Tester");
    printf("Please enter number to be tested: ");
    scanf("%d", &numberToTest);

    if (numberToTest % 2 == 0){
        printf("%d is even.\n", numberToTest);
    } else {
        printf("%d is odd.\n", numberToTest);
    }
    
    ternaryTest = numberToTest == 10 ? 20 : 30; 
    printf("%d\n", ternaryTest);
    return 0;
}