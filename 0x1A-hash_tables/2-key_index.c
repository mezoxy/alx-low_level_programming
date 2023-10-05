#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: the key
 * @size: Size of table
 * Return: The hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key) % size;
	return (value);
}
