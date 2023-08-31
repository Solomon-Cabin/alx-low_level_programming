#include "main.h"

/**
 * _strlen_recursion - this function finds the length of a string
 * @s: this is the string to find it's length
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
