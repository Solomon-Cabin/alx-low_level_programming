#include "main.h"

/**
 * _isdigit - this function checks for the number 0 through 9
 * @c: this is the parameter to be checked
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
