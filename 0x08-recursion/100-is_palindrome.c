#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - this checks if a string is a palindrome
 * @s: this is the string to reverse
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: the string to calculate its length
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - this checks the characters recursively for palindrome
 * @s: this is the string to check
 * @i: iterator
 * @len: the length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}

