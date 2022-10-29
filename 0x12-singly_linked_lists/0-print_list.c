#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		printf("\n");
		x++;
	}
	return (x);
}
