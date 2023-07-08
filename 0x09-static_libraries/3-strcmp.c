#include "main.h"
/**
 * _strcmp - A function that compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[sethu] - s2[sethu]
 */
int _strcmp(char *s1, char *s2)
{
		int sethu;

		sethu = 0;
		while (s1[sethu] != '\0' && s2[sethu] != '\0')
		{
			if (s1[sethu] != s2[sethu])
			{
				return (s1[sethu] - s2[sethu]);
			}
			sethu++;
			}
			return (0);
}
