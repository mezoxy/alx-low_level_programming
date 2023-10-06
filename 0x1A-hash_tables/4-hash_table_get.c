#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: A pointer to hash table
 * @key: A string
 * Return: The value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned long int i;

	if (!ht || ht->size == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[i])
		return (NULL);
	ptr = ht->array[i];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
