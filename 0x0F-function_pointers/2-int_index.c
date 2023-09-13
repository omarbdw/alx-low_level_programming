#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -searches for an integer
 * @array: array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 in success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int tmp = 0;
if (cmp == NULL || array == NULL)
return (0);
for (i = 0; i < size; i++)
{
tmp = cmp(array[i]);
if (tmp != 0)
return (i);
}
if (tmp == 0 || size <= 0)
return (-1);
return (0);
}
