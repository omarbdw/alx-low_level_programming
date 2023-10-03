#include "main.h"
void close_file(int fd);
char *create_buffer(char *file);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Description: If the number of arguments is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int src, dist, r, w;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buffer(argv[2]);
src = open(argv[1], O_RDONLY);
r = read(src, buff, 1024);
dist = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (src == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
w = write(dist, buff, r);
if (dist == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
r = read(src, buff, 1024);
dist = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buff);
close_file(src);
close_file(dist);
return (0);
}
/**
 * create_buffer - Creates a buffer of 1024 bytes.
 * @file: The name of the file to be read.
 * Return: A pointer to the created buffer.
 * Description: If the file cannot be opened or read - exit code 98.
 * If the file cannot be closed - exit code 100.
 * If malloc fails - exit code 99.
 * If the file is empty - return NULL.
 */
char *create_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}
/**
 * close_file - Closes a file.
 * @fdes: The file descriptor to be closed.
 * Description: If the file cannot be closed - exit code 100.
 * Return: Nothing.
 */
void close_file(int fdes)
{
int clos;
clos = close(fdes);
if (clos == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdes);
exit(100);
}
}
