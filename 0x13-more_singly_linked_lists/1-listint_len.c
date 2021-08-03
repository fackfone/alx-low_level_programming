#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: points to the singly linked list created
 * Return:The number of elements nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numberNode = 0;
	int start = 1;
	listint_t *forwardPtr;

	forwardPtr = malloc(sizeof(listint_t));
	if (forwardPtr == NULL)
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
