#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that adds positive numbers followed by new line
 * @argc: Input
 * @argv: Input
 * Return: 0 (A program runs a success)
 */

int main(int argc, char *argv[])
{
	int sl;
	unsigned int b, sum = 0;
	char *h;

	if (argc > 1)
	{
		for (sl = 1; sl < argc; sl++)
		{
			h = argv[sl];

			for (b = 0; b < strlen(h); b++)
			{
				if (h[b] < 48 || h[b] > 57)
				{
					printf("Error");
					printf("\n");
					return (1);
				}
			}
			sum += atoi(h);
			h++;
		}
		printf("%d", sum);
		printf("\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

