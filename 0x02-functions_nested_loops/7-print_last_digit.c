#include "main.h"

/**
 *print_last_digit - print the last digit
 *@number: the nubmer
 *Return: value of the last digit
 */


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
