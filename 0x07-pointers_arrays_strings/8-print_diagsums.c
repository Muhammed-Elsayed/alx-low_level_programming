#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function that prints the sum of the two diagonals of matrix
 *@a:pointer to array of integers.
 *@size: size of array .
 */




void print_diagsums(int *a, int size)
{
	int i;
	int left_sum = 0, right_sum = 0;


	for (i = 0; i < size; i++)
	{
		left_sum += *(a + i * size + i);
		right_sum += *(a + i * size + size - 1 - i);
	}

	printf("%d, %d\n", left_sum, right_sum);
}
