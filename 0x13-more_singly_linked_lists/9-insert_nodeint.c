#include "lists.h"

unsigned int list_len(listint_t *list);
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: the address of the head node
 * @idx: Given position starting from 0
 * @n: the data of the new node
 * Return: the address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *current;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head != NULL)
	{
		i = 0;
		prev = NULL, current = *head;
		if (idx == 0)
		{
			new_node->next = current, *head = new_node;
			return (new_node);
		}
		while (i < idx && idx <= list_len(*head))
		{
			prev = current, current = current->next;
			i++;
		}
		if (i == idx && idx <= list_len(*head))
		{
			new_node->next = current, prev->next = new_node;
			return (new_node);
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}

/**
 * list_len - Determines the number of elements in a linked list
 * @list: linked list
 * Return: number of elements
 */
unsigned int list_len(listint_t *list)
{
	listint_t *ptr;
	unsigned int i;

	i = 0;
	ptr = list;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}

	return (i);
}
