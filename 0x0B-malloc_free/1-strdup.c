#include "main.h"
#include <stdlib.h>


/**
 *_strdup - a function that returns a pointer to a newly allocated mem space .
 *@str: str to be coppied and return a ptr to the new string.
 *Return: a ptr to a string .
 */


char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	};


	ptr = (char *) malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (0);


	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
