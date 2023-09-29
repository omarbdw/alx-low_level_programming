#include "main.h"

/**
 * flip_bits - count bits to be changed
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int num;
unsigned long int special = n ^ m;
for (i = 63; i >= 0; i--)
{
num = special >> i;
if (num & 1)
count++;
}
return (count);
}
