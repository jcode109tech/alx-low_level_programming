#include "hash_tables.h"

/*
 *  hash_table_set - adds element to the hash table
 *  @ht: hash table to add/update
 *  @key: key
 *  @value: value
 *  Return: 1, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_datanode, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];

	while (current != NULL)
	{
		if(strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_datanode = malloc(sizeof(hash_node_t));

	if (new_datanode == NULL)
		return 0;

	new_datanode->key = strdup(key);

	if (new_datanode->key == NULL)
	{
		free(new_datanode);
		return (0);
	}
	
	new_datanode->value = strdup(value);
    
    	if (new_datanode->value == NULL)
        {
		free(new_datanode->key);
		free(new_datanode);
		return 0;
	}
	
	new_datanode->next = ht->array[idx];
	ht->array[idx] = new_datanode;
	
	return (1);
}
