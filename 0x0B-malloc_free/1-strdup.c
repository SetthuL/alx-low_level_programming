#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that duplicate to new memory space location
 * @str: The charectar
 * Return: 0 (Program runs a success)
 */

char *_strdup(char *str)
{
	char *bsl;
	int sethu, hluli = 0;

	if (str == NULL)

		return (NULL);

	sethu = 0;

	while (str[sethu] != '\0')

		sethu++;
	bsl = malloc(sizeof(char) * (sethu + 1));

	if (bsl == NULL)
		return (NULL);

	for (hluli = 0; str[hluli]; hluli++)
		bsl[hluli] = str[hluli];

	return (bsl);
}
