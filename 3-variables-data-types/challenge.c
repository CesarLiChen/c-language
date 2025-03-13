// Create program that defines an enum type and
// uses that type to display the values of some variables.

#include <stdio.h>

int main() {

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company comp1 = XEROX;
    enum Company comp2 = GOOGLE;
    enum Company comp3 = EBAY;

    printf("%d\n", comp1);
    printf("%d\n", comp2);
    printf("%d\n", comp3);

    return 0;
}