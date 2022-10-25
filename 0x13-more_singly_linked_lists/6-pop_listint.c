#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: head node
 * Return: deleted element
 */
int pop_listint(listint_t **head)
{
	int popped_value;
	listint_t *temp;

	if (*head != NULL)
	{
		popped_value = 0;
		temp = (*head)->next;
		popped_value = (*head)->n;
		free(*head);
		*head = temp;
		return (popped_value);
	}

	return (0);
}
