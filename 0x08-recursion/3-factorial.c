#include "main.h"


/**
 *factorial - getting the factorial of numbers .
 *@n: integer
 *Return: the factorial .
 */



int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
