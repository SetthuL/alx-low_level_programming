#include "main.h"

/**
 * string_toupper - A function that Changes all lowercase letters of a string
 * to uppercase
 * @str: The string to be changed
 * Return: 0 (A program runs a success)
 */

char *string_toupper(char *str)
{
	int sethu;

	sethu = 0;

	while (str[sethu] != '\0')
	{
		if (str[sethu] >= 'a' && str[sethu] <= 'z')
			str[sethu] = 32;

		sethu++;
	}
	else
		return (0);
}
