#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 *
 * @dest: destiantion string.
 * @src: source string.
 * @n: interger value.
 *
 * Return: dest.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
