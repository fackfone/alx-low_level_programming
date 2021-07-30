#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end in a linked list
 * @head: points to a pointer to the singly linked list created
 * @str: points to char element of linked list created
 * Return: Add at the end a new node in the present nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, lengthStr = 0;
	char *strDup;
	list_t *createdNode, *Node;

	createdNode = malloc(sizeof(list_t));
	if (head == NULL || str == NULL || createdNode == NULL)
	{
		free(createdNode);
		return (NULL);
	}
	strDup = strdup(str);
	createdNode->str = strDup;
	for (i = 0; strDup[i] != '\0'; i++)
		lengthStr++;
	Node = *head;
	createdNode->len = lengthStr;
	for (Node = *head; Node && Node->next != NULL; Node = Node->next)
		;
	if (Node)
		Node->next = createdNode;
	else
		*head = createdNode;
	return (createdNode);
}
