int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (-1);
		return (actual_sqrt_recursion(n, 0));
	}

}

/**
 * real_sqrt_recursion - A function to find the natural square root of a number
 * @n: The number to return the square root of
 * @i: The iterator
 * Return: The results of a square root (A program runs a success)
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (1);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
