#include "main.h"


/**
 *_strcmp - function that compares two strings .
 *@s1: ptr to string .
 *@s2: ptr to string .
 *Return: int of the subtraction of ascii .:
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int subtract = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			subtract = s1[i] - s2[i];
			break;
		}
			i++;
	}
	return (subtract);
}
