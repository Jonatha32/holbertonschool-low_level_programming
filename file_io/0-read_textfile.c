#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - read file
 * @filename: parameter
 * @letters: parameter
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int a, b, c;
char *d;
if (!filename)
return (0);
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
d = malloc(letters);
if (!d)
{
close(a);
return (0);
}
b = read(a, d, letters);
if (b == -1)
{
free(d);
close(a);
return (0);
}
c = write(STDOUT_FILENO, d, b);
free(d);
close(a);
if (c == -1)
{
return (0);
}
return (c);
}
