#include "main.h"

#define ERR_MSG "Error"

/**
 * is_digit - this checks if a string contains a non-digit char
 * @s: the string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - this returns the length of a string
 * @s: the string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - this handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - this function multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *n1, *n2;
	int len1, len2, len, c, carry, digit1, digit2, *result, b = 0;

	n1 = argv[1], n2 = argv[2];
	if (argc != 3 || !is_digit(n1) || !is_digit(n2))
		errors();
	len1 = _strlen(n1);
	len2 = _strlen(n2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (c = 0; c <= len1 + len2; c++)
		result[c] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = n1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(n2) - 1; len2 >= 0; len2--)
		{
			digit2 = n2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (c = 0; c < len - 1; c++)
	{
		if (result[c])
			b = 1;
		if (b)
			_putchar(result[c] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

