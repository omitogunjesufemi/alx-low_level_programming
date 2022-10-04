#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <string.h>
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

/**
 * str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: rows of the array
 * @height: columns of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height);

#endif
