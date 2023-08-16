#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - main function
* @argc: no: of arguments
* @argv: arguments input
*Return: 0 Always
*/

int main(int argc, char *argv[])
{
char *op;
int a, b;
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op = argv[2];

if (get_op_func(op) == NULL)
{
printf("Error\n");
exit(99);
}

if ((*op == '/' || *op == '%') && b == 0)
{
printf("Error");
exit(100);
}

result = get_op_func(op)(a, b);

printf("%d\n", result);

return (0);
}

