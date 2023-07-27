#include "main.h"

/**
 *  reverse_array - a function that reverses
 *   the content of an array of integers.
 *
 *   @a: interger array pointer.
 *   @n: interger value.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0; i < n--; i++)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
	}
}
