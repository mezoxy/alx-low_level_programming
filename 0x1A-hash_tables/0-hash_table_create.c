#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: Size of the hash table
 * Return: A pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *our_table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	our_table = malloc(sizeof(hash_table_t));

	if (!our_table)
		return (NULL);

	our_table->size = size;
	our_table->array = calloc(size, sizeof(hash_node_t *));

	if (!our_table->array)
	{
		free(our_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		our_table->array[i] = NULL;
	return (our_table);
}
