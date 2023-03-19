#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenating string and return a ptr
 *@s1: the first str .
 *@s2: the second str .
 *@n: int .
 *Return: ptr to string .
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
	};

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
	};

	if (n >= s2_len)
		n = s2_len;

	ptr = (char *) malloc(s1_len + n + 1);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
