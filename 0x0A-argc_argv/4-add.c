#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - the string there are digit
 * @str: array str
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - this prints the name of the program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c;
	int str_to_int;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))

		{
			str_to_int = atoi(argv[c]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}

