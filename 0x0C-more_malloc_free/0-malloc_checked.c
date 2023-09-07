#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size required
 * Return: Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(sizeof(int) * b);
if (ptr == NULL)
exit(98);
return (ptr);
}
