#ifndef _FUNCTION_POINTERS_H_

#define _FUNCTION_POINTERS_H_
#include <stdlib.h>

/**
 * _putchar - prints a character
 * @c: character
 */
void _putchar(char c);

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: given array
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer
 * @array: the array storage of the integer
 * @size: number of elements in the array
 * @cmp: the function for finding the match
 * Return: index of the integer in the array
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
