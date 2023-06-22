#include "main.h"
/**
 * positive_negative - A program to determine if number is negative or positive
 * @i: The value to be checked
 * Return: 0 (A program runs a success)
 */

void positive_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return (0);
}
