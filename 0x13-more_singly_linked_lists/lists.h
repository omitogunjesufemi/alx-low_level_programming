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

/**
 * listint_len - Determines the number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - Add a node at the beginning of a listint_t list
 * @head: the head node of the list
 * @n: the data of the new node to be added
 * Return: address of the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: the head node
 * @n: the data of new node
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - Frees a listint_t list
 * @head: head node
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: head node
 * Return: deleted element
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: head node
 * @index: index of the node starting at 0
 * Return: the nth node of a list or NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - Sum all the data(n) of a  listint_t linked list
 * @head: head node
 * Return: Sum of the data or 0 if the list is empty
 */
int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: the address of the head node
 * @idx: Given position starting from 0
 * @n: the data of the new node
 * Return: the address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * delete_nodeint_at_index - delete a node at a particular position
 * @head: address of head node
 * @index: position
 * Return: 1 if it succeed, -1 if it fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: address to head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head);

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: the head node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head);

/**
 * free_listint_safe - This frees a listint_t list
 * @head: address to the pointer of head node
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head);

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: the head node
 * Return: the address of the node where the loop starts or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head);

#endif
