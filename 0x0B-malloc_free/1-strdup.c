#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a 
 * newly allocated space in memory, which contains a copy 
 * of the string given as a parameter.
 * @str: - string
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
    int i;

    char *new_string = malloc((strlen(str)) + 1);

    if (str == NULL)
       return (NULL);

    for (i=0 ; str[i]!= '\0' ; ++i)
    {
        new_string [i]= str[i];
    }

    *(new_string + i) = '\0';

    return (new_string);
}