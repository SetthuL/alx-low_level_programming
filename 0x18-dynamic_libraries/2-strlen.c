#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: string
 * Return: length (A program runs a success)
 */
int _strlen(char *s)
{
        	int lengthl; 

		lengthl	= 0;
 
		while (*s != '\0')
		{
			lengthl++;
			s++;
		}

		return (lengthl);
}
