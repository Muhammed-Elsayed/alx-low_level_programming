#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *@head: ptr to ptr to head .
 *@str: ptr to string .
 *Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	unsigned int len = 0;


	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
