#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements to allocate space for in the array.
 * @size: size of each element allocated by calloc.
 * Return: pointer to the new array or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Call;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	Call = malloc(nmemb * size);

	for (; i < (nmemb * size); i++)
		*(Call + i) = 0;

	Call[i] = '\0';

	return (Call);
}
