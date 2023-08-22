#include "main.h"

/**
 * swap_int - this function swaps two integers
 * @a: this is the first value
 * @b: this is the second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
