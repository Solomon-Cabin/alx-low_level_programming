#include "main.h"

/**
 * alloc_grid - this is a nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **axs;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	axs = malloc(sizeof(int *) * height);
	if (axs == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		axs[i] = malloc(sizeof(int) * width);
		if (axs[i] == NULL)
		{
			for (; i >= 0; i--)
				free(axs[i]);
			free(axs);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			axs[i][j] = 0;
	}
	return (axs);
}

