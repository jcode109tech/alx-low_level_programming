#include"main.h"

/**
 * print_last_digit - prints last digit of number
 * @last: - returns lastdigit
 * Return: value of digit
 */

int print_last_digit(int last)
{
int last = last % 10;
if  (last < 0)
{
_putchar(-last + '0');
return (-last);
}
else
{
_putchar(last + '0');
return (last);
}
}
