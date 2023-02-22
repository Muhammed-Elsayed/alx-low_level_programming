#include "main.h"

/**
 *print_last_digit - print the last digit
 *@number: the nubmer
 *Return: value of the last digit
 */


int print_last_digit(int number)
{
	int a;
	a = number % 10;
	
	if (a < 0)
		a = -a;


	_putchar(a + '0');
	return (a);
}
