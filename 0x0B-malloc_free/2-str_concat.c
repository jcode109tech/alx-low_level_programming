#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - The returned pointer should point to a 
 * newly allocated space in memory which contains the contents of s1, 
 * followed by the contents of s2, and null terminated.
 * @s1: - string contents
 * @s2: - string contents
 * Return: string concatenation
*/

char *str_concat(char *s1, char *s2)
{
    char *long_string = malloc(strlen(s1) + strlen(s2) +1);
   
    if (s1 == NULL || s2 == NULL)
        return ("");
    
    strcpy(long_string, s1);
    strcat(long_string, s2);

    if (long_string == NULL)
        return (NULL);


    return (long_string);
 
}