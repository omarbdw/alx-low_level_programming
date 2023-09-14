#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of parameters
 * Return: returns the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int s = 0;
unsigned int j;
va_start(args, n);
for (j = 0; j < n; j++)
{
s += va_arg(args, int);
}
return (s);
va_end(args);
}
