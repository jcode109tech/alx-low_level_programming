#include<stdio.h>
#include"main.h"

/**
 * main - prints alphabet in lowercase using _printchar
 *
 * Return: Always 0.
 */
void print_alphabet(void) /** prints out using function _printchar */
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');

}

int main(void)
{
print_alphabet();

return (0);

}
