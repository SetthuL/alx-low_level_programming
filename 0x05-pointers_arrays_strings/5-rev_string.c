#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A string to be reversed
 * Return: Void (A program runs a success)
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int a;

	while (s[counter] != '\0')
		counter++;

	for (a = 0; a < counter; a++)
	{
		counter--;
		reverse = s[a];
		s[a] = s[counter];
		s[counter] = reverse;
	}
}

