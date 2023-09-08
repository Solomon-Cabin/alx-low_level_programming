#include "main.h"

/**
 * *_memset - this fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array with calloc
 * @nmemb: number of array numbers
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = malloc(size * nmemb);
	if (output == NULL)
		return (NULL);
	_memset(output, 0, nmemb * size);
	return (output);
}

