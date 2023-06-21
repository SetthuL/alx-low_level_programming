#include "main.h"
/**
 * _islower - Function that checks for lowercase charecter
 * @c: The charecter has to be checked
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
