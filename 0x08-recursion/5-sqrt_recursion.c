#include "main.h"


int mysqr(int n, int i);


/**
 *_sqrt_recursion - getting the square
 *@n: the number .
 *Return: the root .
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else
		return (mysqr(n, 0));

}


/**
 *mysqr - helping funct .
 *@n: the num .
 *@i: the num to divide by .
 *Return: the root of the num .
 */

int mysqr(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

	return (mysqr(n, i + 1));

}
