#include "main.h"
#include <stdio.h>


/**
 *_strstr - a function that locates a substring .
 *@haystack: the string to look into it .
 *@needle: the substring to look for .
 *Return: pointer to the start of the substring .
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	
	if ( needle[0] == '\0')
		return (0);

	for (i = 0; needle[i] != '\0'; i++)
	{

		for (; needle[i] != haystack[j]; j++)
		{
			if (haystack[j] == '\0')
				return (0);
		}
	}
	haystack += (j - i + 1);
	return (haystack);
}
