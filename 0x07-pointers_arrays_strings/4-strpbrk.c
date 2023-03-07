#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes .
 *@s: pointer to str.
 *@accept: ptr to str.
 *Return: ptr to str .
 */



char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return (0);


}
