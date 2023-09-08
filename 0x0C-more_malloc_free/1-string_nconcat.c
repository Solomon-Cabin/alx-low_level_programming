#include "main.h"

/**
 * *string_nconcat - this function concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		i = malloc(sizeof(char) * (len1 + n + 1));
	else
		i = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!i)
		return (NULL);

	while (a < len1)
	{
		i[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
		i[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		i[a++] = s2[b++];

	i[a] = '\0';
	return (i);
}

