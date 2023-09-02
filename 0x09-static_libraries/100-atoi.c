#include "main.h"

/**
 *  _atoi - tthis function converts a string to an integer
 *  @s: this is the string to be converted
 *  Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, n, l, c, d;

	a = 0;
	b = 0;
	n = 0;
	l = 0;
	c = 0;
	d = 0;

	while (s[l] != '\0')
		l++;
	while (a < l && c == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			n = n * 10 + d;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}
	if (c == 0)
		return (0);
	return (n);
}
