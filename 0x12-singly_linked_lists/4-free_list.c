#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: points to a pointer to the singly linked list created
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *nextNode, *Node;

	Node = head;
	while (Node)
	{	nextNode = Node->next;
		free(Node->str);
		free(Node);
		Node = nextNode;
	}
}
