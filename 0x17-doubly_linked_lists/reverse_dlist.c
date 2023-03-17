#include "lists.h"

/**
 * print_dlistint_reverse - Prints all the elements of a dlistint_t in reverse
 * @h: The linked list
 * Return: the number of nodes
 */
size_t print_dlistint_reverse(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	if (h != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		while (ptr != NULL)
		{
			printf("%i\n", ptr->n);
			ptr = ptr->prev;
			count++;
		}

		return (count);
	}

	return (0);
}
