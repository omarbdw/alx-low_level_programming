#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphs[26] = "abcdefghijklmnopqrstuvwxyz";
char alphC[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(alphs[i]);
}
int j;
for (j = 0; j < 26; j++)
{
putchar(alphC[j]);
}
putchar('\n');
return (0);
}
