#include"main.h"

/**
 * _puts -  function that prints a string
 *
 * @str: pointer address of str.
 *
 * Return:
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
