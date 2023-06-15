#include <stdio.h>
/**
 * main - A C  programme that prints size of various types
 * Return: 0
 */
int main(void)
{
char s;
int e;
long int t;
long long int h;
float u;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(u));
return (0);
}
