#include "main.h"

/**
 * str_concat - this function gets ends of input and add
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int a, co;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = co = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[co] != '\0')
		co++;
	con = malloc(sizeof(char) * (a + co + 1));
	if (con == NULL)
		return (NULL);
	a = co = 0;
	while (s1[a] != '\0')
	{
		con[a] = s1[a];
		a++;
	}
	while (s2[co] != '\0')
	{
		con[a] = s2[co];
		a++, co++;
	}
	con[a] = '\0';
	return (con);
}

