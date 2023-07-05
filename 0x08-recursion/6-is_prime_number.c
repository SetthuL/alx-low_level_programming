#include "main.h"

/**
 * is_prime_number - A function that returns 1 if the input interger
 * is a prime number
 * @n: The number to test
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Will calculate if a number is prime recurse
 * @n: A number to be tested
 * @i: Iterator
 * Return: 1 if prime othewise 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
