/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{

int len1 = 0;
int  len2 = 0;
int i = 0;
char *resultString;
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
resultString = malloc(sizeof(char) * (len1 + len2 + 2));

while (s1[i])
{
resultString[i] = s1[i];
i++;
}
i++;

while (i >= len1 || i <= (len1 + len2))
{
resultString[i] = s2[i];
i++;
}
resultString[len1 + len2 + 1] = '\0';
return (resultString);
free(resultString);
}
