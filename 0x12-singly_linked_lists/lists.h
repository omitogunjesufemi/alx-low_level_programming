#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: byte size printed
 */
int _putchar(char c);

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t list
 * Return: number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - Gets the number of elements in a linked list_t list
 * @h: The list_t list
 * Return: The number of elements
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: The list_t list
 * @str: The string of the new node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str);

#endif
