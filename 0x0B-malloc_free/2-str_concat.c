#include "main.h"
#include <stdlib.h>


/**
 *str_concat - function that concatenates two strings
 *@s1: first string .
 *@s2: second string .
 *Return: ptr to string .
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int len = 0;
	int m, n;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	len += (i + j);


	ptr = (char *) malloc(sizeof(char *) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
	{
		ptr[m] = s1[m];
	}


	for (n = 0 ; n < j; n++)
	{
		ptr[n + m] = s2[n];
	}
	ptr[len] = '\0';
	return (ptr);
}
