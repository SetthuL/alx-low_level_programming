#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: The string to be located
 * @needle: The substring to be located
 * Return: If substring is located, return a pointer to the beginning
 * of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
int l;

if (*needle == 0)
return (haystack);

while (*haystack)
{
l = 0;

if (haystack[l] == needle[l])
{
do {
if (needle[l + 1] == '\0')
return (haystack);

l++;
} while (haystack[l] == needle[l]);
}
haystack++;
}
return ('\0');
}
