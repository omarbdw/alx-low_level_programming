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
i = 0;
for (i = 0; i < 26; i++)
{
putchar(alphC[i]);
}
putchar('\n');
return (0);
}
