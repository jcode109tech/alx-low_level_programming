#include"main.h"

/**
 * *_strncpy -  a function that copies a string.
 *
 * @dest: - string pointer.
 * @src: - string pointer.
 *
 * Return: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
