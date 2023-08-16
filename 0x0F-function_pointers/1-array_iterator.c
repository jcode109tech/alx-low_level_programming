#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - a function that executes a function
* given as a parameter on each element of an array.
* @array: interger array
* @size: is the size of the array
* @action: is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL)
return;gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b

for (i = 0; i < size; ++i)
action(array[i]);
}
