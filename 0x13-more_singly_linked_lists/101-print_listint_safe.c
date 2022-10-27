#include "lists.h"

int first_meeting(const listint_t **hare,
		  const listint_t **tortoise,
		  const listint_t **head, size_t *i);
listint_t *get_cyclic_entry_point(const listint_t **hare,
				  const listint_t **tortoise,
				  int have_met);
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: the head node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *tortoise, *hare, *ptr;
	int have_met;

	i = 0;
	if (head != NULL)
	{
		if (head->next == head)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			printf("-> [%p] %d\n", (void *) head, head->n);
			return (1);
		}

		ptr = head;
		tortoise = head->next;
		hare = (head->next)->next;

		have_met = first_meeting(&hare, &tortoise, &ptr, &i);
		tortoise = head;
		tortoise = (const listint_t *)get_cyclic_entry_point(&hare,
								     &tortoise,
								     have_met);
		if (have_met == 0)
		{
			while (ptr != NULL)
			{
				printf("[%p] %d\n", (void *) ptr, ptr->n);
				ptr = ptr->next;
				i++;
			}
		}
		else
		{
			while (ptr != tortoise)
			{
				printf("[%p] %d\n", (void *) ptr, ptr->n);
				ptr = ptr->next;
				i++;
			}
			printf("-> [%p] %d\n", (void *) tortoise, tortoise->n);
		}
	}
	return (i);
}

/**
 * get_cyclic_entry_point - This gets the entry point for a cyclic list
 * @hare: the fast pointer
 * @tortoise: the slow pointer
 * @have_met: condition for determining entry point
 * Return: the entry point
 */
listint_t *get_cyclic_entry_point(const listint_t **hare,
				  const listint_t **tortoise,
				  int have_met)
{
	if (have_met)
	{
		while (*tortoise != *hare)
		{
			*tortoise = (*tortoise)->next;
			*hare = (*hare)->next;
		}
	}

	return ((listint_t *) *tortoise);
}

/**
 * first_meeting - This gets the first meeting point for the fast and slowe
 * pointer
 * @hare: the fast pointer
 * @tortoise: the slow pointer
 * @head: copy of head pointer
 * @i: the count for nodes
 * Return: 1 if they met, and 0 if they didn't
 */
int first_meeting(const listint_t **hare,
		  const listint_t **tortoise,
		  const listint_t **head, size_t *i)
{
	while (*hare && (*hare)->next)
	{
		if (*tortoise != *hare)
		{
			*tortoise = (*tortoise)->next;
			*hare = ((*hare)->next)->next;
			printf("[%p] %d\n", (void *) *head, (*head)->n);
			*head = (*head)->next;
			*i = *i + 1;
		}

		if (*tortoise == *hare)
		{
			printf("[%p] %d\n", (void *) *head, (*head)->n);
			*head = (*head)->next;
			*i = *i + 1;
			return (1);
		}
	}

	return (0);
}
