#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t gh;
	ssize_t w;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (gh == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(gh, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(gh);
	return (a);
}
