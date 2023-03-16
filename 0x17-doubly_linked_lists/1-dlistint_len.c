#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Linked list
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t len;

	if (h == NULL)
		return (0);

	len = 0;
	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	return (len);
}
