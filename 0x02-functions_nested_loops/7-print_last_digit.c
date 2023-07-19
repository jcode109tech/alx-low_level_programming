#include"main.h"

/**
 * print_last_digit - prints last digit of number
 * @last: - returns lastdigit
 * Return: value of digit
 */

int print_last_digit(int last)
{
int t = last % 10;
if  (t < 0)
{
_putchar(-t + '0');
return (-t);
}
else
{
_putchar(t + '0');
return (t);
}
}
