#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint - rints all the elements of a listint_t list.
 *@h: the head ptr
 *Return: the number of nodes .
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t counting = 0;
	

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		counting++;
	}
	return (counting);
}
