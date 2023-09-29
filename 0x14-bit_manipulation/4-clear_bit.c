#include "main.h"
/**
 * clear_bit - sets a bit to 0
 * @n: number to change
 * @index: index
 * Return: 1 if ok, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
