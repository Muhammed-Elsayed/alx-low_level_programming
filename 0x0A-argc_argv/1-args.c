#include "main.h"
#include <stdio.h>

/**
 *main - a program that prints the number of arguments passed into it.
 *@argc: number of command line argument passed by the user .
 *@argv: array of pointer characters including th name of the program .
 *Return: always 0 .
 */



int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);


	return (0);
}
