#include "main.h"

/**
* read_textfile - function that reads a text file and prints the letters
*
* @filename: filename to be read
*
* @letters: letters to be printed
*
* Return: numbers of letters printed, 0 on fail
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fd);

free(buf);

return (nwr);
}
