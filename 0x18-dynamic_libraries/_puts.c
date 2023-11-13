#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    write(STDOUT_FILENO, str, i);
}
