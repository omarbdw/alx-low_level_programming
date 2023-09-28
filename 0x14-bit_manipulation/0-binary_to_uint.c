#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary input
 * Return: intger
 */

unsigned int binary_to_uint(const char *b)
{

unsigned int unsigned_int_value = 0;
int i;
if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
unsigned_int_value = 2 * unsigned_int_value + (b[i] - '0');
}

return (unsigned_int_value);
}
