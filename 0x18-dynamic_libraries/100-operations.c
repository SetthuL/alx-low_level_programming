#include <stdio.h>
#include <stdlib.h>

/**
 * add - a function that adds
 * @a: Input
 * @b: Input
 * Return: Results
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - A function that subtracts
 * @a: Input
 * @b: Input
 * Return: Results
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - A function that multiplies
 * @a: Input
 * @b: Input
 * Return: Results
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * division - A function that divides
 * @a: Input
 * @b: Input
 * Return: Results
 */

int divison(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - A function that subtracts
 * @a: Input
 * @b: Input
 * Return: Results
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
}
