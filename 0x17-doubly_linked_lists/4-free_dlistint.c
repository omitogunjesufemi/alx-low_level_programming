#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			head = head->next;
			free(ptr);
			ptr = head;
		}
	}
}
