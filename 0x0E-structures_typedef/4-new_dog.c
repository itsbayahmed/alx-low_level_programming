#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: The string whose length is to be returned.
 *
 * Return: The string length.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
	s++;
	length++;
}
return (length);
}
/**
 * _strcpy - copy the string pointed to by src to dest
 *
 * @dest: char to check
 *
 * @src: char to check
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
/**
 * new_dog - A function that allocates memory for
 *   a new dog_t struct.
 *
 * @name: a character array that stores the name of the dog.
 * @age: A float number that presents the age of the dog.
 * @owner:  a character array that stores the name
 *          of the dog's owner.
 *
 * Return: The function returns a pointer to a new
 *         dog_t struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(_strlen(name) + 1);
			if (new_dog->name == NULL)
			return (NULL);
			else
			_strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->owner == NULL)
		return (NULL);
		else
		_strcpy(new_dog->owner, owner);

	return (new_dog);
	}

