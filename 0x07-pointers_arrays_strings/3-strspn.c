#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring .
 *@s: ptr to string .
 *@accept: ptr to string .
 *Return: int .
 */



unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int the_accept = 0;

	while (*s != '\0')
	{
		accept -= the_accept;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
				s++;
				break;
			}
			else
			{
				accept++;
				the_accept++;
				if (*accept == '\0')
					return (i);
			}

		}

	}
	return (0);
}
