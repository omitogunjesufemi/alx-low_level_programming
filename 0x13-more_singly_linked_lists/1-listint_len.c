#include "lists.h"

/**
 * listint_len - Determines the number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
