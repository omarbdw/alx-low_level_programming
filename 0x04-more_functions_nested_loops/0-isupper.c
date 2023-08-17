#include "main.h"
#include <stdio.h>
/**
 * main - checks for uppercase character
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
scanf("%d", &c);
if ('A' >= c && c <= 'Z')
{
return (1);
}
else
return (0);
}
