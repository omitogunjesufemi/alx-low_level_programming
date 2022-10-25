#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: head node
 * @index: index of the node starting at 0
 * Return: the nth node of a list or NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head != NULL)
	{
		i = 0;
		ptr = head;
		while (i < index)
		{
			ptr = ptr->next;
			i++;
		}

		return (ptr);
	}

	return (NULL);
}
