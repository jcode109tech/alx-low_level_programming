#include "hash_tables.h"

/*
 * key_index - finds index of key
 * @key: key
 * @size: size of hash table
 * Return: index of storage
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i, idx;

	if (size <= 0)
		return (0);

	i = hash_djb2(key);

	idx = i % size;

	return (idx);
}
