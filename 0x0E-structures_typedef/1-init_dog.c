#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type 'struct dog'.
 *
 * @d: A pointer to the 'struct dog' variable that being unitialized.
 * @name: A character array that stores the name of the dog.
 * @age: A float number that represent the age of the dog.
 * @owner: A character array that stores the owner of the dog.
 *
 * Return: Nothing (void).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
