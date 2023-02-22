#include "main.h"

/**
 *_abs - convert negative to positive
 *@n : the integer
 *Return: the absolute value
 */


int _abs(int n)
{

	if (n > 0)
		return (n);
	else if (n < 0)
		return (-1 * n);
	else
		return (0);
	return (-1);
}
