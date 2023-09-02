#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 * @s: this is the area to fill with bytes
 * @b: this is the constant byte
 * @n: this is the number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
