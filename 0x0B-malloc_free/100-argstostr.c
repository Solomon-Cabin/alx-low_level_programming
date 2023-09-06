#include "main.h"

/**
 * argstostr - this function is the main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, b, r = 0, k = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
			k++;
	}
	k += ac;
	arr = malloc(sizeof(char) * k + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (b = 0; av[i][b]; b++)
	{
		arr[r] = av[i][b];
		r++;
	}
	if (arr[r] == '\0')
	{
		arr[r++] = '\n';
	}
	}
	return (arr);
}

