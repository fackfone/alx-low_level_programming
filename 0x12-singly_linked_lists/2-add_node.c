#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning in a linked list
 * @head: points to a pointer to the singly linked list created
 * @str: points to char element of linked list created
 * Return: Add a new node in the present nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, lengthStr = 0;
	char *strDup;
	list_t *beginPtr;

	beginPtr = malloc(sizeof(list_t));
	if (head == NULL || str == NULL || beginPtr == NULL)
	{
		free(beginPtr);
		return (NULL);
	}
	strDup = strdup(str);
	beginPtr->str = strDup;
	for (i = 0; strDup[i] != '\0'; i++)
		lengthStr++;
	beginPtr->next = *head;
	beginPtr->len = lengthStr;
	*head = beginPtr;
	return (beginPtr);
}
