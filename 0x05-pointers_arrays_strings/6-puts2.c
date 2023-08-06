#include"main.h"

/**
 * puts2 - a function that prints every other
 * character of i a string,
 * starting with the first character
 *
 * @str: string pointer.
 *
 * Return:
 */

void puts2(char *str)
{
	int temp = 0;
	char *stry = str;
	int n = 0;
	int i;

	while (*stry != '\0')
	{
		stry++;
		temp++;
	}

	n = temp - 1;

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
