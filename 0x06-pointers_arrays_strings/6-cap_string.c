#include "main.h"

/**
 **cap_string - function that capitalizes all words of a string.
 *@output1: ouput
 *Return: output
 */


char *cap_string(char *output1)
{
	int len = 0;

	while (output1[len] != '\0')
	{

		if (output1[0] >= 97 && output1[0] <= 122)
		{
			output1[0] -= 32;

		}

		if (output1[len - 1] == ',' || output1[len - 1] == ';'
		||  output1[len - 1] == '.' || output1[len - 1] == '!'
		||  output1[len - 1] == '?' || output1[len - 1] == '"'
		||  output1[len - 1] == '(' || output1[len - 1] == ')'
		||  output1[len - 1] == '{' || output1[len - 1] == '}'
		||  output1[len - 1] == '\n' || output1[len - 1] == '\t'
		||  output1[len - 1] == ' '
		)
		{

			if (output1[len] >= 97 && output1[len] <= 122)
			{
				output1[len] -= 32;

			}

		}
	len++;
	}
	return (output1);
}

