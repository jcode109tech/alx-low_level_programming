#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add two positive numbers
 * @argc: - length
 * @argv: - string array
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	bool hasError = false;

	int i, j;

	for (i = 1; i < argc; i++)
	{

		bool isNumber = true;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				isNumber = false;
				break;
			}
		}

		if (isNumber)
		{
			int num = atoi(argv[i]);

			if (num > 0)
			{
				sum += num;
			}
			else
			{
				hasError = true;
				break;
			}
		}
		else
		{
			hasError = true;
			break;
        }
    }

	if (hasError)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}

