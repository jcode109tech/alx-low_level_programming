#include"main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int k, j;

	for (k = 1; k <= 10; k++)
	{
		for (j = 1; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('k');
				_putchar(j % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
