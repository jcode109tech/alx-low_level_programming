#include <stdio.h>
#include<string.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < strlen(alph); i++)
{
putchar(alph[i]);
putchar('\n');
}
return (0);
}
