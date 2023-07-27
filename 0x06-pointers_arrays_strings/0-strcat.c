#include"main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest - string pointer
 * @src - string pointer
 *
 * Return: concatnation
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
