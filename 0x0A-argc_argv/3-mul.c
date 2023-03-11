#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that multiplies two numbers.
 *@argc: number of command line argument passed by the user .
 *@argv: array of pointer characters including th name of the program .
 *Return: 1 if the argument is not just two nums ,else it returns 0 .
 */



int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);


	return (0);
}

