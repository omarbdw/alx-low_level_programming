#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd, i = 0, w;

if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd < 0)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
w = write(fd, text_content, i);
if (w < 0)
return (-1);
}
close(fd);
return (1);
}
