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
 * insert_nodeint_at_index - Insert node at index of a linked list
 * @head: points a pointer to the singly linked list
 * @idx: The index of the node starting at 0
 * @n: value of the node we need to add
 * Return:the node located otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *nextNode, *prevNode;

	node = malloc(sizeof(listint_t));
	if (idx > nodeLen(*head) || node == NULL)
	{
		return (NULL);
	}
	prevNode = *head;
	if (idx == 0)
	{
		node->n = n;
		nextNode = (*head)->next;
		*head = node;
		node->next = nextNode;
		return (node);
	}
	while (idx != 1)
	{
		prevNode = prevNode->next;
		idx--;
	}
	nextNode = (prevNode)->next;
	(prevNode)->next = node;
	node->n = n;
	node->next = nextNode;
	return (node);
}
