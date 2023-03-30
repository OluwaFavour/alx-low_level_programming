#include <stdlib.h>
#include <string.h>
#include "lists.h"

unsigned int _strlen(char *s);

/**
  * _strlen - Returns the length of a string
  * @s: The string to compute
  *
  * Return: Returns the length of the string
  */
unsigned int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;
	return ((unsigned int)(p - s));
}

/**
  * add_node - Adds a new node at the beginning of a list_t list
  *
  * @head: A pointer to a pointer that points to the head node
  * @str: A pointer to the string data to add with the new node
  *
  * Return: Returns an address to the new element (Success)
  * or NULL (Fail)
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *value;
	unsigned int str_len;

	value = strdup(str);
	if (value == NULL)
		return (NULL);

	str_len = _strlen(value);
	if (*head == NULL)
	{
		(*head)->str = value;
		(*head)->len = str_len;
		(*head)->next = NULL;
		free(value);

		return (*head);
	}
	temp = malloc(sizeof(list_t));
	temp->next = *head;
	(*head) = temp;
	(*head)->str = value;
	(*head)->len = str_len;
	free(value);
	free(temp);

	return (*head);
}
