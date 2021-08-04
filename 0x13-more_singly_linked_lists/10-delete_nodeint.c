#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *onNode;
	listint_t *tempNode;

	if (head == NULL || (*head) == NULL)
		return (-1);

	onNode = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(onNode);
		return (1);
	}

	while (index != 1)
	{
		if (onNode->next == NULL)
			return (-1);

		onNode = onNode->next;
		--index;
	}
	tempNode = onNode->next;
	if (onNode->next->next)
		onNode->next = onNode->next->next;
	else
		onNode->next = NULL;
	free(tempNode);

	return (1);
}
