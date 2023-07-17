#include<stdio.h>
/**
* main - prints all possible different combinations of three digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, j, k;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <=57; k++)
{
if (k > j && j > i)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || k != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

