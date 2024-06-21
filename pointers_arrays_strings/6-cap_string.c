#include "main.h"
char *cap_string(char *a)
{
  char *b = a;

  while (*b != '\0')
    {
      if (*b == 46 && *b == ' ')
	{
	  *b = *b - 32;
	}
      a++;
	}
  return a;
}
