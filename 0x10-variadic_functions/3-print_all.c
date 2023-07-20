#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * with the new line at the end of a function
 * @format: list of types of arguments passed to the function
 * Return: Void (A program runs a success)
 */

void print_all(const char * const format, ...)
{
	int sl = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[sl])
		{
			switch (format[sl])
			{
				case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
				case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
				case 's':
				str = va_arg(list, char *);
				if (!str)
				str = "(nil)";
				printf("%s%s", sep, str);
				break;
				default:
				sl++;
				continue;
				}
				sep = ", ";
				sl++;
			}
		}


		printf("\n");
		va_end(list);
}
