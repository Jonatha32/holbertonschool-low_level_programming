#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * create_file - create file
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int a;
int b;
int c = 0;
if (!filename)
return (-1);
a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (a == -1)
return (-1);
if (text_content)
{
while (text_content[c] != '\0')
c++;
b = write(a, text_content, c);
if (b == -1 || b != c)
{
close(a);
return (-1);
}
}
if (close(a) == -1)
return (-1);
return (1);
}
