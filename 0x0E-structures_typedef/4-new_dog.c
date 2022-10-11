#include "dog.h"
#include <string.h>

int str_len(char *s);
char *str_cpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	dog_ptr = malloc(sizeof(dog_t));

	if (dog_ptr == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->name = malloc((1 + str_len(name)) * sizeof(char));
	dog_ptr->owner = malloc((1 + str_len(owner)) * sizeof(char));

	if (dog_ptr->name == NULL)
	{
		free(dog_ptr->name);
		return (NULL);
	}

	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->owner);
		return (NULL);
	}

	/**
	 * Storing name and owner in allocated spaces
	 */
	str_cpy(dog_ptr->name, name);
	dog_ptr->age = age;
	str_cpy(dog_ptr->owner, owner);

	/**
	 * Freeing the memory
	 */

	return (dog_ptr);
}

/**
 * str_cpy - copies the string
 * @dest: destination
 * @src: source
 * Return: pointer to where the string is copied to
 */
char *str_cpy(char *dest, char *src)
{
	int i, len;

	len = str_len(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}

/**
 * str_len - the length of a string
 * @s: string
 * Return: length of string
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
