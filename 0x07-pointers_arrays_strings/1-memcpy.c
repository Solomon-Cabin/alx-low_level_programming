#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: this is the destination location
 * @src: this is the source location
 * @n: this is the number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
