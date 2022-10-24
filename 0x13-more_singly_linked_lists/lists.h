#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: byte size printed
 */
int _putchar(char c);

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);

#endif
