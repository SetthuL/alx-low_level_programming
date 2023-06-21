#include "main.h"
/**
 * _isalpha - Function checks for aplhabetic charecters
 * @c: The charecters has to be checked
 * Return: 1 if alphabetic otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
