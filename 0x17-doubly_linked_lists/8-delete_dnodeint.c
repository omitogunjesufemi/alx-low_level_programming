#include "lists.h"

unsigned int list_len(dlistint_t *list);

/**
 * delete_dnodeint_at_index - Deletes the node at index of liinked list
 * @head: Head pointer
 * @index: Index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, len;
	dlistint_t *ptr, *ptr_1;

	ptr = *head;
	i = 0;
	len = list_len(ptr);
	if (index == 0 && len != 0)
	{
		*head = (*head)->next;
		if (len != 1)
			(*head)->prev = NULL;
		free(ptr);
		ptr = NULL;
		return (1);
	}

	if (index >= len && len != 0)
		return (-1);
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}

	ptr_1 = ptr->prev;
	ptr_1->next = ptr->next;
	if (index != len - 1)
		(ptr->next)->prev = ptr_1;
	free(ptr);
	ptr = NULL;

	return (1);
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
