#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers.
* @n: number of arguments to be printed, ... is the list of them.
* @separator: the string to be printed between numbers
* Return: numbers
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;

va_start(num, n);

for (i = 0; i <= n - 1 ; i++)
{
printf("%d", va_arg(num, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(num);
}


