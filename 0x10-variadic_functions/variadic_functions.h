#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * _putchar - prints a character
 * @c: character
 */
void _putchar(char c);

/**
 * sum_them_all - sums all its parameters
 * @n: reference parameter
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings
 * @separator: strings to be printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything
 * @format: the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...);
#endif
