#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
while ((ch = 'z'))
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
