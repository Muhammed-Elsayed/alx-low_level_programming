#include "main.h"

/**
 *
 *
 *
 */

int prime(int n, int i);                                                         


int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	if (n == 2)
		return (1);


	return (prime(n, 1));


}



int prime(int n, int i)
{
	if (n < i * i)
		return (1);

	if (n % i == 0)
		return (0);

	return (prime(n, i + 1));


}
