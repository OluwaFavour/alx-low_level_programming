#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t listint_len_safe(const listint_t *head);
/**
  * free_listint_safe - Frees a listint_t list even with loops
  *
  * @h: A pointer to a pointer to the head node
  *
  * Return: Returns the size of the list that was free'd
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node;
	size_t index, count;

	count = listint_len_safe(*h);

	if (count == 0)
	{
		while (*h != NULL)
		{
			current_node = *h;
			*h = (*h)->next;
			free(current_node);
		}
		return (sizeof(*h));
	}

	for (index = 0; index < count && *h != NULL; index++)
	{
		current_node = *h;
		*h = (*h)->next;
		free(current_node);
	}

	free(*h);
	*h = NULL;
	return (sizeof(*h));
}
