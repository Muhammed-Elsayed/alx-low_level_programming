#include "main.h"


int print_last_digit(int number)
{	
	int a;
	if (number < 0)
		number = -number;

	a = number % 10;

	_putchar(a + '0');
	return (a);

	return (0);

}
