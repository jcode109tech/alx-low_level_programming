#include"main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 *
 * @n: - parameter value
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(36);
		_putchar('\n');
	}
	else if (n >= 1)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar(36);
	_putchar('\n');
	}

}
