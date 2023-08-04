#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers.
 * @argc: - count argv
 * @argv: - array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}

		printf("%d\n", mult);

	}
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
