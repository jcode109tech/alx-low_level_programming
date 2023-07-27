#include"main.h"

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest - string pointer
 * @src - string pointer
 *
 * Return: concatnation
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	int j = 0;
	while (src[j] = '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
	
