#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * append_text_to_file - appen text
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int a, b;
int c = 0;
if (!filename)
return (-1);
a = open(filename, O_WRONLY | O_APPEND);
if (a == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[c] != '\0')
c++;
b = write(a, text_content, c);
if (b == -1)
{
close(a);
return (-1);
}
}
if (close(a) == -1)
return (-1);
return (1);
}
