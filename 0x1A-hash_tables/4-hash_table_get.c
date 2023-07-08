#include "hash_tables.h"

/**
 *hash_table_get - to get the value of a certain key.
 *@ht: ptr to the hash table.
 *@key: ptr to the key value.
 *Return: Null if not found   or  the value of the key if found.
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
