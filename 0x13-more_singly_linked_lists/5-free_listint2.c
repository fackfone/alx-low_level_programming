#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a listint
 * @head: points to a pointer to the singly linked list created
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *nextNode;
	
	if (head = NULL)
		return;
	while (*head != NULl)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
	}
	free(nextNode);
	*head = NULL;
}
