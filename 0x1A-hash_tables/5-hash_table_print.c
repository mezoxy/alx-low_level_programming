#include "hash_tables.h"

/**
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;/* *ptr1 = NULL;*/
	unsigned long int i;

	printf("{");
	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		if (ptr)
		{
			/**if (i == 0)
				printf("'%s': '%s'", ptr->key, ptr->value);*/
			printf("'%s': '%s'", ptr->key, ptr->value);
			/**ptr1 = ptr;
			while (ptr1)
			{
				if (i == 0)
					printf("'%s': '%s'", ptr1->key, ptr1->value);
				else
					printf(", '%s': '%s'", ptr1->key, ptr1->value);
				ptr1 = ptr1->next;
			}*/
		}
		if (ht->array[i])
			printf(", ");
		i++;
	}
	printf("}\n");
}
