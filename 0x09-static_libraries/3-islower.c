#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: Ascii values
 *
 * Return: 1 if true , 0 otherwise
 */

int _islower(int c)
{
if (c > 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
