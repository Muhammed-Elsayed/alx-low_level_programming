#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *listint_len - returns the number of elements in a linked listint_t list.
 *@h: the head ptr
 *Return: the number of nodes .
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t counting = 0;


	while (current != NULL)
	{
		current = current->next;
		counting++;
	}
	return (counting);
}
