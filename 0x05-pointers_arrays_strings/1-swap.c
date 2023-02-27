#include "main.h"

/**
 *swap_int - swaping value of 2 numbers.
 *@a: first pointer.
 *@b: second pointer.
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
