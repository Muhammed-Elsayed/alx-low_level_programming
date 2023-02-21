#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let < 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');



}
