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

	printf("{");
	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		if (ptr)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			break; }
		i++;
	}
	i = i + 1;
	while (i < ht->size && i != j)
	{
		ptr = ht->array[i];
		if (ptr)
			printf(", '%s': '%s'", ptr->key, ptr->value);
		i++;
	}
	printf("}\n");
}

void print_list(hash_node_t *head)
{
	hash_node_t *ptr = head;

	while (ptr)
	{
		printf(", '%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->next;
	}
}
