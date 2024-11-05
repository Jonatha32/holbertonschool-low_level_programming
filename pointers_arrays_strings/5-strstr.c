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

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] == needle[0])
			{
				return (&haystack[a]);
			}
		}
	}
	return (NULL);
}
