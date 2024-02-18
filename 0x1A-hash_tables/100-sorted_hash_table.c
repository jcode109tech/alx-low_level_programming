#include "hash_tables.h"

/*
 * shash_table_create - Creates a hash table
 * @size: size of hash table
 * Return: pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    unsigned long int i;
    shash_table_t *new_shashtable = NULL;

    new_shashtable = malloc(sizeof(shash_node_t));

    if (new_shashtable == NULL)
        return (NULL);

    new_shashtable->array =malloc(sizeof(shash_node_t *) * size);

    if (new_shashtable->array == NULL)
    {
        free(new_shashtable);
        return (NULL);
    }

    for (i = 0; i < size; i++) 
        new_shashtable->array[i] = NULL;

    new_shashtable->size = size;
    new_shashtable->shead = NULL;
    new_shashtable->stail = NULL;
    
    return (new_shashtable);
}


/*
 * ------------------------------------------------
 *  hash_table_set - adds element to the hash table
 *  @ht: hash table to add/update
 *  @key: key
 *  @value: value
 *  Return: 1, 0 otherwise
 */


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new_node, *current;
    char *value2;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;

    value2 = strdup(value);
    
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value2;
			return (1);
		}
		current = current->snext;
	}

	new_node = malloc(sizeof(shash_node_t));

    new_node->value = strdup(value);

	if (new_node == NULL)
	{
		free(new_node->value);
		return (0);
	}

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
			current = current->snext;
		new_node->sprev = current;
		new_node->snext = current->snext;
		if (current->snext == NULL)
			ht->stail = new_node;
		else
			current->snext->sprev = new_node;
		current->snext = new_node;
	}

	return (1);
}


/**
 * -----------------------------------------------------------------
 * shash_table_get - Retrieve the key : value in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 * Return: value key in ht Otherwise NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *get_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	get_node = ht->shead;
	while (get_node != NULL && strcmp(get_node->key, key) != 0)
		get_node = get_node->snext;

	return ((get_node == NULL) ? NULL : get_node->value);
}

/**
 * -------------------------------------------------------
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *print_node;

	if (ht == NULL)
		return;

	print_node = ht->shead;
	printf("{");
	while (print_node != NULL)
	{
		printf("'%s': '%s'", print_node->key, print_node->value);
		print_node = print_node->snext;
		if (print_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * --------------------------------------------------------------------
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *rev_node;

	if (ht == NULL)
		return;

	rev_node = ht->stail;
	printf("{");
	while (rev_node != NULL)
	{
		printf("'%s': '%s'", rev_node->key, rev_node->value);
		rev_node = rev_node->sprev;
		if (rev_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * -------------------------------------------------
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *del_node, *current;

	if (ht == NULL)
		return;

	del_node = ht->shead;

	while (del_node)
	{
		current = del_node->snext;
		free(del_node->key);
		free(del_node->value);
		free(del_node);
		del_node = current;
	}

	free(head->array);
	free(head);
}


