#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this prints numbers with a new line
 * @separator: this is the string to be printed between numbers
 * @n: integers passed to the function
 * @...: this is a variable amount of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int indx;

	va_start(nums, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(nums, int));

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}

