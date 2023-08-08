#include"main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: - string pointer.
 * @s2: - string pointer.
 *
 * Return: 0 Always
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;

	}

	return (0);
}
