#include "main.h"
#include <stddef.h>

/**
* clear_bit - Write a function that sets the
* value of a bit to 0 at a given index.
* @n: unsigned long int
* @index: index starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8 || n == NULL)
return (-1);

mask = 1 << index;

mask = ~mask;

return (1);
}
