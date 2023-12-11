#include "main.h"
/**
 * _isupper - A program that prints in uppercase letters
 * @c: The charecter to check
 *
 * Return: 0 or 1 (A program runs a success)
 */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
		return (0);
}
