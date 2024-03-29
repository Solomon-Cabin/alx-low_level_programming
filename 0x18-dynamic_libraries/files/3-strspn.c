#include "main.h"

/**
 * _strspn - this function gets the length of a prefix substring
 * @s: this is the string to search from
 * @accept: this is the string to search
 * Return: number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[a] != accept[b]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
