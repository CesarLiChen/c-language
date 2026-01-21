#include <stdio.h>

void main(void)
{
	/* The name of an array is effectively a pointer
	to the first element. 

	And an array is just a contiguous block of memory
	which contains all the elements of the array in order.
	*/

	// Can also initialize like so:
	// int a[10] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99};
	int a[10];
	int count;

	for (count = 0; count < 10; count++)
	{
		a[count] = count * 10 + count;
	}

	printf("The first and second elements of 'a' are %d and %d\n",
			a[0], a[1]);
	printf("Or, as pointers, %d and %d\n", *a, *(a+1));
}

