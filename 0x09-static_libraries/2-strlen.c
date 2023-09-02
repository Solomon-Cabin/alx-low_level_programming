#include "main.h"

/**
 * _strlen - this function finds the length of a string
 * @s: the string to be counted
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;
	int c = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		c++;
	return (c);
}
