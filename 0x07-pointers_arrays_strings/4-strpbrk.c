#include "main.h"

/**
 *
 *
 *
 *
 */



char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] == accept[j]; j++)
		{
				return (s);
		}
	}
	return (0);	


}
