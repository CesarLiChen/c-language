// Challenge for diplaying the perimeter and area of a
// rectangle. (not the complex version)

#include <stdio.h>

int main() {

    double height = 37.3;
    double width = 60.21;

    double perimeter = 2.0 * (height + width);
    double area = width * height;

    printf("The perimeter is: %.3f\n", perimeter);
    printf("The area is: %.3f\n", area);

    return 0;
}