#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints opcodes
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, a;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", ar[a]);
			break;
		}
		printf("%02hhx ", ar[a]);
	}
	return (0);
}

