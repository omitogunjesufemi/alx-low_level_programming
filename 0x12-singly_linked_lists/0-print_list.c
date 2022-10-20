#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);

			count++;
			h = h->next;
		}
	}
	return (count);
}
