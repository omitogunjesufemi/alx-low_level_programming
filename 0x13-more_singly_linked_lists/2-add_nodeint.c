#include "lists.h"

/**
 * add_nodeint - Add a node at the beginning of a listint_t list
 * @head: the head node of the list
 * @n: the data of the new node to be added
 * Return: address of the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
