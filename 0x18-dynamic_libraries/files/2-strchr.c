#include "main.h"
#include <stddef.h>

/**
 * _strchr - this function locates a character in a string
 * @s: this is the string to search
 * @c: this is the character to search in s
 * Return: s or Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
