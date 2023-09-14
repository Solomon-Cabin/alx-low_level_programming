#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this returns the sum of all its paramter
 * @n: this isthe number of paramters passed to the function
 * @...: this is a variable number of paramters to calculate its sum
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

