#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t list
 * @head: head of the list
 * @index: index of the node
 * Return: return the node at n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	if (head == NULL)
		return (0);
	while (k < index && head->next != NULL)
	{
		head = head->next;
		k++;
	}
	return (head);
}
