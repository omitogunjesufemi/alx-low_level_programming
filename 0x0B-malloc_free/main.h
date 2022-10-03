#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
/**
 *_putchar - This is for printing characters
 * @c: character
 * Return: int
 */
int _putchar(char c);

/**
 * create_array - creates an array of chars, and initializes
 * with a specific character
 * @size: size of array
 * @c: the specific character
 * Return: pointer to the array created
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * @str: string given as parameter
 * Return: pointer to the duplicate of the string
 */
char *_strdup(char *str);

#endif
