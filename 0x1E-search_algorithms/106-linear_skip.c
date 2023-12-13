#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located
 * If value is not present in list or if head is NULL, return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *lb, *hb;

	if (list == NULL || (list->next == NULL && list->n != value))
		return (NULL);
	lb = list;
	hb = list->express;
	while (hb->n <= value && hb->express != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       hb->index, hb->n);
		lb = hb;
		hb = hb->express;
	}
	if (hb->express == NULL && hb->n <= value)
	{
		lb = hb;
		printf("Value checked at index [%ld] = [%d]\n",
		       lb->index, lb->n);
		while (hb->next != NULL)
			hb = hb->next;
	}
	printf("Value checked at index [%ld] = [%d]\n",
	       hb->index, hb->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
	       lb->index, hb->index);

	while (lb != hb)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       lb->index, lb->n);
		if (lb->n == value)
			return (lb);
		lb = lb->next;
	}
	printf("Value checked at index [%ld] = [%d]\n",
	       lb->index, lb->n);
	if (lb->n == value)
		return (lb);
	return (NULL);
}
