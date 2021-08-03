#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Function that frees a listint
 * @head: points to a pointer to the singly linked list created
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head)
	{	nextNode = head->next;
		free(head);
		head = nextNode;
	}
	free(nextNode);
	free(head);
}
