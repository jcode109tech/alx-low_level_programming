#include"main.h"

/**
 * puts_half - a function that prints half of a string.
 *
 *@str: string value
 */

void puts_half(char *str)
{
	int i, n, m, temp = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		temp++;
	}

	n = (temp / 2);
	m = (temp % 2);

	if (m == 2)
		n = (temp + 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
