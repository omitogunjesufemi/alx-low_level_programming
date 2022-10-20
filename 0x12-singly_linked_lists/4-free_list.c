#include "lists.h"

/**
 * free_list - Free the mallod'ed space of linked list
 * @head: the head pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr->str);
			free(ptr);
		}
	}
}
