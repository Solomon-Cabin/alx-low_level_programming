#include "main.h"

/**
 * *_realloc - this reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *output;
	char *old_output;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	output = malloc(new_size);
	if (!output)
		return (NULL);
	old_output = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			output[a] = old_output[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			output[a] = old_output[a];
	}
	free(ptr);
	return (output);
}

