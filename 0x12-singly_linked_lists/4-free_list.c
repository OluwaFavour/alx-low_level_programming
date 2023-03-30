#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a list_t list
  *
  * @head: A pointer to the head node
  */
void free_list(list_t *head)
{
	list_t *current_node;

	if (head != NULL)
	{
		current_node = head;
		while (head->next != NULL)
		{
			free(current_node->str);
			head = (current_node->next);
			free(current_node);
		}
		free(head);
	}
}
