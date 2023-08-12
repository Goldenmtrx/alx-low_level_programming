#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- print to STDOUT.
 * @filename: text file name
 * @letters: number of letters in file
 * Return: G- number of bytes
 *        0 when filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t G;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	G = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (G);
}

