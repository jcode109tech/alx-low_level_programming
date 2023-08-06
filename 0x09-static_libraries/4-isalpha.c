#include "main.h"

/**
 * _isalpha - checks lowercase characte
 *
 * @c: Ascii values to chesck if it either uppercase or lowercase
 *
 * Return: 1 if true , 0 otherwise
 */
int _isalpha(int c)
{
if ((c > 65 && c <= 90) || (c > 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
