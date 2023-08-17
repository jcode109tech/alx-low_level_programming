#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *str2 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str2, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", str2, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", str2, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", str2, str);
					break;
				default:
					i++;
					continue;
			}
			str2 = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
