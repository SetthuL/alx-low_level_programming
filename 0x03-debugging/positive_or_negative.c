#include "main.h"
/**
 * main - A program that determines if number is negative or positive
(* 0: The number to be determined
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
