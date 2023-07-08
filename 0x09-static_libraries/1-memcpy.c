#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: The memory where is stored
 *@src: The memory where is copied
 *@n: The number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        	int sethu = 0;
        	int hluli = n;
 
        	for (; sethu < hluli; sethu++)
        	{
			dest[sethu] = src[sethu];
			n--;
		}
		return (dest);
}
