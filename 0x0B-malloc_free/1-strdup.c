#include "main.h"

/**
 * _strdup - this duplicates to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *arr;
	int a, c = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	arr = malloc(sizeof(char) * (a + 1));
	if (arr == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		arr[c] = str[c];
	return (arr);
}

