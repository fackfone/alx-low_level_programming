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
	return (numberNode);
}

/**
 * sum_listint - Prints the sum of all the data (n)
 * @head: points to the singly linked list created
 * Return:the sum of linked list elements
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	unsigned int i, len;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	len = nodeLen(head);
	node = head;
	for (i = 0; i < len; i++)
	{
		sum += (node->n);
		node = node->next;
	}
	return (sum);
}
