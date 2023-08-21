#include "main.h"
/**
 * _strlen - counts how many characters in a string
 * @s: string input
 * Return: len
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
