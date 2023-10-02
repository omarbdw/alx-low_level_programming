#include "main.h"
/**
 * read_textfile - Reads a text file
 * and prints it to the POSIX
 * @filename: The name of the file to read.
 * @letters: The number of letters to read from the file.
 * Return: The actual number of letters read,
 * 0 if cannot be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read;
FILE *fp;
char *buffer;
/** Check if filename is NULL*/
if (filename == NULL)
return (0);
/** Open the file for reading */
fp = fopen(filename, "r");
if (fp == NULL)
return (0);
buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(fp);
return (0);
}
bytes_read = fread(buffer, 1, letters, fp);
if (bytes_read < 0)
{
free(buffer);
fclose(fp);
return (0);
}
buffer[bytes_read] = '\0';
printf("%s", buffer);
free(buffer);
fclose(fp);
return (bytes_read);
}
