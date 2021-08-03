#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end in a linked list
 * @head: points to a pointer to the singly linked list created
 * @n: points to an int element of linked list created
 * Return: Add at the end a new node in the present nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *Node;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (Node = *head; Node && Node->next != NULL; Node = Node->next)
	;
	if (Node)
	{
		Node->next = newNode;
		newNode->n = n;
	}
	else
		*head = newNode;
	return (newNode);
}
