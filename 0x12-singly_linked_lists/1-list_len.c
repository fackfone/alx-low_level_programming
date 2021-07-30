#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: points to the singly linked list created
 * Return:The number of elements nodes
 */

size_t list_len(const list_t *h)
{
	size_t numberNode = 0;
	int start = 1;
	list_t *forwardPtr;

	forwardPtr = malloc(sizeof(list_t));
	if (forwardPtr == NULL || h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (start)
	{
	numberNode++;
	if (h->next == NULL)
		start = 0;
	forwardPtr = h->next;
	h = forwardPtr;
	}
	free(forwardPtr);
	return (numberNode);
}
