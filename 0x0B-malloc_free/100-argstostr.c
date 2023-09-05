/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *argstostr(int ac, char **av)
{
int i, n, allChar = 0, j = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (n = 0; n < ac; n++)
{
for (i = 0; av[n][i]; i++)
allChar++;
}
allChar = allChar + ac;
str = malloc(sizeof(char) * allChar + 1);
if (str == NULL)
return (NULL);
for (n = 0; n < ac; n++)
{
for (i = 0; av[n][i]; i++)
{
str[j] = av[n][i];
j++;
}
if (str[j] == '\0')
{
str[j++] = '\n';
}
}
return (str);
}
