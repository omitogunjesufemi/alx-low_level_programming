#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a dlistint_t
 * @h: The linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Linked list
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Head pointer
 * @n: The integer data
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Head pointer
 * @n: Integer data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif
