#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: - size of insigned integer.
 * @c: - character.
 * Return:
 */

char *create_array(unsigned int size, char c)
{
	char *B = malloc(size * sizeof(char));

	unsigned int i = 0;

	if (size == 0 || B == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		B[i] = c;
	}

	return (B);
}
