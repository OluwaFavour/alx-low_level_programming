#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t listint_len_safe(const listint_t *head);

/**
  * listint_len_safe - Counts the number of unique node
  *
  * @head: Pointer to the head node
  *
  * Return: Returns number of unique nodes in the listint_t list
  */
size_t listint_len_safe(const listint_t *head)
{
	const listint_t *slow, *fast, *meet_point;
	size_t number_of_nodes = 0;

	slow = fast = head;
	meet_point = NULL;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			meet_point = slow;
			while (1)
			{
				number_of_nodes++;
				slow = slow->next;
				if (slow == meet_point)
					break;
			}
			break;
		}
	}

	if (meet_point)
	{
		slow = head;
		while (slow != fast)
		{
			number_of_nodes++;
			slow = slow->next;
			fast = fast->next;
		}
	}

	return (number_of_nodes);
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count, i;

	current = head;
	count = listint_len_safe(head);

	if (count == 0)
	{
		while (current != NULL)
		{
			count++;
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
		return (count);
	}

	for (i = 0; i < count && current != NULL; i++)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}
	printf("-> [%p] %d\n", (void *)current, current->n);
	return (count);
}
