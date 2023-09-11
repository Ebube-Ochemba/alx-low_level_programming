#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strcpy - Copies a string pointed to by @src, including
 *           the terminating null byte, to a buffer pointed
 *           to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int idx;
	int len = 0;

	/** A loop to find the length of the string */
	while (src[len] != '\0')
	{
		len++;
	}

	for (idx = 0; idx <= len; idx++)
	{
		dest[idx] = src[idx]; /* copy string */
	}
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: member.
 * @age: member.
 * @owner: member.
 *
 * Return: NULL if function fails, else pointer to struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 1, len2 = 1;

	while (name[len1] != '\0')
	{
		len1++;
	}
	while (owner[len2] != '\0')
	{
		len2++;
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * len1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * len2);
	if (dog->owner  == NULL)
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
