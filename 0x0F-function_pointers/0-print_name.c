#
/**
* print_name - a function that prints name
* @name: name string
* @
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
