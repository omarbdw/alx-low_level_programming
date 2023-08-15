#include "main.h"

/**
 *   a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
char letter;
int i = 10;
while (i != 0)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
 _putchar('\n');
i--;
}
}
