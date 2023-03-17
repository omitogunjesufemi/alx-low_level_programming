#include "lists.h"

unsigned int list_len(dlistint_t *list);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to Head pointer
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: The data for the node to be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr_1, *ptr_2, *new_node, *null_head;
	unsigned int i, len;

	if (*h == NULL)
		return (NULL);

	if ((*h)->next == NULL)
		return (add_dnodeint(h, n));

	i = 0;
	len = list_len(*h);

	if (idx >= len)
		return (NULL);

	ptr_1 = *h;
	null_head = NULL;
	new_node = add_dnodeint(&null_head, n);
	while (i < idx)
	{
		ptr_1 = ptr_1->next;
		i++;
	}
	ptr_2 = ptr_1->prev;
	ptr_2->next = new_node;
	new_node->prev = ptr_2;
	new_node->next = ptr_1;
	ptr_1->prev = new_node;

	return (new_node);
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
