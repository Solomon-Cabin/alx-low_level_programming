#include "main.h"

/**
 * get_bit - this function returns the value of
 * a bit at an index in a decimal number
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_v;

	if (index > 63)
		return (-1);

	bit_v = (n >> index) & 1;
	return (bit_v);
}