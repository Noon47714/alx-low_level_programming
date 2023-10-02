#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file
 * @filename: A pointer to a file name
 * @letters: The number of letters
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(0);

	return (w);
}
