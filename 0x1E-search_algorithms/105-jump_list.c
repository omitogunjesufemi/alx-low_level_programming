#include "search_algos.h"

#include <math.h>

int min_value(int a, int b);
listint_t *find_node_at_index(listint_t *list, size_t index);

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump
 * search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 * Return: Pointer to the first node where the value is located
 * If value is not present in head or if head is NULL, return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t start, end;
	listint_t *find_node, *the_node;

	if (list == NULL)
		return (NULL);

	start = 0;
	end = (size_t) sqrt(size);

	find_node = find_node_at_index(list, min_value(end, size - 1));

	if (find_node == NULL)
		return (NULL);

	while (find_node->n < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end,
		       find_node->n);

		start = end;
		end = end + ((size_t) sqrt(size));

		if (end >= size - 1)
		{
			end = size - 1;
			printf("Value checked array[%ld] = [%d]\n",
				       end,
				       find_node_at_index(list, end)->n);
			printf("Value found between indexes [%ld] and [%ld]\n",
			       start, end);
			while (start <= end)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       start,
				       find_node_at_index(list, start)->n);
				start++;
			}
			return (NULL);
		}

		find_node = find_node_at_index(list, min_value(end, size - 1));
	}

	printf("Value checked array[%ld] = [%d]\n",
	       end, find_node->n);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	the_node = find_node_at_index(list, start);
	while (the_node->n <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", start,
		       the_node->n);
		if (the_node->n == value)
			return (the_node);
		start++;
		the_node = find_node_at_index(list, start);
	}

	return (NULL);
}

/**
 * find_node_at_index - Searches for the node with the particular index
 * @list: Pointer to the list to search
 * @index: Index of the node to find
 * Return: Pointer to the node with the particular index
 */
listint_t *find_node_at_index(listint_t *list, size_t index)
{
	while (list != NULL)
	{
		if (list->index == index)
			return (list);
		list = list->next;
	}

	return (NULL);
}


/**
 * min_value - Gets the minimum value of two integers
 * @a: First int
 * @b: Second int
 * Return: Minimum value
 */
int min_value(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}
