#include <stdio.h>
#include "lists.h"
/**
 * list_len - gets the number of elements in a linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
