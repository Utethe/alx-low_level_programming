#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get the number of the elements of a listint_t list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
