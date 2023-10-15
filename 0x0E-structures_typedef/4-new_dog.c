#include "dog.h"

#include <stdlib.h>

/**
 * _strlen - return with  length of the  string.
 *
 * @s: evaluated string.
 * Return: with length of a string.
 *
 */

int _strlen(char *s)
{
	int o;

	o = 0;


	while (s[o] != '\0')
	{
		o++;
	}

	return (o);
}
/**
 * *_strcpy - copy string pointed to src.
 *
 * including with terminating null byte.
 *
 * to buffer pointed to by destin.
 *
 * @dest: pointer to buffer in which we copy string.
 *
 * @src: copied string
 * Return: pointer to destin.
 */

char *_strcpy(char *dest, char *src)

{
	int lens, o;

	lens = 0;

	while (src[lens] != '\0')
	{
		lens++;
	}


	for (o = 0; o < lens; o++)
	{
		dest[o] = src[o];
	}

	dest[o] = '\0';

	return (dest);
}
/**
 * new_dog - create new dog.
 *
 * @name: name of  dog.
 *
 * @age: age of dog.
 *
 * @owner: owner of dog.
 * Return: pointer to new dog (Success), or 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lens1, lens2;

	lens1 = _strlen(name);

	lens2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lens1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (lens2 + 1));

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
