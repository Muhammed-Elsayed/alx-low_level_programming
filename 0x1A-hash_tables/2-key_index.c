#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *key_index - getting the index of the key
 *@key: the key.
 *@size: the size of the table.
 *Return: the index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = hash_djb2(key) % size;

	return (index);
}
