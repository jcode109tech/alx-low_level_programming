#include "main.h"

/**
 * rev_string - a function that reverse a string.
 *
 * @s: string pointer.
 *
 * Return:
 */

void rev_string(char *s)
{
	int left = s[0];
	int add = 0;
	int i;

	while (s[add] != '\0')
	{
		add++;
	}
	for (i = 0; i < add; i++)
	{
		add--;
		left = s[i];
		s[i] = s[add];
		s[add] = left;
	}
}
