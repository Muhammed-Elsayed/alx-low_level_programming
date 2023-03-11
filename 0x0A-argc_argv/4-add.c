#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that adds positive numbers.
 *@argc: number of command line argument passed by the user .
 *@argv: array of pointer characters including th name of the program .
 *Return:  0 or 1 .
 */



int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);

		}
	}

	printf("%d\n", sum);

	return (0);
}

