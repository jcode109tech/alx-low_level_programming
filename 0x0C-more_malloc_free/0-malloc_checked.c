#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: - unsigned int value
 *Description: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * Return: - a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ch = (malloc(b));

	if (ch == NULL)
		exit(98);

	return (ch);
}

