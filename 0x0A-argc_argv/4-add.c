#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
<<<<<<< HEAD
	int i, j, sum = 0;
=======
	int num, digit, sum = 0;
>>>>>>> 0cbcff12b9508809e21c39135b9d4243a0aa0906

	for (num = 1; num < argc; num++)
	{
<<<<<<< HEAD
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{

		for (j = 0; j < argv[i][j]; j++)
		{
			if (isdigit(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
=======
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
>>>>>>> 0cbcff12b9508809e21c39135b9d4243a0aa0906
	}

	printf("%d\n", sum);

	return (0);
}
