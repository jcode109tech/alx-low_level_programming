#include"main.h"

/**
 * _isdigit - a function that checks for a digit 0 through 9
 *
 * @c: - value of character
 *
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
