#include "main.h"
#include <stdlib.h>

/**
*array_range - a function that creates an array of integers.
*@min: minimum value in the array to be created.
*@max: maximum value in the array to be created.
*Return: memory allocated
*/

int *array_range(int min, int max)
{
int *range2;
int i;

if (min > max)
return (NULL);

range2 = malloc(sizeof(int) * (max - min + 1));

for (i = min; i <= max; i++)
*(range2 + i) = min++;

return (range2);
}
