#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * nodeLen - Prints the length of the list
 * @head: points to the singly linked list created
 * Return: the length of nodes
 */

unsigned int nodeLen(listint_t *head)
{
	listint_t *nextNode;
	unsigned int start = 1, numberNode = 0;

	nextNode = head;
	while (start)
	{
		numberNode++;
		if (nextNode->next == NULL)
			start = 0;
		nextNode = nextNode->next;
	}
	free(nextNode);
	return (numberNode);
}

/**
 * get_nodeint_at_index - Prints the node of a linked list
 * @head: points to the singly linked list created
 * @index: The index of the node starting at 0
 * Return:the node located otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (index > nodeLen(head))
	{
		return (NULL);
	}
	node = head;
	for (i = 0; i < index; i++)
		node = node->next;
	return (node);
}
