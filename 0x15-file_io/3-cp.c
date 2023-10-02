#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int file_from, file_to, r, c1, c2;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
}


