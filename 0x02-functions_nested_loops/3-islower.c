#include "main.h"
/**
 * int _islower - Function that checks for lowercase
 * Return: 1 if c is lower case & 0 for anything else (Program runs a success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
