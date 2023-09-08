#include "main.h"

/**
 * *array_range - this function creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and size
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *output;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		output[a] = min++;
	return (output);
}

