#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Head pointer
 * @n: The integer data
 * Return: Address to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	new_node->next = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
