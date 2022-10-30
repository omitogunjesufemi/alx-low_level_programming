#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: a pointer to binary strings of 0 and 1 chars
 * Return: the decimal representation of the binary string
 * 0, if there is one or more chars in the string that is not
 * 0 or 1, and when the string is a NULL string.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of a number
 * @n: the number
 * Do not use arrays, malloc, (% or /) operators.
 */
void print_binary(unsigned long int n);

/**
 * get_bit - Returns the value of a bit in a given index
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index);

#endif
