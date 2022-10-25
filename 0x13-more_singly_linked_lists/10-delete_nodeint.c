#include "lists.h"

unsigned int list_len(listint_t *list);
/**
 * delete_nodeint_at_index - delete a node at a particular position
 * @head: address of head node
 * @index: position
 * Return: 1 if it succeed, -1 if it fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i, list_length;

	list_length = list_len(*head);
	if (*head != NULL)
	{
		i = 0;
		prev = NULL;
		current = *head;

		if (index == 0)
		{
			prev = current->next;
			free(current);
			*head = prev;
			current = NULL;
			return (1);
		}
		while (i < index && index <= list_length)
		{
			prev = current;
			current = current->next;
			i++;
		}

		if (i == index)
		{
			prev->next = current->next;
			free(current);
			current = NULL;
		}
		else
		{
			return (-1);
		}
		return (1);
	}
	return (-1);
}

/**
 * list_len - Determines the number of elements in a linked list
 * @list: linked list
 * Return: number of elements
 */
unsigned int list_len(listint_t *list)
{
	unsigned int count;
	listint_t *ptr;

	count = 0;
	ptr = list;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
