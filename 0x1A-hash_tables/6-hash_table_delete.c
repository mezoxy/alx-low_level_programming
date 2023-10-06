#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: A pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL, *ptr1 = NULL;
	unsigned long int i;

	if (!ht)
		return;
	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		if (ptr)
		{
			while (ptr->next)
			{
				ptr1 = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr->next);
				free(ptr);
				ptr = ptr1;
			}
			else
			{
				free(ptr->key);
				free(ptr->value);
				free(ptr);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
