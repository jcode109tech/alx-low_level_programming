#include"main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: - string check
 * @accept: - look string.
 *
 * Return: n length;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s)
	{
		int j = 0;
		for (; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
