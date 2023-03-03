#include "main.h"


/**
 *leet - function that encodes a string into 1337
 *@inp: pointer to array
 *Return: array of char
 */



char *leet(char *inp)
{
	int i, j;
	char *a = "AaeEoOtTLl";
	char *b = "4433007711";

	for (i = 0; inp[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (inp[i] == a[j])
			{
				inp[i] = b[j];
			}

		}
	}
	return (inp);

}
