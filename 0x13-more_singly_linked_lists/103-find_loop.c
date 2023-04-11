#include <stdlib.h>
#include "lists.h"

/**
  * find_listint_loop - Finds the loop in a linked list
  *
  * @head: The pointer to the head node
  *
  * Return: Returns a pointer to the entry point of the loop (Success)
  * or NULL (Failure)
  */
listint_t *find_listint_loop(listint_t *head)
{
	int met;
	listint_t slow, fast;

	met = 0;
	slow = fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			met = 1;
	}
	if (met < 1)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
