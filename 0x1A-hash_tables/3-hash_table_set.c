#include "hash_tables.h"

/**
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node2add = NULL;
	unsigned long int i;

	if (!ht || ht->size == 0)
		return (0);
	node2add = malloc(sizeof(hash_node_t));
	if (!node2add)
		return (0);
	node2add->next = NULL;
	node2add->key = strdup(key);
	node2add->value = strdup(value);
	if (!node2add->value || node2add->key)
	{
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
}
