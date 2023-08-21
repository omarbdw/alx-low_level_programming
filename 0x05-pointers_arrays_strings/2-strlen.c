#include "main.h"
/**
 * _strlen - counts how many characters in a string
 * @s: string input
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\n')
{
s++;
len++;
}
return (len);
}
