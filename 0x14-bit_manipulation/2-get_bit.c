#include "main.h"

/**
 * get_bit - get the bit in the index
 * @n: number
 * @index: the index of the bit
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int current;

	{
		current = n >> index;

		if (current & 1)
		{
			return (1);
		}
		else
			return (0);
	}
}
