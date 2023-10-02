#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * Return 1 if the file exists and -1 if the file does not exist
 * or if no permission required
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fill, w, win = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (win = 0; text_content[win];)
		win++;
	}

	fill = open(filename, O_WRONLY | O_APPEND);
	w = write(fill, text_content, win);

	if (fill == -1 || w == -1)
		return (-1);

	close(fill);

	return (1);
}
