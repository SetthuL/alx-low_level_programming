#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The string to evaluate
 * Return: The length of the string (A program runs a success)
 */

int _strlen(char *s)
{
	int sethu;

	sethu = 0;

	while (s[sethu] != '\0')
	{
		sethu++;
	}


	return (sethu);
}

/**
 * _strcpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest:The pointer to the buffer in which we copy the string
 * @src: The string to be copied
 * Return: the pointer to dest (A program runs a success)
 */

char *_strcpy(char *dest, char *src)
{
	int lange, sethu;

	lange = 0;

	while (src[lange] != '\0')
	{
		lange++;
	}
	for (sethu = 0; sethu < lange; sethu++)
	{
		dest[sethu] = src[sethu];
	}
	dest[sethu] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: pointer to the new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lange1;
	int lange2;

	lange1 = _strlen(name);
	lange2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (lange1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lange2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
