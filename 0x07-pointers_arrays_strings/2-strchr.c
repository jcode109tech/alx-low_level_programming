#include"main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: - string pointer.
 * @c: - character search.
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (&s[i]);
	}

	return (s);
}
