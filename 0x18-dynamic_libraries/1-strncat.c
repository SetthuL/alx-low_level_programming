#include "main.h"

/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
		int sethu;
		int hluli;

		sethu = 0;

		while (dest[sethu] != '\0')

		{
			sethu++;
		}
		hluli = 0;

		while (hluli < n && src[hluli] != '\0')
		{
			dest[sethu] = src[hluli];
			sethu++;
			hluli++;
		}
		dest[sethu] = '\0';
		return (dest);


}
