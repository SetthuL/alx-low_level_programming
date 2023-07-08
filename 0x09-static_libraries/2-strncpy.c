#include "main.h"
/**
 * _strncpy - A function that copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest (A program runs a success)
 */
char *_strncpy(char *dest, char *src, int n)
{
		int sethul;
 
		sethul = 0;

		while (sethul < n && src[sethul] != '\0')
		{
			dest[sethul] = src[sethul];
			sethul++;
		}
		while (sethul < n)
		{
			dest[sethul] = '\0';
			sethul++;
        	}
		return (dest);
}
