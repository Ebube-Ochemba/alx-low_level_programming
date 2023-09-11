#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: The name of the struct.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner of the dog.
 *
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
