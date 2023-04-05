#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - functin that returns sum of all the data (n) linked list.
 * @head: pointer to the head node of the list
 * Return: return the sum of all the data (n), if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		return (head->n + sum_listint(head->next));
	}
}
