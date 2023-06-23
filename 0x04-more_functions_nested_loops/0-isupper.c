#include "main.h"
/**
 * _isupper - Function that checs for uppercase
 * @c: A variable to be tested
 * Return: 1 if uppercase otherwise 0 (Program runs a success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
