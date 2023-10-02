#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file to be read
 * @letters: number of bytes to read and print
 * Return: number of bytes read and printed, 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file;
ssize_t wr;
ssize_t temp;

file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
temp = read(file, buffer, letters);
wr = write(STDOUT_FILENO, buffer, temp);

free(buffer);
close(file);
return (wr);
}
