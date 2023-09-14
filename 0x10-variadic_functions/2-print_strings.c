#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this function prints strings followed by a new line
 * @separator: this is the string to be printed between strings
 * @n: this is the number of strings passed to the function
 * @...: a variable amount of strings to be printed
 *
 * Description: If separator is NULL, it will not be printed
 *              If one of the strings is NULL, (nil) will be printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strn;
	unsigned int indx;

	va_start(strings, n);

	for (indx = 0; indx < n; indx++)
	{
		strn = va_arg(strings, char *);

		if (strn == NULL)
			printf("(nil)");
		else
			printf("%s", strn);

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

