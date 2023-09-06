#include "main.h"

/**
 * create_array - this function creates array
 * @size: size of array
 * @c: character to assign
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
