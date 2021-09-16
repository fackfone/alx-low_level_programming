#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: header of the dlistint_t list
 * Return: the number of nodes present
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
