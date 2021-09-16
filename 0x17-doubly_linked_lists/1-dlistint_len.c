#include "lists.h"

/**
 * dlistint_len - calculate the elements in a dlistin_t list 
 * @h: header of the dlistint_t list
 * Return: the number of nodes present
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
