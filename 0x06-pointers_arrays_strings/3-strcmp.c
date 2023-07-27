#include"main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: - string pointer.
 * @s2: - string pointer.
 *
 * Return:
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		i++;
		j++;
	}

	return (0);
}
