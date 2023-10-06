#include "hash_tables.h"

/**
 * hash_table_set - A function that ads an element to the hash table
 * @key: A string
 * @value: A string
 * @ht: A pointer t the hash table
 * Return: 1 (Success) else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node2add = NULL;
	unsigned long int i;

	if (!ht || ht->size == 0 || !ht->array)
		return (0);
	node2add = malloc(sizeof(hash_node_t));
	if (!node2add)
		return (0);
	node2add->next = NULL;
	node2add->key = strdup(key);
	if (!value)
		node2add->value = NULL;
	node2add->value = strdup(value);
	if (!node2add->value || !node2add->key)
	{
		free(node2add->value);
		free(node2add->key);
		free(node2add);
		return (0);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[i] == NULL)
	{
		(ht->array)[i] = node2add;
		return (1);
	}
	else
	{
		node2add->next = (ht->array)[i];
		(ht->array)[i] = node2add;
		return (1); }
	return (0);
}
