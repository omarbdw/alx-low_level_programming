#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
if ('A' >= c && c <= 'Z')
return (1);
else
return (0);
}
