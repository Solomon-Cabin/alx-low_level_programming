#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int c = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		c++;
	for (a = 0 ; a < c / 2 ; a++)
	{
		char b;

		b = s[a];
		s[a] = s[c - 1 - a];
		s[c - 1 - a] = b;
	}
}
