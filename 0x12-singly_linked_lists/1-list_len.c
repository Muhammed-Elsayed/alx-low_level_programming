#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len -  function that returns the number of elements in a linked list
 *@h:
 *
 *Return: number of nodes .
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t counting = 0;

	while (current != NULL)
	{
		current = current->next;
		counting++;
	}
	return (counting);
}
