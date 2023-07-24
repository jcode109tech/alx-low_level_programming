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
	while (*str++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
