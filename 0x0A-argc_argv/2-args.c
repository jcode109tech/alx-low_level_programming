#include <stdio.h>
#include "main.h"

/**
 * main -All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: - count argv
 * @argv: - array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);

}


