#include "main.h"

/*
 * create_file - A function that creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
	return (-1);

	if (text_content)
	{
		while (text_content[i])
		i++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	return (-1);

	if (text_content)
	{
		if (write(file, text_content, i) == -1)
	{
	close(file);
	return (-1);
	}
	}

	close(file);
	return (1);
}
