#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase & a new line.
*return - void is successful
*/

void print_alphabet_x10(void)
{
char letter;
int i = 10;
while (i != 0)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
i--;
_putchar('\n');
}
}
