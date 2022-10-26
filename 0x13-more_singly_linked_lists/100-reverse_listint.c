#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: address to head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr, *next_ptr;

	if (*head != NULL)
	{
		prev_ptr = NULL;
		next_ptr = NULL;

		if ((*head)->next == NULL)
			return (*head);

		while ((*head) != NULL)
		{
			next_ptr = (*head)->next;
			(*head)->next = prev_ptr;
			prev_ptr = *head;
			*head = next_ptr;
		}

		*head = prev_ptr;
	}
	return (*head);
}
