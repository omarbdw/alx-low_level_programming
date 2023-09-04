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

int i = 0;
int j = 0;
char *resultString;
 if (s1 == NULL)
   return (NULL);
 if (s2 == NULL)
   return (NULL);
 while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
resultString = malloc(sizeof(char) * (i + j + 1));
 i = 0;

while (s1[i] != '0')
{
resultString[i] = s1[i];
i++;
}
 j = 0;
while (s2[j] != '\0')
{
resultString[i] = s2[j];
i++;
j++;
}
resultString[j] = '\0';
return (resultString);
free(resultString);
}
