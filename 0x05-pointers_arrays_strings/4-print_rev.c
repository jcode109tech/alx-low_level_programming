#include"main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: pointer of s.
 *
 * Return:
 */

void print_rev(char *s)
{
	int length = 0;

	int t;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (t = length - 1; t > 0; t--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
