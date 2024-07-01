#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
char *create_array(unsigned int size, char c)
{
  char *a;
  unsigned int b;
  if (size == 0)
    {
      return '\0';
    }
  a = malloc(c * sizeof(char));
  if (a == '\0')
    {
      return '\0';
    }

  while (b < size)
    {
      a[b] = c;
      b++;
    }
  return 0;  
}
  
