#include "main.h"
#include <stdio.h>

/**
 *main - a program that prints its name, followed by a new line .
 *@argc: number of command line argument passed by the user .
 *@argv: array of pointer characters including th name of the program .
 *Return: always 0 .
 */



int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);


	return (0);
}
