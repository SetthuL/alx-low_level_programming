#include "main.h"
#include <string.h>
/**
 * _strncpy - A function that copies a string
 * @dest: String to be copied into
 * @src: String to be copied
 * @n: Number of strings to be copied (bytes)
 * Return: Dest (program runs a success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
