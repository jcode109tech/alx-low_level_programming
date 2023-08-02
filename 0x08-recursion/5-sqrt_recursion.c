#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: - int value
 * Return: sqrt
 */

int _sqrt_func(int n, int i);

int _sqrt_recursion(int n)
{
	if  (n < 0)
		return (-1);
	else
		return (_sqrt_func(n, 0));
}

/**
 * _sqrt_func - calculate sqrt of natural numbers.
 * @n: - int value:
 * @i: - recursive int
 * Return sqrt
 */

int _sqrt_func(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i ) > n)
		return (-1);
	else
		return (_sqrt_func(n, i + 1));
}
