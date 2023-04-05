#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: a pointer to a pointer to the head of the linked list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
