#include "main.h"

/**
 * puts_half - this function prints half of the string
 * @str: this is the parameter to be prrinted
 * Return: void
 */

void puts_half(char *str)
{
	int a;
	int n;
	int c = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		c++;
	n = (c - 1) / 2;
	for (a = n + 1 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
