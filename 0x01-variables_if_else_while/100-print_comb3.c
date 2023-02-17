#include <stdio.h>

/**
 *main - ENTRY point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i;
	int j;
	int k = 49;

	for (i = 48; i < 57; i++)
	{

		for (j = k ; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		k += 1;
	}
	putchar('\n');
	return (0);
}
