#include"main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: sets character value
 *
 * Return: 1 if uppecase is true or 0 otherwise
 */

int _isupper(int c)
{
if (c > 64 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
