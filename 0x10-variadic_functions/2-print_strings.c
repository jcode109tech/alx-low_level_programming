#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a function that prints strings
* @separator: string to print
* @n: number of arguments
* Return: output string
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strg;
unsigned int i;
char *str;

va_start(strg, n);


for (i = 0; i < n; i++)
{
str = va_arg(strg, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strg);
}

