#include "main.h"


/**
 *print_rev_recursion -  function that prints a string in reverse
 *@s: ptr to string .
 *
 */



void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	else
	{
		print_rev_recursion(s + 1);
	}

	if (*s != '\0')
		putchar(*s);
}
