#include <stdio.h>

// From Chapter 5 - Pointers. C & GUI Programming
// Pointer is just the address of a block of memory with a variable in it..

void main (void) 
{
    int a;
    int *ptr_to_a; // pointer to an integer variable

    ptr_to_a = &a; // &a means address in memory of variable a

    a = 5;
    printf("The value of a is %d\n", a);

    // Puttin * on already existing pointer means:
    // Varible pointed to by the pointer. In this case, variable 'a'.
    *ptr_to_a = 6; 
    printf("The value of a is %d\n", a);
    printf("The value of ptr_to_a is %d\n", ptr_to_a);
    printf("It stores the value %d\n", *ptr_to_a);
    printf("The address of a is %d\n", &a);

    // &peta -> address of peta
    // *peta -> the variable that the pointer peta is pointing to

}