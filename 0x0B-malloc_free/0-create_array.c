#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of size size and assign char c
 * @size: The size of array
 * @c: The char to be assigned
 * Description: creat array of size size and assign char
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int sethu;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (sethu = 0; sethu < size; sethu++)
		str[sethu] = c;
	return (str);
}
