#include "hash_tables.h"
#include <math.h>

/**
 * hash_table_print - A function that print the hash table
 * @ht: a pointer to the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;/* *ptr1 = NULL;*/
	unsigned long int i, j = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			j = 1;
			ptr = ptr->next;
		}
		i++;
	}
	printf("}\n");
}
