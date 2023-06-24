#include <stdio.h>
/**
 * main - A program that prints the numbers fro 1 to 100 followed by a new line
 * However, for multiples of 3 print fizz instead of the number
 * For multiples of 5 print buzz,and for no.S of both 5 & 3 FizzBuzz
 * Return: 0 (A program runs a success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
		printf("\n");
		return (0);
	}
}
