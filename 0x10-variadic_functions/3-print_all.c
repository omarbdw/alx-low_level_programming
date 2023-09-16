#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all, followed by a new line
 * @format: series of args to be printed
 * @...: A variable number of numbers to be printed
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char *str;
va_start(args, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 's':
str = va_arg(args, char*);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
default:
i++;
continue;
}
i++;
separator = ", ";
}
}
printf("\n");
va_end(args);
}
