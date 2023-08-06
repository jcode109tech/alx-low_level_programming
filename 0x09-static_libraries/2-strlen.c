#include"main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string pointer.
 *
 * Return: length:
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
