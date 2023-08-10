#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first string to concatenate with second one.
 * @s2: the other string to be concated on end of first one.
 * @n : number of characters from s2 we want in resultant string
 * Return: pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i, k, j, m, len1, len2;

	i = k = m = j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	for (len1 = 0; s1[len1]; len1++);


	for (len2 = 0; s2[len2]; len2++);

	if (n <= len2)
		con = malloc(len1 + len2 + 1);
	else
		con = malloc(len1 + n + 1);

	while (i < len1)
		con[i++] = s1[m++];

	while (n < len2 && i < len1 + n)
		con[i++] = s2[k++];

	while (n >= len2 && i <= len1 + len2)
		con[i++] = s2[j++];

	if (con == NULL)
		return ("");

	return (con);
}
