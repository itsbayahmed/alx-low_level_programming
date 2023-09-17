#ifndef DOG_DOT_H
#define DOG_DOT_H

/**
 * struct dog - a simple C structure.
 * @name: First member;
 * @age: Second member;
 * @owner: Third member;
 *
 * Description: This is an example of a C structure
 *             named dog, and has three members:
 *             name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
