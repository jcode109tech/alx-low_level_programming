#include"main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the
 * sum of the two diagonals of a square matrix of integers.
 * @a: - interger pointer
 * @size: integer value
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = sum2 = i = 0;

	for (; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
