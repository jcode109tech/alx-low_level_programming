#include "main.h"
#include "stdio.h"

/**
* print_binary -Write a function that prints
* the binary representation of a number.
* @n: unsigned long int
*/

void print_binary(unsigned long int n)
{
int size;
unsigned long int mask;
int leading_zeroes;

if (n == 0)
{
printf("0");
return;
}

size = sizeof(unsigned long int) * 8;
mask = 1 << (size - 1);
leading_zeroes = 1;

while (mask > 0)
{
if (n & mask)
{
printf("1");
leading_zeroes = 0;
}
else if (!leading_zeroes)
printf("0");

mask >>= 1;
}
}
