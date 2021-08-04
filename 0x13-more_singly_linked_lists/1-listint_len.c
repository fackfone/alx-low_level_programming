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

	while (h != NULL)
	{
	h = h->next;
	numberNode++;
	}
	return (numberNode);
}
