#include "main.h"

/**
 * is_prime_numbers -  a function that returns 1 if the input integer
 *  is a prime number, otherwise return 0.
 * @n: - interger value
 * Return: 1 if prime 0 otherwise
 */

int _func_is_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_func_is_prime(n, n - 1));
}

/**
 * _func_is_prime - a function that finds prime numbers
 * @n: - interger value
 * @i: - iterator value
 * Return: prime 1 if prime 0 othewise
 *
 */

int _func_is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);

	return (_func_is_prime(n, i - 1));
}
