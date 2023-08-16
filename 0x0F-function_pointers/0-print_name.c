#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - a function that prints name
* @name: name string
* @f: pointer function
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;
f(name);
}
