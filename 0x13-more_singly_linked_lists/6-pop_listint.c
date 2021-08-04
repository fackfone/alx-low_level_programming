#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * of a listint linked list
 * @head: points to a pointer to the singly linked list created
 * Return: The data of the head node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *nextNode, *prevNode;
	int c = 0;
	
	if (!head || *head == NULL)
		return (0);
	if (head != NULL)
	{
		prevNode = *head;
		nextNode = prevNode->next;
		*head = nextNode;
		c = prevNode->n;
		free(prevNode);
		return (c);
	}
}
