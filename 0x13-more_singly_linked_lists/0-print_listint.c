#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a singly linked list
 * @h: points to the singly linked list created
 * Return:The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numberNode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberNode++;
	}
	return (numberNode);
}
