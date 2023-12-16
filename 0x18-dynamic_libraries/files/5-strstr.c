#include "main.h"

/**
 * _strstr - this function is the entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *i != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (0);
}

