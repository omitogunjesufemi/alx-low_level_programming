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

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head pointer
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: Head pointer
 * @index: Index of the node starting from 0
 * Return: nth node, if it does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - Sum of all the data (n) of a linked list
 * @head: Head pointer
 * Return: Sum of all the data (n), and 0 if list is empty
 */
int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to Head pointer
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n: The data for the node to be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * list_len - Returns the total number of nodes in linked list
 * @list: Head pointer
 * Return: totals nodes present
 */
unsigned int list_len(dlistint_t *list);

/**
 * delete_dnodeint_at_index - Deletes the node at index of liinked list
 * @head: Head pointer
 * @index: Index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

size_t print_dlistint_reverse(const dlistint_t *h);

#endif
