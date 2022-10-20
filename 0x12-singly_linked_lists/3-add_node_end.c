#include "lists.h"
#include <string.h>

unsigned int str_len(const char *s);
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: THe list_t list
 * @str: The string of the new node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;
	unsigned int str_length;

	str_length = str_len(str);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	return (new_node);
}

/**
 * str_len - Gets the length of a string
 * @s: string
 * Return: length of string
 */
unsigned int str_len(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
