#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *hash_table_set - makeing new nodes or modifying the values of the value
 * @ht: hash tables.
 * @key: keys to the nodes.
 * @value: values to the nodes.
 * Return: 1 or 0.
 */



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp_node, *new_node;
	char *copied_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	temp_node = ht->array[index];
	copied_value = strdup(value);
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = copied_value;
			return (1);
		}
		ht->array[index] = temp_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

}
