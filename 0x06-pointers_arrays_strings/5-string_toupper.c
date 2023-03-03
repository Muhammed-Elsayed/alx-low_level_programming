#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@output1: ouput
 *Return: output
 */


char *string_toupper(char *output1)
{
	int len = 0;

	while (output1[len] != '\0')
	{
		if (output1[len] >= 97 && output1[len] <= 122)
		{
			output1[len] -= 32;

		}
		len++;

	}
	return (output1);
}
