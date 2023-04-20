#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all -  function that returns the sum of all its parameters.
 *@n: number of arguments
 *Return: the sum of arguments .
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;


	if (n == 0)
		return (0);


	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
