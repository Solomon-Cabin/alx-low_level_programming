#include "main.h"

/**
 * puts2 - this prints every other character of a string
 * @str: this is the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
