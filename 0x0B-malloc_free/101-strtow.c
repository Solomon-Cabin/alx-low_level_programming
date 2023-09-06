#include "main.h"

/**
 * count_word - a helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flg, a, b;

	flg = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			b++;
		}
	}
	return (b);
}

/**
 * **strtow - this function splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **mtx, *temp;
	int n, r = 0, len = 0, words, b = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	mtx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mtx == NULL)
		return (NULL);
	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (b)
			{
				end = n;
				temp = (char *) malloc(sizeof(char) * (b + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mtx[r] = temp - b;
				r++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = n;
	}
	mtx[r] = NULL;
	return (mtx);
}

