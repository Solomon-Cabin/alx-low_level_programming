#include "main.h"

/**
 * print_array - this prints n elements of an array of integers
 * @a: this is the array to be used
 * @n: this is the number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
			printf(", ");
	}
	printf("\n");
}
