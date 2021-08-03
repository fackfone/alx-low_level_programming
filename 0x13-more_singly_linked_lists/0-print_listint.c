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
	int start = 1;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (start)
	{
	numberNode++;
	printf("%d\n", h->n);
	if (h->next == NULL)
		start = 0;
	h = h->next;
	}
	return (numberNode);
}
