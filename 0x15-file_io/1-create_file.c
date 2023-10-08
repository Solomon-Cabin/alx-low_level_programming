#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the pointer to the name of the file to create
 * @text_content: the pointer to a string to write to the file
 *
 * Return: If the function fails -1
 * Otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int fe, n, siz = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (siz = 0; text_content[siz];)
			siz++;
	}
	fe = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fe, text_content, siz);

	if (fe == -1 || n == -1)
		return (-1);

	close(fe);

	return (1);
}
