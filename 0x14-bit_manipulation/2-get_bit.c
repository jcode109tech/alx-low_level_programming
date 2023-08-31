#include "main.h"

/**
* get_bit - Write a function that returns the
* value of a bit at a given index.
* @n: unsigned long int
* @index: where index is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{

unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

mask = 1 << index;

if (n & mask)
return (1);
else
return (0);

}
