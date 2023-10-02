#include "main.h"

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
	int descriptor;
	char tempt_store;

	if (filename == NULL)
		return (0);

	int descriptor = open(filename, O_RDONLY);

	if (descriptor == -1)
		return (0);

	char temp_store[letters];

	ssize_t bytes_read = read(descriptor, temp_store, letters);

	if (bytes_read == -1)
	{
		close(descriptor);
		return (0);
	}
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(descriptor);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
