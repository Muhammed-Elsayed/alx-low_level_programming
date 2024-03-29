#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint -  frees a listint_t list.
 *@head: ptr to the head .
 **/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

