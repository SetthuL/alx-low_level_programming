#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - A function that read text file
 * and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters
 * Return: Actual number of bytes read and printed,
 * 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buf;
	ssize_t l, h;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}

	l = fread(buf, sizeof(char), letters, file);
	h = fwrite(buf, sizeof(char), l, stdout);

	free(buf);
	fclose(file);
	return (h);
}
