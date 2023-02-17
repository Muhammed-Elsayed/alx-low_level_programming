#include <stdio.h>

/**
 *main - ENTRY point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char ch;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	for (ch = 'a'; ch <= 'f'; ch++)
		printf("%c", ch);

	printf("\n");
	return (0);
}
