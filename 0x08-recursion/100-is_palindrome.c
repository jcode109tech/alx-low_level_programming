#include "main.h"
/**
 * is_palindrome -  a function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: - string
 * Return: 1 if  palindrome 0 otherwise
 */

int _strlen_pal(char *s);
int _check_pal(char *s, int i, int len);

int is_palindrome(char *s)
{
	if(*s == 0)
		return (0);

	return (_check_pal(s, 0,  _strlen_pal(s)));
}

/**
 *_strlen_pal - finds length of string
 *@s: - string
 *Return: - lenght
 */


int _strlen_pal(char *s)
{
	if(*s == '\0')
		return (0);

	return (1 + _strlen_pal(s + 1));
}

/**
 *_check_pal --checks palindrome
 * @len - length of string
 * @i: - iterater
 * Return: comparison
 */

int _check_pal(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
		return (0);
	else if (i > len)
		return(1);

	return(_check_pal(s, i + 1, len - 1));

}
