#include "main.h"

/**
 * read_textfile - this prints to STDOUT
 * @filename: the text file being read
 * @letters: amount of letters to be read
 * Return: r- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bun;
	ssize_t fe;
	ssize_t r;
	ssize_t c;

	fe = open(filename, O_RDONLY);
	if (fe == -1)
		return (0);
	bun = malloc(sizeof(char) * letters);
	c = read(fe, bun, letters);
	r = write(STDOUT_FILENO, bun, c);

	free(bun);
	close(fe);
	return (r);
}

