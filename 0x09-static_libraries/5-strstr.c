#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 *@haystack: string pointer.
 *@needle: string pointer.
 *Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *k = needle;

		while (*i == *k && *k != '\0')
		{
			i++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
