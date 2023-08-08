#include"main.h"

/**
 * _strncpy -  a function that copies a string.
 *
 * @dest: - string pointer.
 * @src: - string pointer.
 * @n: - integer.
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
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
