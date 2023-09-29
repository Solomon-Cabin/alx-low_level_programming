#include "main.h"

/**
 * flip_bits - this function counts the amount of bits
 * to change to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the amount of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = exclusive >> a;
		if (curr & 1)
			count++;
	}
	return (count);
}
