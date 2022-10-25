#include "lists.h"

/**
 * sum_listint - Sum all the data(n) of a  listint_t linked list
 * @head: head node
 * Return: Sum of the data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	sum = 0;
	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}

	return (sum);
}
