#include "main.h"

int prime(int n, int i);

/**
 *is_prime_number - check if its a prime .
 *@n: the number .
 *Return: if its a prime or not .
 */



int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (prime(n, 2));
}


/**
 *prime - helping fuction .
 *@n: num
 *@i: int
 *Return: int .
 */



int prime(int n, int i)
{
	if (n < i * i)
		return (1);

	if (n % i == 0)
		return (0);

	return (prime(n, i + 1));
}
