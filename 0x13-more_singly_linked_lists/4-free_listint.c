#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
