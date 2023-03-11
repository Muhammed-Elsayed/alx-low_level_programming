#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
	printf("%d\n", 0);
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);
	if (num <= 0)
	{
		printf("Error\n");
	return (1);
	}
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
