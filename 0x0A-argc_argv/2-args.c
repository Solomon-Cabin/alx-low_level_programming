#include <stdio.h>

/**
 * main - this prints all arguments it receives
 * @argc: this is arguments count
 * @argv: this is arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

