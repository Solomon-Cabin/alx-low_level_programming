#include <stdio.h>

/**
 * main - this function prints the name of a program
 * @argv: this is the argument vector
 * @argc: this is the argument count
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
