#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this prints each array element on a newline
 * @array: the array
 * @size: number of elememts to print
 * @action: the pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

