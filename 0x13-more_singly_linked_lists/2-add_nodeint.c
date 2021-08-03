#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning in a linked list
 * @head: points to a pointer to the singly linked list created
 * @n: points to integer of linked list created
 * Return: Add a new node in the present nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beginPtr;

	beginPtr = malloc(sizeof(listint_t));
	if (head == NULL || beginPtr == NULL)
	{
		free(beginPtr);
		return (NULL);
	}
	beginPtr->n = n;
	beginPtr->next = *head;
	*head = beginPtr;
	return (beginPtr);
}
