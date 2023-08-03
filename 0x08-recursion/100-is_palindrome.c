#include "main.h"

int _strlen_pal(char *s);
int _check_pal(char *s, int i, int len);

int is_palindrome(char *s)
	//An empty string is a palindrome
{
	if(*s == 0)
		return (0);

	return (_check_pal(s, 0,  _strlen_pal(s)));
}

int _strlen_pal(char *s)
{
	if(*s == '\0')
		return (0);

	return (1 + _strlen_pal(s + 1));
}

int _check_pal(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
		return (0);
	else if (i > len)
		return(1);

	return(_check_pal(s, i + 1, len - 1));

}
