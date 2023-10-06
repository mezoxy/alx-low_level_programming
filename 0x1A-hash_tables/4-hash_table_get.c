#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: A pointer to hash table
 * @key: A string
 * Return: The value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (!ht)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[i])
		return (NULL);
	if (ht->array[i]->next == NULL)
		return (ht->array[i]->value);
	while (ht->array[i]->next != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
		ht->array[i]->next = ht->array[i]->next->next;
	}
	return (NULL);
}
