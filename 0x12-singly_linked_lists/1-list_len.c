#include "lists.h"

/**
 * list_len - Gets the number of elements in a linked list_t list
 * @h: The list_t list
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
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
