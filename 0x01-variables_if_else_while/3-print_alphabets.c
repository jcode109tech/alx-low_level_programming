#include <stdio.h>
#include<string.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int alplower = 'a';
int alpupper = 'A';
while (alplower <= 'z')
{
putchar(alplower);
alplower++;
}
while (alpupper <= 'Z')
{
putchar(alpupper);
alpupper++;
}
putchar('\n');

return (0);
}
