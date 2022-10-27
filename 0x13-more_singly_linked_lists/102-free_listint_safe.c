#include "lists.h"
int first_met(listint_t **hare, listint_t **tortoise,
	      listint_t **ptr, size_t *count);

listint_t *get_entry_point(listint_t **hare,
			   listint_t **tortoise,
			   int have_met);

/**
 * free_listint_safe - This frees a listint_t list
 * @head: address to the pointer of head node
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count;
	listint_t *tortoise, *hare, *ptr, *temp;
	int have_met;

	count  = 0;
	if (*head != NULL)
	{
		if ((*head)->next == *head)
		{
			temp = *head;
			(*head)->next = NULL;
			free(temp);
			*head = NULL;
			return (1);
		}

		ptr = *head;
		tortoise = (*head)->next;
		hare = ((*head)->next)->next;

		have_met = first_met(&hare, &tortoise, &ptr, &count);
		tortoise = *head;
		tortoise = get_entry_point(&hare, &tortoise, have_met);

		if (have_met == 0)
		{
			while (ptr != NULL)
			{
				ptr = ptr->next;
				count++;
			}
		}
		else
		{
			while (ptr->next != tortoise)
			{
				ptr = ptr->next;
				count++;
			}
			ptr->next = NULL;
			count++;
		}

		ptr = *head;
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}

		*head = NULL;
		return (count);
	}

	return (count);
}


listint_t *get_entry_point(listint_t **hare,
			   listint_t **tortoise, int have_met)
{
	if (have_met)
	{
		while (*tortoise != *hare)
		{
			*tortoise = (*tortoise)->next;
			*hare = (*hare)->next;
		}
	}

	return (*tortoise);
}

int first_met(listint_t **hare, listint_t **tortoise,
	      listint_t **ptr, size_t *count)
{
	while (*hare != NULL && (*hare)->next != NULL)
	{
		if (*tortoise != *hare)
		{
			*tortoise = (*tortoise)->next;
			*hare = ((*hare)->next)->next;
			*ptr = (*ptr)->next;
			*count = *count + 1;
		}
		else
		{
			return (1);
		}
	}

	return (0);
}
