#ifndef _DOG_H_

#define _DOG_H_

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

#endif
