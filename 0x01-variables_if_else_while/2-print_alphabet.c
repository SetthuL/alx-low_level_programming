#include <stdio.h>
#include <stdlib.h>
/**
 * main - A progr that prints with lowercases
 * Return:0 (program runs a succes)
 */
int main(void)
{
	int sl = 'a';

	while (sl <= 'z')
	{
		putchar(sl);
		sl++;
	}
	putchar('\n');
	return (0);
}
