#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - a function that returns the sum of all its parameters
*@n: number of additional values
*Result - Sum of all numbers
*/

int sum_them_all(const unsigned int n, ...)
{

va_list addnum;

unsigned int i, result = 0;

va_start(addnum, n);


if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
result += va_arg(addnum, int);
}

va_end(addnum);

return (result);
}
