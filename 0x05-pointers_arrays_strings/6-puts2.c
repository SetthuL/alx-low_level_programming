#include "main.h"

/**
 * puts2 - A function that prints every charecter of string
 * starting from first charecter followed by a new line
 * @str: A string to print
 * Return: Void (A program runs a success)
 */

void puts2(char *str)
{
	int length;
	int sl;
	char *bs = str;
	int o;

	length = 0;
	sl = 0;

	while (*bs != '\0')
	{
		bs++;
		length++;
	}
	sl = length = 1;

	for (o = 0; o <= sl; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}
