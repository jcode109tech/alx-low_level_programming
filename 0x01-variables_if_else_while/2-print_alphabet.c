#include <stdio.h>

/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 25; i++)
{
putchar(alph[i]);
putchar('\n');
}
return (0);
}
