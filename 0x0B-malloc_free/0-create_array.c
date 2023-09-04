/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: intializing character
 */
#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c){
unsigned int i;
if(size > 0)
{
char* array = malloc(sizeof(char) * size);
for(i = 0; i < size; i++)
{
array[i] = c;
}
return(array);
}
else
{
return(NULL);
}
}
