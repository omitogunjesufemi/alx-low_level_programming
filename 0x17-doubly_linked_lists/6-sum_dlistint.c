#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of a linked list
 * @head: Head pointer
 * Return: Sum of all the data (n), and 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
