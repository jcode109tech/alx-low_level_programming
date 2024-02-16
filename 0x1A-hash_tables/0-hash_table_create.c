#include "hash_tables.h"

/*
 * hash_table_create - Creates a hash table
 * @size: size of hash table
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hashtable = NULL;

	new_hashtable = malloc(sizeof(hash_table_t));

	if (new_hashtable == NULL)
		return (NULL);

	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if(new_hashtable->array == NULL)
	{
		free(new_hashtable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hashtable->array[i] = NULL;

	new_hashtable->size = size;

	return (new_hashtable);

}
