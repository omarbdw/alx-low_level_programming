#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -executes a function given as
 * a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size; i++)
{
if (action == NULL || array == NULL)
return;
action(array[i]);
}
}
