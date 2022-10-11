#ifndef _DOG_H_

#define _DOG_H_

#include <stdio.h>

/**
 * struct dog - a structure for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d);

#endif
