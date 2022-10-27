#include "lists.h"

listint_t *get_loop_entry_point(listint_t **slow_ptr, listint_t **fast_ptr);
int check_first_meeting(listint_t **slow_ptr, listint_t **fast_ptr);

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: the head node
 * Return: the address of the node where the loop starts or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head != NULL)
	{
		listint_t *slow_ptr, *fast_ptr;

		if (head->next == head)
		{
			return (head);
		}

		slow_ptr = head->next;
		fast_ptr = (head->next)->next;

		if (check_first_meeting(&slow_ptr, &fast_ptr) == 1)
		{
			slow_ptr = head;
			slow_ptr = get_loop_entry_point(&slow_ptr, &fast_ptr);
			return (slow_ptr);
		}

		return (NULL);

	}

	return (NULL);
}

listint_t *get_loop_entry_point(listint_t **slow_ptr, listint_t **fast_ptr)
{
	while (*slow_ptr != *fast_ptr)
	{
		*slow_ptr = (*slow_ptr)->next;
		*fast_ptr = (*fast_ptr)->next;
	}

	return (*slow_ptr);
}


int check_first_meeting(listint_t **slow_ptr, listint_t **fast_ptr)
{
	while (*fast_ptr != NULL && (*fast_ptr)->next != NULL)
	{
		if (*slow_ptr != *fast_ptr)
		{
			*slow_ptr = (*slow_ptr)->next;
			*fast_ptr = ((*fast_ptr)->next)->next;
		}

		if (*slow_ptr == *fast_ptr)
			return (1);
	}

	return (0);
}
