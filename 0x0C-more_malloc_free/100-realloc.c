#include "main.h"
#include <stdlib.h>

/**
*_realloc - e a function
*that reallocates a memory block using malloc and free
*@ptr: pointer to the allocated space
*@old_size: size of the old allocation in bytes
*@new_size: desired size for the new allocation in bytes
*Return: void *pointer to the reallocated space or NULL if failed
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *block;
char *new_ptr = ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);
else if (ptr == NULL)
{
block = malloc(new_size);
return (block);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else if (new_size > old_size)
{
block = malloc(new_size);

if (block == NULL)
return (NULL);

for (i = 0; i < old_size; i++)
{
block[i] = new_ptr[i];
}

free(new_ptr);
return ((void *)block);
}

return (ptr);

}
