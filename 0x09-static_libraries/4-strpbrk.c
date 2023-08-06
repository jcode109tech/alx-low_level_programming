#include"main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: - string.
 * @accept: - string.
 *
 * Return: 0 Always
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		int i = 0;
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}