#include <stdio.h>


/**
 *print_array - function that prints n elements of an array of integers.
 *@a: pointer .
 *@n: variable .
 */



void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		a++;
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
