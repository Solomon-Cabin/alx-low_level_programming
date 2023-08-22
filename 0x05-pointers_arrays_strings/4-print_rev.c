#include "main.h"

/**
 * print_rev - this function prints string in reverse
 * @s: this is the string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int a;
	int c = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		c++;
	for (a = c - 1 ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
