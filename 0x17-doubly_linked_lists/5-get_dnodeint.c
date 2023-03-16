#include "lists.h"

unsigned int list_len(dlistint_t *list);

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: Head pointer
 * @index: Index of the node starting from 0
 * Return: nth node, if it does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i, l_len;

	if (head == NULL)
		return (NULL);

	i = 0;
	l_len = list_len(head);

	if (index >= l_len)
		return (NULL);

	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}

/**
 * list_len - Returns the total number of nodes in linked list
 * @list: Head pointer
 * Return: totals nodes present
 */
unsigned int list_len(dlistint_t *list)
{
	unsigned int i = 0;
	dlistint_t *p;

	p = list;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
