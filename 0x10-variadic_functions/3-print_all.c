#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - a function that prints anything
* @format:
* Return: anything
*/
void print_all(const char * const format, ...)
{
    va_list tag;
    va_start(tag, format);
    
}