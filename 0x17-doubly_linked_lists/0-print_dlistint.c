#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t
 * @h: The linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	if (h == NULL)
		return (0);

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
