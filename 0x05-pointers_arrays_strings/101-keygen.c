#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - tis is a function that generates random valid
 * passwords for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int p[100];
	int a, s, n;

	s = 0;
	srand(time(NULL));

	for (a = 0 ; a < 100 ; a++)
	{
		p[a] = rand() % 78;
		s += (p[a] + '0');
		putchar(p[a] + '0');
	if ((2772 - s) - '0' < 78)
	{
		n = 2772 - s - '0';
		s += n; putchar(n + '0');
		break;
	}
	}
	return (0);
}
