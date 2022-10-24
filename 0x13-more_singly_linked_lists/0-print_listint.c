#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
