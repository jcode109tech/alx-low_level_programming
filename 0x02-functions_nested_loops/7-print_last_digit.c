#include"main.h"

/**
 * print_last_digit - prints last digit of number
 * @int: - returns lastdigit
 * Return: value of digit
 */

int print_last_digit(int last)
{
int lastdigit = last % 10;
int l = lastdigit;
if  (l < 0)
{
_putchar(-l + '0');
return (-l);
}
else
{
_putchar(l + '0');
return (l);
}
}
