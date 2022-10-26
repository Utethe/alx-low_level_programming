#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int k;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = (*head)->next;
	k = (*head)->n;
	free(*head);
	*head = tmp;
	return (k);
}
