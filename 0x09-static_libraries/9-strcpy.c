#include "main.h"

/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int sethu;
	int hluli;

	sethu =	0;
	hluli = 0;

	while (*(src + sethu) != '\0')
	{
		sethu++;
	}
	for ( ; hluli < sethu ; hluli++)
	{
		dest[hluli] = src[hluli];
	}
	dest[sethu] = '\0';
	
	return (dest);

}
