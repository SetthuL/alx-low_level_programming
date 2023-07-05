#include "main.h"

/**
 * factorial - A function that returns a factorial number
 * @n: A number to return a factorial from
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
