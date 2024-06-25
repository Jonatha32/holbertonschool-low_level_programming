#include "main.h"
int _atoi(char *s)
{
  int a = 1;
  int b = 0;
  int c = 0;

    if (s[0] == '-')
      {
	a = -1;
	c++;
      }
  if (s[0] == '+')
    {
      c++;
    }
  while (s[c] != '\0')
    {
      if (s[c] >= '0' && s[c] <= '9')
	{
	  b = b * 10 + (s[c] - '0');
	}
      else
	{
	  break;
	}
      c++;
    }
  b = b * a;

  return b;
}
