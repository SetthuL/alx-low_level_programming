#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A functon that reads a text file
 * and prints it to the POSIX standard output
 * @filename: A text file to be read
 * @letters: The number of letters to be read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
