#include <stdio.h>
#include "main.h"

/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: NULL or &needle
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (*needle == '\0')
			{
			return (NULL);
			}

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 0; needle[b] != '\0' && haystack[a + b] != '\0'
			&& needle[b] == haystack[a + b]; b++)
			{
				}

			if (needle[b] == '\0')
			{
				return (&haystack[a]);
			}
		}
	}
	return (NULL);
}
