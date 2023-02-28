#include "main.h"
#include <stdio.h>

/**
 *rev_string - a function that reverses a string .
 *@s: pointer to a string .
 *
 */


void rev_string(char *s)
{
	int length, i, last_index;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	last_index = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[last_index];
		s[last_index] = tmp;
		last_index--;

	}

}
