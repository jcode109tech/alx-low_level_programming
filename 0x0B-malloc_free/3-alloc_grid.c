#include "main.h"
#include <stdlib.h>

/**
 * Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
    int **array = (int **)malloc(width * sizeof(int));

    int i , j;

    i = j = 0;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    if (array == NULL)
       return (NULL);

    for (; i < width; i++)
    {
        array[i] = malloc(height * sizeof(int));

        if (array[i] == NULL)
        {
            break;

            for (; j < i; j++)
            {
                free(array[j]);
            }
            free(array);
            return (NULL);
        }
    }
    
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

    return (array);

}