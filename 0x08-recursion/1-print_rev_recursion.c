#include "main.h"

/**
 * _print_rev_recursion - this function prints string in reverse
 * @s: this is the string to reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
