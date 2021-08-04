#include "lists.h"
/**
 * *reverse_listint - function to reverse order of nodes
 * @head:  pointer to head
 * Return: always successful
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode;
	listint_t *prevNode = NULL;

	if (head  == NULL)
		return (NULL);
	nextNode = *head;
	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
