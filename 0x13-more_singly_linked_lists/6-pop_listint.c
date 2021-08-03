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
	listint_t *nextNode, *Node;
	int c = 0;

	if (head != NULL)
	{
		Node = *head;
		nextNode = Node->next;
		*head = nextNode;
		c = Node->n;
		free(Node);
		return (c);
	}
	return (0);
}
