#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a singly linked list
 * @h: points to the singly linked list created
 * Return:The number of nodes
 */

size_t print_list(const list_t *h)
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
	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	if (h->next == NULL)
		start = 0;
	forwardPtr = h->next;
	h = forwardPtr;
	}
	free(forwardPtr);
	return (numberNode);
}
